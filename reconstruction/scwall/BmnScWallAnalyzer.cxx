/* 
 * File:   BmnScWallAnalyzer.cxx
 * Author: Sergey Nepochatykh
 *
 */

#include "BmnScWallAnalyzer.h"
#include "FairLogger.h"
#include <TStopwatch.h>

#include <iostream>
#include <fstream>

using namespace std;

static Float_t workTime = 0.0;


BmnScWallAnalyzer::BmnScWallAnalyzer() :

  FairTask("BmnScWallAnalyzer"),

  fArrayOfScWallDigits(nullptr),
  
  fBmnScWallReconstructor(nullptr),
  
  fDchTrack(nullptr)

{
  
  fInputDigitsBranchName = "ScWallDigi";
  
  fOutputHitsBranchName = "BmnScWallReconstructor";
  
  fInputTracksBranchName = "BmnDchTrack";
  
  fmapFile = "/home/srcuser2/bmnroot/input/SCWALL_map_dry_run_2022.txt";
  
  fScWallMapper = GetMapper(fmapFile);
  
  fevHeader = new DstEventHeader();
 
}


BmnScWallAnalyzer::~BmnScWallAnalyzer() {
 
 delete fArrayOfScWallDigits, fBmnScWallReconstructor, fScWallMapper, fevHeader, fDchTrack;
 
}


InitStatus BmnScWallAnalyzer::Init()
{
    
  FairRootManager* ioman = FairRootManager::Instance();
    
  fArrayOfScWallDigits = (TClonesArray*) ioman -> GetObject(fInputDigitsBranchName);
  
  fevHeader = (DstEventHeader*) ioman -> GetObject("DstEventHeader.");
  
  fDchTrack = (TClonesArray*) ioman -> GetObject(fInputTracksBranchName);
    
  if (fArrayOfScWallDigits == nullptr)
  {
     
   LOG(error) << "BmnScWallAnalyzer::Init() branch " + fInputDigitsBranchName + " not found! Task will be deactivated";
     
   return kERROR;

  }
  
  fBmnScWallReconstructor = new TClonesArray(fOutputHitsBranchName, 100);
  
  ioman -> Register(fOutputHitsBranchName, "ScWall", fBmnScWallReconstructor, kTRUE);
    
  return kSUCCESS;
    
}


void BmnScWallAnalyzer::Exec(Option_t* opt) {

  TStopwatch sw;
    
  sw.Start();
    
  fBmnScWallReconstructor -> Delete();
    
  for (int iHit = 0; iHit < fArrayOfScWallDigits -> GetEntries(); iHit ++)
  {
     
   BmnScWallDigi *det = (BmnScWallDigi *)fArrayOfScWallDigits -> At(iHit);
     
   if (!(det -> GetCellId() < 200 && det -> GetSignal() > 0. && det -> fFitR2 < 0.5 && det -> fTimeMax > 12 && det -> fTimeMax < 20)) { continue; }
     
   BmnScWallReconstructor* signal = new ((*fBmnScWallReconstructor)[fBmnScWallReconstructor -> GetEntriesFast()])BmnScWallReconstructor();
     
   signal -> SetELosses((Double_t)det -> GetSignal());
   
   signal -> SetCellId(det -> GetCellId());
   
   UInt_t CellId = signal -> GetCellId();
   
   signal -> SetX1(fScWallMapper[CellId][0]);
   
   signal -> SetX2(fScWallMapper[CellId][1]);
   
   signal -> SetY1(fScWallMapper[CellId][2]);
   
   signal -> SetY2(fScWallMapper[CellId][3]);
     
  }
  
  if (!(fevHeader -> GetMWPC_Mult() && fevHeader -> GetDCH_Mult() && fevHeader -> GetDCH_Mult() <= 2 && fBmnScWallReconstructor -> GetEntries())) { sw.Stop(); workTime += sw.RealTime(); return; }

  sw.Stop();
    
  workTime += sw.RealTime(); 
  
}


void BmnScWallAnalyzer::Finish() {
    
  printf("Work time of BmnScWallAnalyzer: %4.2f sec.\n", workTime);
    
}


std::map <UInt_t, std::vector <Double_t>> BmnScWallAnalyzer::GetMapper(TString mapFile) {
  
  std::map <UInt_t, std::vector <Double_t>> Res;
  
  ifstream in(mapFile);
 
  for (int i = 0; i < 20; i ++) { std::string var; std::getline(in, var); } 
 
  for (int i = 0; i < 192; i ++) 
  {  
  
   std::string config, ADC_serial, sign, Zone; Double_t ADC_ch, x, y, size, X1, X2, Y1, Y2; UInt_t CellId;
   
   in >> config >> sign >> ADC_serial >> ADC_ch >> CellId >> Zone >> x >> y >> size;
   
   if (Zone == "Z") { continue; } 
  
   X1 = x * 0.1 - 0.5 * size * 0.1; X2 = x * 0.1 + 0.5 * size * 0.1;
  
   Y1 = y * 0.1 - 0.5 * size * 0.1; Y2 = y * 0.1 + 0.5 * size * 0.1; 
  
   if (CellId <= 40)
   {
     
    if (CellId <= 20) { Y1 += 0.05; Y2 += 0.05; } else { Y1 -= 0.05; Y2 -= 0.05; } Bool_t SHIFT = kFALSE;
     
    for (int k = 0; k < 4; k ++) { if (CellId >= 1 + k * 10 && CellId <= 4 + k * 10) { X1 -= 0.05; X2 -= 0.05; SHIFT = kTRUE; } } 
   
    if (!SHIFT) { X1 += 0.05; X2 += 0.05; }
      
   }
   
   Res.insert({CellId, { X1, X2, Y1, Y2 }});
 
  }
 
 in.close();
 
 return Res;
  
}


ClassImp(BmnScWallAnalyzer)
