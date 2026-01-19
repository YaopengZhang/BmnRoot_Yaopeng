// ----------------------------------------------------------------------
//                    UniRawFile cxx file 
//                      Generated 27-09-2022 
// ----------------------------------------------------------------------

#include "TSQLServer.h"
#include "TSQLStatement.h"

#include "UniRawFile.h"

#include <iostream>
using namespace std;

/* GENERATED CLASS MEMBERS (SHOULD NOT BE CHANGED MANUALLY) */
// -----   Constructor with database connection   -----------------------
UniRawFile::UniRawFile(UniConnection* db_connect, int file_id, int* period_number, int* run_number, TDatime start_datetime, TDatime* end_datetime, TString file_path, int* event_count, int64_t* file_size, TString* file_md5)
{
    connectionDB = db_connect;

    i_file_id = file_id;
    i_period_number = period_number;
    i_run_number = run_number;
    ts_start_datetime = start_datetime;
    ts_end_datetime = end_datetime;
    str_file_path = file_path;
    i_event_count = event_count;
    i64_file_size = file_size;
    chr_file_md5 = file_md5;
}

// -----   Destructor   -------------------------------------------------
UniRawFile::~UniRawFile()
{
    if (connectionDB)
        delete connectionDB;
    if (i_period_number)
        delete i_period_number;
    if (i_run_number)
        delete i_run_number;
    if (ts_end_datetime)
        delete ts_end_datetime;
    if (i_event_count)
        delete i_event_count;
    if (i64_file_size)
        delete i64_file_size;
    if (chr_file_md5)
        delete chr_file_md5;
}

// -----   Creating new raw file in the database  ---------------------------
UniRawFile* UniRawFile::CreateRawFile(int* period_number, int* run_number, TDatime start_datetime, TDatime* end_datetime, TString file_path, int* event_count, int64_t* file_size, TString* file_md5)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return nullptr;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "insert into raw_file(period_number, run_number, start_datetime, end_datetime, file_path, event_count, file_size, file_md5) "
        "values ($1, $2, $3, $4, $5, $6, $7, $8)");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (period_number == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetInt(0, *period_number);
    if (run_number == nullptr)
        stmt->SetNull(1);
    else
        stmt->SetInt(1, *run_number);
    stmt->SetDatime(2, start_datetime);
    if (end_datetime == nullptr)
        stmt->SetNull(3);
    else
        stmt->SetDatime(3, *end_datetime);
    stmt->SetString(4, file_path);
    if (event_count == nullptr)
        stmt->SetNull(5);
    else
        stmt->SetInt(5, *event_count);
    if (file_size == nullptr)
        stmt->SetNull(6);
    else
        stmt->SetLong64(6, *file_size);
    if (file_md5 == nullptr)
        stmt->SetNull(7);
    else
        stmt->SetString(7, *file_md5);

    // inserting new raw file to the Database
    if (!stmt->Process())
    {
        cout<<"ERROR: inserting new raw file to the Database has been failed"<<endl;
        delete stmt;
        delete connDb;
        return nullptr;
    }

    delete stmt;

    // getting last inserted ID
    int file_id;
    TSQLStatement* stmt_last = db_server->Statement("SELECT currval(pg_get_serial_sequence('raw_file','file_id'))");

    // process getting last id
    if (stmt_last->Process())
    {
        // store result of statement in buffer
        stmt_last->StoreResult();

        // if there is no last id then exit with error
        if (!stmt_last->NextResultRow())
        {
            cout<<"ERROR: no last ID in DB!"<<endl;
            delete stmt_last;
            return nullptr;
        }
        else
        {
            file_id = stmt_last->GetInt(0);
            delete stmt_last;
        }
    }
    else
    {
        cout<<"ERROR: getting last ID has been failed!"<<endl;
        delete stmt_last;
        return nullptr;
    }

    int tmp_file_id;
    tmp_file_id = file_id;
    int* tmp_period_number;
    if (period_number == nullptr) tmp_period_number = nullptr;
    else
        tmp_period_number = new int(*period_number);
    int* tmp_run_number;
    if (run_number == nullptr) tmp_run_number = nullptr;
    else
        tmp_run_number = new int(*run_number);
    TDatime tmp_start_datetime;
    tmp_start_datetime = start_datetime;
    TDatime* tmp_end_datetime;
    if (end_datetime == nullptr) tmp_end_datetime = nullptr;
    else
        tmp_end_datetime = new TDatime(*end_datetime);
    TString tmp_file_path;
    tmp_file_path = file_path;
    int* tmp_event_count;
    if (event_count == nullptr) tmp_event_count = nullptr;
    else
        tmp_event_count = new int(*event_count);
    int64_t* tmp_file_size;
    if (file_size == nullptr) tmp_file_size = nullptr;
    else
        tmp_file_size = new int64_t(*file_size);
    TString* tmp_file_md5;
    if (file_md5 == nullptr) tmp_file_md5 = nullptr;
    else
        tmp_file_md5 = new TString(*file_md5);

    return new UniRawFile(connDb, tmp_file_id, tmp_period_number, tmp_run_number, tmp_start_datetime, tmp_end_datetime, tmp_file_path, tmp_event_count, tmp_file_size, tmp_file_md5);
}

// -----  Get raw file from the database  ---------------------------
UniRawFile* UniRawFile::GetRawFile(int file_id)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return nullptr;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select file_id, period_number, run_number, start_datetime, end_datetime, file_path, event_count, file_size, file_md5 "
        "from raw_file "
        "where file_id = %d", file_id);
    TSQLStatement* stmt = db_server->Statement(sql);

    // get raw file from the database
    if (!stmt->Process())
    {
        cout<<"ERROR: getting raw file from the database has been failed"<<endl;

        delete stmt;
        delete connDb;
        return nullptr;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // extract row
    if (!stmt->NextResultRow())
    {
        cout<<"ERROR: raw file was not found in the database"<<endl;

        delete stmt;
        delete connDb;
        return nullptr;
    }

    int tmp_file_id;
    tmp_file_id = stmt->GetInt(0);
    int* tmp_period_number;
    if (stmt->IsNull(1)) tmp_period_number = nullptr;
    else
        tmp_period_number = new int(stmt->GetInt(1));
    int* tmp_run_number;
    if (stmt->IsNull(2)) tmp_run_number = nullptr;
    else
        tmp_run_number = new int(stmt->GetInt(2));
    TDatime tmp_start_datetime;
    tmp_start_datetime = stmt->GetDatime(3);
    TDatime* tmp_end_datetime;
    if (stmt->IsNull(4)) tmp_end_datetime = nullptr;
    else
        tmp_end_datetime = new TDatime(stmt->GetDatime(4));
    TString tmp_file_path;
    tmp_file_path = stmt->GetString(5);
    int* tmp_event_count;
    if (stmt->IsNull(6)) tmp_event_count = nullptr;
    else
        tmp_event_count = new int(stmt->GetInt(6));
    int64_t* tmp_file_size;
    if (stmt->IsNull(7)) tmp_file_size = nullptr;
    else
        tmp_file_size = new int64_t(stmt->GetLong64(7));
    TString* tmp_file_md5;
    if (stmt->IsNull(8)) tmp_file_md5 = nullptr;
    else
        tmp_file_md5 = new TString(stmt->GetString(8));

    delete stmt;

    return new UniRawFile(connDb, tmp_file_id, tmp_period_number, tmp_run_number, tmp_start_datetime, tmp_end_datetime, tmp_file_path, tmp_event_count, tmp_file_size, tmp_file_md5);
}

// -----  Get raw file from the database by unique key  --------------
UniRawFile* UniRawFile::GetRawFile(TString file_path)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return nullptr;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select file_id, period_number, run_number, start_datetime, end_datetime, file_path, event_count, file_size, file_md5 "
        "from raw_file "
        "where lower(file_path) = lower('%s')", file_path.Data());
    TSQLStatement* stmt = db_server->Statement(sql);

    // get raw file from the database
    if (!stmt->Process())
    {
        cout<<"ERROR: getting raw file from the database has been failed"<<endl;

        delete stmt;
        delete connDb;
        return nullptr;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // extract row
    if (!stmt->NextResultRow())
    {
        cout<<"ERROR: raw file was not found in the database"<<endl;

        delete stmt;
        delete connDb;
        return nullptr;
    }

    int tmp_file_id;
    tmp_file_id = stmt->GetInt(0);
    int* tmp_period_number;
    if (stmt->IsNull(1)) tmp_period_number = nullptr;
    else
        tmp_period_number = new int(stmt->GetInt(1));
    int* tmp_run_number;
    if (stmt->IsNull(2)) tmp_run_number = nullptr;
    else
        tmp_run_number = new int(stmt->GetInt(2));
    TDatime tmp_start_datetime;
    tmp_start_datetime = stmt->GetDatime(3);
    TDatime* tmp_end_datetime;
    if (stmt->IsNull(4)) tmp_end_datetime = nullptr;
    else
        tmp_end_datetime = new TDatime(stmt->GetDatime(4));
    TString tmp_file_path;
    tmp_file_path = stmt->GetString(5);
    int* tmp_event_count;
    if (stmt->IsNull(6)) tmp_event_count = nullptr;
    else
        tmp_event_count = new int(stmt->GetInt(6));
    int64_t* tmp_file_size;
    if (stmt->IsNull(7)) tmp_file_size = nullptr;
    else
        tmp_file_size = new int64_t(stmt->GetLong64(7));
    TString* tmp_file_md5;
    if (stmt->IsNull(8)) tmp_file_md5 = nullptr;
    else
        tmp_file_md5 = new TString(stmt->GetString(8));

    delete stmt;

    return new UniRawFile(connDb, tmp_file_id, tmp_period_number, tmp_run_number, tmp_start_datetime, tmp_end_datetime, tmp_file_path, tmp_event_count, tmp_file_size, tmp_file_md5);
}

// -----  Check raw file exists in the database  ---------------------------
int UniRawFile::CheckRawFileExists(int file_id)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return -1;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select 1 "
        "from raw_file "
        "where file_id = %d", file_id);
    TSQLStatement* stmt = db_server->Statement(sql);

    // get raw file from the database
    if (!stmt->Process())
    {
        cout<<"ERROR: getting raw file from the database has been failed"<<endl;

        delete stmt;
        delete connDb;
        return -2;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // extract row
    if (!stmt->NextResultRow())
    {
        delete stmt;
        delete connDb;
        return 0;
    }

    delete stmt;
    delete connDb;

    return 1;
}

// -----  Check raw file exists in the database by unique key  --------------
int UniRawFile::CheckRawFileExists(TString file_path)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return -1;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select 1 "
        "from raw_file "
        "where lower(file_path) = lower('%s')", file_path.Data());
    TSQLStatement* stmt = db_server->Statement(sql);

    // get raw file from the database
    if (!stmt->Process())
    {
        cout<<"ERROR: getting raw file from the database has been failed"<<endl;

        delete stmt;
        delete connDb;
        return -2;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // extract row
    if (!stmt->NextResultRow())
    {
        delete stmt;
        delete connDb;
        return 0;
    }

    delete stmt;
    delete connDb;

    return 1;
}

// -----  Delete raw file from the database  ---------------------------
int UniRawFile::DeleteRawFile(int file_id)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return -1;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "delete from raw_file "
        "where file_id = $1");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetInt(0, file_id);

    // delete raw file from the dataBase
    if (!stmt->Process())
    {
        cout<<"ERROR: deleting raw file from the dataBase has been failed"<<endl;

        delete stmt;
        delete connDb;
        return -2;
    }

    delete stmt;
    delete connDb;
    return 0;
}

// -----  Delete raw file from the database by unique key  --------------
int UniRawFile::DeleteRawFile(TString file_path)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return -1;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "delete from raw_file "
        "where lower(file_path) = lower($1)");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetString(0, file_path);

    // delete raw file from the dataBase
    if (!stmt->Process())
    {
        cout<<"ERROR: deleting raw file from the DataBase has been failed"<<endl;

        delete stmt;
        delete connDb;
        return -2;
    }

    delete stmt;
    delete connDb;
    return 0;
}

// -----  Print all 'raw files'  ---------------------------------
int UniRawFile::PrintAll()
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return -1;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select file_id, period_number, run_number, start_datetime, end_datetime, file_path, event_count, file_size, file_md5 "
        "from raw_file");
    TSQLStatement* stmt = db_server->Statement(sql);

    // get all 'raw files' from the database
    if (!stmt->Process())
    {
        cout<<"ERROR: getting all 'raw files' from the dataBase has been failed"<<endl;

        delete stmt;
        delete connDb;
        return -2;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // print rows
    cout<<"Table 'raw_file':"<<endl;
    while (stmt->NextResultRow())
    {
        cout<<"file_id: ";
        cout<<(stmt->GetInt(0));
        cout<<", period_number: ";
        if (stmt->IsNull(1)) cout<<"nullptr";
        else
            cout<<stmt->GetInt(1);
        cout<<", run_number: ";
        if (stmt->IsNull(2)) cout<<"nullptr";
        else
            cout<<stmt->GetInt(2);
        cout<<", start_datetime: ";
        cout<<(stmt->GetDatime(3)).AsSQLString();
        cout<<", end_datetime: ";
        if (stmt->IsNull(4)) cout<<"nullptr";
        else
            cout<<stmt->GetDatime(4).AsSQLString();
        cout<<", file_path: ";
        cout<<(stmt->GetString(5));
        cout<<", event_count: ";
        if (stmt->IsNull(6)) cout<<"nullptr";
        else
            cout<<stmt->GetInt(6);
        cout<<", file_size: ";
        if (stmt->IsNull(7)) cout<<"nullptr";
        else
            cout<<stmt->GetLong64(7);
        cout<<", file_md5: ";
        if (stmt->IsNull(8)) cout<<"nullptr";
        else
            cout<<stmt->GetString(8);
        cout<<"."<<endl;
    }

    delete stmt;
    delete connDb;

    return 0;
}


// Setters functions
int UniRawFile::SetPeriodNumber(int* period_number)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update raw_file "
        "set period_number = $1 "
        "where file_id = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (period_number == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetInt(0, *period_number);
    stmt->SetInt(1, i_file_id);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about raw file has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (i_period_number)
        delete i_period_number;
    if (period_number == nullptr) i_period_number = nullptr;
    else
        i_period_number = new int(*period_number);

    delete stmt;
    return 0;
}

int UniRawFile::SetRunNumber(int* run_number)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update raw_file "
        "set run_number = $1 "
        "where file_id = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (run_number == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetInt(0, *run_number);
    stmt->SetInt(1, i_file_id);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about raw file has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (i_run_number)
        delete i_run_number;
    if (run_number == nullptr) i_run_number = nullptr;
    else
        i_run_number = new int(*run_number);

    delete stmt;
    return 0;
}

int UniRawFile::SetStartDatetime(TDatime start_datetime)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update raw_file "
        "set start_datetime = $1 "
        "where file_id = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetDatime(0, start_datetime);
    stmt->SetInt(1, i_file_id);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about raw file has been failed"<<endl;

        delete stmt;
        return -2;
    }

    ts_start_datetime = start_datetime;

    delete stmt;
    return 0;
}

int UniRawFile::SetEndDatetime(TDatime* end_datetime)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update raw_file "
        "set end_datetime = $1 "
        "where file_id = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (end_datetime == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetDatime(0, *end_datetime);
    stmt->SetInt(1, i_file_id);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about raw file has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (ts_end_datetime)
        delete ts_end_datetime;
    if (end_datetime == nullptr) ts_end_datetime = nullptr;
    else
        ts_end_datetime = new TDatime(*end_datetime);

    delete stmt;
    return 0;
}

int UniRawFile::SetFilePath(TString file_path)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update raw_file "
        "set file_path = $1 "
        "where file_id = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetString(0, file_path);
    stmt->SetInt(1, i_file_id);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about raw file has been failed"<<endl;

        delete stmt;
        return -2;
    }

    str_file_path = file_path;

    delete stmt;
    return 0;
}

int UniRawFile::SetEventCount(int* event_count)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update raw_file "
        "set event_count = $1 "
        "where file_id = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (event_count == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetInt(0, *event_count);
    stmt->SetInt(1, i_file_id);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about raw file has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (i_event_count)
        delete i_event_count;
    if (event_count == nullptr) i_event_count = nullptr;
    else
        i_event_count = new int(*event_count);

    delete stmt;
    return 0;
}

int UniRawFile::SetFileSize(int64_t* file_size)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update raw_file "
        "set file_size = $1 "
        "where file_id = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (file_size == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetLong64(0, *file_size);
    stmt->SetInt(1, i_file_id);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about raw file has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (i64_file_size)
        delete i64_file_size;
    if (file_size == nullptr) i64_file_size = nullptr;
    else
        i64_file_size = new int64_t(*file_size);

    delete stmt;
    return 0;
}

int UniRawFile::SetFileMd5(TString* file_md5)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update raw_file "
        "set file_md5 = $1 "
        "where file_id = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (file_md5 == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetString(0, *file_md5);
    stmt->SetInt(1, i_file_id);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about raw file has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (chr_file_md5)
        delete chr_file_md5;
    if (file_md5 == nullptr) chr_file_md5 = nullptr;
    else
        chr_file_md5 = new TString(*file_md5);

    delete stmt;
    return 0;
}

// -----  Print current raw file  ---------------------------------------
void UniRawFile::Print()
{
    cout<<"Table 'raw_file'";
    cout<<". file_id: "<<i_file_id<<". period_number: "<<(i_period_number == nullptr? "nullptr": TString::Format("%d", *i_period_number))<<". run_number: "<<(i_run_number == nullptr? "nullptr": TString::Format("%d", *i_run_number))<<". start_datetime: "<<ts_start_datetime.AsSQLString()<<". end_datetime: "<<(ts_end_datetime == nullptr? "nullptr": (*ts_end_datetime).AsSQLString())<<". file_path: "<<str_file_path<<". event_count: "<<(i_event_count == nullptr? "nullptr": TString::Format("%d", *i_event_count))<<". file_size: "<<(i64_file_size == nullptr? "nullptr": TString::Format("%ld", *i64_file_size))<<". file_md5: "<<(chr_file_md5 == nullptr? "nullptr": *chr_file_md5)<<endl;

    return;
}
/* END OF GENERATED CLASS PART (SHOULD NOT BE CHANGED MANUALLY) */

// -------------------------------------------------------------------
ClassImp(UniRawFile);
