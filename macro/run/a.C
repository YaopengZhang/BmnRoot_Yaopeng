#define Read_srcsim_cxx
#include "Read_srcsim.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <TLorentzRotation.h>
#include <TRandom.h>

void Read_srcsim::Loop()
{
//   In a ROOT session, you can do:
//      root> .L Read_srcsim.C
//      root> Read_srcsim t
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
   fChain->SetBranchStatus("CSCPoint.fPdgId",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fTrackID",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fStation",1);  // activate branchname

   fChain->SetBranchStatus("TOF400*",1);  // activate branchname
   // fChain->SetBranchStatus("TOF400Point.fPx",1);  // activate branchname
   // fChain->SetBranchStatus("TOF400Point.fPy",1);  // activate branchname
   // fChain->SetBranchStatus("TOF400Point.fPz",1);  // activate branchname

   // memset(MCTrack_fPz,0,sizeof(MCTrack_fPz));

   memset(StsPoint_fPx,0,sizeof(StsPoint_fPx));
   memset(StsPoint_fPy,0,sizeof(StsPoint_fPy));
   memset(StsPoint_fPz,0,sizeof(StsPoint_fPz));

   memset(CSCPoint_fPx,0,sizeof(CSCPoint_fPx));
   memset(CSCPoint_fPy,0,sizeof(CSCPoint_fPy));
   memset(CSCPoint_fPz,0,sizeof(CSCPoint_fPz));
   memset(CSCPoint_fPdgId,-1,sizeof(CSCPoint_fPdgId));
   memset(CSCPoint_fTrackID,-1,sizeof(CSCPoint_fTrackID));
   memset(CSCPoint_fStation,-1,sizeof(CSCPoint_fStation));

   memset(TOF400Point_fPx,0,sizeof(TOF400Point_fPx));
   memset(TOF400Point_fPy,0,sizeof(TOF400Point_fPy));
   memset(TOF400Point_fPz,0,sizeof(TOF400Point_fPz));
   memset(TOF400Point_fX,0,sizeof(TOF400Point_fX));
   memset(TOF400Point_fY,0,sizeof(TOF400Point_fY));
   memset(TOF400Point_fZ,0,sizeof(TOF400Point_fZ));
   memset(TOF400Point_fTrackID,-1,sizeof(TOF400Point_fTrackID));
   memset(TOF400Point_fTime,0,sizeof(TOF400Point_fTime));
   memset(TOF400Point_fLength,0,sizeof(TOF400Point_fLength));
   memset(TOF400Point_fDetectorID,0,sizeof(TOF400Point_fDetectorID));

   // Open Generator input file in root type
   TChain ch("tree");
   ch.Add("qfs_yaopeng_2.root");
   Double_t P1x, P1y, P1z, P2x, P2y, P2z;
   ch.SetBranchAddress("P1x",&P1x);
   ch.SetBranchAddress("P1y",&P1y);
   ch.SetBranchAddress("P1z",&P1z);
   ch.SetBranchAddress("P2x",&P2x);
   ch.SetBranchAddress("P2y",&P2y);
   ch.SetBranchAddress("P2z",&P2z);

   TChain ch_vertex("vertex");
   ch_vertex.Add("vertex.root");
   Double_t vertex_x, vertex_y, vertex_z;
   ch_vertex.SetBranchAddress("vertex_x",&vertex_x);
   ch_vertex.SetBranchAddress("vertex_y",&vertex_y);
   ch_vertex.SetBranchAddress("vertex_z",&vertex_z);
   // ch.GetEntry(76);
   // cout<<"Proton1:"<<"\t"<<P1x/1000.<<"\t"<<P1y/1000.<<"\t"<<P1z/1000.<<"\n";
   // cout<<"Proton2:"<<"\t"<<P2x/1000.<<"\t"<<P2y/1000.<<"\t"<<P2z/1000.<<"\n";
   
   if (fChain == 0) return;

   // From Julian's email(2023/08/22): This are the mass values as used for the generator:
   // const double MA  = 11.174950; // Nuclear mass of initial A nucleus
   // const double MB  = 10.252628; // Nuclear mass of the residual fragment B
   // const double Ma  = 0.938279;  // Mass of the knocked-out nucleon 
   // const double Mi  = 0.938279;  // Mass of the scattered nucleon

   double px_left, py_left, pz_left, px_right, py_right, pz_right;
   double x_left, y_left, z_left, x_right, y_right, z_right;
   double px_left_initial, py_left_initial, pz_left_initial, px_right_initial, py_right_initial, pz_right_initial;
   double p_left, p_right,  p_left_initial, p_right_initial;
   double beta_left, beta_right, beta_left_initial, beta_right_initial;
   double Eloss_left, Eloss_right;
   // double m_p = 0.938272; // proton mass in GeV/c^2
   // double m_12C = 12.*0.93149432; // 12C mass in GeV/c^2
   double m_p = 0.938279; // proton mass in GeV/c^2
   double m_12C = 11.174950; // 12C mass in GeV/c^2
   double P_12C = 44.9672;// GeV/c
   // double P_12C = 46;// GeV/c
   double beta_12C = P_12C/m_12C/sqrt(1.+pow(P_12C/m_12C,2));
   int Flag_left, Flag_right;
   double LOF_x_left, LOF_y_left, LOF_z_left, LOF_left, TOF_left;
   double LOF_x_right, LOF_y_right, LOF_z_right, LOF_right, TOF_right;
   double vx_left, vy_left, vz_left, v_left, vx_right, vy_right, vz_right, v_right;
   double Beta_left, Beta_right, Gamma_left, Gamma_right, E_left, E_right;
   double Px_left, Py_left, Pz_left, P_left, Px_right, Py_right, Pz_right, P_right;
   double P_miss_x, P_miss_y, P_miss_z, P_miss_E, P_miss, E_miss, M_miss;
   double theta1, theta2, phi1, phi2;
   int UseUndisturbedMomentum = 1;//////////////////////////////////////////////////////////
   TLorentzVector P4_left_initial, P4_right_initial, P4_left_transformed, P4_right_transformed;
   TLorentzVector P4_proton_initial, P4_proton_transformed;
   TLorentzRotation boost;
   boost.Boost(0,0,-beta_12C);

   P4_proton_initial.SetPxPyPzE(0,0,0,m_p);
   P4_proton_transformed = boost *P4_proton_initial;
   // TLorentzVector Pbeam0, Pmiss;
   // Pbeam0.SetPxPyPzE(0.,0.,P_12C,sqrt(pow(P_12C,2)+pow(m_12C,2)));

   // ---------------PLOT reconstruction momentum of protons----------------
   TH1F *h_p1x = new TH1F("p1x","P1_{ x} in ^{12}C reference system",100,-1,3);
   h_p1x->SetXTitle("P1_{x} / GeV");
   // h_p1x->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1x->GetXaxis()->CenterTitle(1);
	h_p1x->GetXaxis()->SetTitleFont(32);
   h_p1x->GetXaxis()->SetTitleSize(0.06);
	h_p1x->GetXaxis()->SetTitleOffset(0.7);
   h_p1x->SetYTitle("Counts");
	h_p1x->GetYaxis()->CenterTitle(1);
	h_p1x->GetYaxis()->SetTitleFont(32);
   h_p1x->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1y = new TH1F("p1y","P1_{ y} in ^{12}C reference system",100,-2,2);
   h_p1y->SetXTitle("P1_{y} / GeV");
   // h_p1y->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1y->GetXaxis()->CenterTitle(1);
	h_p1y->GetXaxis()->SetTitleFont(32);
   h_p1y->GetXaxis()->SetTitleSize(0.06);
	h_p1y->GetXaxis()->SetTitleOffset(0.7);
   h_p1y->SetYTitle("Counts");
	h_p1y->GetYaxis()->CenterTitle(1);
	h_p1y->GetYaxis()->SetTitleFont(32);
   h_p1y->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1z = new TH1F("p1z","P1_{ z} in ^{12}C reference system",100,-4,0);
   h_p1z->SetXTitle("P1_{z} / GeV");
   // h_p1z->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1z->GetXaxis()->CenterTitle(1);
	h_p1z->GetXaxis()->SetTitleFont(32);
   h_p1z->GetXaxis()->SetTitleSize(0.06);
	h_p1z->GetXaxis()->SetTitleOffset(0.7);
   h_p1z->SetYTitle("Counts");
	h_p1z->GetYaxis()->CenterTitle(1);
	h_p1z->GetYaxis()->SetTitleFont(32);
   h_p1z->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_E1 = new TH1F("E1","E1 in ^{12}C reference system",100,0,4);
   h_E1->SetXTitle("E1 / GeV");
   // h_E1->GetXaxis()->SetNdivisions(10,kTRUE);
	h_E1->GetXaxis()->CenterTitle(1);
	h_E1->GetXaxis()->SetTitleFont(32);
   h_E1->GetXaxis()->SetTitleSize(0.06);
	h_E1->GetXaxis()->SetTitleOffset(0.7);
   h_E1->SetYTitle("Counts");
	h_E1->GetYaxis()->CenterTitle(1);
	h_E1->GetYaxis()->SetTitleFont(32);
   h_E1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2x = new TH1F("p2x","P2_{ x} in ^{12}C reference system",100,-3,1);
   h_p2x->SetXTitle("P2_{x} / GeV");
   // h_p2x->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p2x->GetXaxis()->CenterTitle(1);
	h_p2x->GetXaxis()->SetTitleFont(32);
   h_p2x->GetXaxis()->SetTitleSize(0.06);
	h_p2x->GetXaxis()->SetTitleOffset(0.7);
   h_p2x->SetYTitle("Counts");
	h_p2x->GetYaxis()->CenterTitle(1);
	h_p2x->GetYaxis()->SetTitleFont(32);
   h_p2x->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2y = new TH1F("p2y","P2_{ y} in ^{12}C reference system",100,-2,2);
   h_p2y->SetXTitle("P2_{y} / GeV");
   // p2y->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p2y->GetXaxis()->CenterTitle(1);
	h_p2y->GetXaxis()->SetTitleFont(32);
   h_p2y->GetXaxis()->SetTitleSize(0.06);
	h_p2y->GetXaxis()->SetTitleOffset(0.7);
   h_p2y->SetYTitle("Counts");
	h_p2y->GetYaxis()->CenterTitle(1);
	h_p2y->GetYaxis()->SetTitleFont(32);
   h_p2y->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2z = new TH1F("p2z","P2_{ z} in ^{12}C reference system",100,-4,0);
   h_p2z->SetXTitle("P2_{z} / GeV");
   // h_p2z->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p2z->GetXaxis()->CenterTitle(1);
	h_p2z->GetXaxis()->SetTitleFont(32);
   h_p2z->GetXaxis()->SetTitleSize(0.06);
	h_p2z->GetXaxis()->SetTitleOffset(0.7);
   h_p2z->SetYTitle("Counts");
	h_p2z->GetYaxis()->CenterTitle(1);
	h_p2z->GetYaxis()->SetTitleFont(32);
   h_p2z->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_E2 = new TH1F("E2","E2 in ^{12}C reference system",100,0,4);
   h_E2->SetXTitle("E2 / GeV");
   // h_E2->GetXaxis()->SetNdivisions(10,kTRUE);
	h_E2->GetXaxis()->CenterTitle(1);
	h_E2->GetXaxis()->SetTitleFont(32);
   h_E2->GetXaxis()->SetTitleSize(0.06);
	h_E2->GetXaxis()->SetTitleOffset(0.7);
   h_E2->SetYTitle("Counts");
	h_E2->GetYaxis()->CenterTitle(1);
	h_E2->GetYaxis()->SetTitleFont(32);
   h_E2->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1xp2x = new TH1F("p_miss_x","Pmiss_{ x} in ^{12}C reference system",100,-1,1);
   h_p1xp2x->SetXTitle("Pmiss_{ x} / GeV");
   // h_p1xp2x->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1xp2x->GetXaxis()->CenterTitle(1);
	h_p1xp2x->GetXaxis()->SetTitleFont(32);
   h_p1xp2x->GetXaxis()->SetTitleSize(0.06);
	h_p1xp2x->GetXaxis()->SetTitleOffset(0.7);
   h_p1xp2x->SetYTitle("Counts");
	h_p1xp2x->GetYaxis()->CenterTitle(1);
	h_p1xp2x->GetYaxis()->SetTitleFont(32);
   h_p1xp2x->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1yp2y = new TH1F("p_miss_y","Pmiss_{ y}  in ^{12}C reference system",100,-1,1);
   h_p1yp2y->SetXTitle("Pmiss_{ y} / GeV");
   // h_p1yp2y->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1yp2y->GetXaxis()->CenterTitle(1);
	h_p1yp2y->GetXaxis()->SetTitleFont(32);
   h_p1yp2y->GetXaxis()->SetTitleSize(0.06);
	h_p1yp2y->GetXaxis()->SetTitleOffset(0.7);
   h_p1yp2y->SetYTitle("Counts");
	h_p1yp2y->GetYaxis()->CenterTitle(1);
	h_p1yp2y->GetYaxis()->SetTitleFont(32);
   h_p1yp2y->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1zp2z = new TH1F("p_miss_z","Pmiss_{ z} in ^{12}C reference system",100,-1,1);
   h_p1zp2z->SetXTitle("Pmiss_{ z} / GeV");
   // h_p1zp2z->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1zp2z->GetXaxis()->CenterTitle(1);
	h_p1zp2z->GetXaxis()->SetTitleFont(32);
   h_p1zp2z->GetXaxis()->SetTitleSize(0.06);
	h_p1zp2z->GetXaxis()->SetTitleOffset(0.7);
   h_p1zp2z->SetYTitle("Counts");
	h_p1zp2z->GetYaxis()->CenterTitle(1);
	h_p1zp2z->GetYaxis()->SetTitleFont(32);
   h_p1zp2z->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss = new TH1F("P_miss","P_{ miss} in ^{12}C reference system",100,0,2);
   h_P_miss->SetXTitle("P_{ miss} / GeV");
   // h_P_miss->GetXaxis()->SetNdivisions(10,kTRUE);
	h_P_miss->GetXaxis()->CenterTitle(1);
	h_P_miss->GetXaxis()->SetTitleFont(32);
   h_P_miss->GetXaxis()->SetTitleSize(0.06);
	h_P_miss->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss->SetYTitle("Counts");
	h_P_miss->GetYaxis()->CenterTitle(1);
	h_P_miss->GetYaxis()->SetTitleFont(32);
   h_P_miss->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_E_miss = new TH1F("E_miss","E_{ miss} in ^{12}C reference system",100,-1,1);
   h_E_miss->SetXTitle("E_{ miss} / GeV");
   // h_E_miss->GetXaxis()->SetNdivisions(10,kTRUE);
	h_E_miss->GetXaxis()->CenterTitle(1);
	h_E_miss->GetXaxis()->SetTitleFont(32);
   h_E_miss->GetXaxis()->SetTitleSize(0.06);
	h_E_miss->GetXaxis()->SetTitleOffset(0.7);
   h_E_miss->SetYTitle("Counts");
	h_E_miss->GetYaxis()->CenterTitle(1);
	h_E_miss->GetYaxis()->SetTitleFont(32);
   h_E_miss->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_M_miss = new TH1F("M_miss","M_{ miss} in ^{12}C reference system",100,0,2);
   h_M_miss->SetXTitle("M_{ miss} / GeV");
   // h_M_miss->GetXaxis()->SetNdivisions(10,kTRUE);
	h_M_miss->GetXaxis()->CenterTitle(1);
	h_M_miss->GetXaxis()->SetTitleFont(32);
   h_M_miss->GetXaxis()->SetTitleSize(0.06);
	h_M_miss->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss->SetYTitle("Counts");
	h_M_miss->GetYaxis()->CenterTitle(1);
	h_M_miss->GetYaxis()->SetTitleFont(32);
   h_M_miss->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_E_theta = new TH2F("E_theta","^{12}C rest frame E_{ miss} vs. lab-frame (#theta_{1} + #theta_{2})",100,-1,1,100,0,100);
   h_E_theta->SetXTitle("E_{ miss} / GeV");
   // h_E_theta->GetXaxis()->SetNdivisions(10,kTRUE);
	h_E_theta->GetXaxis()->CenterTitle(1);
	h_E_theta->GetXaxis()->SetTitleFont(32);
   h_E_theta->GetXaxis()->SetTitleSize(0.06);
	h_E_theta->GetXaxis()->SetTitleOffset(0.7);
   h_E_theta->SetYTitle("#theta_{1} + #theta_{2} (^{o})");
	h_E_theta->GetYaxis()->CenterTitle(1);
	h_E_theta->GetYaxis()->SetTitleFont(32);
   h_E_theta->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta12 = new TH2F("theta1_theta2","lab-frame #theta_{1} vs. #theta_{2}",100,0,90,100,0,90);
   h_theta12->SetXTitle("#theta_{1} (^{ o })");
   // h_theta12->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta12->GetXaxis()->CenterTitle(1);
	h_theta12->GetXaxis()->SetTitleFont(22);
   h_theta12->GetXaxis()->SetTitleSize(0.04);
	h_theta12->GetXaxis()->SetTitleOffset(0.7);
   h_theta12->SetYTitle("#theta_{2} (^{ o })");
	h_theta12->GetYaxis()->CenterTitle(1);
	h_theta12->GetYaxis()->SetTitleFont(22);
   h_theta12->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_phi12 = new TH2F("phi1_phi2","lab-frame #phi_{1} vs. #phi_{2}",100,-180,180,100,-180,180);
   h_phi12->SetXTitle("#phi_{1} (^{ o })");
   // h_phi12->GetXaxis()->SetNdivisions(10,kTRUE);
	h_phi12->GetXaxis()->CenterTitle(1);
	h_phi12->GetXaxis()->SetTitleFont(22);
   h_phi12->GetXaxis()->SetTitleSize(0.05);
	h_phi12->GetXaxis()->SetTitleOffset(0.7);
   h_phi12->SetYTitle("#phi_{2} (^{ o })");
	h_phi12->GetYaxis()->CenterTitle(1);
	h_phi12->GetYaxis()->SetTitleFont(22);
   h_phi12->GetYaxis()->SetTitleSize(0.04);
   // ---------------PLOT reconstruction momentum of protons----------------

   TH2F *h_Eloss_left = new TH2F("Eloss left arm","Energy Loss vs. Proton Momentum (Left Arm)",100,1,3.5,100,0,30);
   h_Eloss_left->SetXTitle("P / GeV");
   // h_Eloss_left->GetXaxis()->SetNdivisions(10,kTRUE);
	h_Eloss_left->GetXaxis()->CenterTitle(1);
	h_Eloss_left->GetXaxis()->SetTitleFont(32);
   h_Eloss_left->GetXaxis()->SetTitleSize(0.06);
	h_Eloss_left->GetXaxis()->SetTitleOffset(0.7);
   h_Eloss_left->SetYTitle("Energy Loss / MeV");
	h_Eloss_left->GetYaxis()->CenterTitle(1);
	h_Eloss_left->GetYaxis()->SetTitleFont(32);
   h_Eloss_left->GetYaxis()->SetTitleSize(0.04);
   
   TH2F *h_Eloss_right = new TH2F("Eloss right arm","Energy Loss vs. Proton Momentum (Right Arm)",100,1,3.5,100,0,30);
   h_Eloss_right->SetXTitle("P / GeV");
   // h_Eloss_right->GetXaxis()->SetNdivisions(10,kTRUE);
	h_Eloss_right->GetXaxis()->CenterTitle(1);
	h_Eloss_right->GetXaxis()->SetTitleFont(32);
   h_Eloss_right->GetXaxis()->SetTitleSize(0.06);
	h_Eloss_right->GetXaxis()->SetTitleOffset(0.7);
   h_Eloss_right->SetYTitle("Energy Loss / MeV");
	h_Eloss_right->GetYaxis()->CenterTitle(1);
	h_Eloss_right->GetYaxis()->SetTitleFont(32);
   h_Eloss_right->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_Eloss_total = new TH2F("Eloss total","Energy Loss vs. Proton Momentum",100,1,3.5,100,0,30);
   h_Eloss_total->SetXTitle("P / GeV");
   // h_Eloss_total->GetXaxis()->SetNdivisions(10,kTRUE);
	h_Eloss_total->GetXaxis()->CenterTitle(1);
	h_Eloss_total->GetXaxis()->SetTitleFont(32);
   h_Eloss_total->GetXaxis()->SetTitleSize(0.06);
	h_Eloss_total->GetXaxis()->SetTitleOffset(0.7);
   h_Eloss_total->SetYTitle("Energy Loss / MeV");
	h_Eloss_total->GetYaxis()->CenterTitle(1);
	h_Eloss_total->GetYaxis()->SetTitleFont(32);
   h_Eloss_total->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_Eloss_total_Px = new TH2F("Eloss vs. Px","Energy Loss vs. |Px|",100,0.6,1.4,100,0,30);
   h_Eloss_total_Px->SetXTitle("|Px| / GeV");
   // h_Eloss_total_Px->GetXaxis()->SetNdivisions(10,kTRUE);
	h_Eloss_total_Px->GetXaxis()->CenterTitle(1);
	h_Eloss_total_Px->GetXaxis()->SetTitleFont(22);
   h_Eloss_total_Px->GetXaxis()->SetTitleSize(0.06);
	h_Eloss_total_Px->GetXaxis()->SetTitleOffset(0.7);
   h_Eloss_total_Px->SetYTitle("Energy Loss / MeV");
	h_Eloss_total_Px->GetYaxis()->CenterTitle(1);
	h_Eloss_total_Px->GetYaxis()->SetTitleFont(32);
   h_Eloss_total_Px->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_Eloss_total_Py = new TH2F("Eloss vs. Py","Energy Loss vs. Py",100,-0.8,0.8,100,0,30);
   h_Eloss_total_Py->SetXTitle("Py / GeV");
   // h_Eloss_total_Py->GetXaxis()->SetNdivisions(10,kTRUE);
	h_Eloss_total_Py->GetXaxis()->CenterTitle(1);
	h_Eloss_total_Py->GetXaxis()->SetTitleFont(32);
   h_Eloss_total_Py->GetXaxis()->SetTitleSize(0.06);
	h_Eloss_total_Py->GetXaxis()->SetTitleOffset(0.7);
   h_Eloss_total_Py->SetYTitle("Energy Loss / MeV");
	h_Eloss_total_Py->GetYaxis()->CenterTitle(1);
	h_Eloss_total_Py->GetYaxis()->SetTitleFont(32);
   h_Eloss_total_Py->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_Eloss_total_Pz = new TH2F("Eloss vs. Pz","Energy Loss vs. Pz",100,0.5,3.5,100,0,30);
   h_Eloss_total_Pz->SetXTitle("Pz / GeV");
   // h_Eloss_total_Pz->GetXaxis()->SetNdivisions(10,kTRUE);
	h_Eloss_total_Pz->GetXaxis()->CenterTitle(1);
	h_Eloss_total_Pz->GetXaxis()->SetTitleFont(32);
   h_Eloss_total_Pz->GetXaxis()->SetTitleSize(0.06);
	h_Eloss_total_Pz->GetXaxis()->SetTitleOffset(0.7);
   h_Eloss_total_Pz->SetYTitle("Energy Loss / MeV");
	h_Eloss_total_Pz->GetYaxis()->CenterTitle(1);
	h_Eloss_total_Pz->GetYaxis()->SetTitleFont(32);
   h_Eloss_total_Pz->GetYaxis()->SetTitleSize(0.04);

   Long64_t nentries = fChain->GetEntriesFast();
   // cout<<nentries<<endl;
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
   // for (Long64_t jentry=0; jentry<200000;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      if(fabs(StsPoint_fPx[0])<1e-5 || fabs(CSCPoint_fPx[0])<1e-5 || fabs(TOF400Point_fPx[0])<1e-5) continue;

      Flag_left = 0;
      Flag_right = 0;
      for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
         if(TOF400Point_fPz[i]>1e-5 && (TOF400Point_fTrackID[i]==0 || TOF400Point_fTrackID[i]==1)){
            if(TOF400Point_fPx[i]>0){
               Flag_left = 1;
               px_left = TOF400Point_fPx[i];
               py_left = TOF400Point_fPy[i];
               pz_left = TOF400Point_fPz[i];
               p_left = sqrt(pow(px_left,2)+pow(py_left,2)+pow(pz_left,2));
               beta_left = p_left/m_p/sqrt(1.+pow(p_left/m_p,2));

               x_left = TOF400Point_fX[i];
               y_left = TOF400Point_fY[i];
               z_left = TOF400Point_fZ[i];
               TOF_left = TOF400Point_fTime[i];//ns
            }
            else{
               Flag_right = 1;
               px_right = TOF400Point_fPx[i];
               py_right = TOF400Point_fPy[i];
               pz_right = TOF400Point_fPz[i];
               p_right = sqrt(pow(px_right,2)+pow(py_right,2)+pow(pz_right,2));
               beta_right = p_right/m_p/sqrt(1.+pow(p_right/m_p,2));

               x_right = TOF400Point_fX[i];
               y_right = TOF400Point_fY[i];
               z_right = TOF400Point_fZ[i];
               TOF_right = TOF400Point_fTime[i];//ns
            }
         }
      }

      ch.GetEntry(jentry);
      if(P1x>0){
         px_left_initial = P1x/1000.;
         py_left_initial = P1y/1000.;
         pz_left_initial = P1z/1000.;
         px_right_initial = P2x/1000.;
         py_right_initial = P2y/1000.;
         pz_right_initial = P2z/1000.;
      }
      else{
         px_left_initial = P2x/1000.;
         py_left_initial = P2y/1000.;
         pz_left_initial = P2z/1000.;
         px_right_initial = P1x/1000.;
         py_right_initial = P1y/1000.;
         pz_right_initial = P1z/1000.;         
      }
      p_left_initial = sqrt(pow(px_left_initial,2)+pow(py_left_initial,2)+pow(pz_left_initial,2));
      beta_left_initial = p_left_initial/m_p/sqrt(1.+pow(p_left_initial/m_p,2));
      p_right_initial = sqrt(pow(px_right_initial,2)+pow(py_right_initial,2)+pow(pz_right_initial,2));
      beta_right_initial = p_right_initial/m_p/sqrt(1.+pow(p_right_initial/m_p,2));

      ch_vertex.GetEntry(jentry);
      // cout<<vertex_x<<"\t"<<vertex_y<<"\t"<<vertex_z<<endl;
      vertex_x = gRandom->Gaus(vertex_x,0.5);
      vertex_y = gRandom->Gaus(vertex_y,0.5);
      vertex_z = gRandom->Gaus(vertex_z,1.0);

      //---------------------------Calculate momentum using TOF-------------------------
      if(Flag_left==1){
         LOF_x_left = x_left - vertex_x;
         LOF_y_left = y_left - vertex_y;
         LOF_z_left = z_left - vertex_z;
         LOF_left = sqrt(pow(LOF_x_left,2)+pow(LOF_y_left,2)+pow(LOF_z_left,2));

         TOF_left = gRandom->Gaus(TOF_left,0.095);   //ns

         vx_left = LOF_x_left/TOF_left*1e7;// m/s
         vy_left = LOF_y_left/TOF_left*1e7;// m/s
         vz_left = LOF_z_left/TOF_left*1e7;// m/s
         v_left = LOF_left/TOF_left*1e7;   // m/s

         Beta_left = v_left/3e8;
         Gamma_left = 1./sqrt(1-pow(Beta_left,2));
         P_left = Beta_left*Gamma_left*m_p;
         Px_left = vx_left*P_left/v_left;
         Py_left = vy_left*P_left/v_left;
         Pz_left = vz_left*P_left/v_left;
         E_left = Gamma_left*m_p;

         if(UseUndisturbedMomentum==1){
            Px_left = px_left_initial;
            Py_left = py_left_initial;
            Pz_left = pz_left_initial;
            P_left = p_left_initial;
            E_left = p_left_initial/beta_left_initial;
         }

         theta1 = TMath::ATan(sqrt(pow(Px_left,2)+pow(Py_left,2))/Pz_left)/3.1415926535*180;
         if(Py_left>0&&Px_left>0){
            phi1 = TMath::ATan(Py_left/Px_left)/3.1415926535*180;
         }
         if(Py_left>0&&Px_left<0){
            phi1 = 180-TMath::ATan(-Py_left/Px_left)/3.1415926535*180;
         }
         if(Py_left<0&&Px_left>0){
            phi1 = -TMath::ATan(-Py_left/Px_left)/3.1415926535*180;
         }
         if(Py_left<0&&Px_left<0){
            phi1 = TMath::ATan(Py_left/Px_left)/3.1415926535*180-180;
         }

         P4_left_initial.SetPxPyPzE(Px_left,Py_left,Pz_left,E_left);
         P4_left_transformed = boost *P4_left_initial;
      }
      if(Flag_right==1){
         LOF_x_right = x_right - vertex_x;
         LOF_y_right = y_right - vertex_y;
         LOF_z_right = z_right - vertex_z;
         LOF_right = sqrt(pow(LOF_x_right,2)+pow(LOF_y_right,2)+pow(LOF_z_right,2));

         TOF_right = gRandom->Gaus(TOF_right,0.095);   //ns

         vx_right = LOF_x_right/TOF_right*1e7;// m/s
         vy_right = LOF_y_right/TOF_right*1e7;// m/s
         vz_right = LOF_z_right/TOF_right*1e7;// m/s
         v_right = LOF_right/TOF_right*1e7;   // m/s

         Beta_right = v_right/3e8;
         Gamma_right = 1./sqrt(1-pow(Beta_right,2));
         P_right = Beta_right*Gamma_right*m_p;
         Px_right = vx_right*P_right/v_right;
         Py_right = vy_right*P_right/v_right;
         Pz_right = vz_right*P_right/v_right;
         E_right = Gamma_right*m_p;

         if(UseUndisturbedMomentum==1){
            Px_right = px_right_initial;
            Py_right = py_right_initial;
            Pz_right = pz_right_initial;
            P_right = p_right_initial;
            E_right = p_right_initial/beta_right_initial;
         }

         theta2 = TMath::ATan(sqrt(pow(Px_right,2)+pow(Py_right,2))/Pz_right)/3.1415926535*180;
         if(Py_right>0&&Px_right>0){
            phi2 = TMath::ATan(Py_right/Px_right)/3.1415926535*180;
         }
         if(Py_right>0&&Px_right<0){
            phi2 = 180-TMath::ATan(-Py_right/Px_right)/3.1415926535*180;
         }
         if(Py_right<0&&Px_right>0){
            phi2 = -TMath::ATan(-Py_right/Px_right)/3.1415926535*180;
         }
         if(Py_right<0&&Px_right<0){
            phi2 = TMath::ATan(Py_right/Px_right)/3.1415926535*180-180;
         }

         P4_right_initial.SetPxPyPzE(Px_right,Py_right,Pz_right,E_right);
         P4_right_transformed = boost *P4_right_initial;
      }
      if(Flag_left==1&&Flag_right==1){
         // cout<<endl;
         // cout<<P4_left_transformed.Px()<<"\t"<<P4_left_transformed.Py()<<"\t"<<P4_left_transformed.Pz()<<"\t"<<P4_left_transformed.E()<<endl;
         // cout<<P4_right_transformed.Px()<<"\t"<<P4_right_transformed.Py()<<"\t"<<P4_right_transformed.Pz()<<"\t"<<P4_right_transformed.E()<<endl;
         // cout<<P4_left_transformed.Px()+P4_right_transformed.Px()<<"\t";
         // cout<<P4_left_transformed.Py()+P4_right_transformed.Py()<<"\t";
         // cout<<P4_left_transformed.Pz()+P4_right_transformed.Pz()+P_12C/12.<<endl;
         // cout<<endl;

         // cout<<jentry<<endl;

         h_p1x->Fill(P4_left_transformed.Px());
         h_p1y->Fill(P4_left_transformed.Py());
         h_p1z->Fill(P4_left_transformed.Pz());
         h_E1->Fill(P4_left_transformed.E());

         h_p2x->Fill(P4_right_transformed.Px());
         h_p2y->Fill(P4_right_transformed.Py());
         h_p2z->Fill(P4_right_transformed.Pz());
         h_E2->Fill(P4_right_transformed.E());

         P_miss_x = P4_left_transformed.Px()+P4_right_transformed.Px()-P4_proton_transformed.Px();
         P_miss_y = P4_left_transformed.Py()+P4_right_transformed.Py()-P4_proton_transformed.Py();
         P_miss_z = P4_left_transformed.Pz()+P4_right_transformed.Pz()-P4_proton_transformed.Pz();
         P_miss_E = P4_left_transformed.E()+P4_right_transformed.E()-P4_proton_transformed.E();
         P_miss = sqrt(pow(P_miss_x,2)+pow(P_miss_y,2)+pow(P_miss_z,2));

         E_miss = m_p-P_miss_E;
         M_miss = sqrt(pow(P_miss_E,2)-pow(P_miss,2));

         // Pmiss.SetPxPyPzE(Px_left+Px_right,Py_left+Py_right,Pz_left+Pz_right,E_left+E_right-m_p);
         // Pmiss.Boost(-Pbeam0.BoostVector());
         // M_miss = sqrt(pow(Pmiss.E(),2)-pow(Pmiss.Px(),2)-pow(Pmiss.Py(),2)-pow(Pmiss.Pz(),2));

         h_p1xp2x->Fill(P_miss_x);
         h_p1yp2y->Fill(P_miss_y);
         h_p1zp2z->Fill(P_miss_z);
         h_P_miss->Fill(P_miss);
         h_E_miss->Fill(E_miss);
         h_M_miss->Fill(M_miss);

         h_E_theta->Fill(E_miss,theta1+theta2);
         h_theta12->Fill(theta1,theta2);
         h_phi12->Fill(phi1,phi2);
         // if(phi2>0) h_phi12->Fill(phi1,phi2);
         // else h_phi12->Fill(phi1,phi2+360.);
      }
      //---------------------------Calculate momentum using TOF-------------------------

      // cout<<jentry<<"   ----------------------------------------------"<<endl;
      if(Flag_left==1){
         Eloss_left = p_left_initial/beta_left_initial-p_left/beta_left;
         // cout<<"Eloss_left "<<Eloss_left<<endl;
         // cout<<"Left Arm:"<<endl;
         // cout<<"Initial:"<<"\t"<<px_left_initial<<"\t"<<py_left_initial<<"\t"<<pz_left_initial<<endl;
         // cout<<"Final:"<<"\t"<<"\t"<<px_left<<"\t"<<py_left<<"\t"<<pz_left<<endl;
         // cout<<"Energy loss: "<<p_left_initial<<" - "<<p_left<<" = "<<Eloss_left<<endl;
         h_Eloss_left->Fill(p_left_initial,Eloss_left*1000.);
         h_Eloss_total->Fill(p_left_initial,Eloss_left*1000.);
         h_Eloss_total_Px->Fill(fabs(px_left_initial),Eloss_left*1000.);
         h_Eloss_total_Py->Fill(py_left_initial,Eloss_left*1000.);
         h_Eloss_total_Pz->Fill(pz_left_initial,Eloss_left*1000.);
      }
      if(Flag_right==1){
         Eloss_right = p_right_initial/beta_right_initial-p_right/beta_right;
         // cout<<"Eloss_right "<<Eloss_right<<endl;
         // if(Flag_left==1) cout<<endl;
         // cout<<"Right Arm:"<<endl;
         // cout<<"Initial:"<<"\t"<<px_right_initial<<"\t"<<py_right_initial<<"\t"<<pz_right_initial<<endl;
         // cout<<"Final:"<<"\t"<<"\t"<<px_right<<"\t"<<py_right<<"\t"<<pz_right<<endl;
         // cout<<"Energy loss: "<<p_right_initial<<" - "<<p_right<<" = "<<Eloss_right<<endl;
         h_Eloss_right->Fill(p_right_initial,Eloss_right*1000.);
         h_Eloss_total->Fill(p_right_initial,Eloss_right*1000.);
         h_Eloss_total_Px->Fill(fabs(px_right_initial),Eloss_right*1000.);
         h_Eloss_total_Py->Fill(py_right_initial,Eloss_right*1000.);
         h_Eloss_total_Pz->Fill(pz_right_initial,Eloss_right*1000.);
      }
      // cout<<endl;
      // cout<<endl;


      // cout<<jentry<<"\t"<<StsPoint_fPx[0]<<"\t"<<StsPoint_fPy[0]<<"\t"<<StsPoint_fPz[0]<<endl;
      // cout<<"\t"<<CSCPoint_fPx[0]<<"\t"<<CSCPoint_fPy[0]<<"\t"<<CSCPoint_fPz[0]<<endl;
      // cout<<"\t"<<TOF400Point_fPx[0]<<"\t"<<TOF400Point_fPy[0]<<"\t"<<TOF400Point_fPz[0]<<endl;
      // cout<<"\t"<<"CSCPoint_fPx:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_CSC_CSCPoint;i++){
      //    if(fabs(CSCPoint_fPx[i])>1e-10) cout<<"\t"<<CSCPoint_fPx[i];
      // }
      // cout<<endl;
      // cout<<"\t"<<"CSCPoint_fPz:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_CSC_CSCPoint;i++){
      //    if(CSCPoint_fPz[i]>1e-5) cout<<"\t"<<CSCPoint_fPz[i];
      // }
      // cout<<endl;
      // cout<<"\t"<<"CSCPoint_fStation:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_CSC_CSCPoint;i++){
      //    if(CSCPoint_fStation[i]>-1) cout<<"\t"<<CSCPoint_fStation[i];
      // }
      // cout<<endl;
      // cout<<"\t"<<"CSCPoint_fTrackID:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_CSC_CSCPoint;i++){
      //    if(CSCPoint_fTrackID[i]>-1) cout<<"\t"<<CSCPoint_fTrackID[i];
      // }
      // cout<<endl;
      // cout<<"\t"<<"CSCPoint_fPdgId:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_CSC_CSCPoint;i++){
      //    if(CSCPoint_fPdgId[i]>-1) cout<<"\t"<<CSCPoint_fPdgId[i];
      // }
      // cout<<endl;   
      // cout<<endl;      
      // cout<<"\t"<<"TOF400Point_fPz:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
      //    if(TOF400Point_fPz[i]>1e-5) cout<<"\t"<<TOF400Point_fPz[i];
      // }
      // cout<<endl;
      // cout<<"\t"<<"TOF400Point_fTrackID:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
      //    if(TOF400Point_fTrackID[i]>-1) cout<<"\t"<<TOF400Point_fTrackID[i];
      // }
      // cout<<endl;
      // cout<<"\t"<<"TOF400Point_fTime:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
      //    if(TOF400Point_fTime[i]>1e-5) cout<<"\t"<<TOF400Point_fTime[i];
      // }
      // cout<<endl;
      // cout<<"\t"<<"TOF400Point_fLength:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
      //    if(TOF400Point_fLength[i]>1e-5) cout<<"\t"<<TOF400Point_fLength[i];
      // }
      // cout<<endl;
      // cout<<"\t"<<"TOF400Point_fDetectorID:"<<endl;
      // for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
      //    if(TOF400Point_fDetectorID[i]>1e-5) cout<<"\t"<<TOF400Point_fDetectorID[i];
      // }
      // cout<<endl;

      // cout<<endl;


      // memset(,0,sizeof());

      // memset(MCTrack_fPz,0,sizeof(MCTrack_fPz));

      memset(StsPoint_fPx,0,sizeof(StsPoint_fPx));
      memset(StsPoint_fPy,0,sizeof(StsPoint_fPy));
      memset(StsPoint_fPz,0,sizeof(StsPoint_fPz));

      memset(CSCPoint_fPx,0,sizeof(CSCPoint_fPx));
      memset(CSCPoint_fPy,0,sizeof(CSCPoint_fPy));
      memset(CSCPoint_fPz,0,sizeof(CSCPoint_fPz));
      memset(CSCPoint_fPdgId,-1,sizeof(CSCPoint_fPdgId));
      memset(CSCPoint_fTrackID,-1,sizeof(CSCPoint_fTrackID));
      memset(CSCPoint_fStation,-1,sizeof(CSCPoint_fStation));

      memset(TOF400Point_fPx,0,sizeof(TOF400Point_fPx));
      memset(TOF400Point_fPy,0,sizeof(TOF400Point_fPy));
      memset(TOF400Point_fPz,0,sizeof(TOF400Point_fPz));
      memset(TOF400Point_fTrackID,-1,sizeof(TOF400Point_fTrackID));
      memset(TOF400Point_fTime,0,sizeof(TOF400Point_fTime));
      memset(TOF400Point_fLength,0,sizeof(TOF400Point_fLength));
      memset(TOF400Point_fDetectorID,0,sizeof(TOF400Point_fDetectorID));
      
   }

   // ---------------PLOT reconstruction momentum of protons----------------
   TCanvas *c_p1x = new TCanvas("c_p1x","p1x",1200,800);
   h_p1x->Draw();
   c_p1x->SaveAs("./reco_plot/p1x.pdf");

   TCanvas *c_p1y = new TCanvas("c_p1y","p1y",1200,800);
   h_p1y->Draw();
   c_p1y->SaveAs("./reco_plot/p1y.pdf");

   TCanvas *c_p1z = new TCanvas("c_p1z","p1z",1200,800);
   h_p1z->Draw();
   c_p1z->SaveAs("./reco_plot/p1z.pdf");

   TCanvas *c_E1 = new TCanvas("c_E1","E1",1200,800);
   h_E1->Draw();
   c_E1->SaveAs("./reco_plot/E1.pdf");

   TCanvas *c_p2x = new TCanvas("c_p2x","p2x",1200,800);
   h_p2x->Draw();
   c_p2x->SaveAs("./reco_plot/p2x.pdf");

   TCanvas *c_p2y = new TCanvas("c_p2y","p2y",1200,800);
   h_p2y->Draw();
   c_p2y->SaveAs("./reco_plot/p2y.pdf");

   TCanvas *c_p2z = new TCanvas("c_p2z","p2z",1200,800);
   h_p2z->Draw();
   c_p2z->SaveAs("./reco_plot/p2z.pdf");

   TCanvas *c_E2 = new TCanvas("c_E2","E2",1200,800);
   h_E2->Draw();
   c_E2->SaveAs("./reco_plot/E2.pdf");

   TCanvas *c_p1xp2x = new TCanvas("c_p1xp2x","p1xp2x",1200,800);
   h_p1xp2x->Draw();
   c_p1xp2x->SaveAs("./reco_plot/p_miss_x.pdf");

   TCanvas *c_p1yp2y = new TCanvas("c_p1yp2y","p1yp2y",1200,800);
   h_p1yp2y->Draw();
   c_p1yp2y->SaveAs("./reco_plot/p_miss_y.pdf");

   TCanvas *c_p1zp2z = new TCanvas("c_p1zp2z","p1zp2z",1200,800);
   h_p1zp2z->Draw();
   c_p1zp2z->SaveAs("./reco_plot/p_miss_z.pdf");

   TCanvas *c_P_miss = new TCanvas("c_P_miss","P_miss",1200,800);
   h_P_miss->Draw();
   c_P_miss->SaveAs("./reco_plot/P_miss.pdf");

   TCanvas *c_E_miss = new TCanvas("c_E_miss","E_miss",1200,800);
   h_E_miss->Draw();
   c_E_miss->SaveAs("./reco_plot/E_miss.pdf");

   TCanvas *c_M_miss = new TCanvas("c_M_miss","M_miss",1200,800);
   h_M_miss->Draw();
   c_M_miss->SaveAs("./reco_plot/M_miss.pdf");

   TCanvas *c_E_theta = new TCanvas("c_E_theta","E_theta",1200,800);
   h_E_theta->Draw("COLZ");
   c_E_theta->SaveAs("./reco_plot/E_vs_theta.pdf");

   TCanvas *c_theta12 = new TCanvas("c_theta12","theta12",1200,800);
   h_theta12->Draw("COLZ");
   c_theta12->SaveAs("./reco_plot/theta1_vs_theta2.pdf");

   TCanvas *c_phi12 = new TCanvas("c_phi12","phi12",1200,800);
   c_phi12->SetGrid(1,1);
   h_phi12->Draw("COLZ");
   c_phi12->SaveAs("./reco_plot/phi1_vs_phi2.pdf");
   // ---------------PLOT reconstruction momentum of protons----------------

   TCanvas *c_Eloss_left = new TCanvas("c_Eloss_left","Eloss_left",1200,800);
   h_Eloss_left->Draw();
   c_Eloss_left->SaveAs("./Eloss_plot/Eloss_left.pdf");

   TCanvas *c_Eloss_right = new TCanvas("c_Eloss_right","Eloss_right",1200,800);
   h_Eloss_right->Draw();
   c_Eloss_right->SaveAs("./Eloss_plot/Eloss_right.pdf");

   TCanvas *c_Eloss_total = new TCanvas("c_Eloss_total","Eloss_total",1200,800);
   h_Eloss_total->Draw();
   c_Eloss_total->SaveAs("./Eloss_plot/Eloss_total.pdf");

   TCanvas *c_Eloss_total_Px = new TCanvas("c_Eloss_total_Px","Eloss_total_Px",1200,800);
   h_Eloss_total_Px->Draw();
   c_Eloss_total_Px->SaveAs("./Eloss_plot/Eloss_total_Px.pdf");

   TCanvas *c_Eloss_total_Py = new TCanvas("c_Eloss_total_Py","Eloss_total_Py",1200,800);
   h_Eloss_total_Py->Draw();
   c_Eloss_total_Py->SaveAs("./Eloss_plot/Eloss_total_Py.pdf");

   TCanvas *c_Eloss_total_Pz = new TCanvas("c_Eloss_total_Pz","Eloss_total_Pz",1200,800);
   h_Eloss_total_Pz->Draw();
   c_Eloss_total_Pz->SaveAs("./Eloss_plot/Eloss_total_Pz.pdf");

}
