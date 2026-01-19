//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jul 28 04:46:30 2023 by ROOT version 6.26/02
// from TTree bmndata//bmnroot_0
// found on file: srcsim_v1p2_50Mio.root
//////////////////////////////////////////////////////////

#ifndef Read_srcsim_v1p2_50Mio_h
#define Read_srcsim_v1p2_50Mio_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
// #include "TClonesArray.h"
// #include "TObject.h"
// #include "CbmMCTrack.h"
// #include "FairMultiLinkedData_Interface.h"
// #include "CbmStsPoint.h"
// #include "BmnCSCPoint.h"
// #include "TNamed.h"
// #include "TGeoAtt.h"
// #include "TAttLine.h"
// #include "TAttMarker.h"
// #include "TVirtualGeoTrack.h"
// #include "TGeoTrack.h"

class Read_srcsim_v1p2_50Mio {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxbmnroot_0_Stack_MCTrack = 50;
   static constexpr Int_t kMaxbmnroot_0_STS_StsPoint = 20;
   static constexpr Int_t kMaxbmnroot_0_CSC_CSCPoint = 20;
   static constexpr Int_t kMaxbmnroot_0_TOF1_TOF400Point = 40;
   static constexpr Int_t kMaxbmnroot_0_Event_MCEventHeader = 1;
   static constexpr Int_t kMaxbmnroot_0_MCGeoTrack_GeoTracks = 2000;


   // Declaration of leaf types
   Int_t           MCTrack_;
   UInt_t          MCTrack_fUniqueID[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   UInt_t          MCTrack_fBits[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Int_t           MCTrack_fPdgCode[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Int_t           MCTrack_fMotherId[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Double32_t      MCTrack_fPx[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Double32_t      MCTrack_fPy[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Double32_t      MCTrack_fPz[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Double32_t      MCTrack_fStartX[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Double32_t      MCTrack_fStartY[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Double32_t      MCTrack_fStartZ[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Double32_t      MCTrack_fStartT[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Long64_t        MCTrack_fNPoints[kMaxbmnroot_0_Stack_MCTrack];   //[bmnroot_0.Stack.MCTrack_]
   Double32_t      MCTrack_fPolar[kMaxbmnroot_0_Stack_MCTrack][3];   //[bmnroot_0.Stack.MCTrack_]
   Int_t           StsPoint_;
   UInt_t          StsPoint_fUniqueID[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   UInt_t          StsPoint_fBits[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   FairMultiLinkedData StsPoint_fLink[kMaxbmnroot_0_STS_StsPoint];
   Int_t           StsPoint_fTrackID[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   UInt_t          StsPoint_fEventId[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fPx[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fPy[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fPz[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fTime[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fLength[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fELoss[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Int_t           StsPoint_fDetectorID[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fX[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fY[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fZ[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fX_out[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fY_out[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fZ_out[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fPx_out[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fPy_out[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Double32_t      StsPoint_fPz_out[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Int_t           StsPoint_fStation[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Int_t           StsPoint_fModule[kMaxbmnroot_0_STS_StsPoint];   //[bmnroot_0.STS.StsPoint_]
   Int_t           CSCPoint_;
   UInt_t          CSCPoint_fUniqueID[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   UInt_t          CSCPoint_fBits[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   FairMultiLinkedData CSCPoint_fLink[kMaxbmnroot_0_CSC_CSCPoint];
   Int_t           CSCPoint_fTrackID[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   UInt_t          CSCPoint_fEventId[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fPx[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fPy[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fPz[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fTime[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fLength[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fELoss[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Int_t           CSCPoint_fDetectorID[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fX[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fY[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double32_t      CSCPoint_fZ[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Int_t           CSCPoint_fIsPrimary[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fCharge[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Int_t           CSCPoint_fPdgId[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fX_out[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fY_out[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fZ_out[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fX_center[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fY_center[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fZ_center[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fPx_out[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fPy_out[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Double_t        CSCPoint_fPz_out[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Int_t           CSCPoint_fStation[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Int_t           CSCPoint_fModule[kMaxbmnroot_0_CSC_CSCPoint];   //[bmnroot_0.CSC.CSCPoint_]
   Int_t           TOF400Point_;
   UInt_t          TOF400Point_fUniqueID[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   UInt_t          TOF400Point_fBits[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   FairMultiLinkedData TOF400Point_fLink[kMaxbmnroot_0_TOF1_TOF400Point];
   Int_t           TOF400Point_fTrackID[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   UInt_t          TOF400Point_fEventId[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fPx[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fPy[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fPz[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fTime[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fLength[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fELoss[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Int_t           TOF400Point_fDetectorID[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fX[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fY[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   Double32_t      TOF400Point_fZ[kMaxbmnroot_0_TOF1_TOF400Point];   //[bmnroot_0.TOF1.TOF400Point_]
   // FairMCEventHeader *MCEventHeader_;
   // UInt_t          MCEventHeader_TNamed_fUniqueID;
   // UInt_t          MCEventHeader_TNamed_fBits;
   // TString         MCEventHeader_TNamed_fName;
   // TString         MCEventHeader_TNamed_fTitle;
   // UInt_t          MCEventHeader_fRunId;
   // UInt_t          MCEventHeader_fEventId;
   // Double32_t      MCEventHeader_fX;
   // Double32_t      MCEventHeader_fY;
   // Double32_t      MCEventHeader_fZ;
   // Double32_t      MCEventHeader_fT;
   // Double32_t      MCEventHeader_fB;
   // Int_t           MCEventHeader_fNPrim;
   // Bool_t          MCEventHeader_fIsSet;
   // Double32_t      MCEventHeader_fRotX;
   // Double32_t      MCEventHeader_fRotY;
   // Double32_t      MCEventHeader_fRotZ;
   // Int_t           GeoTracks_;
   // UInt_t          GeoTracks_fUniqueID[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // UInt_t          GeoTracks_fBits[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // UInt_t          GeoTracks_fGeoAtt[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Short_t         GeoTracks_fLineColor[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Short_t         GeoTracks_fLineStyle[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Short_t         GeoTracks_fLineWidth[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Short_t         GeoTracks_fMarkerColor[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Short_t         GeoTracks_fMarkerStyle[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Float_t         GeoTracks_fMarkerSize[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Int_t           GeoTracks_fPDG[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Int_t           GeoTracks_fId[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Int_t           GeoTracks_fPointsSize[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Int_t           GeoTracks_fNpoints[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0.MCGeoTrack.GeoTracks_]
   // Double_t       *GeoTracks_fPoints[kMaxbmnroot_0_MCGeoTrack_GeoTracks];   //[bmnroot_0_MCGeoTrack_GeoTracks_fNpoints]

   // List of branches
   // TBranch        *b_bmnroot_0_Stack_MCTrack_;   //!
   TBranch        *b_MCTrack_fUniqueID;   //!
   TBranch        *b_MCTrack_fBits;   //!
   TBranch        *b_MCTrack_fPdgCode;   //!
   TBranch        *b_MCTrack_fMotherId;   //!
   TBranch        *b_MCTrack_fPx;   //!
   TBranch        *b_MCTrack_fPy;   //!
   TBranch        *b_MCTrack_fPz;   //!
   TBranch        *b_MCTrack_fStartX;   //!
   TBranch        *b_MCTrack_fStartY;   //!
   TBranch        *b_MCTrack_fStartZ;   //!
   TBranch        *b_MCTrack_fStartT;   //!
   TBranch        *b_MCTrack_fNPoints;   //!
   TBranch        *b_MCTrack_fPolar;   //!
   TBranch        *b_bmnroot_0_STS_StsPoint_;   //!
   TBranch        *b_StsPoint_fUniqueID;   //!
   TBranch        *b_StsPoint_fBits;   //!
   TBranch        *b_StsPoint_fLink;   //!
   TBranch        *b_StsPoint_fTrackID;   //!
   TBranch        *b_StsPoint_fEventId;   //!
   TBranch        *b_StsPoint_fPx;   //!
   TBranch        *b_StsPoint_fPy;   //!
   TBranch        *b_StsPoint_fPz;   //!
   TBranch        *b_StsPoint_fTime;   //!
   TBranch        *b_StsPoint_fLength;   //!
   TBranch        *b_StsPoint_fELoss;   //!
   TBranch        *b_StsPoint_fDetectorID;   //!
   TBranch        *b_StsPoint_fX;   //!
   TBranch        *b_StsPoint_fY;   //!
   TBranch        *b_StsPoint_fZ;   //!
   TBranch        *b_StsPoint_fX_out;   //!
   TBranch        *b_StsPoint_fY_out;   //!
   TBranch        *b_StsPoint_fZ_out;   //!
   TBranch        *b_StsPoint_fPx_out;   //!
   TBranch        *b_StsPoint_fPy_out;   //!
   TBranch        *b_StsPoint_fPz_out;   //!
   TBranch        *b_StsPoint_fStation;   //!
   TBranch        *b_StsPoint_fModule;   //!
   TBranch        *b_bmnroot_0_CSC_CSCPoint_;   //!
   TBranch        *b_CSCPoint_fUniqueID;   //!
   TBranch        *b_CSCPoint_fBits;   //!
   TBranch        *b_CSCPoint_fLink;   //!
   TBranch        *b_CSCPoint_fTrackID;   //!
   TBranch        *b_CSCPoint_fEventId;   //!
   TBranch        *b_CSCPoint_fPx;   //!
   TBranch        *b_CSCPoint_fPy;   //!
   TBranch        *b_CSCPoint_fPz;   //!
   TBranch        *b_CSCPoint_fTime;   //!
   TBranch        *b_CSCPoint_fLength;   //!
   TBranch        *b_CSCPoint_fELoss;   //!
   TBranch        *b_CSCPoint_fDetectorID;   //!
   TBranch        *b_CSCPoint_fX;   //!
   TBranch        *b_CSCPoint_fY;   //!
   TBranch        *b_CSCPoint_fZ;   //!
   TBranch        *b_CSCPoint_fIsPrimary;   //!
   TBranch        *b_CSCPoint_fCharge;   //!
   TBranch        *b_CSCPoint_fPdgId;   //!
   TBranch        *b_CSCPoint_fX_out;   //!
   TBranch        *b_CSCPoint_fY_out;   //!
   TBranch        *b_CSCPoint_fZ_out;   //!
   TBranch        *b_CSCPoint_fX_center;   //!
   TBranch        *b_CSCPoint_fY_center;   //!
   TBranch        *b_CSCPoint_fZ_center;   //!
   TBranch        *b_CSCPoint_fPx_out;   //!
   TBranch        *b_CSCPoint_fPy_out;   //!
   TBranch        *b_CSCPoint_fPz_out;   //!
   TBranch        *b_CSCPoint_fStation;   //!
   TBranch        *b_CSCPoint_fModule;   //!
   TBranch        *b_bmnroot_0_TOF1_TOF400Point_;   //!
   TBranch        *b_TOF400Point_fUniqueID;   //!
   TBranch        *b_TOF400Point_fBits;   //!
   TBranch        *b_TOF400Point_fLink;   //!
   TBranch        *b_TOF400Point_fTrackID;   //!
   TBranch        *b_TOF400Point_fEventId;   //!
   TBranch        *b_TOF400Point_fPx;   //!
   TBranch        *b_TOF400Point_fPy;   //!
   TBranch        *b_TOF400Point_fPz;   //!
   TBranch        *b_TOF400Point_fTime;   //!
   TBranch        *b_TOF400Point_fLength;   //!
   TBranch        *b_TOF400Point_fELoss;   //!
   TBranch        *b_TOF400Point_fDetectorID;   //!
   TBranch        *b_TOF400Point_fX;   //!
   TBranch        *b_TOF400Point_fY;   //!
   TBranch        *b_TOF400Point_fZ;   //!
   // TBranch        *b_bmnroot_0_Event_MCEventHeader_;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_TNamed_fUniqueID;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_TNamed_fBits;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_TNamed_fName;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_TNamed_fTitle;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fRunId;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fEventId;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fX;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fY;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fZ;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fT;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fB;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fNPrim;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fIsSet;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fRotX;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fRotY;   //!
   // TBranch        *b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fRotZ;   //!
   // TBranch        *b_bmnroot_0_MCGeoTrack_GeoTracks_;   //!
   // TBranch        *b_GeoTracks_fUniqueID;   //!
   // TBranch        *b_GeoTracks_fBits;   //!
   // TBranch        *b_GeoTracks_fGeoAtt;   //!
   // TBranch        *b_GeoTracks_fLineColor;   //!
   // TBranch        *b_GeoTracks_fLineStyle;   //!
   // TBranch        *b_GeoTracks_fLineWidth;   //!
   // TBranch        *b_GeoTracks_fMarkerColor;   //!
   // TBranch        *b_GeoTracks_fMarkerStyle;   //!
   // TBranch        *b_GeoTracks_fMarkerSize;   //!
   // TBranch        *b_GeoTracks_fPDG;   //!
   // TBranch        *b_GeoTracks_fId;   //!
   // TBranch        *b_GeoTracks_fPointsSize;   //!
   // TBranch        *b_GeoTracks_fNpoints;   //!
   // TBranch        *b_GeoTracks_fPoints;   //!

   Read_srcsim_v1p2_50Mio(TTree *tree=0);
   virtual ~Read_srcsim_v1p2_50Mio();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   Double_t         Loop(Double_t Boost_resolution, Double_t TOF_resolution);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Read_srcsim_v1p2_50Mio_cxx
Read_srcsim_v1p2_50Mio::Read_srcsim_v1p2_50Mio(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("srcsim_v1p2_50Mio.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("srcsim_v1p2_50Mio.root");
      }
      // f->GetObject("bmndata",tree);

      TFile *f1 = (TFile*)gROOT->GetListOfFiles()->FindObject("srcsim_v1p2_50Mio_1.root");
      if (!f1 || !f1->IsOpen()) {
         f1 = new TFile("srcsim_v1p2_50Mio_1.root");
      }

      TFile *f2 = (TFile*)gROOT->GetListOfFiles()->FindObject("srcsim_v1p2_50Mio_2.root");
      if (!f2 || !f2->IsOpen()) {
         f2 = new TFile("srcsim_v1p2_50Mio_2.root");
      }

      TFile *f3 = (TFile*)gROOT->GetListOfFiles()->FindObject("srcsim_v1p2_50Mio_3.root");
      if (!f3 || !f3->IsOpen()) {
         f3 = new TFile("srcsim_v1p2_50Mio_3.root");
      }

      TFile *f4 = (TFile*)gROOT->GetListOfFiles()->FindObject("srcsim_v1p2_50Mio_4.root");
      if (!f4 || !f4->IsOpen()) {
         f4 = new TFile("srcsim_v1p2_50Mio_4.root");
      }
      // f->GetObject("bmndata",tree);

      TFile *f5 = (TFile*)gROOT->GetListOfFiles()->FindObject("srcsim_v1p2_50Mio_5.root");
      if (!f5 || !f5->IsOpen()) {
         f5 = new TFile("srcsim_v1p2_50Mio_5.root");
      }

      TFile *f6 = (TFile*)gROOT->GetListOfFiles()->FindObject("srcsim_v1p2_50Mio_6.root");
      if (!f6 || !f6->IsOpen()) {
         f6 = new TFile("srcsim_v1p2_50Mio_6.root");
      }

      TFile *f7 = (TFile*)gROOT->GetListOfFiles()->FindObject("srcsim_v1p2_50Mio_7.root");
      if (!f7 || !f7->IsOpen()) {
         f7 = new TFile("srcsim_v1p2_50Mio_7.root");
      }

      TTree *tree0, *tree1, *tree2, *tree3, *tree4, *tree5, *tree6, *tree7;
      f->GetObject("bmndata", tree0);
      f1->GetObject("bmndata", tree1);
      f2->GetObject("bmndata", tree2);
      f3->GetObject("bmndata", tree3);
      f4->GetObject("bmndata", tree4);
      f5->GetObject("bmndata", tree5);
      f6->GetObject("bmndata", tree6);
      f7->GetObject("bmndata", tree7);

      TChain* chain = new TChain("bmndata");
      chain->Add("srcsim_v1p2_50Mio.root");
      chain->Add("srcsim_v1p2_50Mio_1.root");
      chain->Add("srcsim_v1p2_50Mio_2.root");
      chain->Add("srcsim_v1p2_50Mio_3.root");
      chain->Add("srcsim_v1p2_50Mio_4.root");
      chain->Add("srcsim_v1p2_50Mio_5.root");
      chain->Add("srcsim_v1p2_50Mio_6.root");
      chain->Add("srcsim_v1p2_50Mio_7.root");

      tree = chain;

   }
   Init(tree);
}

Read_srcsim_v1p2_50Mio::~Read_srcsim_v1p2_50Mio()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Read_srcsim_v1p2_50Mio::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Read_srcsim_v1p2_50Mio::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Read_srcsim_v1p2_50Mio::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   // MCEventHeader_ = 0;
   // Set array pointer
   // for(int i=0; i<kMaxbmnroot_0_MCGeoTrack_GeoTracks; ++i) GeoTracks_fPoints[i] = 0;

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   // fChain->SetBranchAddress("MCTrack", &MCTrack_, &b_bmnroot_0_Stack_MCTrack_);
   // fChain->SetBranchAddress("MCTrack.fUniqueID", MCTrack_fUniqueID, &b_MCTrack_fUniqueID);
   // fChain->SetBranchAddress("MCTrack.fBits", MCTrack_fBits, &b_MCTrack_fBits);
   // fChain->SetBranchAddress("MCTrack.fPdgCode", MCTrack_fPdgCode, &b_MCTrack_fPdgCode);
   // fChain->SetBranchAddress("MCTrack.fMotherId", MCTrack_fMotherId, &b_MCTrack_fMotherId);
   // fChain->SetBranchAddress("MCTrack.fPx", MCTrack_fPx, &b_MCTrack_fPx);
   // fChain->SetBranchAddress("MCTrack.fPy", MCTrack_fPy, &b_MCTrack_fPy);
   // fChain->SetBranchAddress("MCTrack.fPz", MCTrack_fPz, &b_MCTrack_fPz);
   // fChain->SetBranchAddress("MCTrack.fStartX", MCTrack_fStartX, &b_MCTrack_fStartX);
   // fChain->SetBranchAddress("MCTrack.fStartY", MCTrack_fStartY, &b_MCTrack_fStartY);
   // fChain->SetBranchAddress("MCTrack.fStartZ", MCTrack_fStartZ, &b_MCTrack_fStartZ);
   // fChain->SetBranchAddress("MCTrack.fStartT", MCTrack_fStartT, &b_MCTrack_fStartT);
   // fChain->SetBranchAddress("MCTrack.fNPoints", MCTrack_fNPoints, &b_MCTrack_fNPoints);
   // fChain->SetBranchAddress("MCTrack.fPolar[3]", MCTrack_fPolar, &b_MCTrack_fPolar);
   fChain->SetBranchAddress("StsPoint", &StsPoint_, &b_bmnroot_0_STS_StsPoint_);
   fChain->SetBranchAddress("StsPoint.fUniqueID", &StsPoint_fUniqueID, &b_StsPoint_fUniqueID);
   fChain->SetBranchAddress("StsPoint.fBits", &StsPoint_fBits, &b_StsPoint_fBits);
   fChain->SetBranchAddress("StsPoint.fLink", &StsPoint_fLink, &b_StsPoint_fLink);
   fChain->SetBranchAddress("StsPoint.fTrackID", &StsPoint_fTrackID, &b_StsPoint_fTrackID);
   fChain->SetBranchAddress("StsPoint.fEventId", &StsPoint_fEventId, &b_StsPoint_fEventId);
   fChain->SetBranchAddress("StsPoint.fPx", &StsPoint_fPx, &b_StsPoint_fPx);
   fChain->SetBranchAddress("StsPoint.fPy", &StsPoint_fPy, &b_StsPoint_fPy);
   fChain->SetBranchAddress("StsPoint.fPz", &StsPoint_fPz, &b_StsPoint_fPz);
   fChain->SetBranchAddress("StsPoint.fTime", &StsPoint_fTime, &b_StsPoint_fTime);
   fChain->SetBranchAddress("StsPoint.fLength", &StsPoint_fLength, &b_StsPoint_fLength);
   fChain->SetBranchAddress("StsPoint.fELoss", &StsPoint_fELoss, &b_StsPoint_fELoss);
   fChain->SetBranchAddress("StsPoint.fDetectorID", &StsPoint_fDetectorID, &b_StsPoint_fDetectorID);
   fChain->SetBranchAddress("StsPoint.fX", &StsPoint_fX, &b_StsPoint_fX);
   fChain->SetBranchAddress("StsPoint.fY", &StsPoint_fY, &b_StsPoint_fY);
   fChain->SetBranchAddress("StsPoint.fZ", &StsPoint_fZ, &b_StsPoint_fZ);
   fChain->SetBranchAddress("StsPoint.fX_out", &StsPoint_fX_out, &b_StsPoint_fX_out);
   fChain->SetBranchAddress("StsPoint.fY_out", &StsPoint_fY_out, &b_StsPoint_fY_out);
   fChain->SetBranchAddress("StsPoint.fZ_out", &StsPoint_fZ_out, &b_StsPoint_fZ_out);
   fChain->SetBranchAddress("StsPoint.fPx_out", &StsPoint_fPx_out, &b_StsPoint_fPx_out);
   fChain->SetBranchAddress("StsPoint.fPy_out", &StsPoint_fPy_out, &b_StsPoint_fPy_out);
   fChain->SetBranchAddress("StsPoint.fPz_out", &StsPoint_fPz_out, &b_StsPoint_fPz_out);
   fChain->SetBranchAddress("StsPoint.fStation", &StsPoint_fStation, &b_StsPoint_fStation);
   fChain->SetBranchAddress("StsPoint.fModule", &StsPoint_fModule, &b_StsPoint_fModule);
   fChain->SetBranchAddress("CSCPoint", &CSCPoint_, &b_bmnroot_0_CSC_CSCPoint_);
   fChain->SetBranchAddress("CSCPoint.fUniqueID", CSCPoint_fUniqueID, &b_CSCPoint_fUniqueID);
   fChain->SetBranchAddress("CSCPoint.fBits", CSCPoint_fBits, &b_CSCPoint_fBits);
   fChain->SetBranchAddress("CSCPoint.fLink", CSCPoint_fLink, &b_CSCPoint_fLink);
   fChain->SetBranchAddress("CSCPoint.fTrackID", CSCPoint_fTrackID, &b_CSCPoint_fTrackID);
   fChain->SetBranchAddress("CSCPoint.fEventId", CSCPoint_fEventId, &b_CSCPoint_fEventId);
   fChain->SetBranchAddress("CSCPoint.fPx", CSCPoint_fPx, &b_CSCPoint_fPx);
   fChain->SetBranchAddress("CSCPoint.fPy", CSCPoint_fPy, &b_CSCPoint_fPy);
   fChain->SetBranchAddress("CSCPoint.fPz", CSCPoint_fPz, &b_CSCPoint_fPz);
   fChain->SetBranchAddress("CSCPoint.fTime", CSCPoint_fTime, &b_CSCPoint_fTime);
   fChain->SetBranchAddress("CSCPoint.fLength", CSCPoint_fLength, &b_CSCPoint_fLength);
   fChain->SetBranchAddress("CSCPoint.fELoss", CSCPoint_fELoss, &b_CSCPoint_fELoss);
   fChain->SetBranchAddress("CSCPoint.fDetectorID", CSCPoint_fDetectorID, &b_CSCPoint_fDetectorID);
   fChain->SetBranchAddress("CSCPoint.fX", CSCPoint_fX, &b_CSCPoint_fX);
   fChain->SetBranchAddress("CSCPoint.fY", CSCPoint_fY, &b_CSCPoint_fY);
   fChain->SetBranchAddress("CSCPoint.fZ", CSCPoint_fZ, &b_CSCPoint_fZ);
   fChain->SetBranchAddress("CSCPoint.fIsPrimary", CSCPoint_fIsPrimary, &b_CSCPoint_fIsPrimary);
   fChain->SetBranchAddress("CSCPoint.fCharge", CSCPoint_fCharge, &b_CSCPoint_fCharge);
   fChain->SetBranchAddress("CSCPoint.fPdgId", CSCPoint_fPdgId, &b_CSCPoint_fPdgId);
   fChain->SetBranchAddress("CSCPoint.fX_out", CSCPoint_fX_out, &b_CSCPoint_fX_out);
   fChain->SetBranchAddress("CSCPoint.fY_out", CSCPoint_fY_out, &b_CSCPoint_fY_out);
   fChain->SetBranchAddress("CSCPoint.fZ_out", CSCPoint_fZ_out, &b_CSCPoint_fZ_out);
   fChain->SetBranchAddress("CSCPoint.fX_center", CSCPoint_fX_center, &b_CSCPoint_fX_center);
   fChain->SetBranchAddress("CSCPoint.fY_center", CSCPoint_fY_center, &b_CSCPoint_fY_center);
   fChain->SetBranchAddress("CSCPoint.fZ_center", CSCPoint_fZ_center, &b_CSCPoint_fZ_center);
   fChain->SetBranchAddress("CSCPoint.fPx_out", CSCPoint_fPx_out, &b_CSCPoint_fPx_out);
   fChain->SetBranchAddress("CSCPoint.fPy_out", CSCPoint_fPy_out, &b_CSCPoint_fPy_out);
   fChain->SetBranchAddress("CSCPoint.fPz_out", CSCPoint_fPz_out, &b_CSCPoint_fPz_out);
   fChain->SetBranchAddress("CSCPoint.fStation", CSCPoint_fStation, &b_CSCPoint_fStation);
   fChain->SetBranchAddress("CSCPoint.fModule", CSCPoint_fModule, &b_CSCPoint_fModule);
   fChain->SetBranchAddress("TOF400Point", &TOF400Point_, &b_bmnroot_0_TOF1_TOF400Point_);
   fChain->SetBranchAddress("TOF400Point.fUniqueID", TOF400Point_fUniqueID, &b_TOF400Point_fUniqueID);
   fChain->SetBranchAddress("TOF400Point.fBits", TOF400Point_fBits, &b_TOF400Point_fBits);
   fChain->SetBranchAddress("TOF400Point.fLink", TOF400Point_fLink, &b_TOF400Point_fLink);
   fChain->SetBranchAddress("TOF400Point.fTrackID", TOF400Point_fTrackID, &b_TOF400Point_fTrackID);
   fChain->SetBranchAddress("TOF400Point.fEventId", TOF400Point_fEventId, &b_TOF400Point_fEventId);
   fChain->SetBranchAddress("TOF400Point.fPx", TOF400Point_fPx, &b_TOF400Point_fPx);
   fChain->SetBranchAddress("TOF400Point.fPy", TOF400Point_fPy, &b_TOF400Point_fPy);
   fChain->SetBranchAddress("TOF400Point.fPz", TOF400Point_fPz, &b_TOF400Point_fPz);
   fChain->SetBranchAddress("TOF400Point.fTime", TOF400Point_fTime, &b_TOF400Point_fTime);
   fChain->SetBranchAddress("TOF400Point.fLength", TOF400Point_fLength, &b_TOF400Point_fLength);
   fChain->SetBranchAddress("TOF400Point.fELoss", TOF400Point_fELoss, &b_TOF400Point_fELoss);
   fChain->SetBranchAddress("TOF400Point.fDetectorID", TOF400Point_fDetectorID, &b_TOF400Point_fDetectorID);
   fChain->SetBranchAddress("TOF400Point.fX", TOF400Point_fX, &b_TOF400Point_fX);
   fChain->SetBranchAddress("TOF400Point.fY", TOF400Point_fY, &b_TOF400Point_fY);
   fChain->SetBranchAddress("TOF400Point.fZ", TOF400Point_fZ, &b_TOF400Point_fZ);
   // fChain->SetBranchAddress("MCEventHeader.", &MCEventHeader_, &b_bmnroot_0_Event_MCEventHeader_);
   // fChain->SetBranchAddress("MCEventHeader.TNamed.fUniqueID", &MCEventHeader_TNamed_fUniqueID, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_TNamed_fUniqueID);
   // fChain->SetBranchAddress("MCEventHeader.TNamed.fBits", &MCEventHeader_TNamed_fBits, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_TNamed_fBits);
   // fChain->SetBranchAddress("MCEventHeader.TNamed.fName", &MCEventHeader_TNamed_fName, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_TNamed_fName);
   // fChain->SetBranchAddress("MCEventHeader.TNamed.fTitle", &MCEventHeader_TNamed_fTitle, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_TNamed_fTitle);
   // fChain->SetBranchAddress("MCEventHeader.fRunId", &MCEventHeader_fRunId, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fRunId);
   // fChain->SetBranchAddress("MCEventHeader.fEventId", &MCEventHeader_fEventId, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fEventId);
   // fChain->SetBranchAddress("MCEventHeader.fX", &MCEventHeader_fX, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fX);
   // fChain->SetBranchAddress("MCEventHeader.fY", &MCEventHeader_fY, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fY);
   // fChain->SetBranchAddress("MCEventHeader.fZ", &MCEventHeader_fZ, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fZ);
   // fChain->SetBranchAddress("MCEventHeader.fT", &MCEventHeader_fT, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fT);
   // fChain->SetBranchAddress("MCEventHeader.fB", &MCEventHeader_fB, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fB);
   // fChain->SetBranchAddress("MCEventHeader.fNPrim", &MCEventHeader_fNPrim, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fNPrim);
   // fChain->SetBranchAddress("MCEventHeader.fIsSet", &MCEventHeader_fIsSet, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fIsSet);
   // fChain->SetBranchAddress("MCEventHeader.fRotX", &MCEventHeader_fRotX, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fRotX);
   // fChain->SetBranchAddress("MCEventHeader.fRotY", &MCEventHeader_fRotY, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fRotY);
   // fChain->SetBranchAddress("MCEventHeader.fRotZ", &MCEventHeader_fRotZ, &b_MCEventHeader_bmnroot_0_Event_MCEventHeader_fRotZ);
   // fChain->SetBranchAddress("GeoTracks", &GeoTracks_, &b_bmnroot_0_MCGeoTrack_GeoTracks_);
   // fChain->SetBranchAddress("GeoTracks.fUniqueID", GeoTracks_fUniqueID, &b_GeoTracks_fUniqueID);
   // fChain->SetBranchAddress("GeoTracks.fBits", GeoTracks_fBits, &b_GeoTracks_fBits);
   // fChain->SetBranchAddress("GeoTracks.fGeoAtt", GeoTracks_fGeoAtt, &b_GeoTracks_fGeoAtt);
   // fChain->SetBranchAddress("GeoTracks.fLineColor", GeoTracks_fLineColor, &b_GeoTracks_fLineColor);
   // fChain->SetBranchAddress("GeoTracks.fLineStyle", GeoTracks_fLineStyle, &b_GeoTracks_fLineStyle);
   // fChain->SetBranchAddress("GeoTracks.fLineWidth", GeoTracks_fLineWidth, &b_GeoTracks_fLineWidth);
   // fChain->SetBranchAddress("GeoTracks.fMarkerColor", GeoTracks_fMarkerColor, &b_GeoTracks_fMarkerColor);
   // fChain->SetBranchAddress("GeoTracks.fMarkerStyle", GeoTracks_fMarkerStyle, &b_GeoTracks_fMarkerStyle);
   // fChain->SetBranchAddress("GeoTracks.fMarkerSize", GeoTracks_fMarkerSize, &b_GeoTracks_fMarkerSize);
   // fChain->SetBranchAddress("GeoTracks.fPDG", GeoTracks_fPDG, &b_GeoTracks_fPDG);
   // fChain->SetBranchAddress("GeoTracks.fId", GeoTracks_fId, &b_GeoTracks_fId);
   // fChain->SetBranchAddress("GeoTracks.fPointsSize", GeoTracks_fPointsSize, &b_GeoTracks_fPointsSize);
   // fChain->SetBranchAddress("GeoTracks.fNpoints", GeoTracks_fNpoints, &b_GeoTracks_fNpoints);
   // fChain->SetBranchAddress("GeoTracks.fPoints", GeoTracks_fPoints, &b_GeoTracks_fPoints);
   Notify();
}

Bool_t Read_srcsim_v1p2_50Mio::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Read_srcsim_v1p2_50Mio::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Read_srcsim_v1p2_50Mio::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Read_srcsim_v1p2_50Mio_cxx
