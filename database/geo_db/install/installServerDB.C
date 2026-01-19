#include <Riostream.h>
#include <TDOMParser.h>
#include <TXMLNode.h>
#include <TXMLAttr.h>
#include <TList.h>
#include <map>
#include <sys/stat.h>
#include <sys/sendfile.h>  // sendfile


bool exists_file(const char* name) {
    return ( access( name, F_OK ) != -1 );
}

class GeoUser{
private:
  TString lg;
  TString pwd;
  TString mail;
public:
  GeoUser(){;}
  void parseContext(TXMLNode *node){
    if (node->HasAttributes()) {
            TList* attrList = node->GetAttributes();
            TIter next(attrList);
            TXMLAttr *attr;
            while ((attr =(TXMLAttr*)next())) {
                TString name=attr->GetName();
                TString value=attr->GetValue();
                if(name.CompareTo("mail",TString::kIgnoreCase)==0){
                        mail=value;
                }else if(name.CompareTo("login",TString::kIgnoreCase)==0){
                        lg = value;
                }else if(name.CompareTo("pwd",TString::kIgnoreCase)==0){
                        pwd = value;
                }
            }
    }
  }
  friend ostream & operator << (ostream& out, const GeoUser& p) {
    out << "User name: " << p.lg;
    out << "   pwd: " << p.pwd;
    out << "   mail: " << p.mail<<endl;
    return out;
  }
  TString getLogin(){return lg;}
  TString getMail() {return mail;}
  TString getPwd() { return pwd;}

};
class GeoServer{
private:
  TString host;
  int port;
  TString lg;
  TString pwd; 
public:
  GeoServer():port(5432),host("127.0.0.1"),lg("postgres"),pwd(""){;}
  void parseContext(TXMLNode *node){
    if (node->HasAttributes()) {
            TList* attrList = node->GetAttributes();
            TIter next(attrList);
            TXMLAttr *attr;
            while ((attr =(TXMLAttr*)next())) {
	        TString name=attr->GetName();
		TString value=attr->GetValue();
	        if(name.CompareTo("host",TString::kIgnoreCase)==0){
			host=value;
		}else if(name.CompareTo("port",TString::kIgnoreCase)==0){
			if(value.IsDigit()){
				port = value.Atoi();
			}
			else
				cerr<<"wrong port format"<<endl;
		}else if(name.CompareTo("login",TString::kIgnoreCase)==0){
			lg = value;
		}else if(name.CompareTo("pwd",TString::kIgnoreCase)==0){
                        pwd = value;
                }
            }
    }
  }
  friend ostream & operator << (ostream& out, const GeoServer& p) {
    out << "PostgreSQL server parameters: Host: " << p.host;
    out << "   Port: " << p.port;
    out << "   Login: " << p.lg;
    out << "   PWD: " << p.pwd<<endl;
    return out;
  }
  TString getHost(){return host;}
  int getPort(){return port;}
  TString getLogin(){return lg;}
  TString getPwd(){return pwd;}

};

class GeoDB{
private:
  TString name;
  map <TString, TString> config_parameters;
  vector<GeoUser*> users;
  int caveSize;
  TString folderPath;
public:
  GeoDB():name(""),caveSize(20000){;}
  ~GeoDB(){
	for (auto p : users)
   	{
     		delete p;
   	}
	users.clear(); 
  }
  TString getStoragePath(){return folderPath;}

  void parseContext(TXMLNode *node){
    if (node->HasAttributes()) {
       TList* attrList = node->GetAttributes();
       TIter next(attrList);
       TXMLAttr *attr;
       while ((attr =(TXMLAttr*)next())) {
	 TString n=attr->GetName();
         TString v=attr->GetValue();
	 if(n.CompareTo("name",TString::kIgnoreCase)==0){
	   name=v;
	 }
       }
    }
    TXMLNode *ch = node->GetChildren();
    for ( ; ch; ch = ch->GetNextNode()) {
	TString nam=ch->GetNodeName();
	if(nam.CompareTo("config_parameter",TString::kIgnoreCase)==0){
          TList* attrList = ch->GetAttributes();
          TIter next(attrList);
          TXMLAttr *attr;
	  TString key="";
	  TString value="";
	  while ((attr =(TXMLAttr*)next())) {
	         TString n=attr->GetName();
        	 TString v=attr->GetValue();
	         if(n.CompareTo("name",TString::kIgnoreCase)==0){
        	   key=v;
		 }
		 else if(n.CompareTo("value",TString::kIgnoreCase)==0){
                   value=v;
                 }
	  }
	  if(key.Length()!=0){
		config_parameters.insert(std::pair<TString, TString>(key,value));
		if(key.CompareTo("storage_path",TString::kIgnoreCase)==0){
			folderPath = value;
			//std::cerr<<"try to create folder:"<<value<<std::endl;
			TString com = "mkdir -p ";
			com +=value.Data();
			int status = system(com.Data());
			if (status == -1)
			      cerr << "Error : " << strerror(errno) << endl;
		}
	  }
	}
	else if(nam.CompareTo("geo_user",TString::kIgnoreCase)==0){
		//cout<<"geo_user parce"<<endl;
		GeoUser* usr = new GeoUser();
		usr->parseContext(ch);
		users.push_back(usr);
	}
	else if(nam.CompareTo("cave",TString::kIgnoreCase)==0){
  	  TList* attrList = ch->GetAttributes();
          TIter next(attrList);
          TXMLAttr *attr;
	  while ((attr =(TXMLAttr*)next())) {
	    	TString n=attr->GetName();
                TString v=attr->GetValue();
                if(n.CompareTo("size",TString::kIgnoreCase)==0)
		  caveSize=atoi(v);
	  }
	  //cout <<"Cave size="<<caveSize<<std::endl;
	}		
    }
  }
  TString getInsertCave(){
    TString res = "INSERT INTO file (idf, idm, ftag, descr, url, author) VALUES (0, 0, 'cave', 'init', 'cave.geo', 'administrator');";
    res +="INSERT INTO setupmodule (idsm, idf, r11, r12, r13, r21, r22, r23, r31, r32, r33, tx, ty, tz, smtag, descr, idp, author, sx, sy, sz, fpar) VALUES(0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 'cave', 'Base cave', -1, 'administrator', 1, 1, 1, NULL);";
    return res;
  }
  void writeCave(){
	if(folderPath.Length()==0)
		return;
    	if(!exists_file(folderPath.Data())){
    	  //std::cerr<<"try to create folder:"<<folderPath<<std::endl;
          TString com = "mkdir -p ";
          com +=folderPath.Data();
          int status = system(com.Data());
          if (status == -1)
              cerr << "Error : " << strerror(errno) << endl;
	}
	TString geoFileName = folderPath+"/cave.geo";
	std::ofstream outfile (geoFileName.Data(),std::ofstream::binary);
	outfile<<getCaveObj();
       //std::cout<<getCaveObj();
  }
  const char* getCaveObj(){
    stringstream strValue;
    strValue<<"cave"<<std::endl<<"BOX"<<std::endl<<"air"<<std::endl;
    strValue<<" "<<caveSize<<"  "<<(-1*caveSize)<<"  "<<(-1*caveSize)<<std::endl;
    strValue<<" "<<(1*caveSize)<<"   "<<(1*caveSize)<<"  "<<(-1*caveSize)<<std::endl;
    strValue<<""<<(-1*caveSize)<<"   "<<(1*caveSize)<<"  "<<(-1*caveSize)<<std::endl;
    strValue<<""<<(-1*caveSize)<<"  "<<(-1*caveSize)<<"  "<<(-1*caveSize)<<std::endl;
    strValue<<" "<<(1*caveSize)<<"  "<<(-1*caveSize)<<"   "<<(1*caveSize)<<std::endl;
    strValue<<" "<<(1*caveSize)<<"   "<<(1*caveSize)<<"   "<<(1*caveSize)<<std::endl;
    strValue<<""<<(-1*caveSize)<<"   "<<(1*caveSize)<<"   "<<(1*caveSize)<<std::endl;
    strValue<<""<<(-1*caveSize)<<"  "<<(-1*caveSize)<<"   "<<(1*caveSize)<<std::endl;

    return strValue.str().c_str();
  }
//01.11.2020 do not use
  TString getRoleTable(){
    TString res = "CREATE TABLE role (idr integer NOT NULL, code varchar(3) NOT NULL, name varchar(30) NOT NULL, \"comment\"  varchar(250) NOT NULL, mset varchar(30), PRIMARY KEY(idr)); CREATE SEQUENCE role_idr_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE role_idr_seq OWNED BY role.idr; ";
    res+="INSERT INTO \"role\" (idr, code, name, \"comment\", mset) VALUES (1, 'LDV', 'Lead Developer', 'Lead Developer is a coordinator and responsible person for the entire Geometry DB that is able to delete any setup, create new one, approve it since the setup is tested and can be used by users, add new versions of magnetic field and/or material.', 'Full Set');";
    return res;
  }

  TString getUsersTable(){
    TString res = "CREATE TABLE ugdb(id integer DEFAULT nextval(('public.ugdb_id_seq'::text)::regclass) NOT NULL PRIMARY KEY,\"login\"  varchar(20) UNIQUE NOT NULL, passwd   varchar(60) NOT NULL, email    varchar(40) UNIQUE NOT NULL, role integer NOT NULL DEFAULT 0, fname varchar(50) NOT NULL DEFAULT 'first'::character varying, sname    varchar(70) NOT NULL DEFAULT 'surname'::character varying); CREATE SEQUENCE ugdb_id_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE ugdb_id_seq OWNED BY ugdb.id;";
//    res+="CREATE TABLE ur (idu  integer, idr  integer NOT NULL, id integer DEFAULT nextval(('public.ur_idu_seq'::text)::regclass) NOT NULL PRIMARY KEY, CONSTRAINT fk_idu FOREIGN KEY (idu) REFERENCES ugdb(id) ON DELETE CASCADE);CREATE SEQUENCE ur_id_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE ur_id_seq OWNED BY ur.id;";
    int i=1;
    for(GeoUser* usr :users){
	res+=TString(" INSERT INTO ugdb VALUES (")+TString(std::to_string(i))+TString(",'")+usr->getLogin()+TString("','")+usr->getPwd()+TString("','")+usr->getMail()+TString("',-1);");
//	res+=" INSERT INTO ur VALUES ("+std::to_string(i)+",1,"+std::to_string(i)+");";
	i++;
        cerr <<"Added LeadDeveloper with login:"<<usr->getLogin()<<",  mail:"<<usr->getMail()<<" and pwd:"<<usr->getPwd()<<endl;
    }
 
    return res;
  }

  TString getVersionTable(){
    TString res = "CREATE TABLE version( storage integer NOT NULL, db integer NOT NULL, soft integer NOT NULL) WITHOUT OIDS; INSERT INTO version VALUES(1, 1, 1);";
    return res;
  }
  TString getStatusTable(){
    TString res = "CREATE TABLE status (stid integer NOT NULL, stitle varchar(30) NOT NULL, stvalue integer NOT NULL);CREATE SEQUENCE status_stid_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;  INSERT INTO status VALUES (2, 'Approved', 1), (1, 'Created', 0), (3, 'Removed', 2);";
    return res;
  }
  TString getModuleTable(){
    TString res = "CREATE TABLE module( idm integer DEFAULT nextval(('public.module_idm_seq'::text)::regclass) NOT NULL PRIMARY KEY, mname varchar(50) NOT NULL, author varchar(40), mdate date DEFAULT ('now'::text)::date NOT NULL); CREATE SEQUENCE module_idm_seq START 1 INCREMENT 1 MINVALUE 1 NO MAXVALUE CACHE 1; ALTER SEQUENCE module_idm_seq OWNED BY module.idm; INSERT INTO module(idm,mname,author) VALUES(0,'CAVE', 'administrator');";
    return res;
  }
  TString getModuleRevisionTable(){
    TString res = "CREATE TABLE module_revision (idmr integer DEFAULT nextval(('public.module_revision_idmr_seq'::text)::regclass) NOT NULL PRIMARY KEY, idm integer NOT NULL, class_name character varying(50), author character varying(40), date date DEFAULT ('now'::text)::date NOT NULL, args character varying(60), revision numeric(18,0) DEFAULT 1 NOT NULL, active integer DEFAULT 1 NOT NULL, status integer NOT NULL DEFAULT 2, CONSTRAINT foreign_key01 FOREIGN KEY (idm) REFERENCES public.module(idm));CREATE SEQUENCE module_revision_idmr_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1; ALTER SEQUENCE module_revision_idmr_seq OWNED BY module_revision.idmr; INSERT INTO module_revision VALUES(0,0,'FairCave','administrator',current_date,'CAVE',1,0,2);";
    return res;
  }
  TString getMaterialTable(){
    TString res = "CREATE TABLE material (idma integer DEFAULT nextval(('public.material_idma_seq'::text)::regclass) NOT NULL PRIMARY KEY, matag character varying(50) NOT NULL, madata date DEFAULT ('now'::text)::date NOT NULL, descr character varying(200), url character varying(100) NOT NULL, author character varying(20) NOT NULL);CREATE SEQUENCE material_idma_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1; ALTER SEQUENCE material_idma_seq OWNED BY material.idma; ";
    return res;
  }
  TString getFileTable(){
    TString res = "CREATE TABLE file (idf integer DEFAULT nextval(('public.file_idf_seq'::text)::regclass) NOT NULL PRIMARY KEY, idm integer NOT NULL, ftag character varying(50) NOT NULL, fdate date DEFAULT ('now'::text)::date NOT NULL, descr character varying(200), url character varying(100) NOT NULL, author character varying(20) NOT NULL, matrix  varchar(200) DEFAULT '1 0 0 0,0 1 0 0, 0 0 1 0'::character varying);CREATE SEQUENCE file_idf_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE file_idf_seq OWNED BY file.idf; ";
    return res;
  }
  TString getFieldTable(){
    TString res = "CREATE TABLE field (idfi integer DEFAULT nextval(('public.field_idfi_seq'::text)::regclass) NOT NULL PRIMARY KEY, tag character varying(50) NOT NULL, scale numeric(18,10) DEFAULT 1 NOT NULL, z numeric(18,10) DEFAULT 0 NOT NULL, date date DEFAULT ('now'::text)::date NOT NULL, descr character varying(200), author character varying(20) NOT NULL, url character varying(30), x numeric(18,10) DEFAULT 0 NOT NULL, y numeric(18,10) DEFAULT 0 NOT NULL);CREATE SEQUENCE field_idfi_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE field_idfi_seq OWNED BY field.idfi; ";
    return res;
  }
  TString getSetupModuleTable(){
    TString res = "CREATE TABLE setupmodule (idsm integer NOT NULL DEFAULT nextval(('public.setupmodule_idsm_seq'::text)::regclass) NOT NULL PRIMARY KEY, idf integer NOT NULL, r11 numeric(18,10) DEFAULT 1 NOT NULL, r12 numeric(18,10) DEFAULT 0 NOT NULL, r13 numeric(18,10) DEFAULT 0 NOT NULL, r21 numeric(18,10) DEFAULT 0 NOT NULL, r22 numeric(18,10) DEFAULT 1 NOT NULL, r23 numeric(18,10) DEFAULT 0 NOT NULL, r31 numeric(18,10) DEFAULT 0 NOT NULL, r32 numeric(18,10) DEFAULT 0 NOT NULL, r33 numeric(18,10) DEFAULT 1 NOT NULL, tx numeric(18,10) DEFAULT 0 NOT NULL, ty numeric(18,10) DEFAULT 0 NOT NULL, tz numeric(18,10) DEFAULT 0 NOT NULL, smdate date DEFAULT ('now'::text)::date NOT NULL, smtag character varying(50) NOT NULL, descr character varying(200), idp integer DEFAULT 0 NOT NULL, author character varying(20) NOT NULL, sx numeric(18,10) DEFAULT 1 NOT NULL, sy numeric(18,10) DEFAULT 1 NOT NULL, sz numeric(18,10) DEFAULT 1 NOT NULL, fpar character varying(100));CREATE SEQUENCE setupmodule_idsm_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE setupmodule_idsm_seq OWNED BY setupmodule.idsm;";
    return res;
  }
  TString getSMSTable(){
    TString res = "CREATE TABLE sms (ids integer DEFAULT nextval(('public.sms_ids_seq'::text)::regclass) NOT NULL PRIMARY KEY, idsd integer NOT NULL, idsm integer NOT NULL);CREATE SEQUENCE sms_ids_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE sms_ids_seq OWNED BY sms.ids; ";
    return res;
  }
  TString getSetupTable(){
    TString res = "CREATE TABLE setup (idsd integer DEFAULT nextval(('public.setup_idsd_seq'::text)::regclass) NOT NULL PRIMARY KEY, stag character varying(50) NOT NULL, sdate date DEFAULT ('now'::text)::date NOT NULL, descr character varying(200), status integer DEFAULT 0 NOT NULL, author character varying(20) NOT NULL, idma integer DEFAULT 0, idfi integer DEFAULT 0, lastmodified date, revision character varying(20) DEFAULT 1 NOT NULL, rfile varchar(100) DEFAULT NULL::character varying);CREATE SEQUENCE setup_idsd_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE setup_idsd_seq OWNED BY setup.idsd; ";
    return res;
  }
  TString getConfigTable(){
    TString res = "CREATE TABLE config (key character varying(30) NOT NULL, value character varying NOT NULL, key_int integer DEFAULT nextval(('public.config_key_int_seq'::text)::regclass) NOT NULL PRIMARY KEY);CREATE SEQUENCE config_key_int_seq START WITH 1 INCREMENT BY 1 NO MINVALUE NO MAXVALUE CACHE 1;ALTER SEQUENCE config_key_int_seq OWNED BY config.key_int;";
    int n=2;
    TString tt="('config_time','0',1)";
    for (std::map<TString, TString>::iterator it = config_parameters.begin(); it != config_parameters.end(); ++it)
    {
      if(tt.Length()!=0)
	tt+=", ";
      tt+="('"+it->first+"','"+it->second+"',"+std::to_string(n++)+")";
    }
    if(tt.Length()!=0){
      res+="INSERT INTO config VALUES "+tt+";";
    }
    res+=" CREATE FUNCTION public.function01() RETURNS SETOF trigger LANGUAGE plpgsql AS $$ begin UPDATE config set value = round( CAST(extract(epoch from NOW()) as numeric), 0) WHERE key = 'config_time'; RETURN NEW; end $$;";
    res+=" CREATE TRIGGER trigger01 AFTER INSERT OR DELETE OR UPDATE ON public.setup FOR EACH ROW EXECUTE PROCEDURE public.function01();";
    return res;
  }


  friend ostream & operator << (ostream& out, const GeoDB& p) {
    out << "Database parameters: name: " << p.name<<endl;
    for(auto pp: p.users)
	out<<*pp;
   // out << "   Port: " << p.port;
    //out << "   Login: " << p.lg;
    //out << "   PWD: " << p.pwd<<endl;
    return out;
  }
  TString getDatabaseName(){return name;}
  
};
class GeoExpirement{
private:
  TString name;
  TString logoPath;
  TString respName;
  TString respMail;
  TString logoText;
public:
  GeoExpirement(){;}
  void parseContext(TXMLNode *node){
    if (node->HasAttributes()) {
      TList* attrList = node->GetAttributes();
       TIter next(attrList);
       TXMLAttr *attr;
       while ((attr =(TXMLAttr*)next())) {
         TString n=attr->GetName();
         TString v=attr->GetValue();
         if(n.CompareTo("name",TString::kIgnoreCase)==0){
           name=v;
         }else if(n.CompareTo("logotip_path",TString::kIgnoreCase)==0){
           logoPath=v;
         }else if(n.CompareTo("logotip_text",TString::kIgnoreCase)==0){
           logoText=v;
         }
	 else if(n.CompareTo("responsible_person_name",TString::kIgnoreCase)==0){
           respName=v;
         }
	 else if(n.CompareTo("responsible_person_mail",TString::kIgnoreCase)==0){
           respMail=v;
         }
	
       }
    }
  }
  TString getName(){return name;}
  TString getLogoPath(){return logoPath;}
  TString getLogoText(){
    TString res;
    res+="<?php\necho '<div class=\"menu_logo_text\">"+logoText+"</div>';\n?>";
    return res;
  }
  friend ostream & operator << (ostream& out, const GeoExpirement& p) {
    out << "Expirement parameters: name: " << p.name<<" logotip_path"<<p.logoPath<<endl;
    return out;
  }
  TString getHeader(){
    TString res;
    res+="<?php\nif(!isset($_SESSION)) {\n  session_start();\n} ?>\n<script src='assets/js/jquery.js'></script>\n<script src='assets/js/code1.js'></script>\n<header id=\"header\">\n<div class=\"col-6 col-12-small\">\n";
    res+="<a href=\"index.php\" class=\"logo\"><strong>"+name+"</strong> Geometry DataBase</a>&nbsp; &nbsp; &nbsp;\n";
    res+="<a class='button icon fa-download' href=\"download_file.php?type=all&tag=all\" title='Download Local Geometry Database'></a>\n</div>\n<ul class=\"icons\">\n<?php if(strcmp($_SESSION['role'], '-1')== 0){\n";
    res+="echo '<li>User::'.$_SESSION['user'].'</li>';\necho '<li><a href=\"webaccess.php\" class=\"button small\">Configure WebAccess</a></li>';\necho '<li><a href=\"unlogin.php\" class=\"button small\">Logout</a></li>';\n";
    res+="}else if(isset($_SESSION['role']) && !empty($_SESSION['role']) && strcmp($_SESSION['role'], '0')!=0){\necho '<li><i><b>User:: </b></i>'.$_SESSION['user'].'</li>';\necho '<li><a href=\"unlogin.php\" class=\"button small\">Logout</a></li>';\n";
    res+="}else{\necho '<li><a href=\"javascript:logon();\" class=\"button small\">Login&nbsp;&nbsp;</a></li>';\n} ?>\n</ul>\n</header>";
    return res;
  }
  TString getRespPerson(){
    TString res;
    res+="<?php\necho '<a href=\"mailto:"+respMail+"\">"+respName+"</a>';\n?>";
    return res;
  }
};
class GeoWebServer{
private:
  TString root_path;
  TString folder;
  TString set_up_script;
public:
  GeoWebServer(){;}
  void parseContext(TXMLNode *node){
    if (node->HasAttributes()) {
       TList* attrList = node->GetAttributes();
       TIter next(attrList);
       TXMLAttr *attr;
       while ((attr =(TXMLAttr*)next())) {
         TString n=attr->GetName();
         TString v=attr->GetValue();
         if(n.CompareTo("html_root_path",TString::kIgnoreCase)==0){
           root_path=v;
         }else if(n.CompareTo("folder_name",TString::kIgnoreCase)==0){
           folder=v;
         }else if(n.CompareTo("set_up_script",TString::kIgnoreCase)==0){
           set_up_script=v;
         }
       }
    }
  }
  TString getDbPHP(GeoServer& srv, GeoDB& db){
    TString res;
    res+="<?php \n$dbcnx = pg_connect(\"host="+srv.getHost()+" port="+std::to_string(srv.getPort())+" dbname="+db.getDatabaseName()+" user="+srv.getLogin()+" password="+srv.getPwd()+"\") or die( 'Could not connect: ' . pg_last_error() );";
    res+="if (!$dbcnx){\n echo( \"<P>In current moment DB server is not available. </P>\". pg_last_error() );\n $s=\"<P>In current moment DB server is not available. </P>\";\n exit();\n}\n?>";
    return res;
  }
  TString getDbH(GeoServer& srv, GeoDB& db){
    TString res;
    res+="#include <stdlib.h>\n#include <stdio.h>\n#include <sstream>\n#include <string>\n#include <cstring>\n";
    res+="TString getDatabaseURL(){return \"pgsql://"+srv.getHost()+":"+std::to_string(srv.getPort())+"/"+db.getDatabaseName()+"\"}\n";
    res+="TString getUser(){return \""+srv.getLogin()+"\";}\n";
    res+="TString getPass(){return \""+db.getDatabaseName()+"\";}\n";
    res+="TString getTMPFolder(){return \"/tmp/\";}\n";
    res+="TString getStoragePath(){return \""+db.getStoragePath()+"/\";}";
    return res;
  }
  TString getSetUpFile(GeoServer& srv, GeoDB& db){
    TString res;
    res+="#!/bin/bash\n";
    res+="export DBL_ROOT_PATH="+db.getStoragePath();
    return res;
  }
  void copyFile(TString& in,TString& out){
    int source = open(in.Data(), O_RDONLY, 0);
    int dest = open(out.Data(), O_WRONLY | O_CREAT /*| O_TRUNC*/, 0644);

    struct stat stat_source;
    fstat(source, &stat_source);
    sendfile(dest, source, 0, stat_source.st_size);
    close(source);
    close(dest);
  }

  void installWeb(GeoServer& srv, GeoDB& db, GeoExpirement& exp) {
    if(root_path.Length()==0){
	throw std::runtime_error("Can not install web part because attribute 'html_root_path' is not set or empty in config file");
    }
    if(folder.Length()==0){
        throw std::runtime_error("Can not install web part because attribute 'folder_name' is not set or empty in config file");
    }
    if(!exists_file(set_up_script.Data())){
	TString mes = "Can not install web part because file for set up envirenment is not found. Attribute 'set_up_script'=" + set_up_script;
        throw std::runtime_error(mes.Data());
    }
    TString command= root_path+"/"+folder;
    if(exists_file(command.Data())){
        TString mes = "Can not install web part because folder:'"+command+"' is already exist";
        throw std::runtime_error(mes.Data());
    }
    command="git clone https://git.jinr.ru/nica_db/geodb_web.git ";
    command+=root_path+"/"+folder;
    system(command);
    TString fileName = root_path+"/"+folder+"/db.php";
    command="rm "+fileName;
    system(command);
    std::ofstream outfile (fileName.Data());
    outfile<<getDbPHP(srv,db);
    outfile.close();
    fileName = root_path+"/"+folder+"/db.h";
    command="rm "+fileName;
    system(command);
    outfile.open(fileName.Data());
    outfile<<getDbH(srv,db);
    outfile.close();
    fileName = root_path+"/"+folder+"/setup.sh";
    copyFile(set_up_script,fileName);
    fileName = root_path+"/"+folder+"/setup_db_env.sh";
    outfile.open(fileName.Data());
    outfile<<getSetUpFile(srv,db);
    outfile.close();
    fileName = root_path+"/"+folder+"/inc/head.php";
    command="rm "+fileName;
    system(command);
    outfile.open(fileName.Data());
    outfile<<exp.getHeader();
    outfile.close();
    if(exists_file(exp.getLogoPath().Data())){
      //std::cout<<"Copy logotip"<<std::endl;
      fileName = root_path+"/"+folder+"/images/logo.jpg";
      command="rm "+fileName;
      system(command);
      TString inp = exp.getLogoPath();
      copyFile(inp,fileName);
    }
    fileName = root_path+"/"+folder+"/inc/logo_text.php";
    command="rm "+fileName;
    system(command);
    outfile.open(fileName.Data());
    outfile<<exp.getLogoText();
    outfile.close();
    fileName = root_path+"/"+folder+"/inc/res_person.php";
    command="rm "+fileName;
    system(command);
    outfile.open(fileName.Data());
    outfile<<exp.getRespPerson();
    outfile.close();
  }
  friend ostream & operator << (ostream& out, const GeoWebServer& p) {
    out << "WebServer parameters: root_path: " << p.root_path<<endl;
    return out;
  }
};
class GeoConfig{
private:
  GeoServer srv;
  //GeoDB db;
public:
  GeoDB db;
  GeoWebServer web;
  GeoExpirement exp;
  GeoConfig(){;}
  void parseContext(TXMLNode *node){
    for ( ; node; node = node->GetNextNode()) {
      if (node->GetNodeType() == TXMLNode::kXMLElementNode) { // Element Node
         TString name = node->GetNodeName();
	 if(name.CompareTo("server",TString::kIgnoreCase)==0){
	   srv.parseContext(node);
	   //cout <<srv;
	 }
	 else if(name.CompareTo("db",TString::kIgnoreCase)==0){
           db.parseContext(node);
           //cout <<db;
         }
	 else if(name.CompareTo("web_server",TString::kIgnoreCase)==0){
	   web.parseContext(node);
	   //cout <<web;
         }
         else if(name.CompareTo("experiment",TString::kIgnoreCase)==0){
           exp.parseContext(node);
           //cout <<exp;
	 }else{
           //cout <<"unknown element with name="<< name << ": ";
           if (node->HasAttributes()) {
              TList* attrList = node->GetAttributes();
              TIter next(attrList);
              TXMLAttr *attr;
              while ((attr =(TXMLAttr*)next())) {
                 cout << attr->GetName() << ":" << attr->GetValue()<<" ";
              }
           }
	   //cout<<endl;
	 }
       }
    }
  }
  void installWeb() { web.installWeb(srv,db,exp);}
  TString getHost(){return srv.getHost();}
  int getPort(){return srv.getPort();}
  TString getLogin(){return srv.getLogin();}
  TString getPwd(){return srv.getPwd();}
  TString getDatabaseName(){return db.getDatabaseName();}

};

int installServerDB(){ 
  TString logPath="installServerDB.log";
  if(exists_file(logPath.Data())){
    TString command="rm "+logPath;
    system(command);
  }
  std::ofstream logFile(logPath.Data());//,std::ofstream::out | std::ofstream::app);
  //RooMsgService::instance().addStream(RooFit::ERROR,RooFit::OutputStream(logFile));
  //RooMsgService::instance().setGlobalKillBelow(RooFit::FATAL);
  //RooMsgService::instance().Print();
  cerr.rdbuf( logFile.rdbuf() );
  TString gTmp=".2>> "+logPath;
  gROOT->ProcessLine(gTmp.Data());
  std::cout<<"Parse config file...";
  TDOMParser *domParser = new TDOMParser();
  //TString dir = gROOT->GetTutorialDir();
  domParser->SetValidate(false); // do not validate with DTD
  //domParser->ParseFile(dir+"/xml/person.xml");
  Int_t parsecode = domParser->ParseFile("geodb.config.xml");
  if (parsecode < 0) {
         logFile << domParser->GetParseCodeMessage(parsecode) << endl;
	 logFile.close();
	 cout<<"\033[31m"<<" Error"<<"\033[0m"<<endl;
         return -1;
  }
  GeoConfig conf;
  try{
    TXMLNode *node = domParser->GetXMLDocument()->GetRootNode();
    conf.parseContext(node->GetChildren());
  }catch(...){
    logFile <<"Unknown error" << endl;
    logFile.close();
    cout<<"\033[31m"<<" Error"<<"\033[0m"<<endl;
    return -1;
  }
  cout<<"\033[32m"<<" Ok"<<"\033[0m"<<endl;
  std::ostringstream stringStream;
  stringStream<<"pgsql://"<<conf.getHost()<<":"<<conf.getPort();
//  stringStream<<"pgsql://159.93.36.251:5432/geometry_bmn";
  TPgSQLServer* dbPg = new TPgSQLServer(stringStream.str().c_str(),conf.getLogin().Data(),conf.getPwd().Data());
  if(!dbPg->IsConnected()){
      logFile<<"Error PostreSQL do not connected"<<std::endl;
      logFile.close();
      cout<<"Connecting to PostreSQL... "<<"\033[31m"<<"Error"<<"\033[0m"<<endl;
      return -1;
  }
  logFile <<"Connecting to PostreSQL:"<<stringStream.str()<<" login:"<<conf.getLogin().Data()<<" and password"<<endl;
  cout<<"Connecting to PostreSQL..."<<"\033[32m"<<" Ok"<<"\033[0m"<<endl;
  int res = dbPg->SelectDataBase(conf.getDatabaseName().Data());
  if(res==0){
     dbPg->Close();
     delete dbPg;
     char type;
     logFile <<"Database with name "<<conf.getDatabaseName().Data()<<" already exists."<<endl;
     cout<<"\033[31m"<<"Database with name "<<conf.getDatabaseName().Data()<<" already exists."<<"\033[0m"<<endl;
     do
     {
         cout << "Do you want to drop it[y/n]?" <<"\033[0m"<< endl;
         cin >> type;
     }
     while( !cin.fail() && type!='y' && type!='n' );
     if(type=='n'){
       logFile <<"Break install because name of database already exist";
       logFile.close();       
       cout << "Break install because name of database already exist"<<"\033[0m";
       return -1;
     }else if(type=='y'){
       dbPg = new TPgSQLServer(stringStream.str().c_str(),conf.getLogin().Data(),conf.getPwd().Data());
       res = dbPg->DropDataBase(conf.getDatabaseName().Data());
       gROOT->ProcessLine(".2> /dev/null");
       res = dbPg->SelectDataBase(conf.getDatabaseName().Data());
       dbPg->Close();
       gROOT->ProcessLine(gTmp.Data());
       delete dbPg;
       if(res==0){
	 logFile <<"Error: Can not delete database with name:"<<conf.getDatabaseName().Data()<<" Please check other connection to this database"<<endl;
         logFile.close();
         cout<<"Drop database..."<<"\033[31m"<<" Error"<<"\033[0m"<<endl;
	 return -1;
       }
       dbPg = new TPgSQLServer(stringStream.str().c_str(),conf.getLogin().Data(),conf.getPwd().Data());
       logFile<<"Dropped databese with name:"<<conf.getDatabaseName().Data()<<endl;
     }else{
       logFile <<"Break install because name of database already exist";
       logFile.close();
       cout << "Break install because name of database already exist"<<"\033[0m";
       return -1;
     }
  }else{
    dbPg->Close();
    dbPg = new TPgSQLServer(stringStream.str().c_str(),conf.getLogin().Data(),conf.getPwd().Data());
  }
  stringStream.str("");
  //cerr<<"Create database...";
  res = dbPg->CreateDataBase(conf.getDatabaseName().Data());
  if(res!=0){
    logFile <<"Error when create DB. Res="<<res<<endl;
    logFile.close();
    cout<<"Create database..."<<"\033[31m"<<" Error"<<"\033[0m"<<endl;
    dbPg->Close();
    delete dbPg;
    return -1;
  }
  res = dbPg->SelectDataBase(conf.getDatabaseName().Data());
  if(res!=0){
    logFile <<"Error when select DB. Res="<<res<<endl;
    logFile.close();
    cout<<"Create database..."<<"\033[31m"<<" Error"<<"\033[0m"<<endl;
    delete dbPg;
    return -1;
  }
  cout<<"Create database...";
  TSQLResult *resQ;
//  resQ=dbPg->Query((conf.db.getRoleTable()).Data());
  resQ=dbPg->Query((conf.db.getUsersTable()).Data());
  resQ=dbPg->Query((conf.db.getVersionTable()).Data());
  resQ=dbPg->Query((conf.db.getStatusTable()).Data());
  resQ=dbPg->Query((conf.db.getModuleTable()).Data());
  resQ=dbPg->Query((conf.db.getModuleRevisionTable()).Data());
  resQ=dbPg->Query((conf.db.getFileTable()).Data());
  resQ=dbPg->Query((conf.db.getSMSTable()).Data());
  resQ=dbPg->Query((conf.db.getSetupModuleTable()).Data());
  resQ=dbPg->Query((conf.db.getMaterialTable()).Data());
  resQ=dbPg->Query((conf.db.getFieldTable()).Data());
  resQ=dbPg->Query((conf.db.getSetupTable()).Data());
  resQ=dbPg->Query((conf.db.getConfigTable()).Data());
  cout<<"\033[32m"<<" Ok"<<"\033[0m"<<endl<<"Install Web...";
  try{
    conf.db.writeCave();
    resQ=dbPg->Query((conf.db.getInsertCave()).Data());
//  std::cout<<conf.db.getCaveObj();
    conf.installWeb();
    cout<<"\033[32m"<<" Ok"<<"\033[0m"<<endl;
  }catch(const std::exception& ex){
    cout<<"\033[31m"<<" Error"<<"\033[0m"<<endl;
    logFile<<ex.what();
    logFile.close();
    delete dbPg;
    return -1;
  }
  logFile.close();
  delete dbPg;
  return 1;
}
