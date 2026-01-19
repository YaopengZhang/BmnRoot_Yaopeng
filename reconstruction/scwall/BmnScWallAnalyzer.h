/* 
 * File:   BmnScWallAnalyzer.h
 * Author: Sergey Nepochatykh
 *
 */

#ifndef BMNSCWALLANALYZER_H
#define BMNSCWALLANALYZER_H

#include <FairTask.h>
#include <TClonesArray.h>

#include "BmnScWallReconstructor.h"
#include "BmnScWallDigi.h"
#include "DstEventHeader.h"

class BmnScWallAnalyzer : public FairTask
{
  public:
    BmnScWallAnalyzer();
    
    virtual ~BmnScWallAnalyzer();

    virtual InitStatus Init();
    
    virtual void Exec(Option_t* opt);
    
    virtual void Finish();

  private:
    TClonesArray * fArrayOfScWallDigits; 
  
    TClonesArray * fBmnScWallReconstructor; 
    
    DstEventHeader * fevHeader;
    
    TClonesArray * fDchTrack;
      
    TString fInputDigitsBranchName;
      
    TString fOutputHitsBranchName;
    
    TString fInputTracksBranchName;
    
    TString fmapFile;
    
    std::map <UInt_t, std::vector <Double_t>> fScWallMapper;
    
    std::map <UInt_t, std::vector <Double_t>> GetMapper(TString mapFile);

    ClassDef(BmnScWallAnalyzer, 1);
};

#endif /* BMNSCWALLANALYZER_H */
