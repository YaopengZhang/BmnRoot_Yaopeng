## <b>The Application Programming Interface of the Geometry Database</b>
The Geometry Database is the main element of the Geometry Information System designed to store, process and manage information on geometry models of detectors. The repository contains an interface to work with the Geometry Database of the experiment.


### 1. Required external software
The interface of the Geometry Database requires the following external software to be installed: **SQLite** database engine, **CERN ROOT 6** environment and **FairRoot** package of the FAIR collaboration.

#### Install SQLite
Please make sure the SQLite database engine has been installed on your system before compiling ROOT 6 (or FairSoft, if you use it to deploy all necessary packages including ROOT).
- Install the required SQLite database engine for RedHat-based OS (eg, CentOS, Scientific Linux):
> sudo yum install sqlite-devel 

- Install the required SQLite database engine for Debian-based OS (eg, Ubuntu):
> sudo apt-get install libsqlite3-dev

#### Install CERN ROOT 6 environment (or FairSoft package with the ROOT package)
Detailed instructions on how to install the ROOT 6 environment or the FairSoft package including ROOT 6 can be found on the corresponding websites: https://root.cern.ch and https://github.com/FairRootGroup/FairSoft.

#### Install FairRoot
Detailed instructions on how to install the FairRoot software can be found on the website of the framework: https://github.com/FairRootGroup/FairRoot.

<b>NOTE:</b> A detailed example of installing the FairSoft package and FairRoot framework can be found at the website of our experiment here: https://bmn.jinr.ru/software-installation/ ("Installing the external packages" Section).


### 2. Set database environment (every time you start working with the Geometry Database)
Before deploying and using the Local Geometry Database based on SQLite, DBL_FILE_PATH variable should be set, which contains a desired full path to 'local.db' file to be downloaded, e.g.
>export DBL_FILE_PATH=[your_target_path]/local.db

<b>NOTE:</b> Run “export DBL_FILE_PATH=[your_target_path]/local.db” every time you run terminal to work with the geometry database (or append this line to the .bashrc file).

### 3. Download Local Geometry Database
The Local Geometry Database can be downloaded in one of two ways:

**1st way = Use ROOT macro for installation of the Geometry Database**

Run the following ROOT macro to install the Local Geometry Database using the command:
> root -b -q installLocalDB.C

**2nd way = Manual downloading from the geometry web service**

The link for downloading full geometry database of the experiment is avaliable on the Geometry Web Service of the experiment, that is the button in the middle of the upper part of the screen. Use this button to download the replica of the full geometry database in the SQLite database format, which is presented as TAR archive file, namely “localdb.tar”. The TAR file includes folder with “storage” name and “local.db” file.


### 4. Using the Application Programming Interface (ROOT macros):
<b>NOTE:</b> Before using the ROOT macros to work with the Geometry Database, the variable **DBL_FILE_PATH** should be set, which contains path to the SQLite file storing the replica of the Central Geometry Database on PostgreSQL.

To show a list of the geometry setups in the local database:
> root -b -q getSetupList.C

To load a geometry setup in your application, use **GeoSetup** class instance.
*It has the following main methods:*
- Loading selected geometry setup for Reconstruction and Analysis from the Local Geometry Database and create gGeoManager instance.
```
bool loadSetupToGeoManager(const char* setupTag, const char* revision = nullptr);
```
- Loading selected geometry setup for Simulation from the Local or Central (defined by url) Geometry Database and add it to the FairRunSim instance.
```
bool loadSetupToFairRunSim(const char* setupTag, const char* revision = nullptr, const char* localSettings = nullptr, const char* url = nullptr);
```
- Getting magnetic field of the current setup geometry.
```
FairField* getMagneticField(double scale = -1);
```
- Getting path to parameter file for the given detector name of the current setup.
```
const char* getParameterFile(const char* detector_name);
```
Detailed description can be found in the Doxygen documentation (_doc/html_ folder).
