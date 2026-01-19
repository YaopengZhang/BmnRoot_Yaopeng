// ----------------------------------------------------------------------
//                    UniDetector header file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

/** UniDetector.h
 ** Class for the table: detector_ 
 **/ 

#ifndef UniDetector_H 
#define UniDetector_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniConnection.h"

class UniDetector
{
 private:
    /* GENERATED PRIVATE MEMBERS (SHOULD NOT BE CHANGED MANUALLY) */
    /// connection to the database
    UniConnection* connectionDB;

    /// detector name
    TString str_detector_name;
    /// description
    TString* str_description;

    //Constructor
    UniDetector(UniConnection* db_connect, TString detector_name, TString* description);
    /* END OF PRIVATE GENERATED PART (SHOULD NOT BE CHANGED MANUALLY) */

 public:
    /* GENERATED PUBLIC MEMBERS (SHOULD NOT BE CHANGED MANUALLY) */
    virtual ~UniDetector(); // Destructor

    // static class functions
    /// add new detector to the database
    static UniDetector* CreateDetector(TString detector_name, TString* description);
    /// get detector from the database
    static UniDetector* GetDetector(TString detector_name);
    /// check detector exists in the database: 1- true, 0 - false, <0 - database operation error
    static int CheckDetectorExists(TString detector_name);
    /// delete detector from the database
    static int DeleteDetector(TString detector_name);
    /// print all detectors
    static int PrintAll();

    // Getters
    /// get detector name of the current detector
    TString GetDetectorName() {return str_detector_name;}
    /// get description of the current detector
    TString* GetDescription() {if (str_description == nullptr) return nullptr; else return new TString(*str_description);}

    // Setters
    /// set detector name of the current detector
    int SetDetectorName(TString detector_name);
    /// set description of the current detector
    int SetDescription(TString* description);

    /// print information about current detector
    void Print();
    /* END OF PUBLIC GENERATED PART (SHOULD NOT BE CHANGED MANUALLY) */

 ClassDef(UniDetector,1);
};

#endif
