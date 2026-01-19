//========================================================================================================
// Name        : nica-scheduler.cpp
// Author      : Konstantin Gertsenberger
// Description : NICA-Scheduler to run processing tasks of the ROOT-based frameworks through batch systems
//========================================================================================================

// own headers
#include "function_set.h"
#include "batch_command.h"

// ROOT includes for DB work
#include "TSQLServer.h"
#include "TSQLResult.h"
#include "TSQLRow.h"
#include "TString.h"

// C++ includes
#include <pthread.h>
#include <semaphore.h>
#include "libxml/tree.h"
#include <fstream>
#include <algorithm>
#include <map>
#include <glob.h>
#include <unistd.h>
#include <getopt.h>

/* Predefined settings for the Condition Database of the experiments (for stand-alone version) */
struct struct_database_settings
{
    string db_host = "";
    string db_name = "";
    string db_username = "";
    string db_password = "";

    struct_database_settings() {}
    struct_database_settings(const struct_database_settings& arg_db_settings)
    { db_host = arg_db_settings.db_host; db_name = arg_db_settings.db_name; db_username = arg_db_settings.db_username; db_password = arg_db_settings.db_password;}
    struct_database_settings(string arg_db_host, string arg_db_name, string arg_db_username, string arg_db_password)
    { db_host = arg_db_host; db_name = arg_db_name; db_username = arg_db_username; db_password = arg_db_password;}
    struct_database_settings& operator=(const struct_database_settings& arg_db_settings) {
        if (this != &arg_db_settings){
            db_host = arg_db_settings.db_host; db_name = arg_db_settings.db_name;
            db_username = arg_db_settings.db_username; db_password = arg_db_settings.db_password;
        }
        return *this;
    }
};
#include "../settings.h"

const int MAX_BUFFER = 255;
char buffer[MAX_BUFFER];

//#define DEBUG_OUTPUT
#define MICC_NO_MANAGEMENT

// string structure to support "nullptr" values
class nullString
{
  protected:
	string strValue;
	bool isNullString;

  public:
	nullString() : strValue(""), isNullString(true) {}
	nullString(string str) : strValue(str), isNullString(false) {}
	nullString(const nullString& str) : strValue(str.strValue), isNullString(str.isNullString) {}

	nullString& operator=(const nullString& str)
	{
		strValue = str.strValue;
		isNullString = str.isNullString;
		return *this;
	}

	void SetValue(string str)
	{
		strValue = str;
		isNullString = false;
	}
	void SetNull()
	{
		strValue = "";
		isNullString = true;
	}

	string GetValue() { return strValue; }
	bool isNull() { return isNullString; }
};

// structure with information on files to be processed
// iParallelMode = processor count to parallel event processing of the input file ('-1' - was not set)
// iMerge: 0 - save only result TChain with the data tree to the first file name (pointing to other files)
//         1 - merge to the first file name and delete partial files
//         2 - merge to the first file name and not delete partial files
//        -1 - was not set
struct structFilePar
{
	string strFileIn;
	nullString strFileOut;
	int *start_event, *event_count;
	string strParallelMode;
	int iParallelMode, iMerge;
	string strPutCommand, strPutPath;
	string strGetCommand, strGetPath, strGetOutput;
	string strCleanPath;

	structFilePar(): strFileIn(""), strFileOut(), start_event(nullptr), event_count(nullptr),
					 strParallelMode(""), iParallelMode(-1), iMerge(-1),
					 strPutCommand(""), strPutPath(""), strGetCommand(""), strGetPath(""),
					 strGetOutput(""), strCleanPath("") {}
	~structFilePar()
	{
		if (start_event != nullptr)	delete start_event;
		if (event_count != nullptr)	delete event_count;
	}
};

// structure with information on macro to be executed
struct structMacroPar
{
	char* macro_name;
	char* macro_path;
	int* start_event;
	int* event_count;
	string add_args;
	vector<structFilePar*> vecFiles;
	structMacroPar(): macro_name(nullptr), macro_path(nullptr), start_event(nullptr), event_count(nullptr), add_args("") {}
	~structMacroPar()
	{
		if (macro_name != nullptr)      free(macro_name);
		if (macro_path != nullptr)      free(macro_path);
		if (start_event != nullptr)     delete start_event;
		if (event_count != nullptr)     delete event_count;
		// clear vector parameter with file list to process
		for (unsigned int i = 0; i < vecFiles.size(); i++){
			structFilePar* filePar = vecFiles.at(i);
			delete filePar;
		}
		vecFiles.clear();
	}
};

// structure with information on job to be run
struct structJobPar
{
	string job_name;
	string dependency_name;
	char* command_line;
	bool isCommand;
	bool isLocal;
	char* sproc_count;
	string strConfig;
	char* pcPriority;
	string operative_memory1;
	bool isCoreDump;
	char* pcLogs;
	char* pcQueue;
	char* pcQOS;
	char* pcHosts;
	char* pcWorkDir;
	int thread_number;
	struct_database_settings dbSettings;
	vector<structMacroPar*> vecMacros;
	structJobPar(): job_name("scheduler_job"), dependency_name(""), command_line(nullptr), isCommand(false),
			isLocal(true), sproc_count(nullptr), strConfig(""), pcPriority(nullptr), operative_memory1(""), isCoreDump(false),
			pcLogs(nullptr), pcQueue(nullptr), pcQOS(nullptr), pcHosts(nullptr), pcWorkDir(nullptr), thread_number(-1) {}
	~structJobPar()
	{
		if (command_line != nullptr)    free(command_line);
		if (sproc_count != nullptr)     free(sproc_count);
		if (pcPriority != nullptr)      free(pcPriority);
		if (pcLogs != nullptr)          free(pcLogs);
		if (pcQueue != nullptr)         free(pcQueue);
		if (pcQOS != nullptr)           free(pcQOS);
		if (pcHosts != nullptr)         free(pcHosts);
		if (pcWorkDir != nullptr)       free(pcWorkDir);
		// clear vector parameter with macro list to process
		for (unsigned int i = 0; i < vecMacros.size(); i++){
			structMacroPar* macroPar = vecMacros.at(i);
			delete macroPar;
		}
		vecMacros.clear();
	}
};

// structure for parameters to transfer to the main thread (local mode)
struct structThreadPar
{
	structJobPar* job_par;
	int thread_counter;		// starting from 1
	sem_t* sem;
	pthread_mutex_t* mut;
};
// structure for parameters to transfer from the main thread to subthreads
struct structSubThreadPar
{
	structThreadPar* thread_parameter;
	structMacroPar* macro_par;
	int start_event;
	int event_count;
	string inFile;
	nullString outFile;
	int sub_counter;
};

// declaration of function to parse criteria to select data from Experiment Database
void ParseDatabaseParameters(string input, TString& sql, bool isSimulation);
// declaration of function to parse file list for the macro of the job
bool ParseMacroFiles(xmlNodePtr sub_node, structJobPar* job_par, structMacroPar* macro_par, multimap< string,vector<nullString>* > mapJobOutput, batch_commands batch_com);

// special function for main info and error messages (cyan or red color)
void info_message(const char* msg, bool isError = 0)
{
	bool isTerminal = isatty(fileno(stdout));

	string color_off("\033[0m");
	string msg_color;	// message color
	if (isError)
		msg_color = "\033[0;91m";	// light red color for errors
	else
		msg_color = "\033[0;36m";	// cyan color for info message

	if (isTerminal) cout<<msg_color<<msg<<color_off<<endl;
	else cout<<msg<<endl;
}

// replace string in text (extension version with possible ":" before "}")
// '~' - exclude first 'count' symbols of the new_substring, e.g. {file_name_with_ext:~3}
// '-' - exclude last 'count' symbols of the new_substring, e.g. {file_name:-4}
void replace_string_in_text_ext(string &text, string old_substring, string new_substring)
{
	int start = -1, end, count, last_char = old_substring.length()-1;
	do
	{
		start = text.find(old_substring.substr(0, last_char), start + 1);
		if (start > -1)
		{
			if (text[start+last_char] == ':')
		    {
		    	if (text[start+last_char+1] == '~')
		    	{
		    		end = text.find("}", start+last_char+2);
		    		if (end > -1)
		    		{
		    			count = atoi(text.substr(start+last_char+2, end-start-last_char-2).c_str());
		    			if (((unsigned int)count) < new_substring.length())
		    				text.replace(start, end+1-start, new_substring.substr(count).c_str());
		    			else
		    				cout<<"Warning: deletion of the first chars ('~' command symbol) was failed."<<endl;
		    		}
		    	}
		    	if (text[start+last_char+1] == '-')
		    	{
		    		end = text.find("}", start+last_char+2);
		    		if (end > -1)
		    		{
		    			count = atoi(text.substr(start+last_char+2, end-start-last_char-2).c_str());
		    			if (((unsigned int)count) < new_substring.length())
		    				text.replace(start, end+1-start, new_substring.substr(0, new_substring.length()-count).c_str());
		    			else
		    				cout<<"Warning: deletion of the last chars ('-' command symbol) was failed."<<endl;
		    		}
		    	}
		    }
		    else
		    	text.replace(start, last_char+1, new_substring.c_str());
		}
	}
	while (start > -1);
}

// form output file name containing special ($) variables
string form_file_name(string outName, string inName, int iCounter, string batch_temp_dir)
{
	replace_string_in_text(outName, "${counter}", iCounter);
	replace_string_in_text(outName, "${batch_temp_dir}", batch_temp_dir);

	replace_string_in_text_ext(outName, "${input}", inName);
	// ${file_name_with_ext} should be BEFORE ${file_name} because of searching without the last '}'
	replace_string_in_text_ext(outName, "${file_name_with_ext}", get_file_name_with_ext(inName));
	replace_string_in_text_ext(outName, "${file_name}", get_file_name(inName));
	replace_string_in_text_ext(outName, "${file_dir_name}", get_directory_name(inName));

	replace_string_in_text_ext(outName, "${first_number}", find_first_number(inName));
	replace_string_in_text_ext(outName, "${last_number}", find_last_number(inName));

    if (outName.find("${user}") != string::npos)
    {
        char* login_name = getlogin();
        if (login_name != 0) replace_string_in_text(outName, "${user}", login_name);
    }

	return outName;
}

inline vector<string> glob(const string& path)
{
    glob_t glob_result;
    glob(path.c_str(), GLOB_TILDE, nullptr, &glob_result);

    vector<string> ret;
    for (unsigned int i = 0; i < glob_result.gl_pathc; i++)
        ret.push_back(string(glob_result.gl_pathv[i]));

    globfree(&glob_result);
    return ret;
}

// generate output file name with counter (for partial result)
string GenerateOutputFilePath(string path, int counter)
{
	size_t last_point_idx = path.find_last_of(".");

	string add_string = "__";
	add_string += int_to_string(counter);

	if (string::npos != last_point_idx)
		return path.insert(last_point_idx, add_string);
	else
		return path.append(add_string);
}

// subthread in working thread to process single file
void* SubThreadProcessFile(void* thread_parameter)
{
	// initialization of variables
	structSubThreadPar* subthread_par = (structSubThreadPar*) thread_parameter;
	structThreadPar* thread_par = subthread_par->thread_parameter;

	string sConfig = thread_par->job_par->strConfig;
	string macro_path = subthread_par->macro_par->macro_path;
	string inFile = subthread_par->inFile;
	string add_args = subthread_par->macro_par->add_args;
	string logs = thread_par->job_par->pcLogs;

	int start_event = subthread_par->start_event;
	int event_count = subthread_par->event_count;
	nullString outFile = subthread_par->outFile;

	int thread_counter = thread_par->thread_counter;
	int sub_counter = subthread_par->sub_counter;

	// generate task string
	stringstream ssSUB;
	ssSUB << sConfig << "root -b -q '" << macro_path <<"(";

	bool isFirst = true;
	if (inFile != "")
	{
		ssSUB << "\"" << inFile << "\"";
		isFirst = false;
	}

	if (!outFile.isNull())
	{
		if (!isFirst) ssSUB << ", ";
		else isFirst = false;
		ssSUB << "\"" << outFile.GetValue() << "\"";
	}

	if (!isFirst) ssSUB << ", ";
	else isFirst = false;
	ssSUB << to_string(start_event);

	if (!isFirst) ssSUB << ", ";
	else isFirst = false;
	ssSUB << to_string(event_count);

	if (add_args != "")
	{
		if (!isFirst) ssSUB << ", ";
		else isFirst = false;
		ssSUB << add_args;
	}
	if (logs != "")
		ssSUB << ")' > " << logs << "_" << to_string(thread_counter) << "_" << to_string(sub_counter) << " 2>&1";
	else
		ssSUB << ")'";

	// write and execute temporary bash file
	ofstream myfile;
	char temp_file[255], run_temp[262];
	long int t = time(nullptr);
	sprintf(temp_file, "temp_%d_%d_%d.sh", thread_counter, sub_counter, (int)t); // generate output name for temporary bash file
	myfile.open(temp_file);
	myfile<<ssSUB.rdbuf();
	myfile.close();
	sprintf(run_temp, "bash %s", temp_file);

	pthread_mutex_lock(thread_par->mut);
	cout<<"nica-scheduler$ Subtask "<<thread_counter<<":"<<sub_counter<<" is running:"<<endl<<"input - "<<inFile<<endl
		<<"output - "<<(outFile.isNull() ? "<no output>" : outFile.GetValue())<<endl<<"start event - "<<start_event<<endl<<"event count - "<<event_count<<endl<<endl;
	pthread_mutex_unlock(thread_par->mut);

	// run task in thread
	int system_return = system(run_temp);
	if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in SubThreadProcessFile) returned non-zero code: "<<system_return<<endl;

	//delete temporary bash file
	sprintf(run_temp, "rm -rf %s", temp_file);
	system_return = system(run_temp);
	if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in SubThreadProcessFile) returned non-zero code: "<<system_return<<endl;

	sem_post(thread_par->sem);

	pthread_exit(nullptr);
	return nullptr;
}

/* MAIN THREAD for LOCAL execution */
void* ThreadLocalProcess(void* thread_parameter)
{
	// initialization of variables
	structThreadPar* thread_par = (structThreadPar*) thread_parameter;
	structJobPar* job_par = thread_par->job_par;
	int thread_counter = thread_par->thread_counter;

	for (size_t ind_macro = 0; ind_macro < job_par->vecMacros.size(); ind_macro++)
	{
		structMacroPar* cur_macro = job_par->vecMacros[ind_macro];
		structFilePar* cur_file = nullptr;
		if (cur_macro->vecFiles.size() > 0)
			cur_file = cur_macro->vecFiles[thread_counter-1];

		// if macro do not use input files
		if (cur_file == nullptr)
		{
			// generate task string
			stringstream ssSUB;
			ssSUB << job_par->strConfig << "root -b -q '" << cur_macro->macro_path << "(";
			if (cur_macro->add_args != "")
				ssSUB << cur_macro->add_args;
			if (job_par->pcLogs != nullptr)
			{
				//if (thread_counter == 1)
				//	sprintf(pcSUB, "%s)\" >> %s 2>&1", pcSUB, logs.c_str());
				//else
				ssSUB << ")' > " << job_par->pcLogs << "_" << to_string(thread_counter) << " 2>&1";
			}
			else
				ssSUB << ")'";

#ifdef DEBUG_OUTPUT
			// display local command
			cout<<"DEBUG nica-scheduler$ Local command = "<<ssSUB.rdbuf()<<endl;
#endif
			// write and execute temporary bash file
			ofstream myfile;
			char temp_file[255], run_temp[262];
			long int t = time(nullptr);
			sprintf(temp_file, "temp_%d_%d.sh", thread_counter, (int)t); // generate output name for temporary bash file
			myfile.open (temp_file);
			myfile<<ssSUB.rdbuf();
			myfile.close();
			sprintf(run_temp, "bash %s", temp_file);

			pthread_mutex_lock(thread_par->mut);
			cout<<"nica-scheduler$ Task "<<ind_macro+1<<" is running..."<<endl;
			cout<<endl;
			pthread_mutex_unlock(thread_par->mut);

			// run task in thread
			int system_return = system(run_temp);
			if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;

			//delete temporary bash file
			sprintf(run_temp, "rm -rf %s", temp_file);
			system_return = system(run_temp);
			if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;

			sem_post(thread_par->sem);
		}// if (cur_file == nullptr)
		else
		{
			char temp_file[255], run_temp[262];
			/***********************************************************************/
			/* if parallel mode > 1 - parallel local processing for one input file */
			/***********************************************************************/
			string sOutputUnion = "";	// output file concatenation to wait for
			vector<nullString> vecOutputFiles;
			if (cur_file->iParallelMode > 1)
			{
				string strRealInputFile = cur_file->strFileIn;
				// strRealOutputFile - output file path for ROOT macro; strFinalOutputFile - result file path to copy after processing
				nullString strRealOutputFile = cur_file->strFileOut, strFinalOutputFile = nullString();
				// copy file to the temporary location
				if (cur_file->strPutPath != "")
				{
					sprintf(run_temp, "%s %s %s",
							cur_file->strPutCommand.c_str(), cur_file->strFileIn.c_str(), cur_file->strPutPath.c_str());
					int system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
					strRealInputFile = cur_file->strPutPath;
				}
				if (cur_file->strGetPath != "")
				{
					if (strRealOutputFile.GetValue() != "")
					{
						strRealOutputFile.SetValue(cur_file->strGetPath);
						strFinalOutputFile = cur_file->strFileOut;
					}
					else
					{
						if (cur_file->strGetOutput != "")
							strFinalOutputFile.SetValue(cur_file->strGetOutput);
					}
				}

				pthread_t* threads = new pthread_t[cur_file->iParallelMode];
				int real_thread_count = 0;

				sOutputUnion = strRealOutputFile.GetValue();
				vecOutputFiles.push_back(strRealOutputFile);
				int start;
				if (cur_file->start_event != nullptr)
					start = *cur_file->start_event;
				else
				{
					if (cur_macro->start_event != nullptr)
						start = *cur_macro->start_event;
					else
					{
						info_message("ERROR nica-scheduler$ Please, set start event and event count for Parallel Mode", 1);
                        exit(-1);
                    }
				}
				int count;
				if (cur_file->event_count != nullptr)
					count = *cur_file->event_count;
				else
				{
					if (cur_macro->event_count != nullptr)
						count = *cur_macro->event_count;
					else
					{
						info_message("ERROR nica-scheduler$ Please, set start event and event count for Parallel Mode", 1);
						exit(-1);
					}
				}

				int rc;
				for (int i = 0; i < cur_file->iParallelMode; i++)
				{
					int event_per_thread = (count+i)/cur_file->iParallelMode;
					if (event_per_thread != 0)
					{
						nullString sOutFile = strRealOutputFile;
						// generate output file name
						if (!sOutFile.isNull())
							sOutFile.SetValue(GenerateOutputFilePath(sOutFile.GetValue(), real_thread_count+1));

						structSubThreadPar* subthread_par = new structSubThreadPar();
						subthread_par->thread_parameter = thread_par;
						subthread_par->macro_par = cur_macro;
						subthread_par->start_event = start;
						subthread_par->event_count = event_per_thread;
						subthread_par->inFile = strRealInputFile;
						subthread_par->outFile = sOutFile;
						subthread_par->sub_counter = i+1;

						if (i > 0) sem_wait(thread_par->sem);

						rc = pthread_create(&threads[real_thread_count], nullptr, SubThreadProcessFile, (void*)subthread_par);
						if (rc)
						{
							info_message((TString::Format("ERROR nica-scheduler$ Return code from sub pthread_create() is %d", rc)).Data(), 1);
							exit(-1);
						}

						if (!sOutFile.isNull())
						{
							sOutputUnion += " " + sOutFile.GetValue();
							vecOutputFiles.push_back(sOutFile);
						}

						real_thread_count++;
					}//if (event_per_thread != 0){

					start = start + event_per_thread;
				}// for (int i = 0; i < cur_file->iParallelMode; i++)

				// waiting for finishing of the child threads
#ifdef DEBUG_OUTPUT
				cout<<"nica-scheduler$ Waiting for "<<real_thread_count<<" subtask(s) to finish..."<<endl;
#endif
				void** thread_return = nullptr;
				for (int i = 0; i < real_thread_count; i++)
				{
					pthread_join(threads[i], thread_return);

					if (thread_return != nullptr)
						info_message((TString::Format("ERROR nica-scheduler$ Thread %d failed", i)).Data(), 1);
				}
				cout<<"nica-scheduler$ Subtasks "<<ind_macro+1<<":[] has been finished"<<endl;

				// merge result files or write to single TChain object
				// iMerge: 0 - save result TChain with 'cbmsim' tree; 1 - merge to the first file name and delete partial files; 2 - -//- not delete partial files
				if ((cur_file->iMerge >= 0) && (sOutputUnion != ""))
				{
					//UnionROOTFiles();

					string exe_dir = get_app_dir_linux();
					string UNIONc_path = exe_dir + "merge_result.C";

					stringstream ssSUB;
					ssSUB << job_par->strConfig << "root -b -q '" << UNIONc_path << "(\""
						  << sOutputUnion << "\", " << to_string(cur_file->iMerge) << ")'";

					if (job_par->pcLogs != nullptr)
						ssSUB << " >> " << job_par->pcLogs << " 2>&1";

					// run merge_result.C macro in bash
					ofstream myfile;
					long int t = time(nullptr);
					sprintf(temp_file, "temp_union_%d.sh", (int)t);
					myfile.open (temp_file);
					myfile << ssSUB.rdbuf();
					myfile.close();
					sprintf(run_temp, "bash %s", temp_file);

					cout<<endl<<"nica-scheduler$ Merging the result of subtasks "<<ind_macro+1<<":[]..."<<endl<<endl;
					int system_return =  system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;

					// delete temporary bash file
					sprintf(run_temp, "rm -rf %s", temp_file);
					system_return =  system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
				}//if - merge result files

				// copy file from the temporary location to the output path
				if ((cur_file->strGetPath != "") && (strFinalOutputFile.GetValue() != ""))
				{
					sprintf(run_temp, "%s %s %s",
							cur_file->strGetCommand.c_str(),
							cur_file->strGetPath.c_str(),
							strFinalOutputFile.GetValue().c_str());
					int system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;

					if ((cur_file->iMerge == 0) || (cur_file->iMerge == 2))
					{
						for (size_t ind_files = 1; ind_files < vecOutputFiles.size(); ind_files++)
						{
							sprintf(run_temp, "%s %s %s",
									cur_file->strGetCommand.c_str(),
									(get_directory_path(cur_file->strGetPath) + string("/") + get_file_name_with_ext(vecOutputFiles[ind_files].GetValue())).c_str(),
									(get_directory_path(strFinalOutputFile.GetValue()) + string("/") + get_file_name_with_ext(vecOutputFiles[ind_files].GetValue())).c_str());
							system_return = system(run_temp);
							if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
						}
					}// if iMerge = 0,2 then copy all other files
				}// copy file from the temporary location to the output path

				// clean the temporary files from <put>, <get> (always now) and from <clean>
				if (cur_file->strPutPath != "")
				{
					sprintf(run_temp, "rm -rf %s", cur_file->strPutPath.c_str());
					int system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
				}
				if (cur_file->strGetPath != "")
				{
					sprintf(run_temp, "rm -rf %s", cur_file->strGetPath.c_str());
					int system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;

					if ((cur_file->iMerge == 0) || (cur_file->iMerge == 2))
					{
						for (size_t ind_files = 1; ind_files < vecOutputFiles.size(); ind_files++)
						{
							sprintf(run_temp, "rm -rf %s", (get_directory_path(cur_file->strGetPath) + string("/") + get_file_name_with_ext(vecOutputFiles[ind_files].GetValue())).c_str());
							system_return = system(run_temp);
							if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
						}
					}// if iMerge = 0,2 then delete all other files
				}
				if (cur_file->strCleanPath != "")
				{
					sprintf(run_temp, "rm -rf %s", cur_file->strCleanPath.c_str());
					int system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
				}
			}//if (parallel_mode > 1)
			/************************/
			/* if parallel mode = 1 */
			/************************/
			else
			{
				string strRealInputFile = cur_file->strFileIn;
				// strRealOutputFile - output file path for ROOT macro; strFinalOutputFile - result file path to copy after processing
				nullString strRealOutputFile = cur_file->strFileOut, strFinalOutputFile = nullString();
				// copy file to the temporary location
				if (cur_file->strPutPath != "")
				{
					sprintf(run_temp, "%s %s %s",
							cur_file->strPutCommand.c_str(), cur_file->strFileIn.c_str(), cur_file->strPutPath.c_str());
					int system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
					strRealInputFile = cur_file->strPutPath;
				}
				if (cur_file->strGetPath != "")
				{
					if (strRealOutputFile.GetValue() != "")
					{
						strRealOutputFile.SetValue(cur_file->strGetPath);
						strFinalOutputFile = cur_file->strFileOut;
					}
					else
					{
						if (cur_file->strGetOutput != "")
							strFinalOutputFile.SetValue(cur_file->strGetOutput);
					}
				}

				// generate task string
				stringstream ssSUB;
				ssSUB << job_par->strConfig << "root -b -q '"<< cur_macro->macro_path <<"(";
				bool isFirst = true;
				if (strRealInputFile != "")
				{
					ssSUB << "\"" << strRealInputFile << "\"";
					isFirst = false;
				}
				if (!strRealOutputFile.isNull())
				{
					if (!isFirst) ssSUB << ", ";
					else isFirst = false;
					ssSUB << "\"" << strRealOutputFile.GetValue() << "\"";
				}
				if (cur_file->start_event != nullptr)
				{
					if (!isFirst) ssSUB << ", ";
					else isFirst = false;
					ssSUB << to_string(*cur_file->start_event);
				}
				if (cur_file->event_count != nullptr)
				{
					if (!isFirst) ssSUB << ", ";
					else isFirst = false;
					ssSUB << to_string(*cur_file->event_count);
				}
				if (cur_macro->add_args != "")
				{
					if (!isFirst) ssSUB << ", ";
					else isFirst = false;
					ssSUB << cur_macro->add_args;
				}
				if (job_par->pcLogs != nullptr)
					ssSUB << ")' > " << job_par->pcLogs << "_" << thread_counter << " 2>&1";
				else
					ssSUB << ")'";

#ifdef DEBUG_OUTPUT
				// local command
				cout<<"DEBUG nica-scheduler$ Local command = "<<ssSUB.rdbuf()<<endl;
#endif
				// write and execute temporary bash file
				ofstream myfile;
				long int t = time(nullptr);
				sprintf(temp_file, "temp_%d_%d.sh", thread_counter, (int)t); // generate output name for temporary bash file
				myfile.open (temp_file);
				myfile<<ssSUB.rdbuf();
				myfile.close();
				sprintf(run_temp, "bash %s", temp_file);

				pthread_mutex_lock(thread_par->mut);
				cout<<"nica-scheduler$ Task "<<thread_counter<<" is running..."<<endl;
				if (strRealInputFile != "") cout<<"input data - "<<strRealInputFile<<endl;
				if (!strRealOutputFile.isNull()) cout<<"output data - "<<strRealOutputFile.GetValue()<<endl;
				cout<<endl;
				pthread_mutex_unlock(thread_par->mut);

				// run task in thread
				int system_return = system(run_temp);
				if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;

				// copy file from the temporary location to the output path
				if ((cur_file->strGetPath != "") && (strFinalOutputFile.GetValue() != ""))
				{
					sprintf(run_temp, "%s %s %s",
							cur_file->strGetCommand.c_str(),
							cur_file->strGetPath.c_str(),
							strFinalOutputFile.GetValue().c_str());
					system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
				}// copy file from the temporary location to the output path

				// clean the temporary files from <put>, <get> (always now) and from <clean>
				if (cur_file->strPutPath != "")
				{
					sprintf(run_temp, "rm -rf %s", cur_file->strPutPath.c_str());
					system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
				}
				if (cur_file->strGetPath != "")
				{
					sprintf(run_temp, "rm -rf %s", cur_file->strGetPath.c_str());
					system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
				}
				if (cur_file->strCleanPath != "")
				{
					sprintf(run_temp, "rm -rf %s", cur_file->strCleanPath.c_str());
					system_return = system(run_temp);
					if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
				}

				cout<<"nica-scheduler$ Task "<<thread_counter<<" has been finished"<<endl;

				//delete temporary bash file
				sprintf(run_temp, "rm -rf %s", temp_file);
				system_return = system(run_temp);
				if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;

				sem_post(thread_par->sem);
			}// else (parallel_mode = 1)
		}// if (cur_file != nullptr)
	}// for (size_t ind_macro = 0; ind_macro < job_par->vecMacros.size(); ind_macro++)

	pthread_exit(nullptr);
	return nullptr;
}

static struct option long_options[] =
{
        {"help",    no_argument,        0, 'h'},
        {"file",    required_argument,  0, 'f'},
        {"db",      required_argument,  0, 'd'},
        {"database",required_argument,  0, 'd'},
        {0, 0, 0, 0}
};

void ShowHelpMessage()
{
    cout<<"Usage: nica-scheduler job_description.xml [options]"<<endl<<
          "Allowed options:"<<endl<<
          "  -h/--help              : produce help message"<<endl<<
          "  -f/--file arg          : set XML file path with a job description"<<endl<<endl<<
          "Specific options:"<<endl<<
          "  -d/--db/--database arg : predefined settings for the Condition Database (now 'bmn' supported only)"<<endl<<endl;
}

/* Main Function */
int main(int argc, char** argv)
{
	if (argc < 2)
	{
        ShowHelpMessage();
        info_message("ERROR nica-scheduler$ XML file path (containing job description) must be set", 1);
        return 1;
	}

	// parsing command line arguments
	string xml_file_path = "", exp_database = "";
	int option_index = 0, c;
    while ((c = getopt_long(argc, argv, "hf:d:", long_options, &option_index)) != -1)
	{
        switch (c)
	    {
	        case 0:
	        {
	            if (long_options[option_index].flag != 0)
	                break;
	            printf ("option %s", long_options[option_index].name);
	            if (optarg)
	                printf (" with arg %s", optarg);
	            printf ("\n");
	            break;
	        }
            case 'h':
	            ShowHelpMessage();
                return 0;
            case 'f':
	            xml_file_path = optarg;
	            break;
            case 'd':
	            exp_database = optarg;
	            break;
	        case '?':
	            /* getopt_long already printed an error message. */
                break;
	    }
	}
    // remaining command line arguments (not options)
	if (optind < argc)
	{
        if (((argc - optind) == 1) && (xml_file_path == ""))
            xml_file_path = argv[optind];
        else
        {
            info_message("ERROR nica-scheduler$ Argument list is incorrect.\nPlease, check information on command line arguments in the 'README.md' file", 1);
            return 1;
        }
	}
    //cout<<"xml_file_path = "<<xml_file_path<<". exp_database = "<<exp_database<<endl;
    if (xml_file_path == "")
    {
        info_message("ERROR nica-scheduler$ XML file path (containing job description) must be set", 1);
        return 1;
    }

    bool isDBSettingsHigh = false;  // high means the high priority value of the parameter (a console parameter has the highest priority)
    struct_database_settings dbSettingsPre;
    if (exp_database != "")
    {
        auto iter_db_settings = predefined_database_settings.find(exp_database);
        if (iter_db_settings == predefined_database_settings.end())
        {
            info_message((TString::Format("ERROR nica-scheduler$ Predefined database settings were not found for '%s'", exp_database.c_str())).Data(), 1);
            return 1;
        } else {
            dbSettingsPre = iter_db_settings->second;
            isDBSettingsHigh = true;
        }
    }

    // obtain pointer to XML document for a given input file path
    xmlDocPtr doc = xmlReadFile(xml_file_path.c_str(), nullptr, 0);
    if (doc == nullptr)
	{
        info_message((TString::Format("ERROR nica-scheduler$ Failed to open input XML file: '%s'", xml_file_path.c_str())).Data(), 1);
		return 2;
	}

    // get root element
	xmlNodePtr root = xmlDocGetRootElement(doc);

	// temporary variables
	char* pcSUB;
	string data;
	int command_length;

	// map with Job name -> ID
	multimap<string,string> mapNameID;
	// map with Job name -> Output List
	multimap< string,vector<nullString>* > mapJobOutput;

	// path to executable's directory ('/' - last char)
	string exe_dir = get_app_dir_linux();

    // initialization before job cycle
	srand(time(nullptr));
	int job_counter = 0;
    BATCH_SYSTEM_NAME batch_system = SGE_BATCH_SYSTEM;	// default value: SGE

    // cycle for all jobs
	xmlNodePtr cur_node = root;
	while (cur_node)
	{
        // if tag is XML_ELEMENT_NODE then continue
        if (cur_node->type == XML_ELEMENT_NODE)
        {
            char *pc_temp; int i_temp;
        	// if tag means JOBS (array of jobs) then step down and continue
        	if (strcmp((char*)cur_node->name, "jobs") == 0)
        	{
        		pc_temp = (char*) xmlGetProp(cur_node, (unsigned char*)"batch");
        		if (pc_temp != nullptr)
        		{
        			char* pc_batch_system = convert_pchar_to_lowercase_new(pc_temp);
        			if (strcmp(pc_batch_system, "slurm") == 0)
        				batch_system = SLURM_BATCH_SYSTEM;
        			else
        			{
        				if (strcmp(pc_batch_system, "torque") == 0)
        					batch_system = TORQUE_BATCH_SYSTEM;
        			}
        			free(pc_temp);
        			free(pc_batch_system);
        		}
        		pc_temp = (char*) xmlGetProp(cur_node, (unsigned char*)"database");
        		if ((pc_temp != nullptr) && (!isDBSettingsHigh))
        		{
        		    auto iter_db_settings = predefined_database_settings.find(pc_temp);
        		    if (iter_db_settings == predefined_database_settings.end())
        		        info_message((TString::Format("WARNING nica-scheduler$ Predefined database settings were not found for '%s'. The parameter will be ignored.", pc_temp)).Data(), 1);
        		    else
        		        dbSettingsPre = iter_db_settings->second;
        		    free(pc_temp);
        		}

        		cur_node = cur_node->children;
        	}

        	// if tag means JOB
        	if (strcmp((char*)cur_node->name, "job") == 0)
        	{
        		bool isError = false;
        		job_counter++;
        		bool isPuts = false, isGets = false, isCleans = false;
        		structJobPar* job_par = new structJobPar();

                // get job name
        		pc_temp = (char*) xmlGetProp(cur_node, (unsigned char*)"name");
                if (pc_temp != nullptr)
                {
                	job_par->job_name = pc_temp;
                	free(pc_temp);
                }

                struct_database_settings dbSettings(dbSettingsPre);
                pc_temp = (char*) xmlGetProp(cur_node, (unsigned char*)"database");
                if ((pc_temp != nullptr) && (!isDBSettingsHigh))
                {
                    auto iter_db_settings = predefined_database_settings.find(pc_temp);
                    if (iter_db_settings == predefined_database_settings.end())
                        info_message((TString::Format("WARNING nica-scheduler$ Predefined database settings were not found for '%s'. The parameter will be ignored.", pc_temp)).Data(), 1);
                    else
                        dbSettings = iter_db_settings->second;
                    free(pc_temp);
                }
                if (dbSettings.db_name == "")
                {
                    dbSettings.db_host = UNI_DB_HOST; dbSettings.db_name = UNI_DB_NAME;
                    dbSettings.db_username = UNI_DB_USERNAME; dbSettings.db_password = UNI_DB_PASSWORD;
                }
                job_par->dbSettings = dbSettings;

                pc_temp = (char*) xmlGetProp(cur_node, (unsigned char*)"batch");
                if (pc_temp != nullptr)
                {
                	char* pc_batch_system = convert_pchar_to_lowercase_new(pc_temp);
                	if (strcmp(pc_batch_system, "slurm") == 0)
                		batch_system = SLURM_BATCH_SYSTEM;
                	else
                	{
                		if (strcmp(pc_batch_system, "torque") == 0)
                			batch_system = TORQUE_BATCH_SYSTEM;
                	}
                	free(pc_temp);
                	free(pc_batch_system);
                }
                batch_commands batch_com = mapBS[batch_system];

                string strQsubFile = batch_com.job_begin,
                strQsubInitInputFile = "declare -a InputFileArray=(", strQsubInitOutputFile = "declare -a OutputFileArray=(",
				strQsubInitStartEvent = "declare -a StartEventArray=(", strQsubInitEventCount = "declare -a EventCountArray=(",
				strQsubInitAddArgs = "declare -a AddArgsArray=(", strQsubInitPut = "declare -a PutArray=(",
				strQsubInitGet = "declare -a GetArray=(", strQsubInitClean = "declare -a CleanArray=(";

                // get job dependency
                pc_temp = (char*) xmlGetProp(cur_node, (unsigned char*)"dependency");
                if (pc_temp != nullptr)
                {
                	multimap<string,string>::iterator it = mapNameID.find(pc_temp);
                	if (it == mapNameID.end())
                		cout<<"nica-scheduler$ WARNING: dependency was not found: "<<pc_temp<<endl;
                	else
                		job_par->dependency_name = batch_com.array_dependency_option + it->second;
                	free(pc_temp);
                }

                /* PARSING TAGS of the JOB */
                xmlNodePtr sub_node = cur_node->children;
                while (sub_node)
                {
                	if (sub_node->type == XML_ELEMENT_NODE)
                	{
                		// COMMAND LINE TAG
                		if (strcmp((char*)sub_node->name, "command") == 0)
                		{
                			if (job_par->command_line != nullptr)
                				cout<<"nica-scheduler$ WARNING: job command line is reassigned"<<endl;

                			job_par->command_line = (char*) xmlGetProp(sub_node, (unsigned char*)"line");
                			job_par->isCommand = true;

                		    sub_node = sub_node->next;
                		    continue;
                		}

                		// MACRO NAME TAG
                        if (strcmp((char*)sub_node->name, "macro") == 0)
                        {
                        	structMacroPar* macro_par = new structMacroPar;

                        	// get macro name
                        	macro_par->macro_name = (char*) xmlGetProp(sub_node, (unsigned char*)"name");
                        	// get macro path
                        	macro_par->macro_path = (char*) xmlGetProp(sub_node, (unsigned char*)"path");
                        	if (macro_par->macro_path == nullptr)
                        	{
                        		isError = true;
                        		info_message("ERROR nica-scheduler$ Macro path was not set (please, add 'path' attribute)!", 1);
                        	    break;
                        	}

                        	// get global start event parameter
                        	pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"start_event");
                        	if (pc_temp != nullptr)
                        	{
                        		macro_par->start_event = new int;
                        	    *macro_par->start_event = atoi(pc_temp);
                        	    free(pc_temp);
                        	}

                        	// get global event count parameter
                        	pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"event_count");
                        	if (pc_temp != nullptr)
                        	{
                        		if (!is_string_number(pc_temp))
                        		{
                        			isError = true;
                        			info_message("ERROR nica-scheduler$ Event count must be a number!", 1);
                        			free(pc_temp);
                        			break;
                        		}
                        		macro_par->event_count = new int;
                        	    *macro_par->event_count = atoi(pc_temp);
                        	    if (*macro_par->event_count < 0)
                        	    {
                        	    	isError = true;
                        	    	info_message("ERROR nica-scheduler$ Event count must be a positive number or 0 (for all events)!", 1);
                        	    	free(pc_temp);
                        	        break;
                        	    }
                        	    free(pc_temp);
                        	}

                        	// get additional arguments
                        	pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"add_args");
                        	if (pc_temp != nullptr)
                        	{
                        		macro_par->add_args = pc_temp;
                        		free(pc_temp);
                        		// replace ''' symbols for '"'
                        		replace_string_in_text(macro_par->add_args, "'", "\"");
                        	}

                        	// get file list to process by the macro
                        	if (ParseMacroFiles(sub_node->children, job_par, macro_par, mapJobOutput, batch_com) == true)
                        		isError = true;

                        	job_par->vecMacros.push_back(macro_par);

                            sub_node = sub_node->next;
                            continue;
                        }

                        // RUN TYPE TAG
                        if (strcmp((char*)sub_node->name, "run") == 0)
                        {
                        	pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"mode");
                            if (pc_temp != nullptr)
                            {
                            	if (strcmp(pc_temp, "global") == 0)
                                    job_par->isLocal = false;
                            	free(pc_temp);
                            }

                            // get processor count to use (it will be corrected according to the subtask count)
                            job_par->sproc_count = (char*) xmlGetProp(sub_node, (unsigned char*)"count");
                            // get operative memory required for the separate task (converted to GB)
                            pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"memory1");
                            if (pc_temp != nullptr)
                            {
                            	i_temp = floor(byte_size_to_double(pc_temp, 'M') + 0.5);
                            	if (i_temp > 0)
                            		job_par->operative_memory1 = int_to_string(i_temp);
                            	else
                            		cout<<"nica-scheduler$ WARNING: 'memory1' field contains incorrect format, then it is ignored"<<endl;

                               	free(pc_temp);
                            }
                            pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"config");
                            if (pc_temp != nullptr)
                            {
                            	job_par->strConfig = pc_temp;
                            	free(pc_temp);
                            }
                            job_par->pcPriority = (char*) xmlGetProp(sub_node, (unsigned char*)"priority");
                            job_par->pcLogs = (char*) xmlGetProp(sub_node, (unsigned char*)"logs");
                            job_par->pcQueue = (char*) xmlGetProp(sub_node, (unsigned char*)"queue");
                            job_par->pcQOS = (char*) xmlGetProp(sub_node, (unsigned char*)"qos");
                            job_par->pcWorkDir = (char*) xmlGetProp(sub_node, (unsigned char*)"work_dir");

                            job_par->pcHosts = (char*) xmlGetProp(sub_node, (unsigned char*)"hosts");
                            if ((job_par->pcHosts != nullptr) && (batch_com.sheduler_hosts_separation != ','))
                            	replace_char(job_par->pcHosts, ',', batch_com.sheduler_hosts_separation);

                            pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"core_dump");
                            if (pc_temp != nullptr)
                            {
                               	if (strcmp(pc_temp, "true") == 0)
                               		job_par->isCoreDump = true;
                                free(pc_temp);
                            }
							
                            sub_node = sub_node->next;
                            continue;
                        }
                    }

                    sub_node = sub_node->next;
                }//while PARSING TAGS

                // START MAIN EXECUTION AFTER PARSING
                if ((!job_par->isCommand) && (job_par->vecMacros.size() == 0))
                {
                	info_message("ERROR nica-scheduler$ No macros in the job!", 1);
                	isError = true;
                }

                if (isError)
                {
                	info_message("ERROR nica-scheduler$ This job will be skipped because of errors above!", 1);
                	delete job_par;
                    cur_node = cur_node->next;
                    continue;
                }

                // 1. define total processor count and fill 'parallel_mode' parameter
                // 2. save list of the output files to mapJobOutput
                int globalParallelCount = 0;
                if (job_par->isCommand) globalParallelCount = 1;
                vector<nullString>* vecOutput = new vector<nullString>;
                for (size_t ind_macro = 0; ind_macro < job_par->vecMacros.size(); ind_macro++)
                {
                	int iParallelCount;
                	if (job_par->isCommand)
                		iParallelCount = 1;
                	else
                		iParallelCount = 0;

                	structMacroPar* cur_macro = job_par->vecMacros[ind_macro];
                	for (vector<structFilePar*>::iterator iter = cur_macro->vecFiles.begin(); iter != cur_macro->vecFiles.end(); iter++)
                	{
                		structFilePar* filePar = *iter;
                		if (filePar->strParallelMode != "")
                		{
                			if (filePar->strParallelMode == "0")
                			{
                				if (job_par->isLocal)
                					filePar->iParallelMode = get_linux_processor_count();
                				else
                				{
                					if (job_par->pcQueue == nullptr)
                						filePar->iParallelMode = get_batch_processor_count(batch_system);
                					else
                						filePar->iParallelMode = get_batch_processor_count(batch_system, job_par->pcQueue);
                				}

                				if (filePar->iParallelMode < 1)
                					filePar->iParallelMode = 1;
                			}
                			else
                			{
                				filePar->iParallelMode = atoi(filePar->strParallelMode.c_str());
                				if (filePar->iParallelMode < 1)
                					filePar->iParallelMode = 1;
                			}
                		}
                		else
                			filePar->iParallelMode = 1;

                		iParallelCount += filePar->iParallelMode;

                		if (ind_macro == (job_par->vecMacros.size() - 1))
                			vecOutput->push_back(filePar->strFileOut);
                	}// for macro files

                	if ((ind_macro > 0) && (globalParallelCount != iParallelCount))
                	{
                		info_message("ERROR nica-scheduler$ The file count in macros of the job is not the same. This job will be skipped!", 1);
                		delete job_par;
                		cur_node = cur_node->next;
                		continue;
                	}
                	globalParallelCount = iParallelCount;
                }// for job macros
                mapJobOutput.insert(pair< string, vector<nullString>* >(job_par->job_name, vecOutput));
				
                if (job_par->strConfig != "")
                {
                    job_par->strConfig = ". " + job_par->strConfig;
                    replace_string_in_text(job_par->strConfig, ",", ";. ");
                }

                /*********************/
                /* GLOBAL SCHEDULING */
                /*********************/
                string strDiff;
                FILE *stream = nullptr;
                if (!job_par->isLocal)
                {
                	// define process count for the job
                	int proc_count = 1;
                	if (job_par->sproc_count != nullptr)
                	{
                		// if processor count was set to 0 then use all the available processors
                		if ((job_par->sproc_count[0] == '0') && (strlen(job_par->sproc_count) == 1))
                		{
                			if (job_par->pcQueue == nullptr)
                				proc_count = get_batch_processor_count(batch_system);
                			else
                				proc_count = get_batch_processor_count(batch_system, job_par->pcQueue);

                			if (proc_count == 0)
                			{
                				info_message("ERROR nica-scheduler$ Batch processors were not defined. This job will be skipped!", 1);
                				delete job_par;
                			    cur_node = cur_node->next;
                			    continue;
                			}

                			cout<<"nica-scheduler$ The batch queue has "<<proc_count<<" processor cores being available for user jobs."<<endl;
                		}
                		else
                			proc_count = atoi(job_par->sproc_count);
                	}
                	else
                		proc_count = globalParallelCount;

                	if (proc_count == 0)
                	{
                		info_message("ERROR nica-scheduler$ Processor count can not be equal 0. This job will be skipped!", 1);
                		delete job_par;
                	    cur_node = cur_node->next;
                	    continue;
                	}

                	// disable dumping core in case of failures
                	if (job_par->isCoreDump)
                	   	strQsubFile += "set ulimit -c 0\n\n";
                	// load config file for enviroment
                	if (job_par->strConfig != "")
                    	strQsubFile += job_par->strConfig + "\n\n";

                    // define priority of the job (default: 0)
                    int iPriority = 0;
                    if (job_par->pcPriority != nullptr)
                    	iPriority = atoi(job_par->pcPriority);

                    // process count is equal count of input files if more
                    if ((globalParallelCount > 0) && (proc_count > globalParallelCount))
                    	proc_count = globalParallelCount;

                    vector<string> vecParallelOutputs;
                    vector<int> vecUnionMode;

                    // if there are files to process then write info to the special variables
                    if (globalParallelCount > 0)
                    {
                    	for (size_t ind_macro = 0; ind_macro < job_par->vecMacros.size(); ind_macro++)
                    	{
                    		structMacroPar* cur_macro = job_par->vecMacros[ind_macro];

                    		for (vector<structFilePar*>::iterator iter = cur_macro->vecFiles.begin(); iter != cur_macro->vecFiles.end(); iter++)
                    		{
                    			structFilePar* filePar = *iter;

                    			int* cur_start_event = cur_macro->start_event;
                    			if (filePar->start_event != nullptr)
                    				cur_start_event = filePar->start_event;

                    			int* cur_event_count = cur_macro->event_count;
                    			if (filePar->event_count != nullptr)
                    				cur_event_count = filePar->event_count;

                    			int i_parallel_mode = filePar->iParallelMode;
                    			if ((i_parallel_mode > 1) && ((cur_start_event == nullptr) || (cur_event_count == nullptr)))
                    			{
                    				i_parallel_mode = 1;
                    				cout<<"nica-scheduler$ WARNING: parallel_mode should be used with 'event_count' parameter, paralell_mode is ignored"<<endl;
                    			}

                    			if (i_parallel_mode > 1)
                    			{
                    				string strRealInputFile = filePar->strFileIn;
                    				// strRealOutputFile - output file path for ROOT macro; strFinalOutputFile - result file path to copy after processing
                    				nullString strRealOutputFile = filePar->strFileOut, strFinalOutputFile = nullString();
                    				// file with <put> commands
                    				if (filePar->strPutPath != "")
                    				{
                    					strQsubInitPut += "\""; strQsubInitPut += filePar->strPutCommand; strQsubInitPut += " ";
                    					strQsubInitPut += filePar->strFileIn; strQsubInitPut += " ";
                    					strQsubInitPut += filePar->strPutPath; strQsubInitPut += "\" ";
                    					isPuts = true;

                    					strRealInputFile = filePar->strPutPath;
                    				}
                    				else strQsubInitPut += "\">\" ";
                    				if (filePar->strGetPath != "")
                    				{
                    					if (strRealOutputFile.GetValue() != "")
                    					{
                    						strRealOutputFile.SetValue(filePar->strGetPath);
                    						strFinalOutputFile = filePar->strFileOut;
                    					}
                    					else
                    					{
                    						if (filePar->strGetOutput != "")
                    							strFinalOutputFile.SetValue(filePar->strGetOutput);
                    					}
                    				}
                    				// generate output name for output paths
                    				string par = strRealOutputFile.GetValue();

                    				int start = *cur_start_event;
                    				int counter = 1;
                    				for (int j = 0; j < i_parallel_mode; j++)
                    				{
                    					nullString sOutFile = strRealOutputFile;
                    					int event_per_proc = (*cur_event_count+j)/proc_count;

                    					if (event_per_proc != 0)
                    					{
                    						string sGetInput = "", sGetOutput = sOutFile.GetValue();
                    						strQsubInitInputFile += "\""; strQsubInitInputFile += strRealInputFile;
                    						strQsubInitInputFile += "\" ";

                    						if (!sOutFile.isNull())
                    						{
                    							sOutFile.SetValue(GenerateOutputFilePath(sOutFile.GetValue(), counter));

                    							strQsubInitOutputFile += "\""; strQsubInitOutputFile += sOutFile.GetValue();
                    							strQsubInitOutputFile += "\" ";
                    						}
                    						else strQsubInitOutputFile += "\">\" ";

                    						string strInt = int_to_string(start);
                    						strQsubInitStartEvent += "\""; strQsubInitStartEvent += strInt;
                    						strQsubInitStartEvent += "\" ";

                    						strInt = int_to_string(event_per_proc);
                    						strQsubInitEventCount += "\""; strQsubInitEventCount += strInt;
                    						strQsubInitEventCount += "\" ";

                    						if (cur_macro->add_args != "")
                    						{
                    							strQsubInitAddArgs += "\"";
                    							string mask_string = cur_macro->add_args;
                    							replace_string_in_text(mask_string, "\"", "\\\"");
                    							strQsubInitAddArgs += mask_string;
                    							strQsubInitAddArgs += "\" ";
                    						}
                    						else strQsubInitAddArgs += "\">\" ";

                    						// copy file from the temporary location to the output path
                    						if ((filePar->strGetPath != "") && (strFinalOutputFile.GetValue() != ""))
                    						{
                    							strQsubInitGet += "\""; strQsubInitGet += filePar->strGetCommand; strQsubInitGet += " ";
                    							sGetInput = get_directory_path(filePar->strGetPath) + string("/") + get_file_name_with_ext(sOutFile.GetValue());
                    							strQsubInitGet += sGetInput; strQsubInitGet += " ";
                    							sGetOutput = get_directory_path(strFinalOutputFile.GetValue()) + string("/") + get_file_name_with_ext(sOutFile.GetValue());
                    							strQsubInitGet += sGetOutput; strQsubInitGet += "\" ";
                    							isGets = true;
                    						}// copy file from the temporary location to the output path
                    						else strQsubInitGet += "\">\" ";

                    						// clean the temporary files from <put>, <get> (always now) and from <clean>
                    						bool is_clean = false;
                    						if (filePar->strPutPath != "")
                    						{
                    							if (is_clean == false) strQsubInitClean += "\"";
                    							else strQsubInitClean += " ";
                    							strQsubInitClean += filePar->strPutPath;
                    							isCleans = true;

                    							is_clean = true;
                    						}
                    						if (filePar->strGetPath != "")
                    						{
                    							if (is_clean == false) strQsubInitClean += "\"";
                    							else strQsubInitClean += " ";
                    							strQsubInitClean += sGetInput;
                    							isCleans = true;

                    							is_clean = true;
                    						}
                    						if (filePar->strCleanPath != "")
                    						{
                    							if (is_clean == false) strQsubInitClean += "\"";
                    							else strQsubInitClean += " ";
                    							strQsubInitClean += filePar->strCleanPath;
                    							isCleans = true;

                    							is_clean = true;
                    						}
                    						if (is_clean)
                    							strQsubInitClean += "\" ";

                    						counter++;

                    						if (!sOutFile.isNull())
                    							par += " " + sGetOutput;
                    					}//if (event_per_proc != 0)

                    					start = start + event_per_proc;
                    				}//for (int j = 0; j < i_parallel_mode; j++)

                    				if ((ind_macro == job_par->vecMacros.size()-1) && (counter > 1) && (filePar->iMerge >= 0))
                    				{
                    					vecParallelOutputs.push_back(par);
                    					vecUnionMode.push_back(filePar->iMerge);
                    				}
                    			}//if (i_parallel_mode > 1)
                    			else // i_parallel_mode <= 1
                    			{
                    				string strRealInputFile = filePar->strFileIn;
                    				// strRealOutputFile - output file path for ROOT macro; strFinalOutputFile - result file path to copy after processing
                    				nullString strRealOutputFile = filePar->strFileOut, strFinalOutputFile = nullString();
                    				// file with <put> commands
                    				if (filePar->strPutPath != "")
                    				{
                    					strQsubInitPut += "\""; strQsubInitPut += filePar->strPutCommand; strQsubInitPut += " ";
                    					strQsubInitPut += filePar->strFileIn; strQsubInitPut += " ";
                    					strQsubInitPut += filePar->strPutPath; strQsubInitPut += "\" ";
                    					isPuts = true;

                    					strRealInputFile = filePar->strPutPath;
                    				}
                    				else strQsubInitPut += "\">\" ";
                    				if (filePar->strGetPath != "")
                    				{
                    					if (strRealOutputFile.GetValue() != "")
                    					{
                    						strRealOutputFile.SetValue(filePar->strGetPath);
                    						strFinalOutputFile = filePar->strFileOut;
                    					}
                    					else
                    					{
                    						if (filePar->strGetOutput != "")
                    							strFinalOutputFile.SetValue(filePar->strGetOutput);
                    					}
                    				}

                    				strQsubInitInputFile += "\""; strQsubInitInputFile += strRealInputFile;
                    				strQsubInitInputFile += "\" ";

                    				if (!strRealOutputFile.isNull())
                    				{
                    					strQsubInitOutputFile += "\""; strQsubInitOutputFile += strRealOutputFile.GetValue();
                    					strQsubInitOutputFile += "\" ";
                    				}
                    				else strQsubInitOutputFile += "\">\" ";

                    				if (cur_start_event != nullptr)
                    				{
                    					string strInt = int_to_string(*cur_start_event);
                    					strQsubInitStartEvent += "\""; strQsubInitStartEvent += strInt;
                    					strQsubInitStartEvent += "\" ";

                    					strInt = int_to_string(*cur_event_count);
                    					strQsubInitEventCount += "\""; strQsubInitEventCount += strInt;
                    					strQsubInitEventCount += "\" ";
                    				}
                    				else { strQsubInitStartEvent += "\">\" "; strQsubInitEventCount += "\">\" ";}

                    				if (cur_macro->add_args != "")
                    				{
                    					strQsubInitAddArgs += "\"";
                    					string mask_string = cur_macro->add_args;
                    					replace_string_in_text(mask_string, "\"", "\\\"");
                    					strQsubInitAddArgs += mask_string;
                    					strQsubInitAddArgs += "\" ";
                    				}
                    				else strQsubInitAddArgs += "\">\" ";

                    				// copy file from the temporary location to the output path
                    				if ((filePar->strGetPath != "") && (strFinalOutputFile.GetValue() != ""))
                    				{
                    					strQsubInitGet += "\""; strQsubInitGet += filePar->strGetCommand; strQsubInitGet += " ";
                    					strQsubInitGet += filePar->strGetPath; strQsubInitGet += " ";
                    					strQsubInitGet += strFinalOutputFile.GetValue(); strQsubInitGet += "\" ";
                    					isGets = true;
                    				}// copy file from the temporary location to the output path
                    				else strQsubInitGet += "\">\" ";

                    				// clean the temporary files from <put>, <get> (always now) and from <clean>
                    				bool is_clean = false;
                    				if (filePar->strPutPath != "")
                    				{
                    					if (is_clean == false) strQsubInitClean += "\"";
                    					else strQsubInitClean += " ";
                    					strQsubInitClean += filePar->strPutPath;
                    					isCleans = true;

                    					is_clean = true;
                    				}
                    				if (filePar->strGetPath != "")
                    				{
                    					if (is_clean == false) strQsubInitClean += "\"";
                    					else strQsubInitClean += " ";
                    					strQsubInitClean += filePar->strGetPath;
                    					isCleans = true;

                    					is_clean = true;
                    				}
                    				if (filePar->strCleanPath != "")
                    				{
                    					if (is_clean == false) strQsubInitClean += "\"";
                    					else strQsubInitClean += " ";
                    					strQsubInitClean += filePar->strCleanPath;
                    					isCleans = true;

                    					is_clean = true;
                    				}
                    				if (is_clean)
                    					strQsubInitClean += "\" ";
                    			}//else (i_parallel_mode <= 1)
                    		}//for files for macro
                    	}// for macros in job
                    }

                    // GENERATE JOB: *.sh file for a batch system
                    if (job_par->isCommand)
                    {
                    	strQsubFile += job_par->command_line;
                    	strQsubFile += "\n";
                    }
                    else
                    {
                    	strQsubFile += strQsubInitInputFile; strQsubFile += ")\n\n";
                    	strQsubFile += strQsubInitOutputFile; strQsubFile += ")\n\n";
                    	strQsubFile += strQsubInitStartEvent; strQsubFile += ")\n\n";
                    	strQsubFile += strQsubInitEventCount; strQsubFile += ")\n\n";
                    	strQsubFile += strQsubInitAddArgs; strQsubFile += ")\n\n";
                    	if (isPuts)
                    		strQsubFile += strQsubInitPut, strQsubFile += ")\n\n";
                    	if (isGets)
                    		strQsubFile += strQsubInitGet, strQsubFile += ")\n\n";
                    	if (isCleans)
                    		strQsubFile += strQsubInitClean, strQsubFile += ")\n\n";
                    	strQsubFile += "\n";

                    	for (size_t ind_macro = 0; ind_macro < job_par->vecMacros.size(); ind_macro++)
                    	{
                    		structMacroPar* cur_macro = job_par->vecMacros[ind_macro];

                    		// get line number in the job script
                    		int start_line_number = ind_macro * cur_macro->vecFiles.size();
                    		strQsubFile += "let \"array_index = \""; strQsubFile += batch_com.batch_task_id;
                    		strQsubFile += "\" - 1 + "; strQsubFile += to_string(start_line_number); strQsubFile += "\"\n\n";

                    		// copy file to the temporary storage
                    		if (isPuts)
                    		{
                    			strQsubFile += "element=${PutArray[${array_index}]}\n"
                    						   "if [ \"${element}\" != \">\" ]\nthen\n"
                    						   " set -f # avoid globbing (expansion of *)\n"
                    						   "# arr=(${element// / })\n"
                    						   "# comm=\"${arr[0]} ${arr[1]} ${arr[2]}\"\n"
                    		               	   "# eval $comm\n"
                    				   	   	   " eval ${element}\n"
                    					   	   "fi\n\n";
                    		}

                    		// run macro by ROOT
                    		strQsubFile += "element=${InputFileArray[${array_index}]}\n";
                    		strQsubFile += "comm=\"root -b -q '"; strQsubFile += cur_macro->macro_path;
                    		strQsubFile += "(\\\"${element}\\\"\"\n"
                    					   "element=${OutputFileArray[${array_index}]}\n"
                    					   "if [ \"${element}\" != \">\" ]\nthen\n"
                    		               " comm=\"${comm},\\\"${element}\\\"\"\n"
                    		               "fi\n"
                    					   "element=${StartEventArray[${array_index}]}\n"
                    					   "if [ \"${element}\" != \">\" ]\nthen\n"
                    					   " comm=\"${comm},${element}\"\n"
                    					   "fi\n"
                    					   "element=${EventCountArray[${array_index}]}\n"
                    					   "if [ \"${element}\" != \">\" ]\nthen\n"
                    					   " comm=\"${comm},${element}\"\n"
                    					   "fi\n"
                    					   "element=${AddArgsArray[${array_index}]}\n"
                    					   "if [ \"${element}\" != \">\" ]\nthen\n"
                    					   " comm=\"${comm},${element}\"\n"
                    					   "fi\n"
                    				       "comm=\"$comm)'\"\n\n"
                    				       "eval $comm\n\n";

                    		// copy file from the temporary location to the output path
                    		if (isGets)
                    		{
                    			strQsubFile += "element=${GetArray[${array_index}]}\n"
                    						   "if [ \"${element}\" != \">\" ]\nthen\n"
                    					       " set -f # avoid globbing (expansion of *)\n"
                    					       "# arr=(${element// / })\n"
                    						   "# comm=\"${arr[0]} ${arr[1]} ${arr[2]}\"\n"
                    					       "# eval $comm\n"
                    						   " eval ${element}\n"
                    					       "fi\n\n";
                    		}

                    		// clean the temporary files from <put>, <get> (always now) and from <clean>
                    		if (isCleans)
                    		{
                    			strQsubFile += "element=${CleanArray[${array_index}]}\n"
                    					       "if [ \"${element}\" != \">\" ]\nthen\n"
                    					       " set -f # avoid globbing (expansion of *)\n"
                    					       " arr=(${element// / })\n"
                    						   " comm=\"rm -rf \"\n"
                    						   " for i in \"${arr[@]}\"\n"
                    						   " do\n"
                    						   "  comm=\"${comm}${i} \"\n"
                    						   " done\n"
                    						   " eval $comm\n"
                    						   "fi\n\n";
                    		}
                    	}// for macros in job
                    }
#ifdef DEBUG_OUTPUT
                    //strQsubFile += "echo \"  Current DIR ls: `ls -alh`\"\n";
#endif
                    strQsubFile += "echo \"  End date: `date`\"\nexit 0\n";

                    // write the job to temporary file
                    sprintf(buffer, "job_%x%x.sh", rand(), rand());
                    string job_file_path = exe_dir + buffer;
                    FILE* pJobFile = fopen(job_file_path.c_str(), "wt");
                    if (pJobFile == nullptr)
                    {
                    	info_message(TString::Format("ERROR nica-scheduler$ Job file was not created: %s. "
                    			"This job will be skipped!", job_file_path.c_str()).Data(), 1);
                    	delete job_par;
                    	cur_node = cur_node->next;
                    	continue;
                    }
                    fwrite(strQsubFile.c_str(), strQsubFile.length(), sizeof(char), pJobFile);
                    fclose(pJobFile);
//#ifdef DEBUG_OUTPUT
//                    // qsub file content
//                    cout<<"DEBUG nica-scheduler$ QSUB file content:"<<endl<<strQsubFile<<endl;
//#endif
                    command_length = 34 + batch_com.scheduler_run_job.length() + job_file_path.length() +
                    				 job_par->job_name.length() + job_par->dependency_name.length() +
									 job_par->operative_memory1.length();
                    if (iPriority != 0)
                    	command_length += strlen(job_par->pcPriority) + 8;
                    if (job_par->pcQueue != nullptr)
                    	command_length += strlen(job_par->pcQueue) + 4;
                    if (job_par->pcQOS != nullptr)
                    	command_length += strlen(job_par->pcQOS) + 8;
                    if (job_par->pcHosts != nullptr)
                    	command_length += strlen(job_par->pcHosts) + 10;
                    if (job_par->pcWorkDir != nullptr)
                        command_length += strlen(job_par->pcWorkDir) + 5;
                    pcSUB = new char[command_length];

                    sprintf(pcSUB, batch_com.scheduler_run_job.c_str(),
                            job_par->job_name.c_str(), job_par->dependency_name.c_str(), globalParallelCount, proc_count);
                    if (iPriority != 0)
                    	sprintf(pcSUB + strlen(pcSUB), batch_com.sheduler_priority_option.c_str(), iPriority);
                    if (job_par->pcQueue != nullptr)
                        sprintf(pcSUB + strlen(pcSUB), batch_com.sheduler_queue_option.c_str(), job_par->pcQueue);
                    if (job_par->pcQOS != nullptr)
                        sprintf(pcSUB + strlen(pcSUB), batch_com.sheduler_qos_option.c_str(), job_par->pcQOS);
                    if (job_par->pcHosts != nullptr)
                    	sprintf(pcSUB + strlen(pcSUB), batch_com.sheduler_hosts_option.c_str(), job_par->pcHosts);
                    if (job_par->pcWorkDir != nullptr)
                    	sprintf(pcSUB + strlen(pcSUB), batch_com.sheduler_workdir_option.c_str(), job_par->pcWorkDir);
                    if (job_par->operative_memory1 != "")
                    	sprintf(pcSUB + strlen(pcSUB), batch_com.operative_memory1_option.c_str(), job_par->operative_memory1.c_str());

                    sprintf(pcSUB + strlen(pcSUB), " %s", job_file_path.c_str());
#ifdef DEBUG_OUTPUT
                    // main command
                    cout<<"DEBUG nica-scheduler$ Batch command (length "<<command_length<<"): "<<pcSUB<<endl;
#endif
                    stream = popen(pcSUB, "r");
                    while (fgets(buffer, MAX_BUFFER, stream) != nullptr)
                    	data.append(buffer);
                    pclose(stream);

#ifdef DEBUG_OUTPUT
                    // batch command result
                    cout<<"DEBUG nica-scheduler$ Batch command output = "<<data<<endl;
#endif
                    string ID = data;
                    data.clear();
                    delete [] pcSUB;

                    ID = find_first_number(ID);
                    if (ID == "")
                    {
                    	info_message("ERROR nica-scheduler$ Job ID of the batch command was not found "
                    			"(there is no batch system, it is not supported, or some errors occured). This job will be skipped!", 1);
                    	delete job_par;
                    	cur_node = cur_node->next;
                    	continue;
                    }

                    // current time
                    //time_t t = time(nullptr);
                    //struct tm tm = *localtime(&t);
                    //printf("now: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

                    info_message(TString::Format("nica-scheduler$ The job '%s' has been submitted with ID: %s. "
                    							 "Enter '%s' command to check status.", job_par->job_name.c_str(), ID.c_str(),
												 batch_com.check_status_command.c_str()));
                    mapNameID.insert(pair<string,string>(job_par->job_name, ID));

                    // merge files if required
                    if (!vecParallelOutputs.empty())
                    {
                    	for (int i = 0; i < (int)vecParallelOutputs.size(); i++)
                    	{
                    		string par = vecParallelOutputs.at(i);
                    		string UNIONjob_path = exe_dir + "union.sh";
                    		pcSUB = new char[100 + ID.length()+par.length()+ job_par->strConfig.length()+UNIONjob_path.length()];
                    	    sprintf (pcSUB, "%s %s%s%s\"sParameters=%s\",UnionMode=\"%d\",config=\"%s\" %s",
                    	    		batch_com.run_command.c_str(), batch_com.job_dependency_option.c_str(), ID.c_str(),
									batch_com.set_job_variables.c_str(), par.c_str(), vecUnionMode.at(i), job_par->strConfig.c_str(),
									UNIONjob_path.c_str());

                    	    stream = popen(pcSUB, "r");
                    	    while (fgets(buffer, MAX_BUFFER, stream) != nullptr)
                    	    	data.append(buffer);
                    	    pclose(stream);

                    	    string localID = data;
                    	    data.clear();
                    	    delete [] pcSUB;

                    	    localID = find_first_number(localID);
                    	    if (localID == "")
                    	    {
                    	    	info_message("ERROR nica-scheduler$ Union job ID of the batch command was not found "
                    	    			"(there is no batch system, it is not supported, or some errors occured).", 1);
                    	        continue;
                    	    }

                    	    cout<<"nica-scheduler$ Task for merging parallel files has ID: "<<localID<<endl;
                    	}
                    }// if (!vecParallelOutputs.empty())
                }
                /********************/
                /* LOCAL SCHEDULING */
                /********************/
                else
                {
                	// dummy - no dependency property for local jobs because it waits every time for all child threads
                	mapNameID.insert(pair<string,string>(job_par->job_name, "dummy"));

                	// define process count for the job
                	int proc_count = 1;
                	if (job_par->sproc_count != nullptr)
                	{
                		if ((job_par->sproc_count[0] == '0') && (strlen(job_par->sproc_count) == 1))
                		{
                			proc_count = get_linux_processor_count();

                			if (proc_count == 0)
                			{
                				info_message("ERROR nica-scheduler$ Core number was not defined. This job will be skipped!", 1);
                				delete job_par;
                				cur_node = cur_node->next;
                	            continue;
                			}
                		}
                	    else
                	    	proc_count = atoi(job_par->sproc_count);
                	}
                	else
                		proc_count = globalParallelCount == 0 ? 1 : globalParallelCount;

                	if (proc_count == 0)
                	{
                		info_message("ERROR nica-scheduler$ Process count can not be equal 0. This job will be skipped!", 1);
                		delete job_par;
                		cur_node = cur_node->next;
                		continue;
                	}

                	// generate string for config (enviroment) file
                	if (job_par->strConfig != "")
                	{
                		if (job_par->pcLogs != nullptr)
                		{
                			job_par->strConfig += " > ";
                			job_par->strConfig += job_par->pcLogs;
                			job_par->strConfig += " 2>&1 ; ";
                		}
                		else
                			job_par->strConfig += " ; "; //" >/dev/null ; ";
                	}

                	// process count is equal count of input files if more
                	if (proc_count > globalParallelCount)
                		proc_count = globalParallelCount;

                	int rc;
                	pthread_t* threads = new pthread_t[vecOutput->size()];

                	sem_t sem;
                	sem_init(&sem, 0, proc_count);

                	pthread_mutex_t mut;
                	//create mutex attribute variable
                	pthread_mutexattr_t mAttr;
                	pthread_mutexattr_init(&mAttr);
                	// setup recursive mutex for mutex attribute
                	pthread_mutexattr_settype(&mAttr, PTHREAD_MUTEX_RECURSIVE_NP);
                	// Use the mutex attribute to create the mutex
                	pthread_mutex_init(&mut, &mAttr);
                	// Mutex attribute can be destroy after initializing the mutex variable
                	pthread_mutexattr_destroy(&mAttr);

                	// console command - non-macro ROOT
                	if (job_par->isCommand)
                	{
                		// generate task string
                		stringstream ssSUB;
                		ssSUB << job_par->strConfig << job_par->command_line;
                		if (job_par->pcLogs != nullptr)
                			ssSUB << " > " << job_par->pcLogs << " 2>&1";

                		// write and execute temporary bash file
                		ofstream myfile;
                		char temp_file[255], run_temp[262];
                		long int t = time(nullptr);
                		sprintf(temp_file, "temp_%d.sh", (int)t); // generate output name for temporary bash file
                		myfile.open (temp_file);
                		myfile<<ssSUB.rdbuf();
                		myfile.close();
                		sprintf(run_temp, "bash %s", temp_file);

                		cout<<"nica-scheduler$ Task 1 is running: command line - "<<job_par->command_line<<endl;

                		// run task
                		int system_return = system(run_temp);
                		if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in main) returned non-zero code: "<<system_return<<endl;

                		//delete temporary bash file
                		sprintf(run_temp, "rm -rf %s", temp_file);
                		system_return = system(run_temp);
                		if (system_return != 0) cout<<"nica-scheduler$ WARNING: System call (in ThreadLocalProcess) returned non-zero code: "<<system_return<<endl;
                	}
                	// parallelizing macro ROOT on one multicore machine
                	else
                	{
                		unsigned int thread_count = 1;
                		if (vecOutput->size() > 0) thread_count = vecOutput->size();
                		for (unsigned int i = 0; i < thread_count; i++)
                		{
                			structThreadPar* thread_par = new structThreadPar();
                			thread_par->job_par = job_par;
                			thread_par->sem = &sem;
                			thread_par->mut = &mut;
                			thread_par->thread_counter = i+1;

                			if (vecOutput->size() > 0)
                				sem_wait(&sem);

                			// сreate and run threads to local processing - function ThreadLocalProcess
                			rc = pthread_create(&threads[i], nullptr, ThreadLocalProcess, (void*)thread_par);
                			if (rc)
                			{
                				info_message((TString::Format("ERROR nica-scheduler$ Return code from pthread_create() is %d", rc)).Data(), 1);
                				exit(-1);
                			}
                		}

                		// waiting for finishing threads
                		void** thread_return = nullptr;
                		//cout<<"Waiting for finishing threads "<<vecFiles.size()<<endl;
                		for (unsigned int i = 0; i < thread_count; i++)
                		{
                			pthread_join(threads[i], thread_return);
                		    if (thread_return != nullptr)
                		    	info_message((TString::Format("ERROR nica-scheduler$ Thread %d failed", i)).Data(), 1);
                		}
                	}//else isCommand

                	sem_destroy(&sem);
                	pthread_mutex_destroy(&mut);

                	cout<<"nica-scheduler$ Local job has been finished"<<endl;
                }//else local scheduling

                delete job_par;
        	}// JOB tag was processed
        }// if tag means JOB

        cur_node = cur_node->next;
	}// while - cycle for all jobs

	mapNameID.clear();
	for (map< string, vector<nullString>* >::iterator iter_output = mapJobOutput.begin(); iter_output != mapJobOutput.end(); iter_output++)
	    delete iter_output->second;
	mapJobOutput.clear();
    xmlFreeDoc(doc);
    return 0;
}

// PARSE DATABASE PARAMETERS
void ParseDatabaseParameters(string input, TString& sql, bool isSimulation)
{
	istringstream ss(input);
	string token;

	if (isSimulation)
	{
		// variables for DB
		bool isGen = false, isEnergy = false, isMinEnergy = false, isMaxEnergy = false, isBeam = false, isTarget = false, isDesc = false, isPath = false;
		string strGen, strBeam, strTarget, strDesc, strPath;
		double fEnergy, fMaxEnergy;
		// parse tokens by comma separated
		while(getline(ss, token, ','))
		{
			// to lowercase
			transform(token.begin(), token.end(),token.begin(), ::tolower);

			// generator name parsing
			if ((token.length() > 4) && (token.substr(0,4) == "gen="))
			{
				isGen = true;
				strGen = token.substr(4);
			}
			else
			{
				// energy parsing
				if ((token.length() > 7) && (token.substr(0,7) == "energy="))
				{
					token = token.substr(7);

					size_t indDash = token.find_first_of('-');
					if (indDash != string::npos)
					{
						stringstream stream;
						stream << token.substr(0, indDash);
						double dVal;
						if (stream >> dVal)
						{
							isEnergy = true;
							isMinEnergy = true;
							fEnergy = dVal;
						}
						if (token.length() > indDash)
						{
							stringstream stream2;
							stream2 << token.substr(indDash+1);
							if (stream2 >> dVal)
							{
								isEnergy = true;
								isMaxEnergy = true;
								fMaxEnergy = dVal;
							}
						}
					}//if (indDash > -1)
						// if exact energy value
						else
						{
							stringstream stream;
							stream << token;
							double dVal;
							if (stream >> dVal)
							{
								isEnergy = true;
								fEnergy = dVal;
							}
						}//else
				}//if ((token.length() > 7) && (token.substr(0,7) == "energy="))
				// particles' names in collision parsing
				else
				{
					if ((token.length() > 5) && (token.substr(0,5) == "beam="))
					{
						isBeam = true;
						strBeam = token.substr(5);
					}
					else
					{
						// search text in description string
						if ((token.length() > 5) && (token.substr(0,5) == "desc="))
						{
							isDesc = true;
							strDesc = token.substr(5);
						}
						else
						{
							// type of data parsing
							if ((token.length() > 7) && (token.substr(0,7) == "target="))
							{
								isTarget = true;
								strTarget = token.substr(7);
							}
							else
							{
								// path parsing
								if ((token.length() > 5) && (token.substr(0,5) == "path="))
								{
									isPath = true;
									strPath = token.substr(5);
								}
							}//else TYPE of data
						}//else DESC
					}//else PARTICLE
				}//else ENERGY
			}//else GEN
		}//while(getline(ss, token, ','))

		//READ PATH FROM DATABASE
		sql = "select file_path "
				"from simulation_file";

		bool isWhere = false;
		// if event generator selection
		if (isGen == true)
		{
			if (isWhere)
				sql += TString::Format(" AND lower(generator_name) = '%s'", strGen.data());
			else
			{
				isWhere = true;
				sql += TString::Format(" "
						"where lower(generator_name) = '%s'", strGen.data());
			}
		}
		// if energy selection
		if (isEnergy == true)
		{
			if (isWhere)
				sql += " AND ";
			else
			{
				isWhere = true;
				sql += " "
						"where ";
			}

			if (isMinEnergy)
			{
				sql += TString::Format("energy >= %f", fEnergy);
				if (isMaxEnergy)
					sql += TString::Format(" AND energy <= %f", fMaxEnergy);
			}
			else
			{
				if (isMaxEnergy)
					sql += TString::Format("energy <= %f", fMaxEnergy);
				else
					sql += TString::Format("energy = %f", fEnergy);
			}
		}
		// if beam particle was selected
		if (isBeam == true)
		{
			if (isWhere)
				sql += TString::Format(" AND lower(beam_particle) = '%s'", strBeam.data());
			else
			{
				isWhere = true;
				sql += TString::Format(" "
						"where lower(beam_particle) = '%s'", strBeam.data());
			}
		}
		// if beam particle was selected
		if (isTarget == true)
		{
			if (isWhere)
				sql += TString::Format(" AND lower(target_particle) = '%s'", strTarget.data());
			else
			{
				isWhere = true;
				sql += TString::Format(" "
						"where lower(target_particle) = '%s'", strTarget.data());
			}
		}
		if (isDesc == true)
		{
			if (isWhere)
				sql += TString::Format(" AND lower(file_desc) like '%%%s%%'", strDesc.data());
			else
			{
				isWhere = true;
				sql += TString::Format(" "
						"where lower(file_desc) like '%%%s%%'", strDesc.data());
			}
		}
		if (isPath == true)
		{
			if (isWhere)
				sql += TString::Format(" AND lower(file_path) like '%%%s%%'", strPath.data());
			else
			{
				isWhere = true;
				sql += TString::Format(" "
						"where lower(file_path) like '%%%s%%'", strPath.data());
			}
		}
		sql += " order by generator_name,energy";
	}
	// else if experimental data
	else
	{
		bool isPeriod = false, isMinPeriod = false, isMaxPeriod = false, isRun = false, isMinRun = false, isMaxRun = false, isBeam = false, isTarget = false,
			 isEnergy = false, isMinEnergy = false, isMaxEnergy = false, isEvents = false, isMinEvents = false, isMaxEvents = false, isTime = false, isMinTime = false, isMaxTime = false,
			 isField = false, isMinField = false, isMaxField = false, isSize = false, isMinSize = false, isMaxSize = false, isPath = false;
		string strBeam, strTarget, strTime, strMaxTime, strPath;
		int iPeriod, iMaxPeriod, iRun, iMaxRun, iEvents, iMaxEvents, iField, iMaxField;
		double fEnergy, fMaxEnergy, fSize, fMaxSize;
		// parse tokens by comma separated
		while(getline(ss, token, ','))
		{
			// to lowercase
			transform(token.begin(), token.end(), token.begin(), ::tolower);

			// period number parsing
			if ((token.length() > 7) && (token.substr(0,7) == "period="))
			{
				token = token.substr(7);

				size_t indDash = token.find_first_of('-');
				if (indDash != string::npos)
				{
					stringstream stream;
					stream << token.substr(0, indDash);
					int iVal;
					if (stream >> iVal)
					{
						isPeriod = true;
						isMinPeriod = true;
						iPeriod = iVal;
					}
					if (token.length() > indDash)
					{
						stringstream stream2;
						stream2 << token.substr(indDash+1);
						if (stream2 >> iVal)
						{
							isPeriod = true;
							isMaxPeriod = true;
							iMaxPeriod = iVal;
						}
					}
				}//if (indDash > -1)
					// if exact period number
					else
					{
						stringstream stream;
						stream << token;
						int iVal;
						if (stream >> iVal)
						{
							isPeriod = true;
							iPeriod = iVal;
						}
					}//else
			}//if ((token.length() > 7) && (token.substr(0,7) == "period="))
			else
			{
				// run number parsing
				if ((token.length() > 4) && (token.substr(0,4) == "run="))
				{
					token = token.substr(4);

					size_t indDash = token.find_first_of('-');
					if (indDash != string::npos)
					{
						stringstream stream;
						stream << token.substr(0, indDash);
						int iVal;
						if (stream >> iVal)
						{
							isRun = true;
							isMinRun = true;
							iRun = iVal;
						}
						if (token.length() > indDash)
						{
							stringstream stream2;
							stream2 << token.substr(indDash+1);
							if (stream2 >> iVal)
							{
								isRun = true;
								isMaxRun = true;
								iMaxRun = iVal;
							}
						}
					}//if (indDash > -1)
						// if exact run number
						else
						{
							stringstream stream;
							stream << token;
							int iVal;
							if (stream >> iVal)
							{
								isRun = true;
								iRun = iVal;
							}
						}//else
				}//if ((token.length() > 4) && (token.substr(0,4) == "run="))
				else
				{
					// beam particle's name in collision parsing
					if ((token.length() > 5) && (token.substr(0,5) == "beam="))
					{
						isBeam = true;
						strBeam = token.substr(5);
					}
					else
					{
						// target particle's name in collision parsing
						if ((token.length() > 7) && (token.substr(0,7) == "target="))
						{
							isTarget = true;
							strTarget = token.substr(7);
						}
						else
						{
							// energy parsing
							if ((token.length() > 7) && (token.substr(0,7) == "energy="))
							{
								token = token.substr(7);

								size_t indDash = token.find_first_of('-');
								if (indDash != string::npos)
								{
									stringstream stream;
									stream << token.substr(0, indDash);
									double dVal;
									if (stream >> dVal)
									{
										isEnergy = true;
										isMinEnergy = true;
										fEnergy = dVal;
									}
									if (token.length() > indDash)
									{
										stringstream stream2;
										stream2 << token.substr(indDash+1);
										if (stream2 >> dVal)
										{
											isEnergy = true;
											isMaxEnergy = true;
											fMaxEnergy = dVal;
										}
									}
								}//if (indDash > -1)
									// if exact energy value
									else
									{
										stringstream stream;
										stream << token;
										double dVal;
										if (stream >> dVal)
										{
											isEnergy = true;
											fEnergy = dVal;
										}
									}//else
							}//if ((token.length() > 7) && (token.substr(0,7) == "energy="))
							else
							{
								// event count parsing
								if ((token.length() > 6) && (token.substr(0,6) == "events="))
								{
									token = token.substr(6);

									size_t indDash = token.find_first_of('-');
									if (indDash != string::npos)
									{
										stringstream stream;
										stream << token.substr(0, indDash);
										int iVal;
										if (stream >> iVal)
										{
											isEvents = true;
											isMinEvents = true;
											iEvents = iVal;
										}
										if (token.length() > indDash)
										{
											stringstream stream2;
											stream2 << token.substr(indDash+1);
											if (stream2 >> iVal)
											{
												isEvents = true;
												isMaxEvents = true;
												iMaxEvents = iVal;
											}
										}
									}//if (indDash > -1)
										// if exact event count
										else
										{
											stringstream stream;
											stream << token;
											int iVal;
											if (stream >> iVal)
											{
												isEvents = true;
												iEvents = iVal;
											}
										}//else
								}//if ((token.length() > 6) && (token.substr(0,6) == "events="))
								else
								{
									// time parsing
									if ((token.length() > 5) && (token.substr(0,5) == "time="))
									{
										token = token.substr(5);

										size_t indDash = token.find_first_of('-');
										if (indDash != string::npos)
										{
											if (indDash > 0)
											{
												isTime = true;
												isMinTime = true;
												strTime = token.substr(0, indDash);
											}
											if (token.length() > indDash)
											{
												isTime = true;
												isMaxTime = true;
												strMaxTime = token.substr(indDash+1);
											}
										}//if (indDash > -1)
											// if exact time
											else
											{
												isTime = true;
												strTime = token;
											}//else
									}//if ((token.length() > 5) && (token.substr(0,5) == "time="))
									else
									{
										// field current parsing
										if ((token.length() > 6) && (token.substr(0,6) == "field="))
										{
											token = token.substr(6);

											size_t indDash = token.find_first_of('-');
											if (indDash != string::npos)
											{
												stringstream stream;
												stream << token.substr(0, indDash);
												int iVal;
												if (stream >> iVal)
												{
													isField = true;
													isMinField = true;
													iField = iVal;
												}
												if (token.length() > indDash)
												{
													stringstream stream2;
													stream2 << token.substr(indDash+1);
													if (stream2 >> iVal)
													{
														isField = true;
														isMaxField = true;
														iMaxField = iVal;
													}
												}
											}//if (indDash > -1)
												// if exact field current
												else
												{
													stringstream stream;
													stream << token;
													int iVal;
													if (stream >> iVal)
													{
														isField = true;
														iField = iVal;
													}
												}//else
										}//if ((token.length() > 6) && (token.substr(0,6) == "field="))
										else
										{
											// file size parsing
											if ((token.length() > 5) && (token.substr(0,5) == "size="))
											{
												token = token.substr(5);

												size_t indDash = token.find_first_of('-');
												if (indDash != string::npos)
												{
													stringstream stream;
													stream << token.substr(0, indDash);
													double dVal;
													if (stream >> dVal)
													{
														isSize = true;
														isMinSize = true;
														fSize = dVal;
													}
													if (token.length() > indDash)
													{
														stringstream stream2;
														stream2 << token.substr(indDash+1);
														if (stream2 >> dVal)
														{
															isSize = true;
															isMaxSize = true;
															fMaxSize = dVal;
														}
													}
												}//if (indDash > -1)
													// if exact file size
													else
													{
														stringstream stream;
														stream << token;
														double dVal;
														if (stream >> dVal)
														{
															isSize = true;
															fSize = dVal;
														}
													}//else
											}//if ((token.length() > 5) && (token.substr(0,5) == "size="))
											else
											{
												// path parsing
												if ((token.length() > 5) && (token.substr(0,5) == "path="))
												{
													isPath = true;
													strPath = token.substr(5);
												}
											}//else SIZE
										}//else FIELD
									}//else TIME
								}//else EVENTS
							}//else ENERGY
						}//else TARGER
					}//else BEAM
				}//else RUN
			}//else PERIOD
		}//while(getline(ss, token, ','))

		// generate query
		sql = "select file_path "
				"from run_";

		bool isWhere = false;
		// if period selection
		if (isPeriod == true)
		{
			if (isWhere)
				sql += " AND ";
			else
			{
				isWhere = true;
				sql += " "
						"where ";
			}

			if (isMinPeriod)
			{
				sql += TString::Format("period_number >= %d", iPeriod);
				if (isMaxPeriod)
					sql += TString::Format(" AND period_number <= %d", iMaxPeriod);
			}
			else
			{
				if (isMaxPeriod)
					sql += TString::Format("period_number <= %d", iMaxPeriod);
				else
					sql += TString::Format("period_number = %d", iPeriod);
			}
		}
		// if run selection
		if (isRun == true)
		{
			if (isWhere)
				sql += " AND ";
			else
			{
				isWhere = true;
				sql += " "
						"where ";
			}

			if (isMinRun)
			{
				sql += TString::Format("run_number >= %d", iRun);
				if (isMaxRun)
					sql += TString::Format(" AND run_number <= %d", iMaxRun);
			}
			else
			{
				if (isMaxRun)
					sql += TString::Format("run_number <= %d", iMaxRun);
				else
					sql += TString::Format("run_number = %d", iRun);
			}
		}
		// if beam particle was selected
		if (isBeam == true)
		{
			if (isWhere)
				sql += TString::Format(" AND lower(beam_particle) = '%s'", strBeam.data());
			else
			{
				isWhere = true;
				sql += TString::Format(" "
						"where lower(beam_particle) = '%s'", strBeam.data());
			}
		}
		// if target particle was selected
		if (isTarget == true)
		{
			if (isWhere)
				sql += TString::Format(" AND lower(target_particle) = '%s'", strTarget.data());
			else
			{
				isWhere = true;
				sql += TString::Format(" "
						"where lower(target_particle) = '%s'", strTarget.data());
			}
		}
		// if energy selection
		if (isEnergy == true)
		{
			if (isWhere)
				sql += " AND ";
			else
			{
				isWhere = true;
				sql += " "
						"where ";
			}

			if (isMinEnergy)
			{
				sql += TString::Format("energy >= %f", fEnergy);
				if (isMaxEnergy)
					sql += TString::Format(" AND energy <= %f", fMaxEnergy);
			}
			else
			{
				if (isMaxEnergy)
					sql += TString::Format("energy <= %f", fMaxEnergy);
				else
					sql += TString::Format("energy = %f", fEnergy);
			}
		}
		// if event count selection
		if (isEvents == true)
		{
			if (isWhere)
				sql += " AND ";
			else
			{
				isWhere = true;
				sql += " "
						"where ";
			}

			if (isMinEvents)
			{
				sql += TString::Format("event_count >= %d", iEvents);
				if (isMaxEvents)
					sql += TString::Format(" AND event_count <= %d", iMaxEvents);
			}
			else
			{
				if (isMaxEvents)
					sql += TString::Format("event_count <= %d", iMaxEvents);
				else
					sql += TString::Format("event_count = %d", iEvents);
			}
		}
		// if time selection
		if (isTime == true)
		{
			if (isWhere)
				sql += " AND ";
			else
			{
				isWhere = true;
				sql += " "
						"where ";
			}

			// check correct format
			struct tm tm;
			if (!strptime(strMaxTime.c_str(), "%Y-%m-%d %H:%M:%S", &tm))
			{
				isMaxTime = false;
				cout<<"Error: "<<strMaxTime<<" is not correct datetime. DateTime format should be yyyy-mm-dd 24hh:mm:ss."<<endl;
			}
			if (!strptime(strTime.c_str(), "%Y-%m-%d %H:%M:%S", &tm))
			{
				isMinTime = false;
				cout<<"Error: "<<strTime<<" is not correct datetime. DateTime format should be yyyy-mm-dd 24hh:mm:ss."<<endl;
				if (!isMaxTime) isTime = false;
			}

			if (isMinTime)
			{
				sql += TString::Format("end_datetime >= '%s'", strTime.c_str());
				if (isMaxTime)
					sql += TString::Format(" AND start_datetime <= '%s'", strMaxTime.c_str());
			}
			else
			{
				if (isMaxTime)
					sql += TString::Format("start_datetime <= '%s'", strMaxTime.c_str());
				else
				{
					if (isTime)
						sql += TString::Format("start_datetime <= '%s' AND end_datetime >= '%s'", strTime.c_str(), strTime.c_str());
				}
			}
		}
		// if field current selection
		if (isField == true)
		{
			if (isWhere)
				sql += " AND ";
			else
			{
				isWhere = true;
				sql += " "
						"where ";
			}

			if (isMinField)
			{
				sql += TString::Format("field_voltage >= %d", iField);
				if (isMaxField)
					sql += TString::Format(" AND field_voltage <= %d", iMaxField);
			}
			else
			{
				if (isMaxField)
					sql += TString::Format("field_voltage <= %d", iMaxField);
				else
					sql += TString::Format("field_voltage = %d", iField);
			}
		}
		// if file size selection
		if (isSize == true)
		{
			if (isWhere)
				sql += " AND ";
			else
			{
				isWhere = true;
				sql += " "
						"where ";
			}

			if (isMinSize)
			{
				sql += TString::Format("file_size >= %f", fSize);
				if (isMaxSize)
					sql += TString::Format(" AND file_size <= %f", fMaxSize);
			}
			else
			{
				if (isMaxSize)
					sql += TString::Format("file_size <= %f", fMaxSize);
				else
					sql += TString::Format("file_size = %f", fSize);
			}
		}
		if (isPath == true)
		{
			if (isWhere)
				sql += TString::Format(" AND lower(file_path) like '%%%s%%'", strPath.data());
			else
			{
				isWhere = true;
				sql += TString::Format(" "
						"where lower(file_path) like '%%%s%%'", strPath.data());
			}
		}

		sql += " order by period_number,run_number";
	}

	return;
}

bool ParseMacroFiles(xmlNodePtr sub_node, structJobPar* job_par, structMacroPar* macro_par, multimap< string,vector<nullString>* > mapJobOutput, batch_commands batch_com)
{
	while (sub_node)
	{
		// FILE TAG
		if (strcmp((char*)sub_node->name, "file") == 0)
		{
			char* pc_temp = nullptr;
			bool isStartEvent = false, isEventCount = false;
			int start_event, event_count;
			string inFile = "", simDB = "", expDB = "", job_input = "", macro_input = "", file_input = "",
				   put_command = "cp", put_path = "", get_command = "cp", get_path = "", get_output = "", clean_path = "",
				   parallel_mode = "";
			nullString outFile;

			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"input");
			if (pc_temp != nullptr)
			{
				inFile = pc_temp;
				free(pc_temp);
			}
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"output");
			if (pc_temp != nullptr)
			{
				outFile.SetValue((string)pc_temp);
				free(pc_temp);
			}

			// get start event parameter
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"start_event");
			if (pc_temp != nullptr)
			{
				start_event = atoi(pc_temp);
				free(pc_temp);
				isStartEvent = true;
			}

			// get event count parameter
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"event_count");
			if (pc_temp != nullptr)
			{
				if (!is_string_number(pc_temp))
				{
					info_message("ERROR nica-scheduler$ Event count must be a number!", 1);
					free(pc_temp);
					return true;
				}
				event_count = atoi(pc_temp);
				free(pc_temp);
				if (event_count < 0)
				{
					info_message("ERROR nica-scheduler$ Event count must be a positive number or 0 (for all events)!", 1);
					return true;
				}
				isEventCount = true;
			}

			// whether does not merge files containing result's parts
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"merge");
			int iMerge = 1;	//"true"
			if (pc_temp != nullptr)
			{
				char* lower_merge = convert_pchar_to_lowercase_new(pc_temp);
				if (strcmp(lower_merge, "false") == 0)
					iMerge = -1;
				if (strcmp(lower_merge, "chain") == 0)
					iMerge = 0;
				if (strcmp(lower_merge, "nodel") == 0)
					iMerge = 2;

				free(pc_temp);
				delete lower_merge;
			}
			// whether parallelize event processing
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"parallel_mode");
			if (pc_temp != nullptr)
			{
				parallel_mode = pc_temp;
				free(pc_temp);
			}

			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"sim_input");
			if (pc_temp != nullptr)
			{
				simDB = pc_temp;
				free(pc_temp);
			}
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"exp_input");
			if (pc_temp != nullptr)
			{
				expDB = pc_temp;
				free(pc_temp);
			}
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"job_input");
			if (pc_temp != nullptr)
			{
				job_input = pc_temp;
				free(pc_temp);
			}
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"macro_input");
			if (pc_temp != nullptr)
			{
				macro_input = pc_temp;
				free(pc_temp);
			}
			pc_temp = (char*) xmlGetProp(sub_node, (unsigned char*)"file_input");
			if (pc_temp != nullptr)
			{
				file_input = pc_temp;
				free(pc_temp);
			}

			// parse information containing preparation of the files to be processed
			// operations: '<put>', '<get>', '<clean>'
			xmlNodePtr sub_file_node = sub_node->children;
			while (sub_file_node)
			{
				// if tag is XML_ELEMENT_NODE then continue
				if (sub_file_node->type == XML_ELEMENT_NODE)
				{
					// if tag means <put>: put the files to the special place before the processing
					if (strcmp((char*)sub_file_node->name, "put") == 0)
					{
						pc_temp = (char*) xmlGetProp(sub_file_node, (unsigned char*)"command");
						if (pc_temp != nullptr)
						{
							put_command = pc_temp;
							free(pc_temp);
						}
						pc_temp = (char*) xmlGetProp(sub_file_node, (unsigned char*)"path");
						if (pc_temp == nullptr)
						{
							info_message("ERROR nica-scheduler$ There is no 'path' property for the <put/> tag!", 1);
							sub_file_node = sub_file_node->next;
							continue;
				    	}
				    	put_path = pc_temp;
				    	free(pc_temp);
					}// if <put/> attribute

					// if tag means <get>: get the files from the temporary place after the processing
					if (strcmp((char*)sub_file_node->name, "get") == 0)
					{
						pc_temp = (char*) xmlGetProp(sub_file_node, (unsigned char*)"command");
						if (pc_temp != nullptr)
						{
							get_command = pc_temp;
							free(pc_temp);
						}
						pc_temp = (char*) xmlGetProp(sub_file_node, (unsigned char*)"output");
						if (pc_temp != nullptr)
						{
							get_output = pc_temp;
							free(pc_temp);
						}
						pc_temp = (char*) xmlGetProp(sub_file_node, (unsigned char*)"path");
						if (pc_temp == nullptr)
						{
							info_message("ERROR nica-scheduler$ There is no 'path' property for the <get/> tag!", 1);
							sub_file_node = sub_file_node->next;
							continue;
				    	}
				    	get_path = pc_temp;
				    	free(pc_temp);
					}// if <get/> attribute

					// if tag means <clean>: clean the transitional file after the processing
					if (strcmp((char*)sub_file_node->name, "clean") == 0)
					{
						pc_temp = (char*) xmlGetProp(sub_file_node, (unsigned char*)"path");
						if (pc_temp != nullptr)
						{
							clean_path = pc_temp;
							free(pc_temp);
						}
					}// if <clean> attribute
				}// if sub_file_node->type == XML_ELEMENT_NODE

				sub_file_node = sub_file_node->next;
			}// if file should be pre/post copied

			bool isFileFound = false;
			// PATH TO ONE INPUT FILE
			if (inFile != "")
			{
				// check whether file contains wildcards (?,*)
				if ((inFile.find('?') != std::string::npos) || (inFile.find('*') != std::string::npos) || (inFile.find('+') != std::string::npos))
				{
					vector<string> globFiles = glob(inFile.c_str());
#ifdef DEBUG_OUTPUT
					cout<<"DEBUG nica-scheduler$ File count in the regular expression: "<<globFiles.size()<<endl;
#endif
					for (unsigned int i = 0; i < globFiles.size(); i++)
					{
						structFilePar* filePar = new structFilePar();
						// add input file
						filePar->strFileIn = trim(globFiles[i]);
						// add output
						if (outFile.GetValue() == "")
							filePar->strFileOut = outFile;
						else
							filePar->strFileOut.SetValue(form_file_name(outFile.GetValue(), filePar->strFileIn, i+1, batch_com.batch_temp_directory));
						if (isStartEvent)
							filePar->start_event = new int(start_event);
						if (isEventCount)
							filePar->event_count = new int(event_count);
						if (parallel_mode != "") filePar->strParallelMode = parallel_mode;
						filePar->iMerge = iMerge;
						if (put_path != "")
						{
							filePar->strPutCommand = put_command;
							filePar->strPutPath = form_file_name(put_path, filePar->strFileIn, i+1, batch_com.batch_temp_directory);
						}
						if (get_path != "")
						{
							filePar->strGetCommand = get_command;
							filePar->strGetPath = form_file_name(get_path, filePar->strFileIn, i+1, batch_com.batch_temp_directory);
							if (outFile.GetValue() == "")
								filePar->strGetOutput = form_file_name(get_output, filePar->strFileIn, i+1, batch_com.batch_temp_directory);
						}
						if (clean_path != "")
							filePar->strCleanPath = form_file_name(clean_path, filePar->strFileIn, i+1, batch_com.batch_temp_directory);

						macro_par->vecFiles.push_back(filePar);
						isFileFound = true;
					}
				}
				else
				{
					structFilePar* filePar = new structFilePar();
					// add input file
					filePar->strFileIn = trim(inFile);
					// add output
					if (outFile.GetValue() == "")
						filePar->strFileOut = outFile;
					else
						filePar->strFileOut.SetValue(form_file_name(outFile.GetValue(), filePar->strFileIn, 1, batch_com.batch_temp_directory));
					if (isStartEvent)
						filePar->start_event = new int(start_event);
					if (isEventCount)
						filePar->event_count = new int(event_count);
					if (parallel_mode != "")
						filePar->strParallelMode = parallel_mode;
					filePar->iMerge = iMerge;
					if (put_path != "")
					{
						filePar->strPutCommand = put_command;
						filePar->strPutPath = form_file_name(put_path, filePar->strFileIn, 1, batch_com.batch_temp_directory);
					}
					if (get_path != "")
					{
						filePar->strGetCommand = get_command;
						filePar->strGetPath = form_file_name(get_path, filePar->strFileIn, 1, batch_com.batch_temp_directory);
						if (outFile.GetValue() == "")
							filePar->strGetOutput = form_file_name(get_output, filePar->strFileIn, 1, batch_com.batch_temp_directory);
					}
					if (clean_path != "")
						filePar->strCleanPath = form_file_name(clean_path, filePar->strFileIn, 1, batch_com.batch_temp_directory);

					macro_par->vecFiles.push_back(filePar);
					isFileFound = true;
				}
			}// if (inFile != nullptr)

			// LIST OF INPUT FILES FROM DATABASE
			if ((simDB != "") || (expDB != ""))
			{
			    TString sql, strConnection = "pgsql://" + (TString)job_par->dbSettings.db_host + "/" + (TString)job_par->dbSettings.db_name;
			    if (simDB == "")
			        ParseDatabaseParameters(expDB, sql, false);
			    else
			        ParseDatabaseParameters(simDB, sql, true);
			    TSQLServer* pSQLServer = TSQLServer::Connect(strConnection, job_par->dbSettings.db_username.c_str(), job_par->dbSettings.db_password.c_str());
				if (pSQLServer == 0x00)
				{
					info_message("ERROR nica-scheduler$ Connection to the database was not established!", 1);
					return true;
				}

#ifdef DEBUG_OUTPUT
                cout<<"DEBUG nica-scheduler$ SQL query: "<<sql<<endl;
#endif
				TSQLResult* res = pSQLServer->Query(sql);
				if (res == 0x00)
				{
					info_message("ERROR nica-scheduler$ An error was occured during the SQL query!", 1);
					return true;
				}
				int nrows = res->GetRowCount();
				if (nrows == 0)
					info_message("nica-scheduler$ WARNING: there are no records for these parameters", 1);
				else
				{
					TSQLRow* row;
					int counter = 1;
					while ((row = res->Next()) != nullptr)
					{
						//TString path = row->GetField(0);
						structFilePar* filePar = new structFilePar();
						// add input file
						filePar->strFileIn = trim((char*)row->GetField(0));
#ifdef MICC_NO_MANAGEMENT
						if ((simDB != "") && (batch_com.run_command == "sbatch")) replace_string_in_text(filePar->strFileIn, "eos", "eos/eos.jinr.ru");
#endif
						// add output
						if (outFile.GetValue() == "")
							filePar->strFileOut = outFile;
						else
							filePar->strFileOut.SetValue(form_file_name(outFile.GetValue(), filePar->strFileIn, counter, batch_com.batch_temp_directory));
						if (isStartEvent)
							filePar->start_event = new int(start_event);
						if (isEventCount)
							filePar->event_count = new int(event_count);
						if (parallel_mode != "") filePar->strParallelMode = parallel_mode;
						filePar->iMerge = iMerge;
						if (put_path != "")
						{
							filePar->strPutCommand = put_command;
							filePar->strPutPath = form_file_name(put_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);
						}
						if (get_path != "")
						{
							filePar->strGetCommand = get_command;
							filePar->strGetPath = form_file_name(get_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);
							if (outFile.GetValue() == "")
								filePar->strGetOutput = form_file_name(get_output, filePar->strFileIn, counter, batch_com.batch_temp_directory);
						}
						if (clean_path != "")
							filePar->strCleanPath = form_file_name(clean_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);

						macro_par->vecFiles.push_back(filePar);
						isFileFound = true;

						counter++;
						delete row;
					}//while (row = res->Next())
				}//else nrows > 0

				delete res;
				if (pSQLServer)
					delete pSQLServer;
			}// if ((simDB != nullptr) || (expDB != nullptr))

			// LIST OF INPUT FILES FROM PREVIOUS JOB
			if (job_input != "")
			{
				// search for output list in the map
				multimap< string, vector<nullString>* >::iterator it = mapJobOutput.find(job_input);
				if (it == mapJobOutput.end())
					cout<<"nica-scheduler$ WARNING: job (output list) was not found: "<<job_input<<endl;
				else
				{
					vector<nullString>* vec_string = it->second;

					int counter = 1;
					for (vector<nullString>::iterator iter_output = vec_string->begin(); iter_output != vec_string->end(); iter_output++)
					{
						structFilePar* filePar = new structFilePar();
						// add input file
						filePar->strFileIn = trim((*iter_output).GetValue());
						// add output
						if (outFile.GetValue() == "")
							filePar->strFileOut = outFile;
						else
							filePar->strFileOut.SetValue(form_file_name(outFile.GetValue(), filePar->strFileIn, counter, batch_com.batch_temp_directory));
						if (isStartEvent)
							filePar->start_event = new int(start_event);
						if (isEventCount)
							filePar->event_count = new int(event_count);
						if (parallel_mode != "") filePar->strParallelMode = parallel_mode;
						filePar->iMerge = iMerge;
						if (put_path != "")
						{
							filePar->strPutCommand = put_command;
							filePar->strPutPath = form_file_name(put_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);
						}
						if (get_path != "")
						{
							filePar->strGetCommand = get_command;
							filePar->strGetPath = form_file_name(get_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);
							if (outFile.GetValue() == "")
								filePar->strGetOutput = form_file_name(get_output, filePar->strFileIn, counter, batch_com.batch_temp_directory);
						}
						if (clean_path != "")
							filePar->strCleanPath = form_file_name(clean_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);

						macro_par->vecFiles.push_back(filePar);
						isFileFound = true;

						counter++;
					}// for
				}
			}// if (job_input != nullptr)

			// LIST OF INPUT FILES FROM PREVIOUS MACRO
			if (macro_input != "")
			{
				// search for the macro with a given name
				bool isFound = false;
				for (vector<structMacroPar*>::iterator iter = job_par->vecMacros.begin(); iter != job_par->vecMacros.end(); iter++)
				{
					structMacroPar* cur_macro = *iter;
					if (strcmp(cur_macro->macro_name, macro_input.c_str()) == 0)
					{
						int counter = 1;
						for (vector<structFilePar*>::iterator iter_output = cur_macro->vecFiles.begin(); iter_output != cur_macro->vecFiles.end(); iter_output++)
						{
							if ((*iter_output)->strFileOut.isNull()) continue;

							structFilePar* filePar = new structFilePar();
							// add input file
							filePar->strFileIn = (*iter_output)->strFileOut.GetValue();
							// add output
							if (outFile.GetValue() == "")
								filePar->strFileOut = outFile;
							else
								filePar->strFileOut.SetValue(form_file_name(outFile.GetValue(), filePar->strFileIn, counter, batch_com.batch_temp_directory));
							if (isStartEvent)
								filePar->start_event = new int(start_event);
							if (isEventCount)
								filePar->event_count = new int(event_count);
							if (parallel_mode != nullptr) filePar->strParallelMode = parallel_mode;
							filePar->iMerge = iMerge;
							if (put_path != "")
							{
								filePar->strPutCommand = put_command;
								filePar->strPutPath = form_file_name(put_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);
							}
							if (get_path != "")
							{
								filePar->strGetCommand = get_command;
								filePar->strGetPath = form_file_name(get_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);
								if (outFile.GetValue() == "")
									filePar->strGetOutput = form_file_name(get_output, filePar->strFileIn, counter, batch_com.batch_temp_directory);
							}
							if (clean_path != "")
								filePar->strCleanPath = form_file_name(clean_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);

							macro_par->vecFiles.push_back(filePar);
							isFileFound = true;

							counter++;
						}// for

						isFound = true;
						break;
					}//if (strcmp(cur_macro->macro_name, macro_input) == 0)
				}// search for the macro with a given name

				if (!isFound)
					cout<<"nica-scheduler$ WARNING: macro (output list) was not found: "<<macro_input<<endl;
			}// if (macro_input != nullptr)

			// LIST OF INPUT FILES FROM TEXT FILE (separated by newline symbols)
			if (file_input != "")
			{
				// open text file with input list
				string str_file_input = replace_home_symbol_linux(file_input);
				ifstream listFile(str_file_input.c_str());
				if (listFile)
				{
					string list_line;
					int counter = 1;
					while (getline(listFile, list_line))
					{
						structFilePar* filePar = new structFilePar();
						// add input file
						filePar->strFileIn = trim(list_line);
						//cout<<"Current file: "<<list_line<<endl;

						// add output file(s)
						if (outFile.GetValue() == "")
							filePar->strFileOut = outFile;
						else
							filePar->strFileOut.SetValue(form_file_name(outFile.GetValue(), filePar->strFileIn, counter, batch_com.batch_temp_directory));
						if (isStartEvent)
							filePar->start_event = new int(start_event);
						if (isEventCount)
							filePar->event_count = new int(event_count);
						if (parallel_mode != nullptr) filePar->strParallelMode = parallel_mode;
						filePar->iMerge = iMerge;
						if (put_path != "")
						{
							filePar->strPutCommand = put_command;
							filePar->strPutPath = form_file_name(put_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);
						}
						if (get_path != "")
						{
							filePar->strGetCommand = get_command;
							filePar->strGetPath = form_file_name(get_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);
							if (outFile.GetValue() == "")
								filePar->strGetOutput = form_file_name(get_output, filePar->strFileIn, counter, batch_com.batch_temp_directory);
						}
						if (clean_path != "")
							filePar->strCleanPath = form_file_name(clean_path, filePar->strFileIn, counter, batch_com.batch_temp_directory);

						macro_par->vecFiles.push_back(filePar);
						isFileFound = true;

						counter++;
					}
				}
				else
					info_message("ERROR nica-scheduler$ Can not open text file with file input list!", 1);
			}////if (file_input != nullptr)

			if (!isFileFound)
			{
				info_message("ERROR nica-scheduler$ No input files were found (possible tags: "
						"<input>, <file_input>, <sim_input>, <exp_input>, <job_input>, <macro_input>!", 1);
				return true;
			}
		}// FILE TAG

		sub_node = sub_node->next;
	}//while (sub_node)

	return false;
}
