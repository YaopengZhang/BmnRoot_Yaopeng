#include "GeoSetup.h"

#include "BmnNewFieldMap.h"

#include "FairModule.h"
#include "FairRunAna.h"

#include "TSystem.h"
#include "TKey.h"
#include "TSQLResult.h"
#include "TSQLRow.h"
#include "TSQLiteServer.h"
#include "TXMLEngine.h"
#include "TGeoManager.h"
#include "TGeoBBox.h"
#include "TGeoTube.h"
#include "TGeoCone.h"
#include "TGeoTrd2.h"
#include "TGeoMatrix.h"
#include "TGeoCompositeShape.h"
#include "TGeoBoolNode.h"

#include <sys/stat.h>       /* stat */
#include <time.h>           /* time */
#include <cstring>
#include <iostream>

//Initialise static GeoSetup instance
GeoSetup* GeoSetup::gInstance = nullptr;

// Static method to create (get) instance of GeoSetup.
// @return  Singleton instance of GeoSetup.
GeoSetup* GeoSetup::Instance()
{
    if ( !gInstance ) gInstance = new GeoSetup();
    return gInstance;
}

bool GeoSetup::exists_file(const char* name) {
    return ( access( name, F_OK ) != -1 );
}

unsigned long int GeoSetup::getServerRevision(const char* url){
  unsigned long int serverRev=0;
  gSystem->Exec(TString::Format("wget -O server_revision.txt \"%s/get_cur_timestamp.php\" > /dev/null 2>&1", url));
  std::ifstream myFile_Handler;
  std::string myLine;
  myFile_Handler.open("server_revision.txt");
  if(myFile_Handler.is_open()){
    char *ptr;
    while(getline(myFile_Handler, myLine)){
      serverRev=strtoul(myLine.c_str(), &ptr, 10);
      break;
    }
    myFile_Handler.close();
    std::remove("server_revision.txt");
  }
  return serverRev;
}

unsigned long int GeoSetup::getLocalRevision(TString& localDbPath){
    unsigned long int localRev=0;
    char type;
    if(exists_file(localDbPath)){
      std::ostringstream stringStream;
      stringStream<<"sqlite://"<<localDbPath;
      TSQLiteServer db(stringStream.str().c_str());
      stringStream.str("");
      if(db.IsConnected()){
        stringStream<<"select value_field from config where key_field='config_time';";
        cout<<stringStream.str().c_str()<<std::endl;
        TSQLResult* resQ = db.Query(stringStream.str().c_str());
        if (resQ != 0)
        {
          TSQLRow* row = resQ->Next();
          if (row != NULL){
            const char* ch_time = row->GetField(0);
            char *ptr;
            if(ch_time!=NULL)
                localRev = strtoul(ch_time, &ptr, 10);
          }
        }
      }
    }
    return localRev;
}

// GeoSetup destructor
GeoSetup::~GeoSetup()
{
    m_modules_table.clear();
    m_modules_revision_table.clear();
    if (m_db != nullptr)
    {
        m_db->Close();
        delete m_db;
    }
}

// create connection to the Local Geometry Database and fill the tables with modules and their revisions
bool GeoSetup::OpenLocalGeoDatabase()
{
    const char* env_p = getenv("DBL_FILE_PATH");
    if (env_p == nullptr){
        LOG(fatal)<<"Please, set DBL_FILE_PATH environment variable before using the Geometry Database";
        return false;
    }

    ostringstream stringStream;
    stringStream<<"sqlite://"<<gSystem->ExpandPathName(env_p);

    LOG(debug1)<<"Connecting the Local Geometry Database at path: "<<stringStream.str().c_str();
    m_db = new TSQLiteServer(stringStream.str().c_str());
    if (putModules() != 0){
        LOG(fatal)<<"Cannot load detector geometry, please, check DBL_FILE_PATH environment variable";
        return false;
    }
    if (putModuleRevisions() != 0){
        LOG(fatal)<<"Cannot load detector geometry, please, check DBL_FILE_PATH environment variable";
        return false;
    }

    return true;
}

// load selected geometry setup from the Local Geometry Database and create gGeoManager instance
bool GeoSetup::loadSetupToGeoManager(const char* setupTag, const char* revision)
{
    if (!OpenLocalGeoDatabase())
        return false;

    ostringstream stringStream;
    if (revision == nullptr)
        stringStream<<"select idsd,status,idma,idfi,rfile from setup where stag='"<<setupTag<<"' order by sdate desc;";
    else
        stringStream<<"select idsd,status,idma,idfi,rfile from setup where stag='"<<setupTag<<"' and TRIM(revision)=TRIM('"<<revision<<"') order by sdate desc;";
    LOG(info)<<stringStream.str().c_str();
    TSQLResult* resQ = m_db->Query(stringStream.str().c_str());
    if (resQ == nullptr)
    {
        LOG(fatal)<<"SQL query was failed while searching the given tag: `"<<setupTag<<"`";
        return false;
    }
    TSQLRow* row = resQ->Next();
    if (row == nullptr){
        LOG(fatal)<<"No geometry setup found for the given tag: `"<<setupTag<<"`";
        delete row;
        return false;
    }

    m_sid = atoi(row->GetField(0));
    // int idma = atoi(row->GetField(2));
    m_fid = atoi(row->GetField(3));
    TString geoFileName = getRootPath() + row->GetField(4);
    delete row;
    delete resQ;

    TFile* geoFile = new TFile(geoFileName, "READ");
    if (!geoFile->IsOpen()) {
        LOG(fatal)<<"ERROR: could not open ROOT file with geometry: " + geoFileName;
        return false;
    }
    TList* keyList = geoFile->GetListOfKeys();
    TIter next(keyList);
    TKey* key = (TKey*) next();
    TString className(key->GetClassName());
    if (className.BeginsWith("TGeoManager"))
        key->ReadObj();
    else {
        LOG(fatal) << "ERROR: TGeoManager is not top element in geometry file " + geoFileName;
        return false;
    }

    return true;
}

// load selected geometry for simulation application from the Geometry Database.
bool GeoSetup::loadSetupToFairRunSim(const char* setupTag, const char* revision, const char* localSettings, const char* url)
{
    if (localSettings != nullptr)
        loadLocalSettings(localSettings);

    int random_variable;
    if (url != nullptr)
    {
        srand(time(NULL));
        random_variable = rand();
        //cout<<random_variable<<endl;
        ostringstream stringStream;
        //  stringStream<<"wget -O test2.tar \""<<url<<"?type=s&tag="<<setupTag<<"&dirname="<<random_variable<<"\""; http://cbmdb.jinr.ru/geometry8/download_file.php?type=all&tag=all
        stringStream<<"wget -O test2.tar \""<<url<<"/download_file.php?type=all&tag=all&dirname="<<random_variable<<"\" >/dev/null ";
        system(stringStream.str().c_str());

        stringStream.str("");
        stringStream<<"tar -xf test2.tar >/dev/null";
        system(stringStream.str().c_str());

        stringStream.str("");
        stringStream<<"rm test2.tar";
        system(stringStream.str().c_str());

        stringStream.str("");
        stringStream<<gSystem->pwd()<<"/"<<random_variable<<"/storage/";
        gSystem->Setenv("DBL_ROOT_PATH", stringStream.str().c_str());

        stringStream.str("");
        stringStream<<gSystem->pwd()<<"/"<<random_variable<<"/local.db";
        gSystem->Setenv("DBL_FILE_PATH", stringStream.str().c_str());
    }

    if (!OpenLocalGeoDatabase())
        return false;

    ostringstream stringStream;
    if (revision == nullptr)
        stringStream<<"select idsd,status,idma,idfi from setup where stag='"<<setupTag<<"' order by sdate desc;"; // KG если я правильно понял, то нужно брать по-умолчанию, самый новый релиз?
    else
        stringStream<<"select idsd,status,idma,idfi from setup where stag='"<<setupTag<<"' and TRIM(revision)=TRIM('"<<revision<<"') order by sdate desc;";
    LOG(debug1)<<stringStream.str().c_str();

    TSQLResult* resQ = m_db->Query(stringStream.str().c_str());
    if (resQ == nullptr)
    {
        LOG(fatal)<<"SQL query was failed while searching the given tag: `"<<setupTag<<"`";
        return false;
    }
    TSQLRow* row = resQ->Next();
    if (row == nullptr){
        LOG(fatal)<<"No geometry setup found for the given tag: `"<<setupTag<<"`";
        delete resQ;
        return false;
    }

    FairRunSim* fRun = FairRunSim::Instance();
    if (fRun == nullptr)
    {
        fRun = new FairRunSim();
        LOG(info)<<"New FairRunSim instance has been created";
    }

    m_sid = atoi(row->GetField(0));
    int idma = atoi(row->GetField(2));
    m_fid = atoi(row->GetField(3));
    if (idma > 0)
    {
        delete row;
        delete resQ;

        stringStream.str("");
        stringStream<<"select matag,url from material where idma="<<idma<<";";
        resQ = m_db->Query(stringStream.str().c_str());

        if (resQ == 0 || resQ->GetRowCount() == 0)
            LOG(info)<<"Materials were not found";
        else {
            row = resQ->Next();
            const char* media_path = row->GetField(1);

            TString Mat = getenv("GEOMPATH");
            if (Mat.IsNull())
            {
                Mat = ((TString)getenv("VMCWORKDIR")) + "/geometry/";
                Mat.ReplaceAll("//", "/");
            } else {
                Mat.ReplaceAll("//","/");
                if (!Mat.EndsWith("/"))
                    Mat += "/";
            }

            string workP(Mat.Data());
            LOG(debug1)<<"Working geometry directory: "<<workP;
            size_t found = workP.find('/');
            TString in("");
            if (found != string::npos){
                while ((found = workP.find('/', found+1)) != string::npos){
                    LOG(debug1)<<"found:"<<found;
                    in += "../";
                }
            }
            in += getRootPath() + media_path;
            fRun->SetMaterials(in.Data()); //KG /home/soul/bmnroot/geometry/../../../..//home/soul/bmnroot/database/geo_db/storage/07022020_085550_media.geo?

            delete row;
            delete resQ;
        }
    }
    else{
        delete row;
        delete resQ;
    }

    //cout<<"idsd = "<<idsd<<"; idma = "<<idma<<"; idfi = "<<idfi<<endl;
    stringStream.str("");
    stringStream<<"select idsm from sms where idsd="<<m_sid<<";";
    resQ = m_db->Query(stringStream.str().c_str());
    if (resQ == 0 || resQ->GetRowCount() == 0){
        LOG(fatal)<<"ERROR: no modules found";
        return false;
    }
    while (row = resQ->Next())
    {
        stringStream.str("");
        const char* idsm = row->GetField(0);
        int idsmI = atoi(idsm);
        LOG(debug1)<<"module="<<idsmI;
        // if (subSetup < 0 || subSetup == idsmI){ //check subset
        int res = loadModuleToFairRunSim(idsmI, fRun);
        if (res == -1){
            LOG(fatal)<<"ERROR: no file for the module (idsmI="<<idsmI<<") was found";
            return false;
        }
        delete row;
    }
    delete resQ;

    if (url != nullptr)
    {
        stringStream.str("");
        stringStream<<"rm -rf "<<random_variable<<"/local.db";
        system(stringStream.str().c_str());

        stringStream.str("");
        stringStream<<"rm -rf "<<random_variable;
        system(stringStream.str().c_str());

        cout<<"DBL_ROOT_PATH="<<getRootPath()<<endl; //KG should be DBL_PATH variables restored?
    }

    return true;
}

// get field map of selected geometry
FairField* GeoSetup::getMagneticField(double scale)
{
    // return magnetic field if exists
    if (m_field != nullptr)
        return m_field;

    if (m_db == nullptr){
        LOG(fatal)<<"Geometry Database is not loaded";
        return nullptr;
    }
    if (m_fid == -1){
        LOG(debug1)<<"Selected Geometry Database has no magnetic field";
        return nullptr;
    }

    // get field map for the current id from the Geometry Database
    ostringstream stringStream;
    stringStream<<"select url,scale,x,y,z from field where idfi="<<m_fid<<";";
    TSQLResult* resQ = m_db->Query(stringStream.str().c_str());
    if (resQ == nullptr){
        LOG(fatal)<<"SQL query was failed while searching magnetic field for id: `"<<m_fid<<"`";
        return nullptr;
    }
    if (resQ->GetRowCount() == 0){
        LOG(fatal)<<"ERROR: no selected magnetic field in the Geometry Database for id="<<m_fid;
        delete resQ;
        return nullptr;
    }

    TSQLRow* row = resQ->Next();
    if (row == nullptr){
        LOG(fatal)<<"ERROR: no selected magnetic field in the Geometry Database for id="<<m_fid;
        delete resQ;
        return nullptr;
    }

    //const char* url = row->GetField(0);
    stringStream.str("");
    stringStream<<getRootPath().c_str()<<row->GetField(0);
    if (access(stringStream.str().c_str(), F_OK) == -1)
    {
        LOG(fatal)<<"ERROR: File with the magnetic field was not found. The url="<<stringStream.str().c_str();
        delete row;
        delete resQ;
        return nullptr;
    }
    double sc = atof(row->GetField(1));
    delete row;
    delete resQ;

    // to be changed to dynamic magnetic class got by the Geometry Database
    BmnNewFieldMap* pBmnNewFieldMap = new BmnNewFieldMap();
    pBmnNewFieldMap->SetFileName(stringStream.str().c_str());
    // scale the magnetic field
    if (scale > 0)
        pBmnNewFieldMap->SetScale(scale);
    else
        pBmnNewFieldMap->SetScale(sc);

    m_field = pBmnNewFieldMap;
    return m_field;
}

// get parameter file by given detector name
const char* GeoSetup::getParameterFile(const char* name)
{
    if (name == nullptr){
        LOG(error)<<"Detector name for the parameter file is not set";
        return nullptr;
    }
    if (m_db == nullptr){
        LOG(error)<<"The Geometry Database is not connected";
        return nullptr;
    }

    TString sname(name);
    int index = getModuleIndex(sname);
    if (index < 0){
        LOG(error)<<"The detector name \'"<<sname<<"\'does not exist in the Geometry Database";
        return nullptr;
    }
    LOG(debug1)<<"The detector name \'"<<sname<<"\'exists in the Geometry Database";

    ostringstream stringStream;
    stringStream<<"select sm.fpar from sms s INNER JOIN setupmodule sm on s.idsm=sm.idsm INNER JOIN file f on sm.idf=f.idf "
                  "INNER JOIN module_revision mr on f.idm=mr.idmr where idsd="<<m_sid<<" and mr.idm="<<index<<";";
    LOG(debug1)<<"Request \'"<<stringStream.str().c_str()<<"\'.";
    TSQLResult* resQ = m_db->Query(stringStream.str().c_str());
    if (resQ == nullptr)
    {
        LOG(info)<<"SQL query was failed while searching parameter file for detector `"<<sname<<"`";
        return nullptr;
    }
    TSQLRow* row = resQ->Next();
    if (row == nullptr){
        LOG(info)<<"Parameter file for detector `"<<sname<<"` not found";
        return nullptr;
    }

    const char* file = row->GetField(0);
    delete row;
    delete resQ;

    if (file == nullptr){
        LOG(info)<<"Parameter file for detector `"<<sname<<"` does not exist in the Geometry Database";
        return nullptr;
    }

    return file;
}

// get path to the location of the Local Geometry Database
string GeoSetup::getRootPath()
{
    string rootPath = gSystem->ExpandPathName(getenv("DBL_FILE_PATH"));

    struct stat st;
    if (stat(rootPath.c_str(), &st) == 0)
        if ((st.st_mode & S_IFDIR) != 0)
        {
            LOG(fatal)<<"ERROR: DBL_FILE_PATH variable points to the folder. Please, set DBL_FILE_PATH to file path with local geometry database";
            return "";
        }

    int last = rootPath.find_last_of("/\\");
    if (last == -1)
        rootPath = ".";
    else
        rootPath = rootPath.substr(0, last);
    rootPath += "/storage/";

    return rootPath;
}

// get path to a temporary directory (/tmp/$USER/), and create if absent
TString& GeoSetup::getTmpPath()
{
    if (m_tmpFolder.Length() != 0)
        return m_tmpFolder;

    UserGroup_t* user = gSystem->GetUserInfo();
    string login(user->fUser.Data());
    m_tmpFolder = "/tmp/" + login + "/";
    system("mkdir -p " + m_tmpFolder);

    return m_tmpFolder;
}

// load local settings from the file for all setup modules
bool GeoSetup::loadLocalSettings(const char* fileName)
{
    TXMLEngine* xml = new TXMLEngine;
    XMLDocPointer_t xmldoc = xml->ParseFile(fileName);
    if (xmldoc == 0) {
        LOG(error)<<"Selected file has not XML format: "<<fileName;
        delete xml;
        return false;
    }

    m_moduleEdit.clear();

    XMLNodePointer_t mainnode = xml->DocGetRootElement(xmldoc);
    XMLNodePointer_t child = xml->GetChild(mainnode);
    while (child != 0)
    {
        TString chName = xml->GetNodeName(child);
        if (chName.CompareTo("setupModule") == 0)
        {
            setup_module_ptr sNode = new setup_module();
            sNode->xMove = 0; sNode->yMove = 0; sNode->zMove = 0;
            sNode->enable = true;
            sNode->type = TString("");

            XMLAttrPointer_t attr = xml->GetFirstAttr(child);
            while (attr != 0)
            {
                TString aName = xml->GetAttrName(attr);
                TString aValue = xml->GetAttrValue(attr);

                if (aName.CompareTo("type") == 0)
                    sNode->type=aValue;
                else if (aName.CompareTo("moveX") == 0)
                {
                    sNode->xMove=aValue.Atof();
                } else if (aName.CompareTo("moveY") == 0)
                {
                    sNode->yMove=aValue.Atof();
                } else if (aName.CompareTo("moveZ") == 0)
                {
                    sNode->zMove=aValue.Atof();
                }
                if ((aName.CompareTo("enable") == 0) && (aValue.CompareTo("false") == 0 || aValue.CompareTo("False") == 0 || aValue.CompareTo("FALSE") == 0))
                    sNode->enable=false;

                LOG(debug1) << "attr: "<< xml->GetAttrName(attr)<<" value: "<<xml->GetAttrValue(attr);

                attr = xml->GetNextAttr(attr);
            }

            int ii = getModuleIndex(sNode->type);
            if (ii != -1)
                m_moduleEdit.insert(pair<int, setup_module_ptr>(ii, sNode));
        }
        child = xml->GetNext(child);
    }

    xml->FreeDoc(xmldoc);
    delete xml;
    return true;
}

// get module name by index; return "Unknown" if not found
TString GeoSetup::getModuleName(int dbModuleUndex)
{
    map<int, TString>::iterator it = m_modules_table.find(dbModuleUndex);
    if (it != m_modules_table.end())
        return it->second;
    else{
        LOG(error)<<"Unknown module type with id="<<dbModuleUndex;
        return TString("Unknown");
    }
}

// get module index by name; return -1 if not found
int GeoSetup::getModuleIndex(TString& name)
{
    map<int, TString>::iterator it;
    for (it = m_modules_table.begin(); it != m_modules_table.end(); ++it)
        if ((it->second).CompareTo(name, TString::ECaseCompare::kIgnoreCase) == 0)
            return it->first;

    return -1;
}

// get module_r_ptr (pointer to the module revision) by revision number
module_r_ptr GeoSetup::getModuleRevision(int dbModuleRev)
{
    map<int, module_r_ptr>::iterator it = m_modules_revision_table.find(dbModuleRev);
    if (it != m_modules_revision_table.end())
        return it->second;//.class_name;

    module_r_ptr mr;
    return mr;
}

// get module ID by revision number; return -1 if not found
int GeoSetup::getModuleId(int dbModuleRev)
{
    map<int, module_r_ptr>::iterator it = m_modules_revision_table.find(dbModuleRev);
    if (it != m_modules_revision_table.end())
        return it->second->idm;

    return -1;
}

// get module type by revision number
TString GeoSetup::getModuleType(int dbModuleRev)
{
    return getModuleName(getModuleId(dbModuleRev));
}

// get root volume in the TFile object (first search for TGeoManager)
TGeoVolume* GeoSetup::getRootVolume(TFile* f)
{
    TKey* key;
    TGeoManager* geoManager = nullptr;
    TList* l = f->GetListOfKeys();
    TIter next(l);
    while ((key = (TKey*)next()))
    {
        if (strcmp(key->GetClassName(), "TGeoManager") != 0) continue;
        geoManager = (TGeoManager*) key->ReadObj();
        geoManager->cd();
        return (TGeoVolume*) geoManager->GetNode(0)->GetDaughter(0)->GetVolume();
    }

    // if TGeoManager was not found in the file
    key = (TKey*) l->At(0);  //Get the first key in the list
    TGeoVolume* volume = dynamic_cast<TGeoVolume*> (key->ReadObj());

    return volume;
}

// add FairModule defined by revision number and geometry file path to the FairRunSim instance
bool GeoSetup::addModuleToFairRunSim(int dbModuleRev, const char* path, FairRunSim* fRun)
{
    module_r_ptr mr = getModuleRevision(dbModuleRev);

    TClass* cl = TClass::GetClass(mr->class_name);
    FairModule* f_cl = (FairModule*) cl->New();
    //cout<<"TClass:"<<cl<<endl; f_cl->Dump();

    TString type_name;
    if (mr->args.Length() > 0){
        type_name = mr->args;
        //f_cl->SetName(mr.args);
    }
    else{
        type_name = getModuleType(dbModuleRev);
        //f_cl->SetName(getModuleType(dbModuleRev));
    }

    TString command = "new " + mr->class_name + "(\"" + type_name + "\"";
    if (mr->active)
        command += ",kTRUE)";
    else
        command += ")";
    LOG(debug1)<<"command:"<<command;

    FairModule* obj = (FairModule*) gInterpreter->Calc(command);
    //cerr<<"OBJ="<<obj<<endl; obj->Dump();
    obj->SetGeometryFileName(path);
    fRun->AddModule(obj);

    //cerr<<"dbModuleRev="<<dbModuleRev<<" idmr="<<mr.idmr<<" idm="<<mr.idm<<" class_name="<<typeid(f_cl).name()<<endl;
    return true;
}

// load one module from the Geometry Database and add to the FairRunSim instance
int GeoSetup::loadModuleToFairRunSim(int idsm, FairRunSim* fRun)
{
    map<int, TString>::iterator it = m_loadedModule.find(idsm);
    if (it != m_loadedModule.end())
        return 0;

    LOG(debug1)<<"Start load idsm="<<idsm;
    ostringstream stringStream;
    stringStream<<"select f.idm,f.url,sm.idp,sm.tx,sm.ty,sm.tz from setupmodule sm INNER JOIN file f ON f.idf=sm.idf where sm.idsm="<<idsm<<";";
    //cerr<<stringStream<<endl;

    TSQLResult* resQ = m_db->Query(stringStream.str().c_str());
    if (resQ == 0 || resQ->GetRowCount() == 0){
        LOG(fatal)<<"ERROR: no file for the module ("<<idsm<<") was found";
        return -1;
    }
    //cerr<<"rows="<<resQ2->GetRowCount()<<endl;

    TSQLRow* row = resQ->Next();
    int dbModuleIndex = atoi(row->GetField(0));
    int idP = atoi(row->GetField(2));
    LOG(debug1)<<"idP="<<idP;
    if (idP != -1){
        int res = loadModuleToFairRunSim(idP, fRun);
        if (res < 0) return res;
    }

    stringStream.str("");
    LOG(debug1)<<row->GetField(1);
    stringStream<<getRootPath().c_str()<<row->GetField(1);
    //cerr<<"getRootPath()="<<getRootPath().c_str()<<endl<<"File path="<<stringStream.str().c_str()<<endl;

    TString mName = getModuleType(dbModuleIndex), out = "";
    mName.ToUpper();
    if (mName == TString("CAVE") || ((TString)stringStream.str()).EndsWith(".geo"))
        addModuleToFairRunSim(dbModuleIndex, stringStream.str().c_str(), fRun);
    else
    {
        double mx = 0, my = 0, mz = 0;
        map<int, setup_module_ptr>::iterator itr = m_moduleEdit.find(dbModuleIndex);
        LOG(debug1)<<"detector "<<dbModuleIndex;
        if (itr != m_moduleEdit.end())
        {
            LOG(debug1)<<"detector was found";
            if (itr->second->enable){
                mx = itr->second->xMove; my = itr->second->yMove; mz = itr->second->zMove;
                LOG(debug1)<<"Move detector "<<dbModuleIndex<<" to x:"<<mx<<" to y:"<<my<<" to z:"<<mz;
            }
        }

        TGeoManager* geom = new TGeoManager(mName, TString::Format("Geometry of the %s module", mName.Data()));
        //cerr<<"import file"<<stringStream.str().c_str()<<endl;
        //TGeoManager::Import(stringStream.str().c_str());
        TFile* f = new TFile(stringStream.str().c_str());
        TGeoVolume* root_volume = getRootVolume(f);
        double tx = (double) atoi(row->GetField(3)) + mx;
        double ty = (double) atoi(row->GetField(4)) + my;
        double tz = (double) atoi(row->GetField(5)) + mz;
        TGeoRotation rotM;
        TGeoGenTrans* newMatrix = new TGeoGenTrans(tx, ty, tz, 1, 1, 1, &rotM);
        if (strcmp(root_volume->GetNode(0)->ClassName(), "TGeoNodeMatrix") == 0){
            TGeoNodeMatrix* v = (TGeoNodeMatrix*) root_volume->GetNode(0);
            //cerr<<"Matrix changed"<<endl;
            v->SetMatrix(newMatrix);
        }

        //geom->CloseGeometry();
        out = getTmpPath() + getModuleName(getModuleId(dbModuleIndex)) + ".root";
        root_volume->Export(out.Data());
        //gGeoManager->Export(out.Data());
        addModuleToFairRunSim(dbModuleIndex, out.Data(), fRun);
        LOG(debug1)<<"Exporting geometry to ROOT file: "<<out;

        delete geom;
        f->Close();
        delete f;
    }
    m_loadedModule.insert(pair<int, TString>(idsm, out));

    delete row;
    delete resQ;
    return 0;
}

// fill table with modules (m_modules_table) from the Geometry Database
int GeoSetup::putModules()
{
    TSQLResult* resQ = m_db->Query("select idm,mname from module;");
    if (resQ == nullptr){
        LOG(error)<<"ERROR: SQL query was failed. Please, check connection to the Geometry Database and DBL_FILE_PATH variable is correct";
        return -1;
    }
    if (resQ->GetRowCount() == 0){
        LOG(error)<<"ERROR: no modules in the Geometry Database";
        delete resQ;
        return -2;
    }

    TSQLRow* row;
    while ((row = resQ->Next()) != 0)
    {
        int id = atoi(row->GetField(0));
        TString name(row->GetField(1));
        m_modules_table.insert(make_pair(id, name));
        delete row;
    }

    delete resQ;
    return 0;
}

// fill table with module revisions (m_modules_revision_table) from the Geometry Database
int GeoSetup::putModuleRevisions()
{
    TSQLResult* resQ = m_db->Query("select idmr,idm,class_name,revision,active,args from module_revision;");
    if (resQ == nullptr){
        LOG(error)<<"ERROR: SQL query was failed. Please, check connection to the Geometry Database and DBL_FILE_PATH variable is correct";
        return -1;
    }
    if (resQ->GetRowCount() == 0){
        LOG(error)<<"ERROR: no module revisions in the geometry database";
        delete resQ;
        return -2;
    }

    TSQLRow* row;
    while ((row = resQ->Next()) != 0)
    {
        module_r_ptr mr = new module_r();
        mr->idmr = atoi(row->GetField(0));
        mr->idm = atoi(row->GetField(1));
        mr->class_name = row->GetField(2);
        mr->rev = atoi(row->GetField(3));
        if (atoi(row->GetField(4)) == 0)
            mr->active=false;
        else
            mr->active=true;
        mr->args = row->GetField(5);

        m_modules_revision_table.insert(make_pair(mr->idmr, mr));
        delete row;
    }

    delete resQ;
    return 0;
}
