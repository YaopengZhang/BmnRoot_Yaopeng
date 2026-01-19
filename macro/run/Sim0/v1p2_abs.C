#define v1p2_abs_cxx
#include "v1p2_abs.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void v1p2_abs::Loop()
{
//   In a ROOT session, you can do:
//      root> .L v1p2_abs.C
//      root> v1p2_abs t
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
   fChain->SetBranchStatus("p3",1);
   fChain->SetBranchStatus("p4",1);
   fChain->SetBranchStatus("weight",1);

   // fChain->SetBranchStatus("pAm2",1);
   // fChain->SetBranchStatus("lead_type",1);
   // fChain->SetBranchStatus("pRel_Mag",1);
   // fChain->SetBranchStatus("s",1);
   // fChain->SetBranchStatus("t",1);
   // fChain->SetBranchStatus("u",1);
   // fChain->SetBranchStatus("theta_cm",1);
   // fChain->SetBranchStatus("lcweight",1);

   // Int_t           lead_type;
   // Int_t           rec_type;
   // Double_t        p3[3];
   // Double_t        p4[3];
   // Double_t        pRec[3];
   // Double_t        pAm2[3];
   // Double_t        pRel_Mag;
   // Double_t        s;
   // Double_t        t;
   // Double_t        u;
   // Double_t        theta_cm;
   // Double_t        weight;
   // Double_t        lcweight;

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;
   Int_t Multiplicity = 2, PDG_code = 2212; // 2212 proton; 2112 neutron
   Double_t vertex_x, vertex_y, vertex_z; // cm
   Double_t Weight;

   TFile *f = new TFile("./vertex_v1p2_abs.root","RECREATE"); // "UPDATE"
   TTree *tree_vertex = new TTree("vertex","data");
   tree_vertex->Branch("vertex_x",&vertex_x,"vertex_x/D");
   tree_vertex->Branch("vertex_y",&vertex_y,"vertex_y/D");
   tree_vertex->Branch("vertex_z",&vertex_z,"vertex_z/D");
   tree_vertex->Branch("Weight",&Weight,"Weight/D");

   ofstream OUT("Generator_input_v1p2_abs.txt"); // Generate the input file for FairAsciiGenerator
   // ofstream OUT("Generator_input_detailed.txt");

   // for (Long64_t jentry=0; jentry<nentries;jentry++) {
   for (Long64_t jentry=0; jentry<1340000;jentry++) {
   // for (Long64_t jentry=0; jentry<10;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      // random vertex
      vertex_x = gRandom->Gaus(0.812529,1.34449);        // cm
      vertex_y = gRandom->Gaus(0.0909585,0.848839);      // cm
      vertex_z = gRandom->Uniform(-576.2-15,-576.2+15);  // cm
      Weight = weight;

      //-------------------------------Generator_input.txt-----------------------------------
      OUT<<Multiplicity<<"\t"<<jentry<<"\t"<<vertex_x<<"\t"<<vertex_y<<"\t"<<vertex_z<<"\n";
      OUT<<PDG_code<<"\t"<<p3[0]<<"\t"<<p3[1]<<"\t"<<p3[2]<<"\n";
      OUT<<PDG_code<<"\t"<<p4[0]<<"\t"<<p4[1]<<"\t"<<p4[2]<<"\n";
      //-------------------------------Generator_input.txt-----------------------------------

      tree_vertex->Fill();
   }
   OUT.close();
   
   f->cd();
   tree_vertex->Write();
   f->Close();
}
