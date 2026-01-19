#ifndef _GEO_SETUP_INCLUDED
#define _GEO_SETUP_INCLUDED

#include "BmnFieldMap.h"

#include "FairRunSim.h"

#include "TString.h"
#include "TFile.h"
#include "TGeoVolume.h"
#include "TSQLServer.h"

#include <utility>
#include <string>
#include <map>
using namespace std;

typedef struct SETUPMODULE
{
    TString type;
    double xMove, yMove, zMove;
    bool   enable;
} setup_module,* setup_module_ptr;

typedef struct MODULEREVISION
{
    TString class_name;
    int idmr, idm, rev;
    bool active;
    TString args;
} module_r,* module_r_ptr;


/**
 *  GeoSetup class. It is used for loading necessary setup geometries from the Geometry Database.
 */
class GeoSetup
{
  public:
    /**
     * Static method to create (get) instance of GeoSetup.
     * @return  Singleton instance of GeoSetup.
    */
    static GeoSetup* Instance();

    static unsigned long int getServerRevision(const char* url = "http://bmn-geodb.jinr.ru");
    static unsigned long int getLocalRevision(TString& localDbPath);
    /**
     * Destructor method
    */
    ~GeoSetup();

    /**
     * Load selected geometry setup from the Local Geometry Database and create gGeoManager instance.
     * Use for Reconstruction and Analysis
     * @param setupTag the name of the setup tag.
     * @param revision the revision of the setup. If the revision is null, it gets the last revision of the selected tag.
     * @return  true, if the setup is loaded. false, if the setup is not loaded.
    */
    bool loadSetupToGeoManager(const char* setupTag, const char* revision = nullptr);

    /**
     * Load selected geometry setup from the Local or Central (defined by url) Geometry Database and add it to the FairRunSim instance.
     * Use for Simulation
     * @param setupTag the name of the setup tag.
     * @param revision the revision of the setup. If the revision is null, it gets the last revision of the selected tag.
     * @param localSettings path to local setting file that can disable or move some detector in selected geometry.
     * @param url the url of the remote database server.
     * @return  true, if the setup is loaded. false, if the setup is not loaded.
    */
    bool loadSetupToFairRunSim(const char* setupTag, const char* revision = nullptr, const char* localSettings = nullptr, const char* url = nullptr);

    /**
     * Get magnetic field of the current setup geometry.
     * @param scale the scale of the field. Default value is -1, which means that when created, scaling is not applied to the magnetic field.
     * @return  Instance of the magnetic field class inherited from FairField.
    */
    FairField* getMagneticField(double scale = -1);

    /**
     * Get path to parameter file for the given detector name of the current setup.
     * @param detector_name the name of the detector, for which the parameter file is needed.
     * @return  Path to parameter file.
    */
    const char* getParameterFile(const char* detector_name);

  private:
    map<int, TString> m_modules_table;
    map<int, module_r_ptr> m_modules_revision_table;
    map<int, TString> m_loadedModule;
    map<int, setup_module_ptr> m_moduleEdit;

    // singleton instance of this GeoSetup class
    static GeoSetup* gInstance;
    // connection to the Geometry Database
    TSQLServer* m_db;
    // magnetic field of the geometry setup
    FairField* m_field;
    // id of the current magnetic field
    int m_fid;
    // id of the current geometry setup
    int m_sid;
    // current tmp directory (/tmp/$USER/)
    TString m_tmpFolder;

    //default constructor
    GeoSetup() : m_db(nullptr), m_field(nullptr), m_fid(-1), m_sid(-1), m_tmpFolder("") {}

    // create connection to the Local Geometry Database and fill the tables with modules and their revisions
    bool OpenLocalGeoDatabase();

    static bool exists_file(const char* name);
    // get path to the location of the Local Geometry Database
    string getRootPath();
    // get path to a temporary directory (/tmp/$USER/), and create if absent
    TString& getTmpPath();
    // get root volume in the TFile object
    TGeoVolume* getRootVolume(TFile* f);

    // get module name by index; return "Unknown" if not found
    TString getModuleName(int dbModuleUndex);
    // get module index by name; return -1 if not found
    int getModuleIndex(TString& name);
    // get module ID by revision number; return -1 if not found
    int getModuleId(int dbModuleRev);
    // get module type by revision number
    TString getModuleType(int dbModuleRev);
    // get module_r_ptr (pointer to the module revision) by revision number
    module_r_ptr getModuleRevision(int dbModuleRev);

    // load local settings from the file for all setup modules
    bool loadLocalSettings(const char* fileName);

    // load module from the Geometry Database and add to the FairRunSim instance
    int loadModuleToFairRunSim(int idsm, FairRunSim* fRun);
    // add FairModule defined by revision number and geometry file path to the FairRunSim instance
    bool addModuleToFairRunSim(int dbModuleRev, const char* path, FairRunSim* fRun);

    // fill map with modules from the Geometry Database
    int putModules();
    // fill map with module revisions from the Geometry Database
    int putModuleRevisions();
};

#endif
