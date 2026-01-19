
void dat_compare(){
    vector<double> weight_1, P3_1, P4_1, Am1_1;
    vector<double> weight_2, P3_2, P4_2, Am1_2;
    vector<int> evtNo_new, evtNo_old, evtNo_old0;

    Double_t weight;
    Double_t p3[3];
    Double_t p4[3];
    Double_t pAm1[3];


    TString inputFile_name_1 = "EventOutput_1_Abs_WF_thetaCut_10Mio.dat";
    std::ifstream inputFile_1(inputFile_name_1);

    int evtNo = 0;
    std::string line;
    while (std::getline(inputFile_1, line)) {
        if (line.find("#Ev") != std::string::npos) {

            evtNo_new.push_back(evtNo);
            evtNo++;

            std::getline(inputFile_1, line);
            sscanf(line.c_str(), "W %le", &weight);

            std::getline(inputFile_1, line);
            sscanf(line.c_str(), "P3 %le %le %le", &p3[0], &p3[1], &p3[2]);

            std::getline(inputFile_1, line);
            sscanf(line.c_str(), "P4 %le %le %le", &p4[0], &p4[1], &p4[2]);

            std::getline(inputFile_1, line);
            sscanf(line.c_str(), "Am1 %le %le %le", &pAm1[0], &pAm1[1], &pAm1[2]);

            weight_1.push_back(weight);
            P3_1.push_back(p3[0]);
            P4_1.push_back(p4[0]);
            Am1_1.push_back(pAm1[0]);
        }
    }

    TString inputFile_name_2 = "EventOutput_01_Abs_WF_10Mio.dat";
    std::ifstream inputFile_2(inputFile_name_2);
    evtNo = 0;
    while (std::getline(inputFile_2, line)) {
        if (line.find("#Ev") != std::string::npos) {
            evtNo_old0.push_back(evtNo);
            evtNo++;

            std::getline(inputFile_2, line);
            sscanf(line.c_str(), "W %le", &weight);

            std::getline(inputFile_2, line);
            sscanf(line.c_str(), "P3 %le %le %le", &p3[0], &p3[1], &p3[2]);

            std::getline(inputFile_2, line);
            sscanf(line.c_str(), "P4 %le %le %le", &p4[0], &p4[1], &p4[2]);

            std::getline(inputFile_2, line);
            sscanf(line.c_str(), "Am1 %le %le %le", &pAm1[0], &pAm1[1], &pAm1[2]);

            weight_2.push_back(weight);
            P3_2.push_back(p3[0]);
            P4_2.push_back(p4[0]);
            Am1_2.push_back(pAm1[0]);
        }
    }

    int NofMatchEvent = 0;
    int Current_event = 0;
    for(int i=0;i<int(weight_1.size());i++){
        if(Current_event>=int(weight_2.size())-1){
            break;
        }
        for(int j=Current_event;j<int(weight_2.size());j++){
            // if(int(weight_1[i])==int(weight_2[j])&&int(P3_1[i])==int(P3_2[j])&&int(P4_1[i])==int(P4_1[j])&&int(Am1_1[i])==int(Am1_1[j])){
            if(((weight_1[i]/weight_2[j])-1<1e-6)&&((weight_2[j]/weight_1[i])-1<1e-6)&&((Am1_1[i]/Am1_2[j])-1<1e-6)&&((Am1_2[j]/Am1_1[i])-1<1e-6)){
                NofMatchEvent++;
                Current_event=j;
                evtNo_old.push_back(j);
                // cout<<i<<"\t"<<Current_event<<endl;
                break;
            }
        }
    }
    cout<<Current_event<<endl;
    cout<<NofMatchEvent<<endl;

    ofstream OUT("EvtNo_QE_thetaCut.txt"); 
    for(int i=0;i<evtNo_new.size();i++) OUT<<evtNo_new[i]<<"\t"<<evtNo_old[i]<<endl;
    OUT.close();


    std::ifstream infile("EvtNo_QE_thetaCut_new.txt");
    // std::ifstream infile("EvtNo_QE_thetaCut_accp_new.txt");
    std::vector<int> numbers_new, numbers_new_0;
    int num;
    while (infile >> num) {
        numbers_new.push_back(evtNo_old[num]);
        numbers_new_0.push_back(num);
    }

    std::ifstream infile_old("EvtNo_QE_thetaCut_old.txt");
    // std::ifstream infile_old("EvtNo_QE_thetaCut_accp_old.txt");
    std::vector<int> numbers_old;
    while (infile_old >> num) {
        numbers_old.push_back(num);
    }

    std::vector<int> common, common_new;
    std::vector<int> only_old;
    std::vector<int> only_new;

    size_t i = 0, j = 0;
    while (i < numbers_old.size() && j < numbers_new.size()) {
        if (numbers_old[i] == numbers_new[j]) {
            common.push_back(numbers_old[i]);
            common_new.push_back(numbers_new_0[j]);
            ++i;
            ++j;
        } else if (numbers_old[i] < numbers_new[j]) {
            only_old.push_back(numbers_old[i]);
            ++i;
        } else {
            only_new.push_back(numbers_new_0[j]);
            ++j;
        }
    }

    while (i < numbers_old.size()) {
        only_old.push_back(numbers_old[i]);
        ++i;
    }

    while (j < numbers_new.size()) {
        only_new.push_back(numbers_new[j]);
        ++j;
    }

    cout<<only_new.size()<<"\t"<<common.size()<<"\t"<<only_old.size()<<endl;
    // for(int i=0;i<100;i++) cout<<common[i]<<endl;

    ofstream OUT_common("EvtNo_QE_thetaCut_common.txt"); 
    // ofstream OUT_common("EvtNo_ACCP_thetaCut_common.txt"); 
    for(int i=0;i<common.size();i++) OUT_common<<common_new[i]+1<<"\t"<<common[i]+1<<endl;
    OUT_common.close();

    ofstream OUT_old("EvtNo_QE_thetaCut_oldonly.txt"); 
    // ofstream OUT_old("EvtNo_ACCP_thetaCut_oldonly.txt"); 
    for(int i=0;i<only_old.size();i++) OUT_old<<only_old[i]+1<<endl;
    OUT_old.close();

    ofstream OUT_new("EvtNo_QE_thetaCut_newonly.txt"); 
    // ofstream OUT_new("EvtNo_ACCP_thetaCut_newonly.txt"); 
    for(int i=0;i<only_new.size();i++) OUT_new<<only_new[i]+1<<endl;
    OUT_new.close();

    // for(int i=0;i<evtNo_new.size();i++) cout<<evtNo_new[i]<<endl;
    // cout<<evtNo_new.size()<<endl;
    // cout<<evtNo_old.size()<<endl;

    // cout<<int(weight_1.size())<<endl;
    // cout<<weight_1[0]<<"\t"<<weight_1[1]<<"\t"<<weight_1[2]<<endl;

    // cout<<int(weight_2.size())<<endl;
    // cout<<weight_2[0]<<"\t"<<weight_2[1]<<"\t"<<weight_2[2]<<endl;

    // if((weight_1[0]/weight_2[0]-1)<1e-6) cout<<"|||"<<endl;

}