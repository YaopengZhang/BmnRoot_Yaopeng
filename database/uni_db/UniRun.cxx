// ----------------------------------------------------------------------
//                    UniRun cxx file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

#include "TSystem.h"
#include "TSQLServer.h"
#include "TSQLStatement.h"

#include "UniRun.h"
#include "UniRunGeometry.h"

#include <iostream>
using namespace std;

/* GENERATED CLASS MEMBERS (SHOULD NOT BE CHANGED MANUALLY) */
// -----   Constructor with database connection   -----------------------
UniRun::UniRun(UniConnection* db_connect, int period_number, int run_number, TString beam_particle, TString* target_particle, double* energy, TDatime start_datetime, TDatime* end_datetime, int* event_count, double* field_voltage, int* geometry_id)
{
    connectionDB = db_connect;

    i_period_number = period_number;
    i_run_number = run_number;
    str_beam_particle = beam_particle;
    str_target_particle = target_particle;
    d_energy = energy;
    ts_start_datetime = start_datetime;
    ts_end_datetime = end_datetime;
    i_event_count = event_count;
    d_field_voltage = field_voltage;
    i_geometry_id = geometry_id;
}

// -----   Destructor   -------------------------------------------------
UniRun::~UniRun()
{
    if (connectionDB)
        delete connectionDB;
    if (str_target_particle)
        delete str_target_particle;
    if (d_energy)
        delete d_energy;
    if (ts_end_datetime)
        delete ts_end_datetime;
    if (i_event_count)
        delete i_event_count;
    if (d_field_voltage)
        delete d_field_voltage;
    if (i_geometry_id)
        delete i_geometry_id;
}

// -----   Creating new run in the database  ---------------------------
UniRun* UniRun::CreateRun(int period_number, int run_number, TString beam_particle, TString* target_particle, double* energy, TDatime start_datetime, TDatime* end_datetime, int* event_count, double* field_voltage, int* geometry_id)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return nullptr;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "insert into run_(period_number, run_number, beam_particle, target_particle, energy, start_datetime, end_datetime, event_count, field_voltage, geometry_id) "
        "values ($1, $2, $3, $4, $5, $6, $7, $8, $9, $10)");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetInt(0, period_number);
    stmt->SetInt(1, run_number);
    stmt->SetString(2, beam_particle);
    if (target_particle == nullptr)
        stmt->SetNull(3);
    else
        stmt->SetString(3, *target_particle);
    if (energy == nullptr)
        stmt->SetNull(4);
    else
        stmt->SetDouble(4, *energy);
    stmt->SetDatime(5, start_datetime);
    if (end_datetime == nullptr)
        stmt->SetNull(6);
    else
        stmt->SetDatime(6, *end_datetime);
    if (event_count == nullptr)
        stmt->SetNull(7);
    else
        stmt->SetInt(7, *event_count);
    if (field_voltage == nullptr)
        stmt->SetNull(8);
    else
        stmt->SetDouble(8, *field_voltage);
    if (geometry_id == nullptr)
        stmt->SetNull(9);
    else
        stmt->SetInt(9, *geometry_id);

    // inserting new run to the Database
    if (!stmt->Process())
    {
        cout<<"ERROR: inserting new run to the Database has been failed"<<endl;
        delete stmt;
        delete connDb;
        return nullptr;
    }

    delete stmt;

    int tmp_period_number;
    tmp_period_number = period_number;
    int tmp_run_number;
    tmp_run_number = run_number;
    TString tmp_beam_particle;
    tmp_beam_particle = beam_particle;
    TString* tmp_target_particle;
    if (target_particle == nullptr) tmp_target_particle = nullptr;
    else
        tmp_target_particle = new TString(*target_particle);
    double* tmp_energy;
    if (energy == nullptr) tmp_energy = nullptr;
    else
        tmp_energy = new double(*energy);
    TDatime tmp_start_datetime;
    tmp_start_datetime = start_datetime;
    TDatime* tmp_end_datetime;
    if (end_datetime == nullptr) tmp_end_datetime = nullptr;
    else
        tmp_end_datetime = new TDatime(*end_datetime);
    int* tmp_event_count;
    if (event_count == nullptr) tmp_event_count = nullptr;
    else
        tmp_event_count = new int(*event_count);
    double* tmp_field_voltage;
    if (field_voltage == nullptr) tmp_field_voltage = nullptr;
    else
        tmp_field_voltage = new double(*field_voltage);
    int* tmp_geometry_id;
    if (geometry_id == nullptr) tmp_geometry_id = nullptr;
    else
        tmp_geometry_id = new int(*geometry_id);

    return new UniRun(connDb, tmp_period_number, tmp_run_number, tmp_beam_particle, tmp_target_particle, tmp_energy, tmp_start_datetime, tmp_end_datetime, tmp_event_count, tmp_field_voltage, tmp_geometry_id);
}

// -----  Get run from the database  ---------------------------
UniRun* UniRun::GetRun(int period_number, int run_number)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return nullptr;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select period_number, run_number, beam_particle, target_particle, energy, start_datetime, end_datetime, event_count, field_voltage, geometry_id "
        "from run_ "
        "where period_number = %d and run_number = %d", period_number, run_number);
    TSQLStatement* stmt = db_server->Statement(sql);

    // get run from the database
    if (!stmt->Process())
    {
        cout<<"ERROR: getting run from the database has been failed"<<endl;

        delete stmt;
        delete connDb;
        return nullptr;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // extract row
    if (!stmt->NextResultRow())
    {
        cout<<"ERROR: run was not found in the database"<<endl;

        delete stmt;
        delete connDb;
        return nullptr;
    }

    int tmp_period_number;
    tmp_period_number = stmt->GetInt(0);
    int tmp_run_number;
    tmp_run_number = stmt->GetInt(1);
    TString tmp_beam_particle;
    tmp_beam_particle = stmt->GetString(2);
    TString* tmp_target_particle;
    if (stmt->IsNull(3)) tmp_target_particle = nullptr;
    else
        tmp_target_particle = new TString(stmt->GetString(3));
    double* tmp_energy;
    if (stmt->IsNull(4)) tmp_energy = nullptr;
    else
        tmp_energy = new double(stmt->GetDouble(4));
    TDatime tmp_start_datetime;
    tmp_start_datetime = stmt->GetDatime(5);
    TDatime* tmp_end_datetime;
    if (stmt->IsNull(6)) tmp_end_datetime = nullptr;
    else
        tmp_end_datetime = new TDatime(stmt->GetDatime(6));
    int* tmp_event_count;
    if (stmt->IsNull(7)) tmp_event_count = nullptr;
    else
        tmp_event_count = new int(stmt->GetInt(7));
    double* tmp_field_voltage;
    if (stmt->IsNull(8)) tmp_field_voltage = nullptr;
    else
        tmp_field_voltage = new double(stmt->GetDouble(8));
    int* tmp_geometry_id;
    if (stmt->IsNull(9)) tmp_geometry_id = nullptr;
    else
        tmp_geometry_id = new int(stmt->GetInt(9));

    delete stmt;

    return new UniRun(connDb, tmp_period_number, tmp_run_number, tmp_beam_particle, tmp_target_particle, tmp_energy, tmp_start_datetime, tmp_end_datetime, tmp_event_count, tmp_field_voltage, tmp_geometry_id);
}

// -----  Check run exists in the database  ---------------------------
int UniRun::CheckRunExists(int period_number, int run_number)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return -1;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select 1 "
        "from run_ "
        "where period_number = %d and run_number = %d", period_number, run_number);
    TSQLStatement* stmt = db_server->Statement(sql);

    // get run from the database
    if (!stmt->Process())
    {
        cout<<"ERROR: getting run from the database has been failed"<<endl;

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

// -----  Delete run from the database  ---------------------------
int UniRun::DeleteRun(int period_number, int run_number)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return -1;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "delete from run_ "
        "where period_number = $1 and run_number = $2");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetInt(0, period_number);
    stmt->SetInt(1, run_number);

    // delete run from the dataBase
    if (!stmt->Process())
    {
        cout<<"ERROR: deleting run from the dataBase has been failed"<<endl;

        delete stmt;
        delete connDb;
        return -2;
    }

    delete stmt;
    delete connDb;
    return 0;
}

// -----  Print all 'runs'  ---------------------------------
int UniRun::PrintAll()
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr) return -1;

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select period_number, run_number, beam_particle, target_particle, energy, start_datetime, end_datetime, event_count, field_voltage, geometry_id "
        "from run_");
    TSQLStatement* stmt = db_server->Statement(sql);

    // get all 'runs' from the database
    if (!stmt->Process())
    {
        cout<<"ERROR: getting all 'runs' from the dataBase has been failed"<<endl;

        delete stmt;
        delete connDb;
        return -2;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // print rows
    cout<<"Table 'run_':"<<endl;
    while (stmt->NextResultRow())
    {
        cout<<"period_number: ";
        cout<<(stmt->GetInt(0));
        cout<<", run_number: ";
        cout<<(stmt->GetInt(1));
        cout<<", beam_particle: ";
        cout<<(stmt->GetString(2));
        cout<<", target_particle: ";
        if (stmt->IsNull(3)) cout<<"nullptr";
        else
            cout<<stmt->GetString(3);
        cout<<", energy: ";
        if (stmt->IsNull(4)) cout<<"nullptr";
        else
            cout<<stmt->GetDouble(4);
        cout<<", start_datetime: ";
        cout<<(stmt->GetDatime(5)).AsSQLString();
        cout<<", end_datetime: ";
        if (stmt->IsNull(6)) cout<<"nullptr";
        else
            cout<<stmt->GetDatime(6).AsSQLString();
        cout<<", event_count: ";
        if (stmt->IsNull(7)) cout<<"nullptr";
        else
            cout<<stmt->GetInt(7);
        cout<<", field_voltage: ";
        if (stmt->IsNull(8)) cout<<"nullptr";
        else
            cout<<stmt->GetDouble(8);
        cout<<", geometry_id: ";
        if (stmt->IsNull(9)) cout<<"nullptr";
        else
            cout<<stmt->GetInt(9);
        cout<<"."<<endl;
    }

    delete stmt;
    delete connDb;

    return 0;
}


// Setters functions
int UniRun::SetPeriodNumber(int period_number)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set period_number = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetInt(0, period_number);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

        delete stmt;
        return -2;
    }

    i_period_number = period_number;

    delete stmt;
    return 0;
}

int UniRun::SetRunNumber(int run_number)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set run_number = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetInt(0, run_number);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

        delete stmt;
        return -2;
    }

    i_run_number = run_number;

    delete stmt;
    return 0;
}

int UniRun::SetBeamParticle(TString beam_particle)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set beam_particle = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetString(0, beam_particle);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

        delete stmt;
        return -2;
    }

    str_beam_particle = beam_particle;

    delete stmt;
    return 0;
}

int UniRun::SetTargetParticle(TString* target_particle)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set target_particle = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (target_particle == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetString(0, *target_particle);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (str_target_particle)
        delete str_target_particle;
    if (target_particle == nullptr) str_target_particle = nullptr;
    else
        str_target_particle = new TString(*target_particle);

    delete stmt;
    return 0;
}

int UniRun::SetEnergy(double* energy)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set energy = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (energy == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetDouble(0, *energy);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (d_energy)
        delete d_energy;
    if (energy == nullptr) d_energy = nullptr;
    else
        d_energy = new double(*energy);

    delete stmt;
    return 0;
}

int UniRun::SetStartDatetime(TDatime start_datetime)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set start_datetime = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    stmt->SetDatime(0, start_datetime);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

        delete stmt;
        return -2;
    }

    ts_start_datetime = start_datetime;

    delete stmt;
    return 0;
}

int UniRun::SetEndDatetime(TDatime* end_datetime)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set end_datetime = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (end_datetime == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetDatime(0, *end_datetime);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

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

int UniRun::SetEventCount(int* event_count)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set event_count = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (event_count == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetInt(0, *event_count);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

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

int UniRun::SetFieldVoltage(double* field_voltage)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set field_voltage = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (field_voltage == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetDouble(0, *field_voltage);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (d_field_voltage)
        delete d_field_voltage;
    if (field_voltage == nullptr) d_field_voltage = nullptr;
    else
        d_field_voltage = new double(*field_voltage);

    delete stmt;
    return 0;
}

int UniRun::SetGeometryId(int* geometry_id)
{
    if (!connectionDB)
    {
        cout<<"CRITICAL ERROR: Connection object is null"<<endl;
        return -1;
    }

    TSQLServer* db_server = connectionDB->GetSQLServer();

    TString sql = TString::Format(
        "update run_ "
        "set geometry_id = $1 "
        "where period_number = $2 and run_number = $3");
    TSQLStatement* stmt = db_server->Statement(sql);

    stmt->NextIteration();
    if (geometry_id == nullptr)
        stmt->SetNull(0);
    else
        stmt->SetInt(0, *geometry_id);
    stmt->SetInt(1, i_period_number);
    stmt->SetInt(2, i_run_number);

    // write new value to the database
    if (!stmt->Process())
    {
        cout<<"ERROR: updating information about run has been failed"<<endl;

        delete stmt;
        return -2;
    }

    if (i_geometry_id)
        delete i_geometry_id;
    if (geometry_id == nullptr) i_geometry_id = nullptr;
    else
        i_geometry_id = new int(*geometry_id);

    delete stmt;
    return 0;
}

// -----  Print current run  ---------------------------------------
void UniRun::Print()
{
    cout<<"Table 'run_'";
    cout<<". period_number: "<<i_period_number<<". run_number: "<<i_run_number<<". beam_particle: "<<str_beam_particle<<". target_particle: "<<(str_target_particle == nullptr? "nullptr": *str_target_particle)<<". energy: "<<(d_energy == nullptr? "nullptr": TString::Format("%f", *d_energy))<<". start_datetime: "<<ts_start_datetime.AsSQLString()<<". end_datetime: "<<(ts_end_datetime == nullptr? "nullptr": (*ts_end_datetime).AsSQLString())<<". event_count: "<<(i_event_count == nullptr? "nullptr": TString::Format("%d", *i_event_count))<<". field_voltage: "<<(d_field_voltage == nullptr? "nullptr": TString::Format("%f", *d_field_voltage))<<". geometry_id: "<<(i_geometry_id == nullptr? "nullptr": TString::Format("%d", *i_geometry_id))<<endl;

    return;
}
/* END OF GENERATED CLASS PART (SHOULD NOT BE CHANGED MANUALLY) */


// get numbers of runs existing in the Database for a selected range
int UniRun::GetRunNumbers(int start_period, int start_run, int end_period, int end_run, UniqueRunNumber*& run_numbers)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr)
    {
        cout<<"ERROR: connection to the database was failed"<<endl;
        return -1;
    }

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select period_number, run_number "
        "from run_ "
        "where (not (((%d < period_number) or ((%d = period_number) and (%d < run_number))) or ((%d > period_number) or ((%d = period_number) and (%d > run_number))))) "
        "order by period_number, run_number", end_period, end_period, end_run, start_period, start_period, start_run);
    TSQLStatement* stmt = db_server->Statement(sql);

    // get table record from DB
    if (!stmt->Process())
    {
        cout<<"ERROR: getting run numbers from the database has been failed"<<endl;
        delete stmt;
        delete connDb;
        return -2;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    vector<int> vecPeriods;
    vector<int> vecRuns;
    while (stmt->NextResultRow())
    {
        vecPeriods.push_back(stmt->GetInt(0));
        vecRuns.push_back(stmt->GetInt(1));
    }

    delete stmt;
    delete connDb;

    int run_count = vecPeriods.size();
    run_numbers = new UniqueRunNumber[run_count];
    for (int i = 0; i < run_count; i++)
    {
        run_numbers[i].period_number = vecPeriods[i];
        run_numbers[i].run_number = vecRuns[i];
    }

    return run_count;
}

// get numbers of existing runs in the Database
int UniRun::GetRunNumbers(UniqueRunNumber*& run_numbers)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr)
    {
        cout<<"ERROR: connection to the database was failed"<<endl;
        return -1;
    }

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select period_number, run_number "
        "from run_ "
        "order by period_number, run_number");
    TSQLStatement* stmt = db_server->Statement(sql);

    // get table record from DB
    if (!stmt->Process())
    {
        cout<<"ERROR: getting run numbers from the database has been failed"<<endl;
        delete stmt;
        delete connDb;
        return -2;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    vector<int> vecPeriods;
    vector<int> vecRuns;
    while (stmt->NextResultRow())
    {
        vecPeriods.push_back(stmt->GetInt(0));
        vecRuns.push_back(stmt->GetInt(1));
    }

    delete stmt;
    delete connDb;

    int run_count = vecPeriods.size();
    run_numbers = new UniqueRunNumber[run_count];
    for (int i = 0; i < run_count; i++)
    {
        run_numbers[i].period_number = vecPeriods[i];
        run_numbers[i].run_number = vecRuns[i];
    }

    return run_count;
}

int UniRun::SetRootGeometry(int start_period, int start_run, int end_period, int end_run, unsigned char* root_geometry, Long_t size_root_geometry)
{
    if (((end_period < start_period) or ((end_period == start_period) and (end_run < start_run))) or ((start_period > end_period) or ((start_period == end_period) and (start_run > end_run))))
    {
        cout<<"ERROR: end run should be after or the same as start run"<<endl;
        return -1;
    }

    UniRunGeometry* pGeometry = UniRunGeometry::CreateRunGeometry(root_geometry, size_root_geometry);
    if (pGeometry == nullptr)
    {
        cout<<"ERROR: creating of the geometry was failed"<<endl;
        return -2;
    }

    int geometry_id = pGeometry->GetGeometryId();
    delete pGeometry;

    UniqueRunNumber* pUniqueRuns = nullptr;
    int run_count = GetRunNumbers(start_period, start_run, end_period, end_run, pUniqueRuns);
    if (run_count < 0)
        return -10 - run_count;

    for (int i = 0; i < run_count; i++)
    {        
        cout<<"Setting geometry for run_period:run   "<<pUniqueRuns[i].period_number<<":"<<pUniqueRuns[i].run_number<<"..."<<endl;

        UniRun* pCurRun = UniRun::GetRun(pUniqueRuns[i].period_number, pUniqueRuns[i].run_number);
        if (pCurRun == nullptr)
        {
            cout<<"ERROR: getting of run "<<pUniqueRuns[i].period_number<<":"<<pUniqueRuns[i].run_number<<" (period:number) was failed"<<endl;
            continue;
        }

        pCurRun->SetGeometryId(new int(geometry_id));

        delete pCurRun;
    }

    delete [] pUniqueRuns;

    return 0;
}

int UniRun::GetRootGeometry(int period_number, int run_number, unsigned char*& root_geometry, Long_t& size_root_geometry)
{
    UniRun* pCurRun = UniRun::GetRun(period_number, run_number);
    if (pCurRun == nullptr)
    {
        cout<<"ERROR: getting of run "<<period_number<<":"<<run_number<<" (period:number) was failed"<<endl;
        return -1;
    }

	int *geometry_ID = pCurRun->GetGeometryId();
    if (geometry_ID == nullptr)
    {
        cout<<"ERROR: no geometry exists for run "<<period_number<<":"<<run_number<<" (period:number)"<<endl;
        return -2;
    }

    int geometry_id = geometry_ID[0];
    UniRunGeometry* pGeometry = UniRunGeometry::GetRunGeometry(geometry_id);
    if (pGeometry == nullptr)
    {
        cout<<"ERROR: getting of the geometry was failed"<<endl;
        return -3;
    }

    size_root_geometry = pGeometry->GetRootGeometrySize();
    root_geometry = pGeometry->GetRootGeometry();
	delete geometry_ID;
	delete pCurRun;
    delete pGeometry;

    return 0;
}

int UniRun::WriteGeometryFile(int start_period, int start_run, int end_period, int end_run, const char* geo_file_path)
{
    TString strGeoFilePath(geo_file_path);
    gSystem->ExpandPathName(strGeoFilePath);
    FILE* root_file = fopen(strGeoFilePath.Data(), "rb");
    if (root_file == nullptr)
    {
        cout<<"ERROR: opening root file: "<<strGeoFilePath<<" was failed"<<endl;
        return -1;
    }

    fseek(root_file, 0, SEEK_END);
    int64_t file_size = ftell(root_file);
    rewind(root_file);
    if (file_size <= 0)
    {
        cout<<"ERROR: getting file size: "<<strGeoFilePath<<" was failed"<<endl;
        fclose(root_file);
        return -2;
    }

    unsigned char* buffer = new unsigned char[file_size];
    if (buffer == nullptr)
    {
        cout<<"ERROR: getting memory from heap was failed"<<endl;
        fclose(root_file);
        return -3;
    }

    size_t bytes_read = fread(buffer, 1, file_size, root_file);
    if (bytes_read != file_size)
    {
        cout<<"ERROR: reading file: "<<strGeoFilePath<<", got "<<bytes_read<<" bytes of "<<file_size<<endl;
        delete [] buffer;
        fclose(root_file);
        return -4;
    }

    fclose(root_file);

    // set root geometry file's bytes for run range
    int res_code = UniRun::SetRootGeometry(start_period, start_run, end_period, end_run, buffer, file_size);
    if (res_code != 0)
    {
        delete [] buffer;
        return -5;
    }

    delete [] buffer;

    return 0;
}

int UniRun::ReadGeometryFile(int period_number, int run_number, char* geo_file_path)
{
    // get root geometry file's bytes for selected run
    unsigned char* buffer = nullptr;
    int64_t file_size;
    int res_code = UniRun::GetRootGeometry(period_number, run_number, buffer, file_size);
    if (res_code != 0)
    {
        return -1;
    }

    FILE* root_file = fopen(geo_file_path, "wb");
    if (root_file == nullptr)
    {
        cout<<"ERROR: creating root file: "<<geo_file_path<<endl;
        return -2;
    }

    size_t bytes_write = fwrite(buffer, 1, file_size, root_file);
    if (bytes_write != file_size)
    {
        cout<<"ERROR: writing file: "<<geo_file_path<<", put "<<bytes_write<<" bytes of "<<file_size<<endl;
        delete [] buffer;
        fclose(root_file);
        return -3;
    }

    fclose(root_file);

    if (buffer)
        delete [] buffer;

    return 0;
}

TObjArray* UniRun::Search(TObjArray& search_conditions)
{
    TObjArray* arrayResult = nullptr;
    search_conditions.SetOwner(kTRUE);

    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr)
    {
        cout<<"ERROR: connection to the Unified Condition Database was failed"<<endl;
        return arrayResult;
    }

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select period_number, run_number, beam_particle, target_particle, energy, start_datetime, end_datetime, event_count, field_voltage, geometry_id "
        "from run_");

    TString strCondition;
    bool isFirst = true;
    TIter next(&search_conditions);
    UniSearchCondition* curCondition;
    while (curCondition = (UniSearchCondition*) next())
    {
        strCondition = "";

        switch (curCondition->GetColumn())
        {
            case UniSearchCondition::columnRunNumber:       strCondition += "run_number "; break;
            case UniSearchCondition::columnPeriodNumber:    strCondition += "period_number "; break;
            case UniSearchCondition::columnFilePath:        strCondition += "lower(file_path) "; break;
            case UniSearchCondition::columnBeamParticle:    strCondition += "lower(beam_particle) "; break;
            case UniSearchCondition::columnTargetParticle:  strCondition += "lower(target_particle) "; break;
            case UniSearchCondition::columnEnergy:          strCondition += "energy "; break;
            case UniSearchCondition::columnStartDatetime:   strCondition += "start_datetime "; break;
            case UniSearchCondition::columnEndDateTime:     strCondition += "end_datetime "; break;
            case UniSearchCondition::columnEventCount:      strCondition += "event_count "; break;
            case UniSearchCondition::columnFieldVoltage:    strCondition += "field_voltage "; break;
            case UniSearchCondition::columnFileSize:        strCondition += "file_size "; break;
            default:
                cout<<"ERROR: the column in the search condition was not defined, the condition is skipped"<<endl;
                continue;
        }

        switch (curCondition->GetCondition())
        {
            case UniSearchCondition::conditionLess:             strCondition += "< "; break;
            case UniSearchCondition::conditionLessOrEqual:      strCondition += "<= "; break;
            case UniSearchCondition::conditionEqual:            strCondition += "= "; break;
            case UniSearchCondition::conditionNotEqual:         strCondition += "<> "; break;
            case UniSearchCondition::conditionGreater:          strCondition += "> "; break;
            case UniSearchCondition::conditionGreaterOrEqual:   strCondition += ">= "; break;
            case UniSearchCondition::conditionLike:             strCondition += "like "; break;
            case UniSearchCondition::conditionNull:             strCondition += "is null "; break;
            case UniSearchCondition::conditionNotNull:          strCondition += "is not null "; break;
            default:
                cout<<"ERROR: the comparison operator in the search condition was not defined, the condition is skipped"<<endl;
                continue;
        }

        switch (curCondition->GetValueType())
        {
            case 0:
                if ((curCondition->GetCondition() != UniSearchCondition::conditionNull) &&
                    (curCondition->GetCondition() != UniSearchCondition::conditionNotNull)) continue;
                break;
            case 1: strCondition += Form("%d", curCondition->GetIntValue()); break;
            case 2: strCondition += Form("%u", curCondition->GetUIntValue()); break;
            case 3: strCondition += Form("%f", curCondition->GetDoubleValue()); break;
            case 4: strCondition += Form("lower('%s')", curCondition->GetStringValue().Data()); break;
            case 5: strCondition += Form("'%s'", curCondition->GetDatimeValue().AsSQLString()); break;
            default:
                cout<<"ERROR: the value type in the search condition was not found, the condition is skipped"<<endl;
                continue;
        }

        if (isFirst)
        {
            sql += " where ";
            isFirst = false;
        }
        else
            sql += " and ";

        sql += strCondition;
    }
    sql += " order by period_number,run_number";

    TSQLStatement* stmt = db_server->Statement(sql);
    //cout<<"SQL code: "<<sql<<endl;

    // get table record from DB
    if (!stmt->Process())
    {
        cout<<"ERROR: getting runs from the Unified Condition Database has been failed"<<endl;
        delete stmt;
        delete connDb;

        return arrayResult;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // extract rows one after another
    arrayResult = new TObjArray();
    arrayResult->SetOwner(kTRUE);
    while (stmt->NextResultRow())
    {
        UniConnection* connRun = UniConnection::Open();
        if (connRun == nullptr)
        {
            cout<<"ERROR: the connection to the Unified Condition Database for the selected run was failed"<<endl;
            return arrayResult;
        }

        int tmp_period_number;
        tmp_period_number = stmt->GetInt(0);
        int tmp_run_number;
        tmp_run_number = stmt->GetInt(1);
        TString tmp_beam_particle;
        tmp_beam_particle = stmt->GetString(2);
        TString* tmp_target_particle;
        if (stmt->IsNull(3)) tmp_target_particle = nullptr;
        else
            tmp_target_particle = new TString(stmt->GetString(3));
        double* tmp_energy;
        if (stmt->IsNull(4)) tmp_energy = nullptr;
        else
            tmp_energy = new double(stmt->GetDouble(4));
        TDatime tmp_start_datetime;
        tmp_start_datetime = stmt->GetDatime(5);
        TDatime* tmp_end_datetime;
        if (stmt->IsNull(6)) tmp_end_datetime = nullptr;
        else
            tmp_end_datetime = new TDatime(stmt->GetDatime(6));
        int* tmp_event_count;
        if (stmt->IsNull(7)) tmp_event_count = nullptr;
        else
            tmp_event_count = new int(stmt->GetInt(7));
        double* tmp_field_voltage;
        if (stmt->IsNull(8)) tmp_field_voltage = nullptr;
        else
            tmp_field_voltage = new double(stmt->GetDouble(8));
        int* tmp_geometry_id;
        if (stmt->IsNull(9)) tmp_geometry_id = nullptr;
        else
            tmp_geometry_id = new int(stmt->GetInt(9));

        arrayResult->Add((TObject*) new UniRun(connRun, tmp_period_number, tmp_run_number, tmp_beam_particle, tmp_target_particle, tmp_energy, tmp_start_datetime, tmp_end_datetime, tmp_event_count, tmp_field_voltage, tmp_geometry_id));
    }

    delete stmt;

    return arrayResult;
}

TObjArray* UniRun::Search(UniSearchCondition& search_condition)
{
    TObjArray search_conditions;
    search_conditions.Add((TObject*)&search_condition);

    return Search(search_conditions);
}

// get number of the closest run below the given one
UniqueRunNumber* UniRun::FindPreviousRun(int run_period, int run_number)
{
    UniConnection* connDb = UniConnection::Open();
    if (connDb == nullptr)
    {
        cout<<"ERROR: connection to the Database was failed"<<endl;
        return nullptr;
    }

    TSQLServer* db_server = connDb->GetSQLServer();

    TString sql = TString::Format(
        "select period_number, run_number "
        "from run_ "
        "where (period_number < %d) OR ((period_number = %d) AND (run_number < %d)) "
        "order by period_number desc, run_number desc "
        "limit 1", run_period, run_period, run_number);
    TSQLStatement* stmt = db_server->Statement(sql);

    // get table record from DB
    if (!stmt->Process())
    {
        cout<<"ERROR: getting previous run number from DB has been failed"<<endl;
        delete stmt;
        delete connDb;
        return nullptr;
    }

    // store result of statement in buffer
    stmt->StoreResult();

    // extract row
    if (!stmt->NextResultRow())
    {
        cout<<"ERROR: previous run was not found in the database"<<endl;

        delete stmt;
        delete connDb;
        return nullptr;
    }

    UniqueRunNumber* pRunNumber = new UniqueRunNumber(stmt->GetInt(0), stmt->GetInt(1));

    delete stmt;
    delete connDb;

    return pRunNumber;
}

// -------------------------------------------------------------------
ClassImp(UniRun);
