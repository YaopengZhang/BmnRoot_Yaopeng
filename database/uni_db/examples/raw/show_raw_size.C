// Macro for creating 2 histograms on average event sizes and raw file sizes for runs stored in the Condition Database for one session (period)
class UniqueRunNumber;
void show_raw_size(int period = 7, int limit_run_gb = 100)
{
    UniqueRunNumber* run_numbers;
    int run_count = UniRun::GetRunNumbers(period, 1, period, 100000, run_numbers);
    if (run_count <= 0)
        return;

    // red color if terminal
    //bool isTerminal = isatty(fileno(stdout));
    const string red("\033[0;31m");
    const string orange("\033[0;33m");
    const string reset("\033[0m");

    TH1F* hist_avg_event = new TH1F("hist_avg_event", TString::Format("average event size for Period %d",period), 500, 0, 500);
    TAxis* xaxis1 = hist_avg_event->GetXaxis();
    xaxis1->SetTitle("Event Size, KB");

    TH1F* hist_avg_run = new TH1F("hist_avg_run", TString::Format("average run size for Period %d",period), limit_run_gb, 0, limit_run_gb);
    TAxis* xaxis2 = hist_avg_run->GetXaxis();
    xaxis2->SetTitle("Run Size, GB");

    int file_count = 0;
    double sum_run_size = 0, sum_event_size = 0;
    map<int, double> big_runs;
    map<int, double> wrong_events;
    for (int i = 0; i < run_count; i++)
    {
        // get run
        UniRun* pRun = UniRun::GetRun(run_numbers[i].period_number, run_numbers[i].run_number);
        if (pRun == nullptr)
        {
            cout<<"The function encountered with errors: no experimental run was found ("<<run_numbers[i].period_number<<":"<<run_numbers[i].run_number<<"). This run will be skipped!"<<endl;
            continue;
        }

        // get run size in bytes and event count
        int64_t* p_run_size = pRun->GetFileSize();
        int* p_event_count = pRun->GetEventCount();
        delete pRun;

        if (p_run_size == nullptr)
        {
            cout<<"The function encountered with errors: file size was not defined for "<<run_numbers[i].period_number<<":"<<run_numbers[i].run_number<<endl;
            continue;
        }
        if (p_event_count == nullptr)
        {
            cout<<"The function encountered with errors: event count was not defined for "<<run_numbers[i].period_number<<":"<<run_numbers[i].run_number<<endl;
            continue;
        }

        double run_size_mb = *p_run_size / 1024.0 / 1024.0;
        double run_size_gb = run_size_mb / 1024.0;
        int event_count = *p_event_count;
        double event_size_kb = *p_run_size / 1024.0 / event_count;

        if (run_size_gb >= limit_run_gb)
        {
            cout<<orange;
            big_runs.insert(pair<int, double>(run_numbers[i].run_number, run_size_gb));
        }

        // don't take into account files with event size < 50 KB or > 500 KB
        if (((event_size_kb < 50)) || (event_size_kb > 500))
        {
            cout<<red;
            wrong_events.insert(pair<int, double>(run_numbers[i].run_number, event_size_kb));
        }
        else {
            sum_run_size += run_size_mb;
            sum_event_size += event_size_kb;
            file_count++;
        }
        cout<<"Run size for "<<run_numbers[i].period_number<<"-"<<run_numbers[i].run_number<<": "<<run_size_gb<<" GB (event_size = "<<event_size_kb<<" KB)";
        if ((event_size_kb < 50) || (event_size_kb > 500) || (run_size_gb >= limit_run_gb)) cout<<reset;
        cout<<endl;

        hist_avg_run->Fill(run_size_gb);
        hist_avg_event->Fill(event_size_kb);
    }

    double average_run_size = sum_run_size / file_count;
    double average_event_size = sum_event_size / file_count;
    cout<<endl<<"Average run size for period "<<period<<": "<<average_run_size<<" MB"<<endl;
    cout<<endl<<"Average event size for period "<<period<<": "<<average_event_size<<" KB"<<endl;

    if (big_runs.size() > 0)
    {
        cout<<endl<<TString::Format("Run size more than %d GB:", limit_run_gb)<<endl;
        for (auto it = big_runs.begin(); it != big_runs.end(); ++it)
            cout<<"Run "<<period<<"-"<<(*it).first<<": "<<(*it).second<<" GB"<<endl;
    }
    cout<<endl;
    if (wrong_events.size() > 0)
    {
        cout<<endl<<"Wrong event size (< 50 KB or > 500 KB):"<<endl;
        for (auto it = wrong_events.begin(); it != wrong_events.end(); ++it)
            cout<<"Run "<<period<<"-"<<(*it).first<<": "<<(*it).second<<" KB"<<endl;
    }
    cout<<endl;

    delete run_numbers;

    TCanvas* c1 = new TCanvas("c1","c1");
    TCanvas* c2 = new TCanvas("c2","c2");

    c1->cd();
    hist_avg_run->Draw();
    c2->cd();
    hist_avg_event->Draw();

    cout<<"Macro finished successfully"<<endl;
}

// Macro for creating a histogram on average stream (event/sec) for raw files stored in the Condition Database for one session (period)
void show_raw_stream(int period = 7, int limit_run_gb = 100)
{
    UniqueRunNumber* run_numbers;
    int run_count = UniRun::GetRunNumbers(period, 1, period, 100000, run_numbers);
    if (run_count <= 0)
        return;

    // red color if terminal
    //bool isTerminal = isatty(fileno(stdout));
    const string red("\033[0;31m");
    const string orange("\033[0;33m");
    const string reset("\033[0m");

    TH1F* hist_avg_stream_ev = new TH1F("hist_avg_stream_ev", TString::Format("average event count per second for Period %d",period), 500, 100, 3000);
    TAxis* xaxis1 = hist_avg_stream_ev->GetXaxis();
    xaxis1->SetTitle("avg event stream, event/sec");
    TH1F* hist_avg_stream_mb = new TH1F("hist_avg_stream_mb", TString::Format("average megabytes per second for Period %d",period), 500, 50, 3000);
    TAxis* xaxis2 = hist_avg_stream_mb->GetXaxis();
    xaxis2->SetTitle("avg binary stream, MB/sec");

    int file_count = 0;
    int64_t sum_event_count = 0, sum_seconds = 0, sum_mb_count = 0;
    map<int, double> big_runs;
    map<int, double> wrong_events;
    map<int, int> wrong_time;
    for (int i = 0; i < run_count; i++)
    {
        // get run
        UniRun* pRun = UniRun::GetRun(run_numbers[i].period_number, run_numbers[i].run_number);
        if (pRun == nullptr)
        {
            cout<<"The function encountered with errors: no experimental run was found ("<<run_numbers[i].period_number<<":"<<run_numbers[i].run_number<<"). This run will be skipped!"<<endl;
            continue;
        }

        TDatime start_run = pRun->GetStartDatetime();
        TDatime* end_run = pRun->GetEndDatetime();
        int* p_event_count = pRun->GetEventCount();
        int64_t* p_run_size = pRun->GetFileSize();
        delete pRun;

        if (end_run == nullptr)
        {
            cout<<"The function encountered with errors: end time of the run was not defined for "<<run_numbers[i].period_number<<":"<<run_numbers[i].run_number<<endl;
            continue;
        }
        if (p_event_count == nullptr)
        {
            cout<<"The function encountered with errors: event count was not defined for "<<run_numbers[i].period_number<<":"<<run_numbers[i].run_number<<endl;
            continue;
        }
        if (p_run_size == nullptr)
        {
            cout<<"The function encountered with errors: file size was not defined for "<<run_numbers[i].period_number<<":"<<run_numbers[i].run_number<<endl;
            continue;
        }

        double run_size_mb = *p_run_size / 1024.0 / 1024.0;
        double run_size_gb = run_size_mb / 1024.0;
        if (run_size_gb >= limit_run_gb)
        {
            cout<<orange;
            big_runs.insert(pair<int, double>(run_numbers[i].run_number, run_size_gb));
        }

        int event_count = *p_event_count;
        UInt_t run_seconds = 0;
        UInt_t end_seconds = (*end_run).Convert(), start_seconds = start_run.Convert();
        if (end_seconds < start_seconds)
        {
            wrong_time.insert(pair<int, int>(run_numbers[i].run_number, end_seconds - start_seconds));
            run_seconds = start_seconds - end_seconds;
        }
        else
            run_seconds = end_seconds - start_seconds;
        double events_per_second = event_count / (double) run_seconds;
        double mb_per_second = run_size_mb / (double) run_seconds;

        double event_size_kb = *p_run_size / 1024.0 / event_count;
        // don't take into account files with event size < 50 KB or > 500 KB
        if (((event_size_kb < 50)) || (event_size_kb > 500))
        {
            cout<<red;
            wrong_events.insert(pair<int, double>(run_numbers[i].run_number, event_size_kb));
        }
        else {
            sum_event_count += event_count;
            sum_seconds += run_seconds;
            sum_mb_count += run_size_mb;
            file_count++;
        }
        cout<<"Events per second for "<<run_numbers[i].period_number<<"-"<<run_numbers[i].run_number<<": "<<events_per_second
            <<" ("<<mb_per_second<<" MB/s)";
        if ((event_size_kb < 50) || (event_size_kb > 500) || (run_size_gb >= limit_run_gb)) cout<<reset;
        cout<<endl;

        hist_avg_stream_ev->Fill(events_per_second);
        hist_avg_stream_mb->Fill(mb_per_second);
    }

    double average_event_stream = sum_event_count / (double) sum_seconds;
    double average_mb_stream = sum_mb_count / (double) sum_seconds;
    cout<<endl<<"Average event stream for period "<<period<<": "<<average_event_stream<<" event/sec"<<endl;
    cout<<endl<<"Average binary stream for period "<<period<<": "<<average_mb_stream<<" MB/sec"<<endl;

    if (big_runs.size() > 0)
    {
        cout<<endl<<TString::Format("Run size more than %d GB:", limit_run_gb)<<endl;
        for (auto it = big_runs.begin(); it != big_runs.end(); ++it)
            cout<<"Run "<<period<<"-"<<(*it).first<<": "<<(*it).second<<" GB"<<endl;
    }
    cout<<endl;
    if (wrong_events.size() > 0)
    {
        cout<<endl<<"Wrong event size (< 50 KB or > 500 KB):"<<endl;
        for (auto it = wrong_events.begin(); it != wrong_events.end(); ++it)
            cout<<"Run "<<period<<"-"<<(*it).first<<": "<<(*it).second<<" KB"<<endl;
    }
    cout<<endl;
    if (wrong_time.size() > 0)
    {
        cout<<endl<<"Wrong run duration:"<<endl;
        for (auto it = wrong_time.begin(); it != wrong_time.end(); ++it)
            cout<<"Run "<<period<<"-"<<(*it).first<<": "<<(*it).second<<" seconds"<<endl;
    }
    cout<<endl;

    delete run_numbers;

    TCanvas* canvas_stream = new TCanvas("canvas_stream","canvas_stream",1200, 640);
    canvas_stream->Divide(2, 1);
    canvas_stream->cd(1);
    hist_avg_stream_ev->Draw();
    canvas_stream->cd(2);
    hist_avg_stream_mb->Draw();

    cout<<"Macro finished successfully"<<endl;
}

// non-user function for creating 2 histograms on average event size and root file (with 'bmndata' tree) sizes for the given parent directory (recursively)
// returns the success code: 0 - without errors, error code - otherwise
int calculate_size(TString dir_path, TH1F* hist_file_size, TH1F* hist_event_size, double& sum_file_size, double& sum_event_size,
                   int& file_count, int limit_mb, map<TString, double>& big_files, map<TString, double>& wrong_events)
{
    // red color if terminal
    //bool isTerminal = isatty(fileno(stdout));
    const string red("\033[0;31m");
    const string orange("\033[0;33m");
    const string reset("\033[0m");

    TSystemDirectory dir(dir_path.Data(), dir_path.Data());
    TList* file_list = dir.GetListOfFiles();
    if (file_list == nullptr)
    {
        cout<<"WARNING: There are no files in the directory: "<<dir_path<<endl;
        return 0;
    }

    TSystemFile* cur_file;
    TIter iterFile(file_list);
    while ((cur_file = (TSystemFile*)iterFile.Next()))
    {
        TString file_name = cur_file->GetName();
        if ((file_name == ".") || (file_name == "..")) continue;

        TString file_dir = cur_file->GetTitle();
        // if directory
        if (cur_file->IsDirectory())
        {
            calculate_size(file_dir, hist_file_size, hist_event_size, sum_file_size, sum_event_size, file_count, limit_mb, big_files, wrong_events);
        }
        else
        {
            TString file_path = file_dir + "/" + file_name;
            if (file_name.EndsWith(".root"))
            {
                Long64_t size = 0;
                Long_t id = 0, flags = 0, modtime = 0;
                gSystem->GetPathInfo(file_path.Data(), &id, &size, &flags, &modtime);

                TFile root_file(file_path);
                TTree* root_tree = (TTree*) root_file.Get("bmndata");
                if (root_tree == nullptr)
                {
                    cout<<"ERROR: there are no tree 'bmndata' in file: "<<file_path<<endl;
                    root_file.Close();
                    continue;
                }

                double file_size_mb = size / 1024.0 / 1024.0;
                int event_count = root_tree->GetEntries();
                double event_size_kb = size / 1024 / event_count;

                bool isChangeColor = false;
                if (file_size_mb >= limit_mb)
                {
                    cout<<orange;
                    isChangeColor = true;
                    big_files.insert(pair<TString, double>(file_path, file_size_mb));
                }
                if ((file_size_mb < 30) || (file_size_mb > 50000))
                {
                    cout<<red;
                    isChangeColor = true;
                }
                if ((event_size_kb < 1) || (event_size_kb > 30))
                {
                    cout<<red;
                    isChangeColor = true;
                    wrong_events.insert(pair<TString, double>(file_path, event_size_kb));
                }
                else {
                    sum_file_size += file_size_mb;
                    sum_event_size += event_size_kb;
                    file_count++;
                }

                cout<<file_path<<" size: "<<file_size_mb<<" MB (event size = "<<event_size_kb<<" KB)";
                if (isChangeColor) cout<<reset;
                cout<<endl;

                hist_file_size->Fill(file_size_mb);
                hist_event_size->Fill(event_size_kb);

                root_file.Close();
            }//if (file_name.EndsWith(".root"))
        }//if not a directory
    }//while file list

    return 0;
}

// Macro for creating 2 histograms on average event sizes and digit file sizes stored in a selected directory
int show_digi_size(TString dir_path, int limit_file_mb = 4000)
{
    if (dir_path == "")
    {
        cout<<"ERROR: Directory path was not specified"<<endl;
        return -1;
    }

    TH1F* hist_file_size = new TH1F("hist_file_size", "digit file sizes", limit_file_mb/50, 0, limit_file_mb);
    TAxis* xaxis1 = hist_file_size->GetXaxis();
    xaxis1->SetTitle("Digit FIle Size, MB");

    TH1F* hist_event_size = new TH1F("hist_event_size", "average event sizes", 30, 0, 30);
    TAxis* xaxis2 = hist_event_size->GetXaxis();
    xaxis2->SetTitle("Event Size, KB");

    gSystem->ExpandPathName(dir_path);

    int file_count = 0;
    double sum_file_size = 0, sum_event_size = 0;
    map<TString, double> big_files;
    map<TString, double> wrong_events;
    calculate_size(dir_path, hist_file_size, hist_event_size, sum_file_size, sum_event_size, file_count, limit_file_mb, big_files, wrong_events);

    if (file_count > 0)
    {
        double average_file_size = sum_file_size / file_count;
        double average_event_size = sum_event_size / file_count;

        cout<<endl<<file_count<<" digit files have been successfully processed (dir: "<<dir_path<<")"<<endl;
        cout<<"Average digit file size: "<<average_file_size<<" MB"<<endl;
        cout<<"Average event size: "<<average_event_size<<" KB"<<endl;

        TCanvas* c1 = new TCanvas("c1","c1");
        TCanvas* c2 = new TCanvas("c2","c2");

        c1->cd();
        hist_file_size->Draw();
        c2->cd();
        hist_event_size->Draw();
    }

    if (big_files.size() > 0)
    {
        cout<<endl<<TString::Format("File size more than %d MB:", limit_file_mb)<<endl;
        for (auto it = big_files.begin(); it != big_files.end(); ++it)
            cout<<(*it).first<<": "<<(*it).second<<" MB"<<endl;
    }
    cout<<endl;
    if (wrong_events.size() > 0)
    {
        cout<<endl<<"Wrong event size (< 1 KB or > 30 KB):"<<endl;
        for (auto it = wrong_events.begin(); it != wrong_events.end(); ++it)
            cout<<(*it).first<<": "<<(*it).second<<" KB"<<endl;
    }
    cout<<endl;

    return 0;
}
