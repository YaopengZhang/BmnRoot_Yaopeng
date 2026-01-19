// ----------------------------------------------------------------------
//                    UniRawFile header file 
//                      Generated 27-09-2022 
// ----------------------------------------------------------------------

/** /home/soul/bmnroot/database/uni_db1/UniRawFile.h 
 ** Class for the table: raw_file 
 **/ 

#ifndef UNIRAWFILE_H 
#define UNIRAWFILE_H 1 

#include "TString.h"
#include "TDatime.h"
#include "TTimeStamp.h"

#include "UniConnection.h"

class UniRawFile
{
 private:
    /* GENERATED PRIVATE MEMBERS (SHOULD NOT BE CHANGED MANUALLY) */
    /// connection to the database
    UniConnection* connectionDB;

    /// file id
    int i_file_id;
    /// period number
    int* i_period_number;
    /// run number
    int* i_run_number;
    /// start datetime
    TDatime ts_start_datetime;
    /// end datetime
    TDatime* ts_end_datetime;
    /// file path
    TString str_file_path;
    /// event count
    int* i_event_count;
    /// file size
    int64_t* i64_file_size;
    /// file md5
    TString* chr_file_md5;

    //Constructor
    UniRawFile(UniConnection* db_connect, int file_id, int* period_number, int* run_number, TDatime start_datetime, TDatime* end_datetime, TString file_path, int* event_count, int64_t* file_size, TString* file_md5);
    /* END OF PRIVATE GENERATED PART (SHOULD NOT BE CHANGED MANUALLY) */

 public:
    /* GENERATED PUBLIC MEMBERS (SHOULD NOT BE CHANGED MANUALLY) */
    virtual ~UniRawFile(); // Destructor

    // static class functions
    /// add new raw file to the database
    static UniRawFile* CreateRawFile(int* period_number, int* run_number, TDatime start_datetime, TDatime* end_datetime, TString file_path, int* event_count, int64_t* file_size, TString* file_md5);
    /// get raw file from the database
    static UniRawFile* GetRawFile(int file_id);
    /// get raw file from the database
    static UniRawFile* GetRawFile(TString file_path);
    /// check raw file exists in the database: 1- true, 0 - false, <0 - database operation error
    static int CheckRawFileExists(int file_id);
    /// check raw file exists in the database: 1- true, 0 - false, <0 - database operation error
    static int CheckRawFileExists(TString file_path);
    /// delete raw file from the database
    static int DeleteRawFile(int file_id);
    /// delete raw file from the database
    static int DeleteRawFile(TString file_path);
    /// print all raw files
    static int PrintAll();

    // Getters
    /// get file id of the current raw file
    int GetFileId() {return i_file_id;}
    /// get period number of the current raw file
    int* GetPeriodNumber() {if (i_period_number == nullptr) return nullptr; else return new int(*i_period_number);}
    /// get run number of the current raw file
    int* GetRunNumber() {if (i_run_number == nullptr) return nullptr; else return new int(*i_run_number);}
    /// get start datetime of the current raw file
    TDatime GetStartDatetime() {return ts_start_datetime;}
    /// get end datetime of the current raw file
    TDatime* GetEndDatetime() {if (ts_end_datetime == nullptr) return nullptr; else return new TDatime(*ts_end_datetime);}
    /// get file path of the current raw file
    TString GetFilePath() {return str_file_path;}
    /// get event count of the current raw file
    int* GetEventCount() {if (i_event_count == nullptr) return nullptr; else return new int(*i_event_count);}
    /// get file size of the current raw file
    int64_t* GetFileSize() {if (i64_file_size == nullptr) return nullptr; else return new int64_t(*i64_file_size);}
    /// get file md5 of the current raw file
    TString* GetFileMd5() {if (chr_file_md5 == nullptr) return nullptr; else return new TString(*chr_file_md5);}

    // Setters
    /// set period number of the current raw file
    int SetPeriodNumber(int* period_number);
    /// set run number of the current raw file
    int SetRunNumber(int* run_number);
    /// set start datetime of the current raw file
    int SetStartDatetime(TDatime start_datetime);
    /// set end datetime of the current raw file
    int SetEndDatetime(TDatime* end_datetime);
    /// set file path of the current raw file
    int SetFilePath(TString file_path);
    /// set event count of the current raw file
    int SetEventCount(int* event_count);
    /// set file size of the current raw file
    int SetFileSize(int64_t* file_size);
    /// set file md5 of the current raw file
    int SetFileMd5(TString* file_md5);

    /// print information about current raw file
    void Print();
    /* END OF PUBLIC GENERATED PART (SHOULD NOT BE CHANGED MANUALLY) */

 ClassDef(UniRawFile,1);
};

#endif
