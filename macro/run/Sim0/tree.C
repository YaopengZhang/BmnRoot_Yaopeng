#define tree_cxx
#include "tree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <TRandom.h>

using namespace std;

void tree::Loop()
{
//   In a ROOT session, you can do:
//      root> .L tree.C
//      root> tree t
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
   fChain->SetBranchStatus("P1x",1);  // activate branchname
   fChain->SetBranchStatus("P1y",1);  // activate branchname
   fChain->SetBranchStatus("P1z",1);  // activate branchname
   fChain->SetBranchStatus("P2x",1);  // activate branchname
   fChain->SetBranchStatus("P2y",1);  // activate branchname
   fChain->SetBranchStatus("P2z",1);  // activate branchname
   fChain->SetBranchStatus("PBx",1);  // activate branchname
   fChain->SetBranchStatus("PBy",1);  // activate branchname
   fChain->SetBranchStatus("PBz_lab",1);  // activate branchname
   fChain->SetBranchStatus("PBz_rf",1);  // activate branchname
   fChain->SetBranchStatus("E1",1);  // activate branchname
   fChain->SetBranchStatus("E2",1);  // activate branchname
   // fChain->SetBranchStatus("EB",1);  // activate branchname

   fChain->SetBranchStatus("theta_1",1);  // activate branchname
   fChain->SetBranchStatus("theta_2",1);  // activate branchname
   fChain->SetBranchStatus("theta_B",1);  // activate branchname
   fChain->SetBranchStatus("phi_1",1);  // activate branchname
   fChain->SetBranchStatus("phi_2",1);  // activate branchname
   fChain->SetBranchStatus("phi_B",1);  // activate branchname

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;
   Int_t Multiplicity = 2, PDG_code = 2212;
   Double_t vertex_x, vertex_y, vertex_z; // cm

   TFile *f = new TFile("./vertex.root","RECREATE"); // "UPDATE"
   TTree *tree_vertex = new TTree("vertex","data");
   tree_vertex->Branch("vertex_x",&vertex_x,"vertex_x/D");
   tree_vertex->Branch("vertex_y",&vertex_y,"vertex_y/D");
   tree_vertex->Branch("vertex_z",&vertex_z,"vertex_z/D");

   ofstream OUT("Generator_input.txt"); // Generate the input file for FairAsciiGenerator
   // ofstream OUT("Generator_input_detailed.txt");

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
   // for (Long64_t jentry=0; jentry<10;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      // cout<<(P1x+P2x+PBx)/1000.<<"\t"<<(P1y+P2y+PBy)/1000.<<"\t"<<(P1z+P2z+PBz_lab)/1000.<<endl;

      // random vertex

      
      vertex_x = gRandom->Gaus(0.812529,1.34449);        // cm
      vertex_y = gRandom->Gaus(0.0909585,0.848839);      // cm
      vertex_z = gRandom->Uniform(-576.2-15,-576.2+15);  // cm

      //-------------------------------Generator_input.txt-----------------------------------
      OUT<<Multiplicity<<"\t"<<jentry<<"\t"<<vertex_x<<"\t"<<vertex_y<<"\t"<<vertex_z<<"\n";
      OUT<<PDG_code<<"\t"<<P1x/1000.<<"\t"<<P1y/1000.<<"\t"<<P1z/1000.<<"\n";
      OUT<<PDG_code<<"\t"<<P2x/1000.<<"\t"<<P2y/1000.<<"\t"<<P2z/1000.<<"\n";
      //-------------------------------Generator_input.txt-----------------------------------

      //---------------------------Generator_input_detailed.txt------------------------------
      // OUT<<jentry<<"\t"<<vertex_x<<"\t"<<vertex_y<<"\t"<<vertex_z<<"\n";
      // OUT<<"Proton1:"<<"\t"<<P1x/1000.<<"\t"<<P1y/1000.<<"\t"<<P1z/1000.<<"\n";
      // OUT<<"Proton2:"<<"\t"<<P2x/1000.<<"\t"<<P2y/1000.<<"\t"<<P2z/1000.<<"\n";
      // double P1, P2, beta1, beta2, gamma1, gamma2;
      // P1 = sqrt(pow(P1x,2)+pow(P1y,2)+pow(P1z,2));
      // P2 = sqrt(pow(P2x,2)+pow(P2y,2)+pow(P2z,2));
      // beta1 = P1/E1;
      // beta2 = P2/E2;
      // gamma1 = 1./sqrt(1+pow(P1/E1,2));
      // gamma2 = 1./sqrt(1+pow(P2/E2,2));
      // OUT<<"P1 & P2:"<<"\t"<<P1/1000.<<"\t"<<P2/1000.<<"\n";
      // OUT<<"E1 & E2:"<<"\t"<<E1/1000.<<"\t"<<E2/1000.<<"\n";
      // // OUT<<"Beta   :"<<"\t"<<beta1<<"\t"<<beta2<<"\n";
      // // OUT<<"Beta_  :"<<"\t"<<sqrt(pow(938./E1,2)-1.)<<"\t"<<sqrt(pow(938./E2,2)-1.)<<"\n";
      // OUT<<"B      :"<<"\t"<<PBx/1000.<<"\t"<<PBy/1000.<<"\t"<<PBz_lab/1000.<<"\t"<<PBz_rf/1000.<<"\n";
      // OUT<<"C      :"<<"\t"<<(P1x+P2x+PBx)/1000.<<"\t"<<(P1y+P2y+PBy)/1000.<<"\t"<<(P1z+P2z+PBz_lab)/1000.<<"\n";
      // OUT<<"X-Z  plane:"<<"\t"<<TMath::ATan(P1x/P1z)/3.1415926535*180<<"\t"<<TMath::ATan(P2x/P2z)/3.1415926535*180<<"\n";
      // OUT<<"Y-XZ plane:"<<"\t"<<TMath::ATan(P1y/sqrt(pow(P1x,2)+pow(P1z,2)))/3.1415926535*180<<"\t"<<TMath::ATan(P2y/sqrt(pow(P2x,2)+pow(P2z,2)))/3.1415926535*180<<"\n";
      // OUT<<"\n";


      // OUT<<jentry<<"\t"<<vertex_x<<"\t"<<vertex_y<<"\t"<<vertex_z<<"\n";
      // OUT<<theta_1/3.1415926535*180<<"\t"<<theta_2/3.1415926535*180<<"\t"<<theta_B/3.1415926535*180<<"\n";
      // OUT<<phi_1/3.1415926535*180<<"\t"<<phi_2/3.1415926535*180<<"\t"<<phi_B/3.1415926535*180<<"\n";
      // // theta
      // OUT<<TMath::ATan(sqrt(pow(P1x,2)+pow(P1y,2))/P1z)/3.1415926535*180<<"\t";
      // OUT<<TMath::ATan(sqrt(pow(P2x,2)+pow(P2y,2))/P2z)/3.1415926535*180<<"\n";
      // //phi
      // if(P1y>0&&P1x>0){
      //    OUT<<TMath::ATan(P1y/P1x)/3.1415926535*180<<"\t";
      //    cout<<phi_1/3.1415926535*180-TMath::ATan(P1y/P1x)/3.1415926535*180<<"\t";
      // }
      // if(P1y>0&&P1x<0){
      //    OUT<<180-TMath::ATan(-P1y/P1x)/3.1415926535*180<<"\t";
      //    cout<<phi_1/3.1415926535*180-(180-TMath::ATan(-P1y/P1x)/3.1415926535*180)<<"\t";
      // }
      // if(P1y<0&&P1x>0){
      //    OUT<<-TMath::ATan(-P1y/P1x)/3.1415926535*180<<"\t";
      //    cout<<phi_1/3.1415926535*180-(-TMath::ATan(-P1y/P1x)/3.1415926535*180)<<"\t";
      // }
      // if(P1y<0&&P1x<0){
      //    OUT<<TMath::ATan(P1y/P1x)/3.1415926535*180-180<<"\t";
      //    cout<<phi_1/3.1415926535*180-(TMath::ATan(P1y/P1x)/3.1415926535*180-180)<<"\t";
      // }

      // if(P2y>0&&P2x>0){
      //    OUT<<TMath::ATan(P2y/P2x)/3.1415926535*180<<"\n";
      //    cout<<phi_2/3.1415926535*180-TMath::ATan(P2y/P2x)/3.1415926535*180<<"\n";
      // }
      // if(P2y>0&&P2x<0){
      //    OUT<<180-TMath::ATan(-P2y/P2x)/3.1415926535*180<<"\n";
      //    cout<<phi_2/3.1415926535*180-(180-TMath::ATan(-P2y/P2x)/3.1415926535*180)<<"\n";
      // }
      // if(P2y<0&&P2x>0){
      //    OUT<<-TMath::ATan(-P2y/P2x)/3.1415926535*180<<"\n";
      //    cout<<phi_2/3.1415926535*180-(-TMath::ATan(-P2y/P2x)/3.1415926535*180)<<"\n";
      // }
      // if(P2y<0&&P2x<0){
      //    OUT<<TMath::ATan(P2y/P2x)/3.1415926535*180-180<<"\n";
      //    cout<<phi_2/3.1415926535*180-(TMath::ATan(P2y/P2x)/3.1415926535*180-180)<<"\n";
      // }

      // OUT<<"\n";
      //---------------------------Generator_input_detailed.txt------------------------------

      tree_vertex->Fill();
   }
   OUT.close();
   
   f->cd();
   tree_vertex->Write();
   f->Close();
}
