## <b>Installation of the Geometry Information System</b>
The Geometry Information System based on the Geometry Database is intended for storing and processing of information on the composition and geometry structure of the detectors, which are used during experiment runs and processing or analyzing of simulated and experimental data. The installation of the main componentsm such as Central Geometry Database server and specialized Web service is described below according to the following steps.


### 1. Required external software
The installation of the components requires the following external software to be installed: **PostgreSQL** database engine and XML library to parse XL-configuration.
- Install the required packages for RedHat-based OS (eg, CentOS, Scientific Linux):
> sudo yum install libxml2-devel postgresql-devel

- Install the required packages for Debian-based OS (eg, Ubuntu):
> sudo apt-get install libxml2-dev libpqxx-dev

### Required for server part
PostgreSQL with php plugin, apache 2.4 (or later), php 7.2 (or later), git client.

#### Install CERN ROOT 6 environment (or FairSoft package with the ROOT package)
Detailed instructions on how to install the ROOT 6 environment or the FairSoft package including ROOT 6 can be found on the corresponding websites: https://root.cern.ch and https://github.com/FairRootGroup/FairSoft.

#### Install FairRoot
Detailed instructions on how to install the FairRoot software can be found on the website of the framework: https://github.com/FairRootGroup/FairRoot.

<b>NOTE:</b> A detailed example of installing the FairSoft package and FairRoot framework can be found at the website of our experiment here: https://bmn.jinr.ru/software-installation/ ("Installing the external packages" Section).


### 2. Setting of parameters for install server part of Geometry Database
All setting of server is stored in config file with name <b>geodb.config.xml</b>

<b>The example of this file with description is bellow:</b> 

```
<geodb>
  <!-- The "server" element describes the database server (on the PostgreSQL DBMS) and should be used to set the following parameters: "host" - a host
name or IP, from which the server will start, "port" - a database port, "login" - a PostgreSQL administrator name and "password" - an initial password for the administrator.  -->
  <server host="127.0.0.1" port="5432" login="postgres" pwd="database" />
  <!--  The "web_server" element defines theWeb server parameters, such as "html_root_path" to set a root directory of the Web server, and "folder_name" to set a root folder for experimental
data. The unified script installs all files (php, html, icons, common scripts and others) of the last stable version of the Web service to the root directory from the GIT repository.-->
  <web_server html_root_path="/var/www/html/" folder_name="bmn_test22" set_up_script="example_setup.sh"/>
  <!--  The "db" element has only one parameter "name" setting the name of the database. -->
  <db name="bmn_test22">
   <!-- The "storage_path" element specifies the path to the binary geometry storage in the "value" parameter. 
        The storage directory keeps all large-sized objects, mostly geometry (in the ROOT format).-->
    <config_parameter name="storage_path" value="/tmp/local/cbmdb/bmn_test22/storage/"/>
   <!-- the "field_dir" element sets the path to the directory, in which magnetic field files defined in the separate element due to their huge size, are stored. This parameter is used only in case of the size of magnetic field files is huge and can not upload/download directly from server. -->
    <config_parameter name="field_dir" value="/opt/bmn" />
   <!-- the "freeipa" element sets authorization method. 0 is own. 1 is freeipa-->
    <config_parameter name="freeipa" value="0" />
    <!-- A user(s) with the Lead Developer role can be added by the "geo_user" element including the parameters: "login","pwd" and "mail"-->
    <geo_user login="test_user" pwd="sss333" mail="aleksand@jinr.ru"/>
    <!-- A user can also specify the size of the global geometry cave according to the size of the real setup via the "cave" element.-->
    <cave size="20000"/>
  </db>
  <!-- The "experiment" element is used to customize the view of the Web interface with the following parameters: "name" specifies the name of the experiment displayed on web pages,
"logotip_path" - a logo icon path at the top left corner, "logotip_text" - a text near the icon, "responsible_person_name" and "responsible_person_mail" - the name and email of the contact person, which are also shown on the main Web page. -->
  <experiment name="BMAN_TEST" logotip_path="logo.png" logotip_text="BMAN" responsible_person_name="test mail" responsible_person_mail="test_jinr@m.ru"/>
</geodb>
```

### 3. Install Server part of Geometry Database

Run the following ROOT macro to install the Server part of Geometry Database using the command:
> root -b -q installServerDB.C

All logs stored in file  _installServerDB.log_.

