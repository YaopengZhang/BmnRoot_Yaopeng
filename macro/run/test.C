#define test_cxx
#include "test.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void test::Loop()
{
//   In a ROOT session, you can do:
//      root> .L test.C
//      root> test t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

   fChain->SetBranchStatus("*",0);  // disable all branches
   fChain->SetBranchStatus("StsPoint.fPx",1);  // activate branchname
   fChain->SetBranchStatus("StsPoint.fPy",1);  // activate branchname
   fChain->SetBranchStatus("StsPoint.fPz",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fPx",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fPy",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fPz",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fX",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fY",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fZ",1);  // activate branchname

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TH1F *hPx = new TH1F("hPx","CSC Px Distribution",1000,0.88,0.92);
   hPx->SetXTitle("Px / GeV");
   hPx->GetXaxis()->SetNdivisions(10,kTRUE);
	hPx->GetXaxis()->CenterTitle(1);
	hPx->GetXaxis()->SetTitleFont(32);
   hPx->GetXaxis()->SetTitleSize(0.06);
	hPx->GetXaxis()->SetTitleOffset(0.7);
   hPx->SetYTitle("Counts");
	hPx->GetYaxis()->CenterTitle(1);
	hPx->GetYaxis()->SetTitleFont(32);
   hPx->GetYaxis()->SetTitleSize(0.04);

   TH1F *hpy = new TH1F("hpy","CSC Py Distribution",1000,-0.02,0.02);
   hpy->SetXTitle("Py / GeV");
   hpy->GetXaxis()->SetNdivisions(10,kTRUE);
	hpy->GetXaxis()->CenterTitle(1);
	hpy->GetXaxis()->SetTitleFont(32);
   hpy->GetXaxis()->SetTitleSize(0.06);
	hpy->GetXaxis()->SetTitleOffset(0.7);
   hpy->SetYTitle("Counts");
	hpy->GetYaxis()->CenterTitle(1);
	hpy->GetYaxis()->SetTitleFont(32);
   hpy->GetYaxis()->SetTitleSize(0.04);

   TH1F *hPz = new TH1F("hPz","CSC Pz Distribution",1000,2.36,2.38);
   hPz->SetXTitle("Pz / GeV");
   hPz->GetXaxis()->SetNdivisions(10,kTRUE);
	hPz->GetXaxis()->CenterTitle(1);
	hPz->GetXaxis()->SetTitleFont(32);
   hPz->GetXaxis()->SetTitleSize(0.06);
	hPz->GetXaxis()->SetTitleOffset(0.7);
   hPz->SetYTitle("Counts");
	hPz->GetYaxis()->CenterTitle(1);
	hPz->GetYaxis()->SetTitleFont(32);
   hPz->GetYaxis()->SetTitleSize(0.04);

   TH1F *hX = new TH1F("hX","CSC X Distribution",1000,68.26,68.28);
   hX->SetXTitle("X / cm");
   hX->GetXaxis()->SetNdivisions(10,kTRUE);
	hX->GetXaxis()->CenterTitle(1);
	hX->GetXaxis()->SetTitleFont(32);
   hX->GetXaxis()->SetTitleSize(0.06);
	hX->GetXaxis()->SetTitleOffset(0.7);
   hX->SetYTitle("Counts");
	hX->GetYaxis()->CenterTitle(1);
	hX->GetYaxis()->SetTitleFont(32);
   hX->GetYaxis()->SetTitleSize(0.04);

   TH1F *hY = new TH1F("hY","CSC Y Distribution",1000,-0.01,0.01);
   hY->SetXTitle("Y / cm");
   hY->GetXaxis()->SetNdivisions(10,kTRUE);
	hY->GetXaxis()->CenterTitle(1);
	hY->GetXaxis()->SetTitleFont(32);
   hY->GetXaxis()->SetTitleSize(0.06);
	hY->GetXaxis()->SetTitleOffset(0.7);
   hY->SetYTitle("Counts");
	hY->GetYaxis()->CenterTitle(1);
	hY->GetYaxis()->SetTitleFont(32);
   hY->GetYaxis()->SetTitleSize(0.04);

   TH1F *hZ = new TH1F("hZ","CSC Z Distribution",200,-396.426,-396.42);
   hZ->SetXTitle("Z / cm");
   hZ->GetXaxis()->SetNdivisions(6,kTRUE);
	hZ->GetXaxis()->CenterTitle(1);
	hZ->GetXaxis()->SetTitleFont(32);
   hZ->GetXaxis()->SetTitleSize(0.06);
	hZ->GetXaxis()->SetTitleOffset(0.7);
   hZ->SetYTitle("Counts");
	hZ->GetYaxis()->CenterTitle(1);
	hZ->GetYaxis()->SetTitleFont(32);
   hZ->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_sts_py = new TH1F("h_sts_py","GEM Py Distribution",1000,-0.02,0.02);
   h_sts_py->SetXTitle("Py / GeV");
   h_sts_py->GetXaxis()->SetNdivisions(6,kTRUE);
	h_sts_py->GetXaxis()->CenterTitle(1);
	h_sts_py->GetXaxis()->SetTitleFont(32);
   h_sts_py->GetXaxis()->SetTitleSize(0.06);
	h_sts_py->GetXaxis()->SetTitleOffset(0.7);
   h_sts_py->SetYTitle("Counts");
	h_sts_py->GetYaxis()->CenterTitle(1);
	h_sts_py->GetYaxis()->SetTitleFont(32);
   h_sts_py->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_sts_px = new TH1F("h_sts_px","GEM Px Distribution",1000,0.8,0.9);
   h_sts_px->SetXTitle("Px / GeV");
   h_sts_px->GetXaxis()->SetNdivisions(6,kTRUE);
	h_sts_px->GetXaxis()->CenterTitle(1);
	h_sts_px->GetXaxis()->SetTitleFont(32);
   h_sts_px->GetXaxis()->SetTitleSize(0.06);
	h_sts_px->GetXaxis()->SetTitleOffset(0.7);
   h_sts_px->SetYTitle("Counts");
	h_sts_px->GetYaxis()->CenterTitle(1);
	h_sts_px->GetYaxis()->SetTitleFont(32);
   h_sts_px->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_sts_pz = new TH1F("h_sts_pz","GEM Pz Distribution",1000,2.36,2.38);
   h_sts_pz->SetXTitle("Pz / GeV");
   h_sts_pz->GetXaxis()->SetNdivisions(6,kTRUE);
	h_sts_pz->GetXaxis()->CenterTitle(1);
	h_sts_pz->GetXaxis()->SetTitleFont(32);
   h_sts_pz->GetXaxis()->SetTitleSize(0.06);
	h_sts_pz->GetXaxis()->SetTitleOffset(0.7);
   h_sts_pz->SetYTitle("Counts");
	h_sts_pz->GetYaxis()->CenterTitle(1);
	h_sts_pz->GetYaxis()->SetTitleFont(32);
   h_sts_pz->GetYaxis()->SetTitleSize(0.04);

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      cout<<jentry<<"\t"<<StsPoint_fPx[0]<<"\t"<<StsPoint_fPy[0]<<"\t"<<StsPoint_fPz[0]<<endl;
      cout<<"\t"<<CSCPoint_fPx[0]<<"\t"<<CSCPoint_fPy[0]<<"\t"<<CSCPoint_fPz[0]<<endl;
      // cout<<"\t"<<TOF400Point_fPx[0]<<"\t"<<TOF400Point_fPy[0]<<"\t"<<TOF400Point_fPz[0]<<"\n"<<endl;
      cout<<endl;

      hPx->Fill(CSCPoint_fPx[0]);
      hpy->Fill(CSCPoint_fPy[0]);
      hPz->Fill(CSCPoint_fPz[0]);
      hX->Fill(CSCPoint_fX[0]);
      hY->Fill(CSCPoint_fY[0]);
      hZ->Fill(CSCPoint_fZ[0]);
      h_sts_py->Fill(StsPoint_fPy[0]);
      h_sts_px->Fill(StsPoint_fPx[0]);
      h_sts_pz->Fill(StsPoint_fPz[0]);

      // memset(,0,sizeof());
      memset(StsPoint_fPx,0,sizeof(StsPoint_fPx));
      memset(StsPoint_fPy,0,sizeof(StsPoint_fPy));
      memset(StsPoint_fPz,0,sizeof(StsPoint_fPz));
      memset(CSCPoint_fPx,0,sizeof(CSCPoint_fPx));
      memset(CSCPoint_fPy,0,sizeof(CSCPoint_fPy));
      memset(CSCPoint_fPz,0,sizeof(CSCPoint_fPz));
      // memset(TOF400Point_fPx,0,sizeof(TOF400Point_fPx));
      // memset(TOF400Point_fPy,0,sizeof(TOF400Point_fPy));
      // memset(TOF400Point_fPz,0,sizeof(TOF400Point_fPz));

      
   }
   TCanvas *cPx = new TCanvas("c1","c1",1200,800);
   hPx->Draw(); 
   cPx->Print("./test_plots/Px.pdf");

   TCanvas *cpy = new TCanvas("c2","c2",1200,800);
   hpy->Draw(); 
   cpy->Print("./test_plots/Py.pdf");

   TCanvas *cPz = new TCanvas("c3","c3",1200,800);
   hPz->Draw(); 
   cPz->Print("./test_plots/Pz.pdf");

   TCanvas *cX = new TCanvas("c4","c4",1200,800);
   hX->Draw(); 
   cX->Print("./test_plots/X.pdf");

   TCanvas *cY = new TCanvas("c5","c5",1200,800);
   hY->Draw(); 
   cY->Print("./test_plots/Y.pdf");

   TCanvas *cZ = new TCanvas("c6","c6",1200,800);
   hZ->Draw(); 
   cZ->Print("./test_plots/Z.pdf");

   TCanvas *c_sts_py = new TCanvas("c7","c7",1200,800);
   h_sts_py->Draw();
   c_sts_py->Print("./test_plots/sts_py.pdf");

   TCanvas *c_sts_px = new TCanvas("c8","c8",1200,800);
   h_sts_px->Draw();
   c_sts_px->Print("./test_plots/sts_px.pdf");

   TCanvas *c_sts_pz = new TCanvas("c9","c9",1200,800);
   h_sts_pz->Draw();
   c_sts_pz->Print("./test_plots/sts_pz.pdf");
}
