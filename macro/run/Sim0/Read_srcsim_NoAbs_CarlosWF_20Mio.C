#define Read_srcsim_NoAbs_CarlosWF_20Mio_cxx
#include "Read_srcsim_NoAbs_CarlosWF_20Mio.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <TLorentzRotation.h>
#include <TRandom.h>
#include <TLegend.h>
#include <TFile.h>
#include <TF1.h>
#include <TVector3.h>

// const double qe_sigmas = 1.8;
const double qe_sigmas = 2.0;
// const double qe_sigmas = 2.1;
const double emissMean = -0.0301399;
const double emissSigma = qe_sigmas * 0.108096;
const double thetaMean = 65.4496;
const double thetaSigma = qe_sigmas * 2.16295;

// const double qe_theta_sigmas = 2;
// const double qe_mmiss2_sigmas = 1.1;
// const double ThetaMean = 6.52452e+01;
// const double ThetaSigma = qe_theta_sigmas * 2.02966e+00;
// const double Mmiss2Mean = 8.38489e-01;
// const double Mmiss2Sigma = qe_mmiss2_sigmas * 2.43389e-01;

// 0.8, 0.98
const double qe_theta_sigmas = 2;
const double qe_mmiss2_sigmas = 1.1;
const double ThetaMean = 65.6;
const double ThetaSigma = qe_theta_sigmas * 2.22;
const double Mmiss2Mean = 0.896;
const double Mmiss2Sigma = qe_mmiss2_sigmas * 0.232;

// 0.84, 0.96
// const double qe_theta_sigmas = 2;
// const double qe_mmiss2_sigmas = 1.1;
// const double ThetaMean = 65.4;
// const double ThetaSigma = qe_theta_sigmas * 2.02;
// const double Mmiss2Mean = 0.888;
// const double Mmiss2Sigma = qe_mmiss2_sigmas * 0.204;


bool QE_cut(double emiss, double theta) {
    double normEmiss = (emiss - emissMean) / emissSigma;
    double normTheta = (theta - thetaMean) / thetaSigma;
    double distance = normEmiss * normEmiss + normTheta * normTheta;
    return distance > 1.0;
}

bool QE_cut_Mmiss2(double Mmiss2, double Theta) {
    double normMmiss2 = (Mmiss2 - Mmiss2Mean) / Mmiss2Sigma;
    double normTheta = (Theta - ThetaMean) / ThetaSigma;
   //  double normMmiss2 = (Mmiss2 - Mmiss2Mean) / Mmiss2Sigma /2.;
   //  double normTheta = (Theta - ThetaMean) / ThetaSigma /2.;
    double distance = normMmiss2 * normMmiss2 + normTheta * normTheta;
    return distance > 1.0;
}

bool QE_cut_Mmiss2_square(double Mmiss2, double Theta) {
    double normMmiss2 = fabs(Mmiss2 - Mmiss2Mean) / Mmiss2Sigma;
    double normTheta = fabs(Theta - ThetaMean) / ThetaSigma;
    return (normMmiss2 > 1.0 || normTheta>1.0);
}

double LaLa(double a, double b, double c){
   return a*a-2.*a*(b+c)+(b-c)*(b-c);
}

double breakup_possibility(double z){
   // double sigma_tot = 220e-27; // 220 mb = 220e-27 1/cm^2
   double sigma_tot = 254e-27; // 220 mb = 254e-27 1/cm^2
   // double sigma_tot = 700e-27; // 220 mb = 220e-27 1/cm^2
   // double rho = 4.267e22;  // protons/cm^3
   double rho = 4.25e22;  // protons/cm^3
   return 1.0 - exp(-sigma_tot*rho*z);
}

double cos_theta(double s, double t, double u, double m1, double m2, double m3, double m4){
   return (s*(t-u)+(m1*m1-m2*m2)*(m3*m3-m4*m4))/sqrt(LaLa(s,m1*m1,m2*m2))/sqrt(LaLa(s,m3*m3,m4*m4));
}

Double_t Read_srcsim_NoAbs_CarlosWF_20Mio::Loop(Double_t Boost_resolution, Double_t TOF_resolution)
{
//   In a ROOT session, you can do:
//      root> .L Read_srcsim_NoAbs_CarlosWF_20Mio.C
//      root> Read_srcsim_NoAbs_CarlosWF_20Mio t
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

   // int TOF_Momenta_Flag = 1;
   int TOF_Momenta_Flag = 0;
   int Generator_Without_Cut = 0;
   int Generator_With_Cut = 1;
   int Experiment_Flag = 1;

   int Cut_Flag = 0;

   // int TOF_Shift = 0;
   int TOF_Shift = 1;

   int QE_Cut_Flag = 1;
   // int QE_Cut_Flag = 0;

   int Smearing_Flag = 1;
   // int Smearing_Flag = 0;

   int CA_New_Flag = 1;
   // int CA_New_Flag = 0;

   double BetaCut_left = 0.8;
   double BetaCut_right = 0.98;
   // double BetaCut_left = 0.84;
   // double BetaCut_right = 0.96;
   // double BetaCut_left = 0.5;
   // double BetaCut_right = 1.5;

   double ToF_offset = -0.065;
   // double ToF_offset = -0.020;

   int CA_cut_flag = 0;
   // int CA_cut_flag = 1;

   // double CA_max = 110.;
   // double CA_min = 70.;

   double CA_max = 100.;
   double CA_min = 80.;
   // double CA_max = 80.;
   // double CA_min = 65.;
   // double CA_max = 115.;
   // double CA_min = 100.;

   int TU_cut_flag = 0;
   // int TU_cut_flag = 1;
   double TUcut_max = 2.5;
   double TUcut_min = 2.0;

   fChain->SetBranchStatus("*",0);  // disable all branches

   fChain->SetBranchStatus("StsPoint.fPx",1);  // activate branchname
   fChain->SetBranchStatus("StsPoint.fPy",1);  // activate branchname
   fChain->SetBranchStatus("StsPoint.fPz",1);  // activate branchname
   fChain->SetBranchStatus("StsPoint.fX",1);  // activate branchname
   fChain->SetBranchStatus("StsPoint.fY",1);  // activate branchname
   fChain->SetBranchStatus("StsPoint.fZ",1);  // activate branchname
   fChain->SetBranchStatus("StsPoint.fTrackID",1);  // activate branchname

   fChain->SetBranchStatus("CSCPoint.fPx",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fPy",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fPz",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fX",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fY",1);  // activate branchname
   fChain->SetBranchStatus("CSCPoint.fZ",1);  // activate branchname
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
   memset(StsPoint_fX,0,sizeof(StsPoint_fX));
   memset(StsPoint_fY,0,sizeof(StsPoint_fY));
   memset(StsPoint_fZ,0,sizeof(StsPoint_fZ));
   memset(StsPoint_fTrackID,0,sizeof(StsPoint_fTrackID));
   
   memset(CSCPoint_fX,0,sizeof(CSCPoint_fX));
   memset(CSCPoint_fY,0,sizeof(CSCPoint_fY));
   memset(CSCPoint_fZ,0,sizeof(CSCPoint_fZ));
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
   TChain ch("T");
   ch.Add("EventOutput_1_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_2_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_3_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_4_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_5_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_6_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_7_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_8_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_9_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");
   ch.Add("EventOutput_10_NoAbs_CarlosWF_ThetaCut_20Mio.root/T");

   Double_t P1x, P1y, P1z, P2x, P2y, P2z;
   Double_t PBx, PBy, PBz;
   Double_t PBX, PBY, PBZ;
   ch.SetBranchStatus("*",0);
   ch.SetBranchStatus("p3",1);
   ch.SetBranchStatus("p4",1);
   // ch.SetBranchStatus("pRec",1);
   ch.SetBranchStatus("pAm1",1);
   // ch.SetBranchStatus("rec_type",1);
   ch.SetBranchStatus("weight",1);

   Int_t rec_type;
   Double_t weight;
   Double_t p3[3], p4[3], pRec[3], pAm1[3];

   // ch.SetBranchAddress("rec_type",&rec_type);
   ch.SetBranchAddress("weight",&weight);
   ch.SetBranchAddress("p3",p3);
   ch.SetBranchAddress("p4",p4);
   // ch.SetBranchAddress("pRec",pRec);
   ch.SetBranchAddress("pAm1",pAm1);

   TChain ch_vertex("vertex");
   ch_vertex.Add("vertex_NoAbs_CarlosWF_20Mio.root");

   Double_t vertex_x, vertex_y, vertex_z;
   // Double_t Weight;
   ch_vertex.SetBranchAddress("vertex_x",&vertex_x);
   ch_vertex.SetBranchAddress("vertex_y",&vertex_y);
   ch_vertex.SetBranchAddress("vertex_z",&vertex_z);
   // ch_vertex.SetBranchAddress("Weight",&Weight);
   // ch.GetEntry(76);
   // cout<<"Proton1:"<<"\t"<<P1x/1000.<<"\t"<<P1y/1000.<<"\t"<<P1z/1000.<<"\n";
   // cout<<"Proton2:"<<"\t"<<P2x/1000.<<"\t"<<P2y/1000.<<"\t"<<P2z/1000.<<"\n";
   
   if (fChain == 0) return 0.;

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
   double m_11B = 11.*0.93149432; // 11B mass in GeV/c^2
   double m_10B = 10.*0.93149432; // 11B mass in GeV/c^2
   // double P_12C_Real = 44.9672;// GeV/c
   double P_12C_Real = 3.706*12;// GeV/c
   double beta_12C, P_12C;
   int Flag_left, Flag_right;
   double LOF_x_left, LOF_y_left, LOF_z_left, LOF_left, TOF_left;
   double LOF_x_right, LOF_y_right, LOF_z_right, LOF_right, TOF_right;
   Int_t DetecID_left, DetecID_right;
   double vx_left, vy_left, vz_left, v_left, vx_right, vy_right, vz_right, v_right;
   double Beta_left, Beta_right, Gamma_left, Gamma_right, E_left, E_right;
   double Px_left, Py_left, Pz_left, P_left, Px_right, Py_right, Pz_right, P_right;
   double P_miss_x, P_miss_y, P_miss_z, P_miss_E, P_miss, E_miss, M_miss, M_miss_square, theta1, theta2, phi1, phi2;
   double P_miss_x_1, P_miss_y_1, P_miss_z_1, P_miss_E_1, P_miss_1, E_miss_1, M_miss_1, theta1_1, theta2_1, phi1_1, phi2_1;
   TLorentzVector P4_left_initial, P4_right_initial, P4_left_transformed, P4_right_transformed;
   TLorentzVector P4_neutron, P4_12C;
   TLorentzVector P4_proton_initial, P4_proton_transformed;
   TLorentzVector PB_initial, PB_transformed;
   TLorentzVector PB_initial_generator, PB_transformed_generator;
   TLorentzVector P_Frag_proton_initial, P_Frag_proton_transformed;
   // TLorentzRotation boost;
   // boost.Boost(0,0,-beta_12C);

   // P4_proton_initial.SetPxPyPzE(0,0,0,m_p);
   // P4_proton_transformed = boost *P4_proton_initial;

   double angle_pmiss_pfrag, angle_pmiss_pfrag_2D;
   double ss, tt, uu, pp, CA;
   double ss_1, tt_1, uu_1, pp_1, CA_1;

   TH2F *h_M_miss_square_betaL = new TH2F("M_miss_square_betaL","#beta_{L} vs. M^{2}_{ miss } in ^{12}C reference system;#beta_{L};M^{2}_{ miss }",200,0.5,1.1,200,-2,2);
   TH2F *h_M_miss_square_betaR = new TH2F("M_miss_square_betaR","#beta_{R} vs. M^{2}_{ miss } in ^{12}C reference system;#beta_{R};M^{2}_{ miss }",200,0.5,1.1,200,-2,2);

   TH1F *h_Mandelstam_t = new TH1F("h_Mandelstam_t","Mandelstam variable t",200,0,7);
   TH1F *h_Mandelstam_t_1 = new TH1F("h_Mandelstam_t_1","Mandelstam variable t",200,0,7);
   h_Mandelstam_t->SetXTitle("|t| / (GeV/c)^{2}");
	h_Mandelstam_t->GetXaxis()->CenterTitle(1);
	h_Mandelstam_t->GetXaxis()->SetTitleFont(32);
   h_Mandelstam_t->GetXaxis()->SetTitleSize(0.06);
	h_Mandelstam_t->GetXaxis()->SetTitleOffset(0.7);
   h_Mandelstam_t->SetYTitle("Counts");
	h_Mandelstam_t->GetYaxis()->CenterTitle(1);
	h_Mandelstam_t->GetYaxis()->SetTitleFont(32);
   h_Mandelstam_t->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_Mandelstam_t_diff = new TH1F("h_Mandelstam_t_diff","Mandelstam variable t diff between simulation and generator",100,-1,1);
   h_Mandelstam_t_diff->SetXTitle("Diff |t| / (GeV/c)^{2}");
	h_Mandelstam_t_diff->GetXaxis()->CenterTitle(1);
	h_Mandelstam_t_diff->GetXaxis()->SetTitleFont(32);
   h_Mandelstam_t_diff->GetXaxis()->SetTitleSize(0.06);
	h_Mandelstam_t_diff->GetXaxis()->SetTitleOffset(0.7);
   h_Mandelstam_t_diff->SetYTitle("Counts");
	h_Mandelstam_t_diff->GetYaxis()->CenterTitle(1);
	h_Mandelstam_t_diff->GetYaxis()->SetTitleFont(32);
   h_Mandelstam_t_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_Mandelstam_u = new TH1F("h_Mandelstam_u","Mandelstam variable u",200,0,7);
   TH1F *h_Mandelstam_u_1 = new TH1F("h_Mandelstam_u_1","Mandelstam variable u",200,0,7);
   h_Mandelstam_u->SetXTitle("|u| / (GeV/c)^{2}");
	h_Mandelstam_u->GetXaxis()->CenterTitle(1);
	h_Mandelstam_u->GetXaxis()->SetTitleFont(32);
   h_Mandelstam_u->GetXaxis()->SetTitleSize(0.06);
	h_Mandelstam_u->GetXaxis()->SetTitleOffset(0.7);
   h_Mandelstam_u->SetYTitle("Counts");
	h_Mandelstam_u->GetYaxis()->CenterTitle(1);
	h_Mandelstam_u->GetYaxis()->SetTitleFont(32);
   h_Mandelstam_u->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_Mandelstam_u_diff = new TH1F("h_Mandelstam_u_diff","Mandelstam variable u diff between smulation and generator",100,-1,1);
   h_Mandelstam_u_diff->SetXTitle("Diff |u| / (GeV/c)^{2}");
	h_Mandelstam_u_diff->GetXaxis()->CenterTitle(1);
	h_Mandelstam_u_diff->GetXaxis()->SetTitleFont(32);
   h_Mandelstam_u_diff->GetXaxis()->SetTitleSize(0.06);
	h_Mandelstam_u_diff->GetXaxis()->SetTitleOffset(0.7);
   h_Mandelstam_u_diff->SetYTitle("Counts");
	h_Mandelstam_u_diff->GetYaxis()->CenterTitle(1);
	h_Mandelstam_u_diff->GetYaxis()->SetTitleFont(32);
   h_Mandelstam_u_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_Mandelstam_u_t_1 = new TH1F("h_Mandelstam_u_t_1","Mandelstam variable Max{|u|, |t|}",200,0,7);
   TH1F* h_Mandelstam_u_t = new TH1F("h_Mandelstam_u_t","Mandelstam variable Max{|u|, |t|}",200,0,7);
   h_Mandelstam_u_t->SetXTitle("Max{|u|, |t|} / (GeV/c)^{2}");
	h_Mandelstam_u_t->GetXaxis()->CenterTitle(1);
	h_Mandelstam_u_t->GetXaxis()->SetTitleFont(32);
   h_Mandelstam_u_t->GetXaxis()->SetTitleSize(0.06);
	h_Mandelstam_u_t->GetXaxis()->SetTitleOffset(0.7);
   h_Mandelstam_u_t->SetYTitle("Counts");
	h_Mandelstam_u_t->GetYaxis()->CenterTitle(1);
	h_Mandelstam_u_t->GetYaxis()->SetTitleFont(32);
   h_Mandelstam_u_t->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_Mandelstam_u_t_min_1 = new TH1F("h_Mandelstam_u_t_min_1","Mandelstam variable Min{|u|, |t|}",200,0,7);
   TH1F* h_Mandelstam_u_t_min = new TH1F("h_Mandelstam_u_t_min","Mandelstam variable Min{|u|, |t|}",200,0,7);
   // TH1F* h_Mandelstam_u_t_min = new TH1F("h_Mandelstam_u_t_min","Mandelstam variable Min{|u|, |t|}",15,0.2,4.7);
   h_Mandelstam_u_t_min->SetXTitle("Min{|u|, |t|} / (GeV/c)^{2}");
	h_Mandelstam_u_t_min->GetXaxis()->CenterTitle(1);
	h_Mandelstam_u_t_min->GetXaxis()->SetTitleFont(32);
   h_Mandelstam_u_t_min->GetXaxis()->SetTitleSize(0.06);
	h_Mandelstam_u_t_min->GetXaxis()->SetTitleOffset(0.7);
   h_Mandelstam_u_t_min->SetYTitle("Counts");
	h_Mandelstam_u_t_min->GetYaxis()->CenterTitle(1);
	h_Mandelstam_u_t_min->GetYaxis()->SetTitleFont(32);
   h_Mandelstam_u_t_min->GetYaxis()->SetTitleSize(0.04);

   // TLorentzVector Pbeam0, Pmiss;
   // Pbeam0.SetPxPyPzE(0.,0.,P_12C_Real,sqrt(pow(P_12C_Real,2)+pow(m_12C,2)));
   // Pmiss.SetPxPyPzE(Px_left+Px_right,Py_left+Py_right,Pz_left+Pz_right,E_left+E_right-m_p);
   // Pmiss.Boost(-Pbeam0.BoostVector());
   // M_miss = sqrt(pow(Pmiss.E(),2)-pow(Pmiss.Px(),2)-pow(Pmiss.Py(),2)-pow(Pmiss.Pz(),2));
   // ---------------PLOT reconstruction momentum of protons----------------
   TH1F *h_p1x = new TH1F("p1x","P1_{ x} in lab  system",200,0.5,1.5);
   TH1F *h_p1x_1 = new TH1F("p1x_1","P1_{ x} in lab  system",200,0.5,1.5);
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

   TH1F *h_p1x_diff_1 = new TH1F("p1x_diff_1","Simulation and Reconstruction P1_{ x} difference in lab  system",200,-1,1);
   h_p1x_diff_1->SetXTitle("P1_{x} difference / GeV");
	h_p1x_diff_1->GetXaxis()->CenterTitle(1);
	h_p1x_diff_1->GetXaxis()->SetTitleFont(32);
   h_p1x_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p1x_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p1x_diff_1->SetYTitle("Counts");
	h_p1x_diff_1->GetYaxis()->CenterTitle(1);
	h_p1x_diff_1->GetYaxis()->SetTitleFont(32);
   h_p1x_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1y = new TH1F("p1y","P1_{ y} in lab system",200,-1,1);
   TH1F *h_p1y_1 = new TH1F("p1y_1","P1_{ y} in lab system",200,-1,1);
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

   TH1F *h_p1y_diff_1 = new TH1F("p1y_diff_1","Simulation and Reconstruction P1_{ y} difference in lab  system",200,-1,1);
   h_p1y_diff_1->SetXTitle("P1_{y} difference / GeV");
	h_p1y_diff_1->GetXaxis()->CenterTitle(1);
	h_p1y_diff_1->GetXaxis()->SetTitleFont(32);
   h_p1y_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p1y_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p1y_diff_1->SetYTitle("Counts");
	h_p1y_diff_1->GetYaxis()->CenterTitle(1);
	h_p1y_diff_1->GetYaxis()->SetTitleFont(32);
   h_p1y_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1z = new TH1F("p1z","P1_{ z} in lab reference system",200,0.5,4);
   TH1F *h_p1z_1 = new TH1F("p1z_1","P1_{ z} in lab reference system",00,0.5,4);
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

   TH1F *h_p1z_diff_1 = new TH1F("p1z_diff_1","Simulation and Reconstruction P1_{ z} difference in lab  system",200,-1,1);
   h_p1z_diff_1->SetXTitle("P1_{z} difference / GeV");
	h_p1z_diff_1->GetXaxis()->CenterTitle(1);
	h_p1z_diff_1->GetXaxis()->SetTitleFont(32);
   h_p1z_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p1z_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p1z_diff_1->SetYTitle("Counts");
	h_p1z_diff_1->GetYaxis()->CenterTitle(1);
	h_p1z_diff_1->GetYaxis()->SetTitleFont(32);
   h_p1z_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_E1 = new TH1F("P1","P1 in lab system",200,1,4);
   TH1F *h_E1_1 = new TH1F("P1_1","P1 in lab system",200,1,4);
   h_E1->SetXTitle("P1 / GeV");
   // h_E1->GetXaxis()->SetNdivisions(10,kTRUE);
	h_E1->GetXaxis()->CenterTitle(1);
	h_E1->GetXaxis()->SetTitleFont(32);
   h_E1->GetXaxis()->SetTitleSize(0.06);
	h_E1->GetXaxis()->SetTitleOffset(0.7);
   h_E1->SetYTitle("Counts");
	h_E1->GetYaxis()->CenterTitle(1);
	h_E1->GetYaxis()->SetTitleFont(32);
   h_E1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1_diff_1 = new TH1F("p1_diff_1","Simulation and Reconstruction P1 difference in lab  system",200,-1,1);
   h_p1_diff_1->SetXTitle("P1 difference / GeV");
	h_p1_diff_1->GetXaxis()->CenterTitle(1);
	h_p1_diff_1->GetXaxis()->SetTitleFont(32);
   h_p1_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p1_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p1_diff_1->SetYTitle("Counts");
	h_p1_diff_1->GetYaxis()->CenterTitle(1);
	h_p1_diff_1->GetYaxis()->SetTitleFont(32);
   h_p1_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2x = new TH1F("p2x","P2_{ x} in lab system",200,-1.5,-0.5);
   TH1F *h_p2x_1 = new TH1F("p2x_1","P2_{ x} in lab system",200,-1.5,-0.5);
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

   TH1F *h_p2x_diff_1 = new TH1F("p2x_diff_1","Simulation and Reconstruction P2_{ x} difference in lab  system",200,-1,1);
   h_p2x_diff_1->SetXTitle("P2_{x} difference / GeV");
	h_p2x_diff_1->GetXaxis()->CenterTitle(1);
	h_p2x_diff_1->GetXaxis()->SetTitleFont(32);
   h_p2x_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p2x_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p2x_diff_1->SetYTitle("Counts");
	h_p2x_diff_1->GetYaxis()->CenterTitle(1);
	h_p2x_diff_1->GetYaxis()->SetTitleFont(32);
   h_p2x_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2y = new TH1F("p2y","P2_{ y} in lab system",200,-1,1);
   TH1F *h_p2y_1 = new TH1F("p2y_1","P2_{ y} in lab system",200,-1,1);
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

   TH1F *h_p2y_diff_1 = new TH1F("p2y_diff_1","Simulation and Reconstruction P2_{ y} difference in lab  system",200,-1,1);
   h_p2y_diff_1->SetXTitle("P2_{y} difference / GeV");
	h_p2y_diff_1->GetXaxis()->CenterTitle(1);
	h_p2y_diff_1->GetXaxis()->SetTitleFont(32);
   h_p2y_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p2y_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p2y_diff_1->SetYTitle("Counts");
	h_p2y_diff_1->GetYaxis()->CenterTitle(1);
	h_p2y_diff_1->GetYaxis()->SetTitleFont(32);
   h_p2y_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2z = new TH1F("p2z","P2_{ z} in lab system",200,0.5,4);
   TH1F *h_p2z_1 = new TH1F("p2z_1","P2_{ z} in lab system",200,0.5,4);
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

   TH1F *h_p2z_diff_1 = new TH1F("p2z_diff_1","Simulation and Reconstruction P2_{ z} difference in lab  system",200,-1,1);
   h_p2z_diff_1->SetXTitle("P2_{z} difference / GeV");
	h_p2z_diff_1->GetXaxis()->CenterTitle(1);
	h_p2z_diff_1->GetXaxis()->SetTitleFont(32);
   h_p2z_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p2z_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p2z_diff_1->SetYTitle("Counts");
	h_p2z_diff_1->GetYaxis()->CenterTitle(1);
	h_p2z_diff_1->GetYaxis()->SetTitleFont(32);
   h_p2z_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_E2 = new TH1F("P2","P2 in lab system",200,1,4);
   TH1F *h_E2_1 = new TH1F("P2_1","P2 in lab system",200,1,4);
   h_E2->SetXTitle("P2 / GeV");
   // h_E2->GetXaxis()->SetNdivisions(10,kTRUE);
	h_E2->GetXaxis()->CenterTitle(1);
	h_E2->GetXaxis()->SetTitleFont(32);
   h_E2->GetXaxis()->SetTitleSize(0.06);
	h_E2->GetXaxis()->SetTitleOffset(0.7);
   h_E2->SetYTitle("Counts");
	h_E2->GetYaxis()->CenterTitle(1);
	h_E2->GetYaxis()->SetTitleFont(32);
   h_E2->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2_diff_1 = new TH1F("p2_diff_1","Simulation and Reconstruction P2 difference in lab  system",200,-1,1);
   h_p2_diff_1->SetXTitle("P2 difference / GeV");
	h_p2_diff_1->GetXaxis()->CenterTitle(1);
	h_p2_diff_1->GetXaxis()->SetTitleFont(32);
   h_p2_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p2_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p2_diff_1->SetYTitle("Counts");
	h_p2_diff_1->GetYaxis()->CenterTitle(1);
	h_p2_diff_1->GetYaxis()->SetTitleFont(32);
   h_p2_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1xp2x = new TH1F("p_miss_x","Pmiss_{ x} in ^{12}C reference system",200,-1,1);
   TH1F *h_p1xp2x_1 = new TH1F("p_miss_x_1","Pmiss_{ x} from generator in ^{12}C reference system",200,-1,1);
   TH1F *h_p1xp2x_2 = new TH1F("p_miss_x_2","Pmiss_{ x} in ^{12}C reference system",200,-1,1);
   h_p1xp2x->SetXTitle("Pmiss_{ x} / GeV#bulletc^{-1} ");
   // h_p1xp2x->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1xp2x->GetXaxis()->CenterTitle(1);
	h_p1xp2x->GetXaxis()->SetTitleFont(32);
   h_p1xp2x->GetXaxis()->SetTitleSize(0.06);
	h_p1xp2x->GetXaxis()->SetTitleOffset(0.7);
   h_p1xp2x->SetYTitle("Counts");
	h_p1xp2x->GetYaxis()->CenterTitle(1);
	h_p1xp2x->GetYaxis()->SetTitleFont(32);
   h_p1xp2x->GetYaxis()->SetTitleSize(0.04);
   h_p1xp2x_1->SetXTitle("Pmiss_{ x} / GeV#bulletc^{-1} ");
	h_p1xp2x_1->GetXaxis()->CenterTitle(1);
	h_p1xp2x_1->GetXaxis()->SetTitleFont(32);
   h_p1xp2x_1->GetXaxis()->SetTitleSize(0.06);
	h_p1xp2x_1->GetXaxis()->SetTitleOffset(0.7);
   h_p1xp2x_1->SetYTitle("Counts");
	h_p1xp2x_1->GetYaxis()->CenterTitle(1);
	h_p1xp2x_1->GetYaxis()->SetTitleFont(32);
   h_p1xp2x_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p_miss_x_diff_1 = new TH1F("p_miss_x_diff_1","Simulation and Reconstruction Pmiss_{ x} difference in ^{12}C reference system",200,-1,1);
   h_p_miss_x_diff_1->SetXTitle("Pmiss_{ x} / GeV#bulletc^{-1} ");
	h_p_miss_x_diff_1->GetXaxis()->CenterTitle(1);
	h_p_miss_x_diff_1->GetXaxis()->SetTitleFont(32);
   h_p_miss_x_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p_miss_x_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p_miss_x_diff_1->SetYTitle("Counts");
	h_p_miss_x_diff_1->GetYaxis()->CenterTitle(1);
	h_p_miss_x_diff_1->GetYaxis()->SetTitleFont(32);
   h_p_miss_x_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1yp2y = new TH1F("p_miss_y","Pmiss_{ y}  in ^{12}C reference system",200,-1,1);
   TH1F *h_p1yp2y_1 = new TH1F("p_miss_y_1","Pmiss_{ y} from generator in ^{12}C reference system",200,-1,1);
   TH1F *h_p1yp2y_2 = new TH1F("p_miss_y_2","Pmiss_{ y}  in ^{12}C reference system",200,-1,1);
   h_p1yp2y->SetXTitle("Pmiss_{ y} / GeV#bulletc^{-1}");
   // h_p1yp2y->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1yp2y->GetXaxis()->CenterTitle(1);
	h_p1yp2y->GetXaxis()->SetTitleFont(32);
   h_p1yp2y->GetXaxis()->SetTitleSize(0.06);
	h_p1yp2y->GetXaxis()->SetTitleOffset(0.7);
   h_p1yp2y->SetYTitle("Counts");
	h_p1yp2y->GetYaxis()->CenterTitle(1);
	h_p1yp2y->GetYaxis()->SetTitleFont(32);
   h_p1yp2y->GetYaxis()->SetTitleSize(0.04);
   h_p1yp2y_1->SetXTitle("Pmiss_{ y} / GeV#bulletc^{-1}");
	h_p1yp2y_1->GetXaxis()->CenterTitle(1);
	h_p1yp2y_1->GetXaxis()->SetTitleFont(32);
   h_p1yp2y_1->GetXaxis()->SetTitleSize(0.06);
	h_p1yp2y_1->GetXaxis()->SetTitleOffset(0.7);
   h_p1yp2y_1->SetYTitle("Counts");
	h_p1yp2y_1->GetYaxis()->CenterTitle(1);
	h_p1yp2y_1->GetYaxis()->SetTitleFont(32);
   h_p1yp2y_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p_miss_y_diff_1 = new TH1F("p_miss_y_diff_1","Simulation and Reconstruction Pmiss_{ y} difference in ^{12}C reference system",200,-1,1);
   h_p_miss_y_diff_1->SetXTitle("Pmiss_{ y} / GeV#bulletc^{-1} ");
	h_p_miss_y_diff_1->GetXaxis()->CenterTitle(1);
	h_p_miss_y_diff_1->GetXaxis()->SetTitleFont(32);
   h_p_miss_y_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p_miss_y_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p_miss_y_diff_1->SetYTitle("Counts");
	h_p_miss_y_diff_1->GetYaxis()->CenterTitle(1);
	h_p_miss_y_diff_1->GetYaxis()->SetTitleFont(32);
   h_p_miss_y_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1zp2z = new TH1F("p_miss_z","Pmiss_{ z} in ^{12}C reference system",200,-1,1);
   TH1F *h_p1zp2z_1 = new TH1F("p_miss_z_1","Pmiss_{ z} in ^{12}C reference system",200,-1,1);
   TH1F *h_p1zp2z_2 = new TH1F("p_miss_z_2","Pmiss_{ z} in ^{12}C reference system",200,-1,1);
   h_p1zp2z->SetXTitle("Pmiss_{ z} / GeV#bulletc^{-1}");
   // h_p1zp2z->GetXaxis()->SetNdivisions(10,kTRUE);
	h_p1zp2z->GetXaxis()->CenterTitle(1);
	h_p1zp2z->GetXaxis()->SetTitleFont(32);
   h_p1zp2z->GetXaxis()->SetTitleSize(0.06);
	h_p1zp2z->GetXaxis()->SetTitleOffset(0.7);
   h_p1zp2z->SetYTitle("Counts");
	h_p1zp2z->GetYaxis()->CenterTitle(1);
	h_p1zp2z->GetYaxis()->SetTitleFont(32);
   h_p1zp2z->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_pmiss_z_plus_pfrag_z = new TH1F("p_miss_z_plus_pfrag_z","Pmiss_{ z} + Pfrag_{ z} in ^{12}C reference system",100,-1,1);
   TH1F *h_pmiss_z_plus_pfrag_z_generator = new TH1F("p_miss_z_plus_pfrag_z_generator","Pmiss_{ z} + Pfrag_{ z} in ^{12}C reference system",100,-1,1);
   h_pmiss_z_plus_pfrag_z->SetXTitle("Total Momentum / GeV#bulletc^{-1}");
	h_pmiss_z_plus_pfrag_z->GetXaxis()->CenterTitle(1);
	h_pmiss_z_plus_pfrag_z->GetXaxis()->SetTitleFont(32);
   h_pmiss_z_plus_pfrag_z->GetXaxis()->SetTitleSize(0.06);
	h_pmiss_z_plus_pfrag_z->GetXaxis()->SetTitleOffset(0.7);
   h_pmiss_z_plus_pfrag_z->SetYTitle("Counts");
	h_pmiss_z_plus_pfrag_z->GetYaxis()->CenterTitle(1);
	h_pmiss_z_plus_pfrag_z->GetYaxis()->SetTitleFont(32);

   TH1F *h_p_miss_z_diff_1 = new TH1F("p_miss_z_diff_1","Simulation and Reconstruction Pmiss_{ z} difference in ^{12}C reference system",200,-1,1);
   h_p_miss_z_diff_1->SetXTitle("Pmiss_{ z} / GeV#bulletc^{-1} ");
	h_p_miss_z_diff_1->GetXaxis()->CenterTitle(1);
	h_p_miss_z_diff_1->GetXaxis()->SetTitleFont(32);
   h_p_miss_z_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p_miss_z_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p_miss_z_diff_1->SetYTitle("Counts");
	h_p_miss_z_diff_1->GetYaxis()->CenterTitle(1);
	h_p_miss_z_diff_1->GetYaxis()->SetTitleFont(32);
   h_p_miss_z_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_1 = new TH1F("P_miss_1","P_{ miss} in ^{12}C reference system",200,0,1.);
   TH1F *h_P_miss_2 = new TH1F("P_miss_2","P_{ miss} in ^{12}C reference system",200,0,1.);
   TH1F *h_P_miss = new TH1F("P_miss","P_{ miss} in ^{12}C reference system",200,0,1.); 
   // h_P_miss->SetStats(0);
   h_P_miss->SetXTitle("P_{ miss} / GeV#bulletc^{-1}");
   // h_P_miss->GetXaxis()->SetNdivisions(10,kTRUE);
	h_P_miss->GetXaxis()->CenterTitle(1);
	h_P_miss->GetXaxis()->SetTitleFont(32);
   h_P_miss->GetXaxis()->SetTitleSize(0.06);
	h_P_miss->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss->SetYTitle("Counts");
	h_P_miss->GetYaxis()->CenterTitle(1);
	h_P_miss->GetYaxis()->SetTitleFont(32);
   h_P_miss->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_beta_left = new TH1F("beta_left","#beta for left particle",200,0.7,1.);
   h_beta_left->SetXTitle("#beta");
	h_beta_left->GetXaxis()->CenterTitle(1);
	h_beta_left->GetXaxis()->SetTitleFont(32);
   h_beta_left->GetXaxis()->SetTitleSize(0.06);
	h_beta_left->GetXaxis()->SetTitleOffset(0.7);
   h_beta_left->SetYTitle("Counts");
	h_beta_left->GetYaxis()->CenterTitle(1);
	h_beta_left->GetYaxis()->SetTitleFont(32);
   h_beta_left->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_beta_right = new TH1F("beta_right","#beta for right particle",200,0.7,1.);
   h_beta_right->SetXTitle("#beta");
	h_beta_right->GetXaxis()->CenterTitle(1);
	h_beta_right->GetXaxis()->SetTitleFont(32);
   h_beta_right->GetXaxis()->SetTitleSize(0.06);
	h_beta_right->GetXaxis()->SetTitleOffset(0.7);
   h_beta_right->SetYTitle("Counts");
	h_beta_right->GetYaxis()->CenterTitle(1);
	h_beta_right->GetYaxis()->SetTitleFont(32);
   h_beta_right->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_beta_left_vs_right = new TH2F("beta_left_vs_right","#beta_{left} vs #beta_{right}",50,0.85,1.,50,0.85,1.);
   h_beta_left_vs_right->SetXTitle("#beta_{left}");
	h_beta_left_vs_right->GetXaxis()->CenterTitle(1);
	h_beta_left_vs_right->GetXaxis()->SetTitleFont(32);
   h_beta_left_vs_right->GetXaxis()->SetTitleSize(0.06);
	h_beta_left_vs_right->GetXaxis()->SetTitleOffset(0.7);
   h_beta_left_vs_right->SetYTitle("#beta_{right}");
	h_beta_left_vs_right->GetYaxis()->CenterTitle(1);
	h_beta_left_vs_right->GetYaxis()->SetTitleFont(32);
   h_beta_left_vs_right->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_src = new TH1F("P_miss_src","P_{ miss} in ^{12}C reference system",80,0,0.8); 
   // h_P_miss_src->SetStats(0);
   h_P_miss_src->SetXTitle("P_{ miss} / GeV#bulletc^{-1}");
   // h_P_miss_src->GetXaxis()->SetNdivisions(10,kTRUE);
	h_P_miss_src->GetXaxis()->CenterTitle(1);
	h_P_miss_src->GetXaxis()->SetTitleFont(32);
   h_P_miss_src->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_src->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_src->SetYTitle("Counts");
	h_P_miss_src->GetYaxis()->CenterTitle(1);
	h_P_miss_src->GetYaxis()->SetTitleFont(32);
   h_P_miss_src->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p_miss_diff_1 = new TH1F("p_miss_diff_1","Simulation and Reconstruction P_{miss} difference in ^{12}C reference system",200,-1,1);
   h_p_miss_diff_1->SetXTitle("P_{miss} / GeV#bulletc^{-1} ");
	h_p_miss_diff_1->GetXaxis()->CenterTitle(1);
	h_p_miss_diff_1->GetXaxis()->SetTitleFont(32);
   h_p_miss_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_p_miss_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_p_miss_diff_1->SetYTitle("Counts");
	h_p_miss_diff_1->GetYaxis()->CenterTitle(1);
	h_p_miss_diff_1->GetYaxis()->SetTitleFont(32);
   h_p_miss_diff_1->GetYaxis()->SetTitleSize(0.04);

   // TH1F *h_E_miss = new TH1F("E_miss","E_{ miss} in ^{12}C reference system",60,-0.9,0.9);
   // TH1F *h_E_miss_1 = new TH1F("E_miss_1","E_{ miss} in ^{12}C reference system",60,-0.9,0.9);
   // TH1F *h_E_miss_2 = new TH1F("E_miss_2","E_{ miss} in ^{12}C reference system",60,-0.9,0.9);
   TH1F *h_E_miss_with_tail = new TH1F("E_miss_with_tail","E_{ miss} in ^{12}C reference system",200,-1,1.5);
   TH1F *h_E_miss_with_tail_1 = new TH1F("E_miss_with_tail_1","E_{ miss} in ^{12}C reference system",200,-1,1.5);
   TH1F *h_E_miss = new TH1F("E_miss","E_{ miss} in ^{12}C reference system",200,-1,1.5);
   TH1F *h_E_miss_1 = new TH1F("E_miss_1","E_{ miss} in ^{12}C reference system",200,-1,1.5);
   TH1F *h_E_miss_2 = new TH1F("E_miss_2","E_{ miss} in ^{12}C reference system",200,-1,1.5);
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

   TH1F *h_E_miss_src = new TH1F("E_miss_src","E_{ miss} in ^{12}C reference system",60,-0.2,0.4);
   h_E_miss_src->SetXTitle("E_{ miss} / GeV");
   // h_E_miss_src->GetXaxis()->SetNdivisions(10,kTRUE);
	h_E_miss_src->GetXaxis()->CenterTitle(1);
	h_E_miss_src->GetXaxis()->SetTitleFont(32);
   h_E_miss_src->GetXaxis()->SetTitleSize(0.06);
	h_E_miss_src->GetXaxis()->SetTitleOffset(0.7);
   h_E_miss_src->SetYTitle("Counts");
	h_E_miss_src->GetYaxis()->CenterTitle(1);
	h_E_miss_src->GetYaxis()->SetTitleFont(32);
   h_E_miss_src->GetYaxis()->SetTitleSize(0.04);

   // TH2F *h_Emiss_Pmiss = new TH2F("h_Emiss_Pmiss","Emiss vs. Pmiss;Pmiss (GeV/c);Emiss (GeV/c)",160,0,0.8,120,-0.2,0.4);
   TH2F *h_Emiss_Pmiss = new TH2F("h_Emiss_Pmiss","Emiss vs. Pmiss;Pmiss (GeV/c);Emiss (GeV/c)",500,0,2.5,480,-1.6,0.8);
   // h_Emiss_Pmiss->SetXTitle("P_{miss} (GeV/c)");
   // h_Emiss_Pmiss->GetXaxis()->SetNdivisions(10,kTRUE);
	// h_Emiss_Pmiss->GetXaxis()->CenterTitle(1);
	// h_Emiss_Pmiss->GetXaxis()->SetTitleFont(22);
   // h_Emiss_Pmiss->GetXaxis()->SetTitleSize(0.05);
	// h_Emiss_Pmiss->GetXaxis()->SetTitleOffset(0.7);
   // h_Emiss_Pmiss->SetYTitle("E_{miss} (GeV/c)");
	// h_Emiss_Pmiss->GetYaxis()->CenterTitle(1);
	// h_Emiss_Pmiss->GetYaxis()->SetTitleFont(22);
   // h_Emiss_Pmiss->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_E_miss_diff_1 = new TH1F("E_miss_diff_1","Simulation and Reconstruction E_{miss} difference in ^{12}C reference system",200,-1,1);
   h_E_miss_diff_1->SetXTitle("E_{miss} / GeV#bulletc^{-1} ");
	h_E_miss_diff_1->GetXaxis()->CenterTitle(1);
	h_E_miss_diff_1->GetXaxis()->SetTitleFont(32);
   h_E_miss_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_E_miss_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_E_miss_diff_1->SetYTitle("Counts");
	h_E_miss_diff_1->GetYaxis()->CenterTitle(1);
	h_E_miss_diff_1->GetYaxis()->SetTitleFont(32);
   h_E_miss_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_M_miss = new TH1F("M_miss","M_{ miss} in ^{12}C reference system",100,0,2);
   TH1F *h_M_miss_1 = new TH1F("M_miss_1","M_{ miss} in ^{12}C reference system",100,0,2);
   TH1F *h_M_miss_2 = new TH1F("M_miss_2","M_{ miss} in ^{12}C reference system",100,0,2);
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

   TH1F *h_M_miss_diff_1 = new TH1F("M_miss_diff_1","Simulation and Reconstruction M_{miss} difference in ^{12}C reference system",200,-1,1);
   h_M_miss_diff_1->SetXTitle("M_{miss} / GeV#bulletc^{-1} ");
	h_M_miss_diff_1->GetXaxis()->CenterTitle(1);
	h_M_miss_diff_1->GetXaxis()->SetTitleFont(32);
   h_M_miss_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_diff_1->SetYTitle("Counts");
	h_M_miss_diff_1->GetYaxis()->CenterTitle(1);
	h_M_miss_diff_1->GetYaxis()->SetTitleFont(32);
   h_M_miss_diff_1->GetYaxis()->SetTitleSize(0.04);

   // TH1F *h_M_miss_square = new TH1F("M_miss_square","M^{2}_{ miss } in ^{12}C reference system",60,0.08,2);
   // TH1F *h_M_miss_square_1 = new TH1F("M_miss_square_1","M^{2}_{ miss } in ^{12}C reference system",60,0.08,2);
   // TH1F *h_M_miss_square_2 = new TH1F("M_miss_square_2","M^{2}_{ miss } in ^{12}C reference system",60,0.08,2);
   TH1F *h_M_miss_square = new TH1F("M_miss_square","M^{2}_{ miss } in ^{12}C reference system",200,-2,2);
   TH1F *h_M_miss_square_1 = new TH1F("M_miss_square_1","M^{2}_{ miss } in ^{12}C reference system",200,-2,2);
   TH1F *h_M_miss_square_2 = new TH1F("M_miss_square_2","M^{2}_{ miss } in ^{12}C reference system",200,-2,2);
   TH1F *h_M_miss_square_mintuCut = new TH1F("M_miss_square_mintuCut","M^{2}_{ miss } in ^{12}C reference system with min(t,u) < 1.8",200,-2,2);
   h_M_miss_square->SetXTitle("M^{2}_{ miss } / GeV");
   // h_M_miss_square->GetXaxis()->SetNdivisions(10,kTRUE);
	h_M_miss_square->GetXaxis()->CenterTitle(1);
	h_M_miss_square->GetXaxis()->SetTitleFont(32);
   h_M_miss_square->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_square->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_square->SetYTitle("Counts");
	h_M_miss_square->GetYaxis()->CenterTitle(1);
	h_M_miss_square->GetYaxis()->SetTitleFont(32);
   h_M_miss_square->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_M_miss_square_beforeQE = new TH1F("M_miss_square_beforeQE","M^{2}_{ miss } in ^{12}C reference system",200,-2,2);
   TH1F *h_M_miss_square_beforeQE_1 = new TH1F("M_miss_square_beforeQE_1","M^{2}_{ miss } in ^{12}C reference system",200,-2,2);
   h_M_miss_square_beforeQE->SetXTitle("M^{2}_{ miss } / GeV");
   // h_M_miss_square_beforeQE->GetXaxis()->SetNdivisions(10,kTRUE);
	h_M_miss_square_beforeQE->GetXaxis()->CenterTitle(1);
	h_M_miss_square_beforeQE->GetXaxis()->SetTitleFont(32);
   h_M_miss_square_beforeQE->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_square_beforeQE->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_square_beforeQE->SetYTitle("Counts");
	h_M_miss_square_beforeQE->GetYaxis()->CenterTitle(1);
	h_M_miss_square_beforeQE->GetYaxis()->SetTitleFont(32);
   h_M_miss_square_beforeQE->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_M_miss_square_diff_1 = new TH1F("M_miss_square_diff_1","Simulation and Reconstruction M^{2}_{ miss } difference in ^{12}C reference system",200,-1,1);
   h_M_miss_square_diff_1->SetXTitle("M^{2}_{ miss } / GeV#bulletc^{-1} ");
	h_M_miss_square_diff_1->GetXaxis()->CenterTitle(1);
	h_M_miss_square_diff_1->GetXaxis()->SetTitleFont(32);
   h_M_miss_square_diff_1->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_square_diff_1->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_square_diff_1->SetYTitle("Counts");
	h_M_miss_square_diff_1->GetYaxis()->CenterTitle(1);
	h_M_miss_square_diff_1->GetYaxis()->SetTitleFont(32);
   h_M_miss_square_diff_1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_opening_theta = new TH1F("opening_theta","Lab-frame #theta opening angle",120,50,80);//180 90
   TH1F *h_opening_theta_1 = new TH1F("opening_theta_1","Lab-frame #theta opening angle",120,50,80);
   TH1F *h_opening_theta_2 = new TH1F("opening_theta_2","Lab-frame #theta opening angle",120,50,80);
   h_opening_theta->SetXTitle(" #theta_{1} + #theta_{ 2} / degree ");
   // h_opening_theta->GetXaxis()->SetNdivisions(10,kTRUE);
	h_opening_theta->GetXaxis()->CenterTitle(1);
	h_opening_theta->GetXaxis()->SetTitleFont(32);
   h_opening_theta->GetXaxis()->SetTitleSize(0.06);
	h_opening_theta->GetXaxis()->SetTitleOffset(0.7);
   h_opening_theta->SetYTitle("Counts");
	h_opening_theta->GetYaxis()->CenterTitle(1);
	h_opening_theta->GetYaxis()->SetTitleFont(32);
   h_opening_theta->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_opening_phi = new TH1F("opening_phi","Lab-frame #phi opening angle",200,-180,180);
   TH1F *h_opening_phi_1 = new TH1F("opening_phi_1","Lab-frame #phi opening angle",200,-180,180);
   TH1F *h_opening_phi_2 = new TH1F("opening_phi_2","Lab-frame #phi opening angle",200,-180,180);
   h_opening_phi->SetXTitle("#phi_{1} - #phi_{2} / degree");
   // h_opening_phi->GetXaxis()->SetNdivisions(10,kTRUE);
	h_opening_phi->GetXaxis()->CenterTitle(1);
	h_opening_phi->GetXaxis()->SetTitleFont(32);
   h_opening_phi->GetXaxis()->SetTitleSize(0.06);
	h_opening_phi->GetXaxis()->SetTitleOffset(0.7);
   h_opening_phi->SetYTitle("Counts");
	h_opening_phi->GetYaxis()->CenterTitle(1);
	h_opening_phi->GetYaxis()->SetTitleFont(32);
   h_opening_phi->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_scattering_angle = new TH1F("scattering_angle","Scattering angle #Theta* in center of mass frame",100,0.,180.);
   TH1F *h_scattering_angle_1 = new TH1F("scattering_angle_1","Scattering angle #Theta* in center of mass frame",100,0.,180.);
   TH1F *h_scattering_angle_2 = new TH1F("scattering_angle_2","Scattering angle #Theta* in center of mass frame",100,0.,180.);
   h_scattering_angle->SetXTitle("#Theta* (^{o})");
   // h_scattering_angle->GetXaxis()->SetNdivisions(10,kTRUE);
	h_scattering_angle->GetXaxis()->CenterTitle(1);
	h_scattering_angle->GetXaxis()->SetTitleFont(32);
   h_scattering_angle->GetXaxis()->SetTitleSize(0.06);
	h_scattering_angle->GetXaxis()->SetTitleOffset(0.7);
   h_scattering_angle->SetYTitle("Counts");
	h_scattering_angle->GetYaxis()->CenterTitle(1);
	h_scattering_angle->GetYaxis()->SetTitleFont(32);
   h_scattering_angle->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_E_theta = new TH2F("E_theta","^{12}C rest frame E_{ miss} vs. lab-frame (#theta_{1} + #theta_{2})",100,-1,1,100,50,90);
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

   TH2F *h_E_theta_all = new TH2F("E_theta_all","^{12}C rest frame E_{ miss} vs. lab-frame (#theta_{1} + #theta_{2})",100,-1,1,100,50,90);
   h_E_theta_all->SetXTitle("E_{ miss} / GeV");
   // h_E_theta_all->GetXaxis()->SetNdivisions(10,kTRUE);
	h_E_theta_all->GetXaxis()->CenterTitle(1);
	h_E_theta_all->GetXaxis()->SetTitleFont(32);
   h_E_theta_all->GetXaxis()->SetTitleSize(0.06);
	h_E_theta_all->GetXaxis()->SetTitleOffset(0.7);
   h_E_theta_all->SetYTitle("#theta_{1} + #theta_{2} (^{o})");
	h_E_theta_all->GetYaxis()->CenterTitle(1);
	h_E_theta_all->GetYaxis()->SetTitleFont(32);
   h_E_theta_all->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta12 = new TH2F("theta1_theta2","lab-frame #theta_{1} vs. #theta_{2}",100,10,60,100,10,60);
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

   TH2F *h_theta12_all = new TH2F("theta1_theta2_all","Generator lab-frame #theta_{1} vs. #theta_{2}",100,0,90,100,0,90);
   h_theta12_all->SetXTitle("#theta_{1} (^{ o })");
   // h_theta12_all->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta12_all->GetXaxis()->CenterTitle(1);
	h_theta12_all->GetXaxis()->SetTitleFont(22);
   h_theta12_all->GetXaxis()->SetTitleSize(0.04);
	h_theta12_all->GetXaxis()->SetTitleOffset(0.7);
   h_theta12_all->SetYTitle("#theta_{2} (^{ o })");
	h_theta12_all->GetYaxis()->CenterTitle(1);
	h_theta12_all->GetYaxis()->SetTitleFont(22);
   h_theta12_all->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta12_accp = new TH2F("theta1_theta2_accp","Generator lab-frame #theta_{1} vs. #theta_{2} with acceptance cut",100,0,90,100,0,90);
   h_theta12_accp->SetXTitle("#theta_{1} (^{ o })");
   // h_theta12_accp->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta12_accp->GetXaxis()->CenterTitle(1);
	h_theta12_accp->GetXaxis()->SetTitleFont(22);
   h_theta12_accp->GetXaxis()->SetTitleSize(0.04);
	h_theta12_accp->GetXaxis()->SetTitleOffset(0.7);
   h_theta12_accp->SetYTitle("#theta_{2} (^{ o })");
	h_theta12_accp->GetYaxis()->CenterTitle(1);
	h_theta12_accp->GetYaxis()->SetTitleFont(22);
   h_theta12_accp->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_phi1_1 = new TH1F("phi1_1","#phi_{left} distribution",100,-90.,90.);
   TH1F *h_phi1 = new TH1F("phi1","#phi_{left} distribution",100,-90.,90.);
   h_phi1->SetXTitle("#phi1 (^{o})");
   // h_phi1->GetXaxis()->SetNdivisions(10,kTRUE);
	h_phi1->GetXaxis()->CenterTitle(1);
	h_phi1->GetXaxis()->SetTitleFont(32);
   h_phi1->GetXaxis()->SetTitleSize(0.06);
	h_phi1->GetXaxis()->SetTitleOffset(0.7);
   h_phi1->SetYTitle("Counts");
	h_phi1->GetYaxis()->CenterTitle(1);
	h_phi1->GetYaxis()->SetTitleFont(32);
   h_phi1->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_phi2_1 = new TH1F("phi2_1","#phi_{right} distribution",200,-180.,180.);
   TH1F *h_phi2 = new TH1F("phi2","#phi_{right} distribution",200,-180.,180.);
   h_phi2->SetXTitle("#phi2 (^{o})");
   // h_phi2->GetXaxis()->SetNdivisions(10,kTRUE);
	h_phi2->GetXaxis()->CenterTitle(1);
	h_phi2->GetXaxis()->SetTitleFont(32);
   h_phi2->GetXaxis()->SetTitleSize(0.06);
	h_phi2->GetXaxis()->SetTitleOffset(0.7);
   h_phi2->SetYTitle("Counts");
	h_phi2->GetYaxis()->CenterTitle(1);
	h_phi2->GetYaxis()->SetTitleFont(32);
   h_phi2->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_theta1 = new TH1F("theta1","#theta_{left} distribution",200,0.,90.);
   TH1F *h_theta1_1 = new TH1F("theta1_1","#theta_{left} distribution",200,0.,90.);
   h_theta1->SetXTitle("#theta1 (^{o})");
   // h_theta1->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta1->GetXaxis()->CenterTitle(1);
	h_theta1->GetXaxis()->SetTitleFont(32);
   h_theta1->GetXaxis()->SetTitleSize(0.06);
	h_theta1->GetXaxis()->SetTitleOffset(0.7);
   h_theta1->SetYTitle("Counts");
	h_theta1->GetYaxis()->CenterTitle(1);
	h_theta1->GetYaxis()->SetTitleFont(32);
   h_theta1->GetYaxis()->SetTitleSize(0.04);

   // TH1F *h_theta2 = new TH1F("theta2","#theta_{right} distribution",200,0.,90);
   // TH1F *h_theta2_1 = new TH1F("theta2_1","#theta_{right} distribution",200,0.,90);
   TH1F *h_theta2 = new TH1F("theta2","#theta_{right} distribution",200,-90.,0);
   TH1F *h_theta2_1 = new TH1F("theta2_1","#theta_{right} distribution",200,-90.,0);
   h_theta2->SetXTitle("#theta2 (^{o})");
   // h_theta2->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta2->GetXaxis()->CenterTitle(1);
	h_theta2->GetXaxis()->SetTitleFont(32);
   h_theta2->GetXaxis()->SetTitleSize(0.06);
	h_theta2->GetXaxis()->SetTitleOffset(0.7);
   h_theta2->SetYTitle("Counts");
	h_theta2->GetYaxis()->CenterTitle(1);
	h_theta2->GetYaxis()->SetTitleFont(32);
   h_theta2->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_phi12 = new TH2F("phi1_phi2","lab-frame #phi_{1} vs. #phi_{2}",60,-60,60,180,-180,180);
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

   TH2F *h_phi12_all = new TH2F("phi1_phi2_all","Generator lab-frame #phi_{1} vs. #phi_{2}",100,-90,90,100,-180,180);
   h_phi12_all->SetXTitle("#phi_{1} (^{ o })");
   // h_phi12_all->GetXaxis()->SetNdivisions(10,kTRUE);
	h_phi12_all->GetXaxis()->CenterTitle(1);
	h_phi12_all->GetXaxis()->SetTitleFont(22);
   h_phi12_all->GetXaxis()->SetTitleSize(0.05);
	h_phi12_all->GetXaxis()->SetTitleOffset(0.7);
   h_phi12_all->SetYTitle("#phi_{2} (^{ o })");
	h_phi12_all->GetYaxis()->CenterTitle(1);
	h_phi12_all->GetYaxis()->SetTitleFont(22);
   h_phi12_all->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_phi12_accp = new TH2F("phi1_phi2_accp","Generator lab-frame #phi_{1} vs. #phi_{2} with acceptance cut",100,-90,90,100,-180,180);
   h_phi12_accp->SetXTitle("#phi_{1} (^{ o })");
   // h_phi12_accp->GetXaxis()->SetNdivisions(10,kTRUE);
	h_phi12_accp->GetXaxis()->CenterTitle(1);
	h_phi12_accp->GetXaxis()->SetTitleFont(22);
   h_phi12_accp->GetXaxis()->SetTitleSize(0.05);
	h_phi12_accp->GetXaxis()->SetTitleOffset(0.7);
   h_phi12_accp->SetYTitle("#phi_{2} (^{ o })");
	h_phi12_accp->GetYaxis()->CenterTitle(1);
	h_phi12_accp->GetYaxis()->SetTitleFont(22);
   h_phi12_accp->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta_phi_all = new TH2F("theta1_phi_all","Generator lab-frame #theta vs. #phi",100,0,90,400,-180,180);
   h_theta_phi_all->SetXTitle("#theta (^{ o })");
   // h_theta_phi_all->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta_phi_all->GetXaxis()->CenterTitle(1);
	h_theta_phi_all->GetXaxis()->SetTitleFont(22);
   h_theta_phi_all->GetXaxis()->SetTitleSize(0.04);
	h_theta_phi_all->GetXaxis()->SetTitleOffset(0.7);
   h_theta_phi_all->SetYTitle("#phi (^{ o })");
	h_theta_phi_all->GetYaxis()->CenterTitle(1);
	h_theta_phi_all->GetYaxis()->SetTitleFont(22);
   h_theta_phi_all->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta_phi1_all = new TH2F("theta1_phi1_all","Generator lab-frame #theta vs. #phi_{1}",100,0,90,400,-180,180);
   h_theta_phi1_all->SetXTitle("#theta (^{ o })");
   // h_theta_phi1_all->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta_phi1_all->GetXaxis()->CenterTitle(1);
	h_theta_phi1_all->GetXaxis()->SetTitleFont(22);
   h_theta_phi1_all->GetXaxis()->SetTitleSize(0.04);
	h_theta_phi1_all->GetXaxis()->SetTitleOffset(0.7);
   h_theta_phi1_all->SetYTitle("#phi_{1} (^{ o })");
	h_theta_phi1_all->GetYaxis()->CenterTitle(1);
	h_theta_phi1_all->GetYaxis()->SetTitleFont(22);
   h_theta_phi1_all->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta_phi2_all = new TH2F("theta1_phi2_all","Generator lab-frame #theta vs. #phi_{2}",100,0,90,400,-180,180);
   h_theta_phi2_all->SetXTitle("#theta (^{ o })");
   // h_theta_phi2_all->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta_phi2_all->GetXaxis()->CenterTitle(1);
	h_theta_phi2_all->GetXaxis()->SetTitleFont(22);
   h_theta_phi2_all->GetXaxis()->SetTitleSize(0.04);
	h_theta_phi2_all->GetXaxis()->SetTitleOffset(0.7);
   h_theta_phi2_all->SetYTitle("#phi_{2} (^{ o })");
	h_theta_phi2_all->GetYaxis()->CenterTitle(1);
	h_theta_phi2_all->GetYaxis()->SetTitleFont(22);
   h_theta_phi2_all->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta_phi_accp = new TH2F("theta1_phi_accp","Generator lab-frame #theta vs. #phi with acceptance cut",100,0,90,400,-180,180);
   h_theta_phi_accp->SetXTitle("#theta (^{ o })");
   // h_theta_phi_accp->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta_phi_accp->GetXaxis()->CenterTitle(1);
	h_theta_phi_accp->GetXaxis()->SetTitleFont(22);
   h_theta_phi_accp->GetXaxis()->SetTitleSize(0.04);
	h_theta_phi_accp->GetXaxis()->SetTitleOffset(0.7);
   h_theta_phi_accp->SetYTitle("#phi (^{ o })");
	h_theta_phi_accp->GetYaxis()->CenterTitle(1);
	h_theta_phi_accp->GetYaxis()->SetTitleFont(22);
   h_theta_phi_accp->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta1_phi1 = new TH2F("h_theta1_phi1","Lab-frame #theta_{1} vs. #phi_{1}",50,10,60,60,-60,60);
   h_theta1_phi1->SetXTitle("#theta_{1} (^{ o })");
   // h_theta1_phi1->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta1_phi1->GetXaxis()->CenterTitle(1);
	h_theta1_phi1->GetXaxis()->SetTitleFont(22);
   h_theta1_phi1->GetXaxis()->SetTitleSize(0.04);
	h_theta1_phi1->GetXaxis()->SetTitleOffset(0.7);
   h_theta1_phi1->SetYTitle("#phi_{1} (^{ o })");
	h_theta1_phi1->GetYaxis()->CenterTitle(1);
	h_theta1_phi1->GetYaxis()->SetTitleFont(22);
   h_theta1_phi1->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta2_phi2 = new TH2F("h_theta2_phi2","Lab-frame #theta_{2} vs. #phi_{2}",50,10,60,180,-180,180);
   h_theta2_phi2->SetXTitle("#theta_{2} (^{ o })");
   // h_theta2_phi2->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta2_phi2->GetXaxis()->CenterTitle(1);
	h_theta2_phi2->GetXaxis()->SetTitleFont(22);
   h_theta2_phi2->GetXaxis()->SetTitleSize(0.04);
	h_theta2_phi2->GetXaxis()->SetTitleOffset(0.7);
   h_theta2_phi2->SetYTitle("#phi_{2} (^{ o })");
	h_theta2_phi2->GetYaxis()->CenterTitle(1);
	h_theta2_phi2->GetYaxis()->SetTitleFont(22);
   h_theta2_phi2->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta_phi1_accp = new TH2F("theta1_phi1_accp","Generator lab-frame #theta vs. #phi_{1} with acceptance cut",100,0,90,400,-180,180);
   h_theta_phi1_accp->SetXTitle("#theta (^{ o })");
   // h_theta_phi1_accp->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta_phi1_accp->GetXaxis()->CenterTitle(1);
	h_theta_phi1_accp->GetXaxis()->SetTitleFont(22);
   h_theta_phi1_accp->GetXaxis()->SetTitleSize(0.04);
	h_theta_phi1_accp->GetXaxis()->SetTitleOffset(0.7);
   h_theta_phi1_accp->SetYTitle("#phi_{1} (^{ o })");
	h_theta_phi1_accp->GetYaxis()->CenterTitle(1);
	h_theta_phi1_accp->GetYaxis()->SetTitleFont(22);
   h_theta_phi1_accp->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_theta_phi2_accp = new TH2F("theta1_phi2_accp","Generator lab-frame #theta vs. #phi_{2} with acceptance cut",100,0,90,400,-180,180);
   h_theta_phi2_accp->SetXTitle("#theta (^{ o })");
   // h_theta_phi2_accp->GetXaxis()->SetNdivisions(10,kTRUE);
	h_theta_phi2_accp->GetXaxis()->CenterTitle(1);
	h_theta_phi2_accp->GetXaxis()->SetTitleFont(22);
   h_theta_phi2_accp->GetXaxis()->SetTitleSize(0.04);
	h_theta_phi2_accp->GetXaxis()->SetTitleOffset(0.7);
   h_theta_phi2_accp->SetYTitle("#phi_{2} (^{ o })");
	h_theta_phi2_accp->GetYaxis()->CenterTitle(1);
	h_theta_phi2_accp->GetYaxis()->SetTitleFont(22);
   h_theta_phi2_accp->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_vertex_x = new TH1F("vertex_x","X vertex position",200,-10,10);
   TH1F *h_vertex_x_1 = new TH1F("vertex_x_1","X vertex position",200,-10,10);
   h_vertex_x->SetXTitle("X / cm");
	h_vertex_x->GetXaxis()->CenterTitle(1);
	h_vertex_x->GetXaxis()->SetTitleFont(32);
   h_vertex_x->GetXaxis()->SetTitleSize(0.06);
	h_vertex_x->GetXaxis()->SetTitleOffset(0.7);
   h_vertex_x->SetYTitle("Counts");
	h_vertex_x->GetYaxis()->CenterTitle(1);
	h_vertex_x->GetYaxis()->SetTitleFont(32);
   h_vertex_x->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_vertex_y = new TH1F("vertex_y","Y vertex position",200,-10,10);
   TH1F *h_vertex_y_1 = new TH1F("vertex_y_1","Y vertex position",200,-10,10);
   h_vertex_y->SetXTitle("X / cm");
	h_vertex_y->GetXaxis()->CenterTitle(1);
	h_vertex_y->GetXaxis()->SetTitleFont(32);
   h_vertex_y->GetXaxis()->SetTitleSize(0.06);
	h_vertex_y->GetXaxis()->SetTitleOffset(0.7);
   h_vertex_y->SetYTitle("Counts");
	h_vertex_y->GetYaxis()->CenterTitle(1);
	h_vertex_y->GetYaxis()->SetTitleFont(32);
   h_vertex_y->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_vertex_xy = new TH2F("vertex_xy","Y vertex position",200,-10,10,200,-10,10);
   TH2F *h_vertex_xy_1 = new TH2F("vertex_xy_1","Y vertex position",200,-10,10,200,-10,10);
   h_vertex_xy->SetXTitle("X / cm");
	h_vertex_xy->GetXaxis()->CenterTitle(1);
	h_vertex_xy->GetXaxis()->SetTitleFont(32);
   h_vertex_xy->GetXaxis()->SetTitleSize(0.06);
	h_vertex_xy->GetXaxis()->SetTitleOffset(0.7);
   h_vertex_xy->SetYTitle("Y / cm");
	h_vertex_xy->GetYaxis()->CenterTitle(1);
	h_vertex_xy->GetYaxis()->SetTitleFont(32);
   h_vertex_xy->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_vertex_z_1 = new TH1F("vertex_z_1","Z vertex position",80,-603,-547); // -650 -510
   TH1F *h_vertex_z_breakup = new TH1F("vertex_z_breakup","Z vertex position",80,-603,-547);
   TH1F *h_vertex_z = new TH1F("vertex_z","Z vertex position",80,-603,-547);
   h_vertex_z->SetXTitle("Z / cm");
	h_vertex_z->GetXaxis()->CenterTitle(1);
	h_vertex_z->GetXaxis()->SetTitleFont(32);
   h_vertex_z->GetXaxis()->SetTitleSize(0.06);
	h_vertex_z->GetXaxis()->SetTitleOffset(0.7);
   h_vertex_z->SetYTitle("Counts");
	h_vertex_z->GetYaxis()->CenterTitle(1);
	h_vertex_z->GetYaxis()->SetTitleFont(32);
   h_vertex_z->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_vertex_z_with_cut = new TH1F("vertex_z_with_cut","Z vertex position with cut around #Theta* of 90^{o}",100,-600,-550);
   h_vertex_z_with_cut->SetXTitle("Z / cm");
	h_vertex_z_with_cut->GetXaxis()->CenterTitle(1);
	h_vertex_z_with_cut->GetXaxis()->SetTitleFont(32);
   h_vertex_z_with_cut->GetXaxis()->SetTitleSize(0.06);
	h_vertex_z_with_cut->GetXaxis()->SetTitleOffset(0.7);
   h_vertex_z_with_cut->SetYTitle("Counts");
	h_vertex_z_with_cut->GetYaxis()->CenterTitle(1);
	h_vertex_z_with_cut->GetYaxis()->SetTitleFont(32);
   h_vertex_z_with_cut->GetYaxis()->SetTitleSize(0.04);
   // ---------------PLOT reconstruction momentum of protons----------------

   // ---------------PLOT difference between Simulation and Reconstruction----------------
   TH1F *h_p1x_diff = new TH1F("p1x_diff","Simulation and Generator Input P1_{ x} difference in lab  system",200,-1,1);
   h_p1x_diff->SetXTitle("P1_{x} difference / GeV");
	h_p1x_diff->GetXaxis()->CenterTitle(1);
	h_p1x_diff->GetXaxis()->SetTitleFont(32);
   h_p1x_diff->GetXaxis()->SetTitleSize(0.06);
	h_p1x_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p1x_diff->SetYTitle("Counts");
	h_p1x_diff->GetYaxis()->CenterTitle(1);
	h_p1x_diff->GetYaxis()->SetTitleFont(32);
   h_p1x_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1y_diff = new TH1F("p1y_diff","Simulation and Generator Input P1_{ y} difference in lab  system",200,-1,1);
   h_p1y_diff->SetXTitle("P1_{y} difference / GeV");
	h_p1y_diff->GetXaxis()->CenterTitle(1);
	h_p1y_diff->GetXaxis()->SetTitleFont(32);
   h_p1y_diff->GetXaxis()->SetTitleSize(0.06);
	h_p1y_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p1y_diff->SetYTitle("Counts");
	h_p1y_diff->GetYaxis()->CenterTitle(1);
	h_p1y_diff->GetYaxis()->SetTitleFont(32);
   h_p1y_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1z_diff = new TH1F("p1z_diff","Simulation and Generator Input P1_{ z} difference in lab  system",200,-1,1);
   h_p1z_diff->SetXTitle("P1_{z} difference / GeV");
	h_p1z_diff->GetXaxis()->CenterTitle(1);
	h_p1z_diff->GetXaxis()->SetTitleFont(32);
   h_p1z_diff->GetXaxis()->SetTitleSize(0.06);
	h_p1z_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p1z_diff->SetYTitle("Counts");
	h_p1z_diff->GetYaxis()->CenterTitle(1);
	h_p1z_diff->GetYaxis()->SetTitleFont(32);
   h_p1z_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p1_diff = new TH1F("p1_diff","Simulation and Generator Input P1 difference in lab  system",200,-1,1);
   h_p1_diff->SetXTitle("P1 difference / GeV");
	h_p1_diff->GetXaxis()->CenterTitle(1);
	h_p1_diff->GetXaxis()->SetTitleFont(32);
   h_p1_diff->GetXaxis()->SetTitleSize(0.06);
	h_p1_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p1_diff->SetYTitle("Counts");
	h_p1_diff->GetYaxis()->CenterTitle(1);
	h_p1_diff->GetYaxis()->SetTitleFont(32);
   h_p1_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2x_diff = new TH1F("p2x_diff","Simulation and Generator Input P2_{ x} difference in lab  system",200,-1,1);
   h_p2x_diff->SetXTitle("P2_{x} difference / GeV");
	h_p2x_diff->GetXaxis()->CenterTitle(1);
	h_p2x_diff->GetXaxis()->SetTitleFont(32);
   h_p2x_diff->GetXaxis()->SetTitleSize(0.06);
	h_p2x_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p2x_diff->SetYTitle("Counts");
	h_p2x_diff->GetYaxis()->CenterTitle(1);
	h_p2x_diff->GetYaxis()->SetTitleFont(32);
   h_p2x_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2y_diff = new TH1F("p2y_diff","Simulation and Generator Input P2_{ y} difference in lab  system",200,-1,1);
   h_p2y_diff->SetXTitle("P2_{y} difference / GeV");
	h_p2y_diff->GetXaxis()->CenterTitle(1);
	h_p2y_diff->GetXaxis()->SetTitleFont(32);
   h_p2y_diff->GetXaxis()->SetTitleSize(0.06);
	h_p2y_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p2y_diff->SetYTitle("Counts");
	h_p2y_diff->GetYaxis()->CenterTitle(1);
	h_p2y_diff->GetYaxis()->SetTitleFont(32);
   h_p2y_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2z_diff = new TH1F("p2z_diff","Simulation and Generator Input P2_{ z} difference in lab  system",200,-1,1);
   h_p2z_diff->SetXTitle("P2_{z} difference / GeV");
	h_p2z_diff->GetXaxis()->CenterTitle(1);
	h_p2z_diff->GetXaxis()->SetTitleFont(32);
   h_p2z_diff->GetXaxis()->SetTitleSize(0.06);
	h_p2z_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p2z_diff->SetYTitle("Counts");
	h_p2z_diff->GetYaxis()->CenterTitle(1);
	h_p2z_diff->GetYaxis()->SetTitleFont(32);
   h_p2z_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p2_diff = new TH1F("p2_diff","Simulation and Generator Input P2 difference in lab  system",200,-1,1);
   h_p2_diff->SetXTitle("P2 difference / GeV");
	h_p2_diff->GetXaxis()->CenterTitle(1);
	h_p2_diff->GetXaxis()->SetTitleFont(32);
   h_p2_diff->GetXaxis()->SetTitleSize(0.06);
	h_p2_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p2_diff->SetYTitle("Counts");
	h_p2_diff->GetYaxis()->CenterTitle(1);
	h_p2_diff->GetYaxis()->SetTitleFont(32);
   h_p2_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p_miss_x_diff = new TH1F("p_miss_x_diff","Simulation and Generator Input Pmiss_{ x} difference in ^{12}C reference system",200,-1,1);
   h_p_miss_x_diff->SetXTitle("Pmiss_{ x} / GeV#bulletc^{-1} ");
	h_p_miss_x_diff->GetXaxis()->CenterTitle(1);
	h_p_miss_x_diff->GetXaxis()->SetTitleFont(32);
   h_p_miss_x_diff->GetXaxis()->SetTitleSize(0.06);
	h_p_miss_x_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p_miss_x_diff->SetYTitle("Counts");
	h_p_miss_x_diff->GetYaxis()->CenterTitle(1);
	h_p_miss_x_diff->GetYaxis()->SetTitleFont(32);
   h_p_miss_x_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p_miss_y_diff = new TH1F("p_miss_y_diff","Simulation and Generator Input Pmiss_{ y} difference in ^{12}C reference system",200,-1,1);
   h_p_miss_y_diff->SetXTitle("Pmiss_{ y} / GeV#bulletc^{-1} ");
	h_p_miss_y_diff->GetXaxis()->CenterTitle(1);
	h_p_miss_y_diff->GetXaxis()->SetTitleFont(32);
   h_p_miss_y_diff->GetXaxis()->SetTitleSize(0.06);
	h_p_miss_y_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p_miss_y_diff->SetYTitle("Counts");
	h_p_miss_y_diff->GetYaxis()->CenterTitle(1);
	h_p_miss_y_diff->GetYaxis()->SetTitleFont(32);
   h_p_miss_y_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p_miss_z_diff = new TH1F("p_miss_z_diff","Simulation and Generator Input Pmiss_{ z} difference in ^{12}C reference system",200,-1,1);
   h_p_miss_z_diff->SetXTitle("Pmiss_{ z} / GeV#bulletc^{-1} ");
	h_p_miss_z_diff->GetXaxis()->CenterTitle(1);
	h_p_miss_z_diff->GetXaxis()->SetTitleFont(32);
   h_p_miss_z_diff->GetXaxis()->SetTitleSize(0.06);
	h_p_miss_z_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p_miss_z_diff->SetYTitle("Counts");
	h_p_miss_z_diff->GetYaxis()->CenterTitle(1);
	h_p_miss_z_diff->GetYaxis()->SetTitleFont(32);
   h_p_miss_z_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_p_miss_diff = new TH1F("p_miss_diff","Simulation and Generator Input P_{miss} difference in ^{12}C reference system",200,-1,1);
   h_p_miss_diff->SetXTitle("P_{miss} / GeV#bulletc^{-1} ");
	h_p_miss_diff->GetXaxis()->CenterTitle(1);
	h_p_miss_diff->GetXaxis()->SetTitleFont(32);
   h_p_miss_diff->GetXaxis()->SetTitleSize(0.06);
	h_p_miss_diff->GetXaxis()->SetTitleOffset(0.7);
   h_p_miss_diff->SetYTitle("Counts");
	h_p_miss_diff->GetYaxis()->CenterTitle(1);
	h_p_miss_diff->GetYaxis()->SetTitleFont(32);
   h_p_miss_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_E_miss_diff = new TH1F("E_miss_diff","Simulation and Generator Input E_{miss} difference in ^{12}C reference system",200,-1,1);
   h_E_miss_diff->SetXTitle("E_{miss} / GeV#bulletc^{-1} ");
	h_E_miss_diff->GetXaxis()->CenterTitle(1);
	h_E_miss_diff->GetXaxis()->SetTitleFont(32);
   h_E_miss_diff->GetXaxis()->SetTitleSize(0.06);
	h_E_miss_diff->GetXaxis()->SetTitleOffset(0.7);
   h_E_miss_diff->SetYTitle("Counts");
	h_E_miss_diff->GetYaxis()->CenterTitle(1);
	h_E_miss_diff->GetYaxis()->SetTitleFont(32);
   h_E_miss_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_M_miss_diff = new TH1F("M_miss_diff","Simulation and Generator Input M_{miss} difference in ^{12}C reference system",200,-1,1);
   h_M_miss_diff->SetXTitle("M_{miss} / GeV#bulletc^{-1} ");
	h_M_miss_diff->GetXaxis()->CenterTitle(1);
	h_M_miss_diff->GetXaxis()->SetTitleFont(32);
   h_M_miss_diff->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_diff->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_diff->SetYTitle("Counts");
	h_M_miss_diff->GetYaxis()->CenterTitle(1);
	h_M_miss_diff->GetYaxis()->SetTitleFont(32);
   h_M_miss_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_M_miss_square_diff = new TH1F("M_miss_square_diff","Simulation and Generator Input M^{2}_{ miss } difference in ^{12}C reference system",200,-1,1);
   h_M_miss_square_diff->SetXTitle("M^{2}_{ miss } / GeV#bulletc^{-1} ");
	h_M_miss_square_diff->GetXaxis()->CenterTitle(1);
	h_M_miss_square_diff->GetXaxis()->SetTitleFont(32);
   h_M_miss_square_diff->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_square_diff->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_square_diff->SetYTitle("Counts");
	h_M_miss_square_diff->GetYaxis()->CenterTitle(1);
	h_M_miss_square_diff->GetYaxis()->SetTitleFont(32);
   h_M_miss_square_diff->GetYaxis()->SetTitleSize(0.04);
   // ---------------PLOT difference between Simulation and Reconstruction----------------

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

   TH2F *h_tof_pos_left = new TH2F("X_vs_Y_left","X vs. Y for left TOF400",100,50,210,100,-80,80);
   h_tof_pos_left->SetXTitle("X/ cm");
	h_tof_pos_left->GetXaxis()->CenterTitle(1);
	h_tof_pos_left->GetXaxis()->SetTitleFont(32);
   h_tof_pos_left->GetXaxis()->SetTitleSize(0.06);
	h_tof_pos_left->GetXaxis()->SetTitleOffset(0.7);
   h_tof_pos_left->SetYTitle("Y / cm");
	h_tof_pos_left->GetYaxis()->CenterTitle(1);
	h_tof_pos_left->GetYaxis()->SetTitleFont(32);
   h_tof_pos_left->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_tof_pos_right = new TH2F("X_vs_Y_right","X vs. Y for right TOF400",100,-210,-50,100,-80,80);
   h_tof_pos_right->SetXTitle("X/ cm");
	h_tof_pos_right->GetXaxis()->CenterTitle(1);
	h_tof_pos_right->GetXaxis()->SetTitleFont(32);
   h_tof_pos_right->GetXaxis()->SetTitleSize(0.06);
	h_tof_pos_right->GetXaxis()->SetTitleOffset(0.7);
   h_tof_pos_right->SetYTitle("Y / cm");
	h_tof_pos_right->GetYaxis()->CenterTitle(1);
	h_tof_pos_right->GetYaxis()->SetTitleFont(32);
   h_tof_pos_right->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pmiss_Pfrag_x = new TH2F("h_Pmiss_Pfrag_x","Pmiss_{x} vs. Pfrag_{x} in ^{12}C reference system",100,-0.5,0.5,100,-0.5,0.5);
   h_Pmiss_Pfrag_x->SetXTitle("Pmiss_{x} / GeV");
	h_Pmiss_Pfrag_x->GetXaxis()->CenterTitle(1);
	h_Pmiss_Pfrag_x->GetXaxis()->SetTitleFont(32);
   h_Pmiss_Pfrag_x->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_Pfrag_x->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_Pfrag_x->SetYTitle("Pfrag_{x} / GeV");
	h_Pmiss_Pfrag_x->GetYaxis()->CenterTitle(1);
	h_Pmiss_Pfrag_x->GetYaxis()->SetTitleFont(32);
   h_Pmiss_Pfrag_x->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pmiss_Pfrag_y = new TH2F("h_Pmiss_Pfrag_y","Pmiss_{y} vs. Pfrag_{y} in ^{12}C reference system",100,-0.5,0.5,100,-0.5,0.5);
   h_Pmiss_Pfrag_y->SetXTitle("Pmiss_{y} / GeV");
	h_Pmiss_Pfrag_y->GetXaxis()->CenterTitle(1);
	h_Pmiss_Pfrag_y->GetXaxis()->SetTitleFont(32);
   h_Pmiss_Pfrag_y->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_Pfrag_y->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_Pfrag_y->SetYTitle("Pfrag_{y} / GeV");
	h_Pmiss_Pfrag_y->GetYaxis()->CenterTitle(1);
	h_Pmiss_Pfrag_y->GetYaxis()->SetTitleFont(32);
   h_Pmiss_Pfrag_y->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pmiss_Pfrag_z = new TH2F("h_Pmiss_Pfrag_z","Pmiss_{z} vs. Pfrag_{z} in ^{12}C reference system",100,-1,1,100,-1,1);
   h_Pmiss_Pfrag_z->SetXTitle("Pmiss_{z} / GeV");
	h_Pmiss_Pfrag_z->GetXaxis()->CenterTitle(1);
	h_Pmiss_Pfrag_z->GetXaxis()->SetTitleFont(32);
   h_Pmiss_Pfrag_z->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_Pfrag_z->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_Pfrag_z->SetYTitle("Pfrag_{z} / GeV");
	h_Pmiss_Pfrag_z->GetYaxis()->CenterTitle(1);
	h_Pmiss_Pfrag_z->GetYaxis()->SetTitleFont(32);
   h_Pmiss_Pfrag_z->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pmiss_Pfrag_tot = new TH2F("h_Pmiss_Pfrag_tot","Pmiss vs. Pfrag in ^{12}C reference system",100,0,0.5,100,0,0.5);
   h_Pmiss_Pfrag_tot->SetXTitle("Pmiss / GeV");
	h_Pmiss_Pfrag_tot->GetXaxis()->CenterTitle(1);
	h_Pmiss_Pfrag_tot->GetXaxis()->SetTitleFont(32);
   h_Pmiss_Pfrag_tot->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_Pfrag_tot->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_Pfrag_tot->SetYTitle("Pfrag / GeV");
	h_Pmiss_Pfrag_tot->GetYaxis()->CenterTitle(1);
	h_Pmiss_Pfrag_tot->GetYaxis()->SetTitleFont(32);
   h_Pmiss_Pfrag_tot->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_Angle_Pmiss_PFrag = new TH1F("h_Angle_Pmiss_PFrag","Opening angle berween P_{miss} and P_{frag} in ^{12}C reference system",200,0,220);
   h_Angle_Pmiss_PFrag->SetXTitle("Angle / degree");
	h_Angle_Pmiss_PFrag->GetXaxis()->CenterTitle(1);
	h_Angle_Pmiss_PFrag->GetXaxis()->SetTitleFont(32);
   h_Angle_Pmiss_PFrag->GetXaxis()->SetTitleSize(0.06);
	h_Angle_Pmiss_PFrag->GetXaxis()->SetTitleOffset(0.7);
   h_Angle_Pmiss_PFrag->SetYTitle("Counts");
	h_Angle_Pmiss_PFrag->GetYaxis()->CenterTitle(1);
	h_Angle_Pmiss_PFrag->GetYaxis()->SetTitleFont(32);
   h_Angle_Pmiss_PFrag->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_Angle_Pmiss_PFrag_cos_1 = new TH1F("h_Angle_Pmiss_PFrag_cos_1","Opening angle berween P_{miss} and P_{frag} in ^{12}C reference system",50,-1.,1.);
   TH1F* h_Angle_Pmiss_PFrag_cos = new TH1F("h_Angle_Pmiss_PFrag_cos","Opening angle berween P_{miss} and P_{frag} in ^{12}C reference system",50,-1.,1.);
   h_Angle_Pmiss_PFrag_cos->SetXTitle("cosine of the opening angle");
	h_Angle_Pmiss_PFrag_cos->GetXaxis()->CenterTitle(1);
	h_Angle_Pmiss_PFrag_cos->GetXaxis()->SetTitleFont(32);
   h_Angle_Pmiss_PFrag_cos->GetXaxis()->SetTitleSize(0.06);
	h_Angle_Pmiss_PFrag_cos->GetXaxis()->SetTitleOffset(0.7);
   h_Angle_Pmiss_PFrag_cos->SetYTitle("Counts");
	h_Angle_Pmiss_PFrag_cos->GetYaxis()->CenterTitle(1);
	h_Angle_Pmiss_PFrag_cos->GetYaxis()->SetTitleFont(32);
   h_Angle_Pmiss_PFrag_cos->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_Angle_Pmiss_PFrag_cos_2D = new TH1F("h_Angle_Pmiss_PFrag_cos2D","2D Opening angle berween P_{miss} and P_{frag} in ^{12}C reference system",50,-1.,1.);
   h_Angle_Pmiss_PFrag_cos_2D->SetXTitle("cosine of the opening angle");
	h_Angle_Pmiss_PFrag_cos_2D->GetXaxis()->CenterTitle(1);
	h_Angle_Pmiss_PFrag_cos_2D->GetXaxis()->SetTitleFont(32);
   h_Angle_Pmiss_PFrag_cos_2D->GetXaxis()->SetTitleSize(0.06);
	h_Angle_Pmiss_PFrag_cos_2D->GetXaxis()->SetTitleOffset(0.7);
   h_Angle_Pmiss_PFrag_cos_2D->SetYTitle("Counts");
	h_Angle_Pmiss_PFrag_cos_2D->GetYaxis()->CenterTitle(1);
	h_Angle_Pmiss_PFrag_cos_2D->GetYaxis()->SetTitleFont(32);
   h_Angle_Pmiss_PFrag_cos_2D->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_Angle_Pmiss_Pn_cos = new TH1F("h_Angle_Pmiss_Pn_cos","Opening angle berween P_{miss} and P_{n} in ^{12}C reference system",11,-1.,0.1);
   h_Angle_Pmiss_Pn_cos->SetXTitle("cos(#theta_{p_{miss},p_{n}})");
	h_Angle_Pmiss_Pn_cos->GetXaxis()->CenterTitle(1);
	h_Angle_Pmiss_Pn_cos->GetXaxis()->SetTitleFont(32);
   h_Angle_Pmiss_Pn_cos->GetXaxis()->SetTitleSize(0.06);
	h_Angle_Pmiss_Pn_cos->GetXaxis()->SetTitleOffset(0.7);
   h_Angle_Pmiss_Pn_cos->SetYTitle("Counts");
	h_Angle_Pmiss_Pn_cos->GetYaxis()->CenterTitle(1);
	h_Angle_Pmiss_Pn_cos->GetYaxis()->SetTitleFont(32);
   h_Angle_Pmiss_Pn_cos->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_Angle_Pfrag_Prel_cos = new TH1F("h_Angle_Pfrag_Prel_cos","Opening angle berween P_{frag} and P_{rel} in ^{12}C reference system",11,-1.,1);
   h_Angle_Pfrag_Prel_cos->SetXTitle("cos(#theta_{p_{frag},p_{rel}})");
	h_Angle_Pfrag_Prel_cos->GetXaxis()->CenterTitle(1);
	h_Angle_Pfrag_Prel_cos->GetXaxis()->SetTitleFont(32);
   h_Angle_Pfrag_Prel_cos->GetXaxis()->SetTitleSize(0.06);
	h_Angle_Pfrag_Prel_cos->GetXaxis()->SetTitleOffset(0.7);
   h_Angle_Pfrag_Prel_cos->SetYTitle("Counts");
	h_Angle_Pfrag_Prel_cos->GetYaxis()->CenterTitle(1);
	h_Angle_Pfrag_Prel_cos->GetYaxis()->SetTitleFont(32);
   h_Angle_Pfrag_Prel_cos->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_Mmiss_excl = new TH1F("h_Mmiss_excl","Mmiss_excl",50,-2.,5);

   TH1F* h_pbx_1 = new TH1F("h_pbx_1","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   TH1F* h_pbx_2 = new TH1F("h_pbx_2","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   TH1F* h_pbx = new TH1F("h_pbx","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   h_pbx->SetXTitle("P_{x} / GeV");
	h_pbx->GetXaxis()->CenterTitle(1);
	h_pbx->GetXaxis()->SetTitleFont(32);
   h_pbx->GetXaxis()->SetTitleSize(0.06);
	h_pbx->GetXaxis()->SetTitleOffset(0.7);
   h_pbx->SetYTitle("Counts");
	h_pbx->GetYaxis()->CenterTitle(1);
	h_pbx->GetYaxis()->SetTitleFont(32);
   h_pbx->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_pby_1 = new TH1F("h_pby_1","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   TH1F* h_pby_2 = new TH1F("h_pby_2","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   TH1F* h_pby = new TH1F("h_pby","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   h_pby->SetXTitle("P_{y} / GeV");
	h_pby->GetXaxis()->CenterTitle(1);
	h_pby->GetXaxis()->SetTitleFont(32);
   h_pby->GetXaxis()->SetTitleSize(0.06);
	h_pby->GetXaxis()->SetTitleOffset(0.7);
   h_pby->SetYTitle("Counts");
	h_pby->GetYaxis()->CenterTitle(1);
	h_pby->GetYaxis()->SetTitleFont(32);
   h_pby->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_pbz_1 = new TH1F("h_pbz_1","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   TH1F* h_pbz_2 = new TH1F("h_pbz_2","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   TH1F* h_pbz = new TH1F("h_pbz","^{11}B momentum distribution in ^{12}C reference system",200,-1,1);
   h_pbz->SetXTitle("P_{z} / GeV");
	h_pbz->GetXaxis()->CenterTitle(1);
	h_pbz->GetXaxis()->SetTitleFont(32);
   h_pbz->GetXaxis()->SetTitleSize(0.06);
	h_pbz->GetXaxis()->SetTitleOffset(0.7);
   h_pbz->SetYTitle("Counts");
	h_pbz->GetYaxis()->CenterTitle(1);
	h_pbz->GetYaxis()->SetTitleFont(32);
   h_pbz->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_pb_1 = new TH1F("h_pb_1","^{11}B momentum distribution in ^{12}C reference system",200,0,1);
   TH1F* h_pb_2 = new TH1F("h_pb_2","^{11}B momentum distribution in ^{12}C reference system",200,0,1);
   TH1F* h_pb = new TH1F("h_pb","^{11}B momentum distribution in ^{12}C reference system",200,0,1);
   h_pb->SetXTitle("P / GeV");
	h_pb->GetXaxis()->CenterTitle(1);
	h_pb->GetXaxis()->SetTitleFont(32);
   h_pb->GetXaxis()->SetTitleSize(0.06);
	h_pb->GetXaxis()->SetTitleOffset(0.7);
   h_pb->SetYTitle("Counts");
	h_pb->GetYaxis()->CenterTitle(1);
	h_pb->GetYaxis()->SetTitleFont(32);
   h_pb->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_11B_MWPC4_pos = new TH2F("h_11B_MWPC4_pos","^{11}B fragment position on MWPC4 plane",200,-15,15,200,-15,15);
   h_11B_MWPC4_pos->SetXTitle("X / cm");
	h_11B_MWPC4_pos->GetXaxis()->CenterTitle(1);
	h_11B_MWPC4_pos->GetXaxis()->SetTitleFont(32);
   h_11B_MWPC4_pos->GetXaxis()->SetTitleSize(0.06);
	h_11B_MWPC4_pos->GetXaxis()->SetTitleOffset(0.7);
   h_11B_MWPC4_pos->SetYTitle("Y / cm");
	h_11B_MWPC4_pos->GetYaxis()->CenterTitle(1);
	h_11B_MWPC4_pos->GetYaxis()->SetTitleFont(32);
   h_11B_MWPC4_pos->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_11B_SP41_pos = new TH2F("h_11B_SP41_pos","^{11}B fragment position on SP-41 back plane",200,-35,35,200,-35,35);
   h_11B_SP41_pos->SetXTitle("X / cm");
	h_11B_SP41_pos->GetXaxis()->CenterTitle(1);
	h_11B_SP41_pos->GetXaxis()->SetTitleFont(32);
   h_11B_SP41_pos->GetXaxis()->SetTitleSize(0.06);
	h_11B_SP41_pos->GetXaxis()->SetTitleOffset(0.7);
   h_11B_SP41_pos->SetYTitle("Y / cm");
	h_11B_SP41_pos->GetYaxis()->CenterTitle(1);
	h_11B_SP41_pos->GetYaxis()->SetTitleFont(32);
   h_11B_SP41_pos->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_path_x_left = new TH1F("h_fly_path_x_left","Fly Length to TOF400 on X Direction (Left)",100,50,200);
   h_fly_path_x_left->SetXTitle("Length / cm");
	h_fly_path_x_left->GetXaxis()->CenterTitle(1);
	h_fly_path_x_left->GetXaxis()->SetTitleFont(32);
   h_fly_path_x_left->GetXaxis()->SetTitleSize(0.06);
	h_fly_path_x_left->GetXaxis()->SetTitleOffset(0.7);
   h_fly_path_x_left->SetYTitle("Counts");
	h_fly_path_x_left->GetYaxis()->CenterTitle(1);
	h_fly_path_x_left->GetYaxis()->SetTitleFont(32);
   h_fly_path_x_left->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_path_y_left = new TH1F("h_fly_path_y_left","Fly Length to TOF400 on Y Direction (Left)",100,-100,100);
   h_fly_path_y_left->SetXTitle("Length / cm");
	h_fly_path_y_left->GetXaxis()->CenterTitle(1);
	h_fly_path_y_left->GetXaxis()->SetTitleFont(32);
   h_fly_path_y_left->GetXaxis()->SetTitleSize(0.06);
	h_fly_path_y_left->GetXaxis()->SetTitleOffset(0.7);
   h_fly_path_y_left->SetYTitle("Counts");
	h_fly_path_y_left->GetYaxis()->CenterTitle(1);
	h_fly_path_y_left->GetYaxis()->SetTitleFont(32);
   h_fly_path_y_left->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_path_z_left = new TH1F("h_fly_path_z_left","Fly Length to TOF400 on Z Direction (Left)",100,150,300);
   h_fly_path_z_left->SetXTitle("Length / cm");
	h_fly_path_z_left->GetXaxis()->CenterTitle(1);
	h_fly_path_z_left->GetXaxis()->SetTitleFont(32);
   h_fly_path_z_left->GetXaxis()->SetTitleSize(0.06);
	h_fly_path_z_left->GetXaxis()->SetTitleOffset(0.7);
   h_fly_path_z_left->SetYTitle("Counts");
	h_fly_path_z_left->GetYaxis()->CenterTitle(1);
	h_fly_path_z_left->GetYaxis()->SetTitleFont(32);
   h_fly_path_z_left->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_path_left = new TH1F("h_fly_path_left","Fly Length to TOF400 (Left)",200,200,300);
   h_fly_path_left->SetXTitle("Length / cm");
	h_fly_path_left->GetXaxis()->CenterTitle(1);
	h_fly_path_left->GetXaxis()->SetTitleFont(32);
   h_fly_path_left->GetXaxis()->SetTitleSize(0.06);
	h_fly_path_left->GetXaxis()->SetTitleOffset(0.7);
   h_fly_path_left->SetYTitle("Counts");
	h_fly_path_left->GetYaxis()->CenterTitle(1);
	h_fly_path_left->GetYaxis()->SetTitleFont(32);
   h_fly_path_left->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_path_x_right = new TH1F("h_fly_path_x_right","Fly Length to TOF400 on X Direction (Right)",100,-200,-50);
   h_fly_path_x_right->SetXTitle("Length / cm");
	h_fly_path_x_right->GetXaxis()->CenterTitle(1);
	h_fly_path_x_right->GetXaxis()->SetTitleFont(32);
   h_fly_path_x_right->GetXaxis()->SetTitleSize(0.06);
	h_fly_path_x_right->GetXaxis()->SetTitleOffset(0.7);
   h_fly_path_x_right->SetYTitle("Counts");
	h_fly_path_x_right->GetYaxis()->CenterTitle(1);
	h_fly_path_x_right->GetYaxis()->SetTitleFont(32);
   h_fly_path_x_right->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_path_y_right = new TH1F("h_fly_path_y_right","Fly Length to TOF400 on Y Direction (Right)",100,-100,100);
   h_fly_path_y_right->SetXTitle("Length / cm");
	h_fly_path_y_right->GetXaxis()->CenterTitle(1);
	h_fly_path_y_right->GetXaxis()->SetTitleFont(32);
   h_fly_path_y_right->GetXaxis()->SetTitleSize(0.06);
	h_fly_path_y_right->GetXaxis()->SetTitleOffset(0.7);
   h_fly_path_y_right->SetYTitle("Counts");
	h_fly_path_y_right->GetYaxis()->CenterTitle(1);
	h_fly_path_y_right->GetYaxis()->SetTitleFont(32);
   h_fly_path_y_right->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_path_z_right = new TH1F("h_fly_path_z_right","Fly Length to TOF400 on Z Direction (Right)",100,150,300);
   h_fly_path_z_right->SetXTitle("Length / cm");
	h_fly_path_z_right->GetXaxis()->CenterTitle(1);
	h_fly_path_z_right->GetXaxis()->SetTitleFont(32);
   h_fly_path_z_right->GetXaxis()->SetTitleSize(0.06);
	h_fly_path_z_right->GetXaxis()->SetTitleOffset(0.7);
   h_fly_path_z_right->SetYTitle("Counts");
	h_fly_path_z_right->GetYaxis()->CenterTitle(1);
	h_fly_path_z_right->GetYaxis()->SetTitleFont(32);
   h_fly_path_z_right->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_path_right = new TH1F("h_fly_path_right","Fly Length to TOF400 (Right)",200,200,300);
   h_fly_path_right->SetXTitle("Length / cm");
	h_fly_path_right->GetXaxis()->CenterTitle(1);
	h_fly_path_right->GetXaxis()->SetTitleFont(32);
   h_fly_path_right->GetXaxis()->SetTitleSize(0.06);
	h_fly_path_right->GetXaxis()->SetTitleOffset(0.7);
   h_fly_path_right->SetYTitle("Counts");
	h_fly_path_right->GetYaxis()->CenterTitle(1);
	h_fly_path_right->GetYaxis()->SetTitleFont(32);
   h_fly_path_right->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_time_left = new TH1F("h_fly_time_left","Time of flight from vertex to TOF400 for the left proton",200,8,12);
   h_fly_time_left->SetXTitle("ToF / ns");
	h_fly_time_left->GetXaxis()->CenterTitle(1);
	h_fly_time_left->GetXaxis()->SetTitleFont(32);
   h_fly_time_left->GetXaxis()->SetTitleSize(0.06);
	h_fly_time_left->GetXaxis()->SetTitleOffset(0.7);
   h_fly_time_left->SetYTitle("Counts");
	h_fly_time_left->GetYaxis()->CenterTitle(1);
	h_fly_time_left->GetYaxis()->SetTitleFont(32);
   h_fly_time_left->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_fly_time_right = new TH1F("h_fly_time_right","Time of flight from vertex to TOF400 for the left proton",200,8,12);
   h_fly_time_right->SetXTitle("ToF / ns");
	h_fly_time_right->GetXaxis()->CenterTitle(1);
	h_fly_time_right->GetXaxis()->SetTitleFont(32);
   h_fly_time_right->GetXaxis()->SetTitleSize(0.06);
	h_fly_time_right->GetXaxis()->SetTitleOffset(0.7);
   h_fly_time_right->SetYTitle("Counts");
	h_fly_time_right->GetYaxis()->CenterTitle(1);
	h_fly_time_right->GetYaxis()->SetTitleFont(32);
   h_fly_time_right->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pfragz_theta_left = new TH2F("h_Pfragz_theta_left","Fragment Momentum Z component vs. proton polar angle (Left)",200,10,60,200,39,44);
   h_Pfragz_theta_left->SetXTitle("#theta / degree");
	h_Pfragz_theta_left->GetXaxis()->CenterTitle(1);
	h_Pfragz_theta_left->GetXaxis()->SetTitleFont(32);
   h_Pfragz_theta_left->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_theta_left->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_theta_left->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_theta_left->GetYaxis()->CenterTitle(1);
	h_Pfragz_theta_left->GetYaxis()->SetTitleFont(32);
   h_Pfragz_theta_left->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pfragz_theta_right = new TH2F("h_Pfragz_theta_right","Fragment Momentum Z component vs. proton polar angle (Right)",200,10,60,200,39,44);
   h_Pfragz_theta_right->SetXTitle("#theta / degree");
	h_Pfragz_theta_right->GetXaxis()->CenterTitle(1);
	h_Pfragz_theta_right->GetXaxis()->SetTitleFont(32);
   h_Pfragz_theta_right->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_theta_right->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_theta_right->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_theta_right->GetYaxis()->CenterTitle(1);
	h_Pfragz_theta_right->GetYaxis()->SetTitleFont(32);
   h_Pfragz_theta_right->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pfragz_theta_left_both = new TH2F("h_Pfragz_theta_left_both","Fragment Momentum Z component vs. proton polar angle (Left, both detected)",200,10,60,200,39,44);
   h_Pfragz_theta_left_both->SetXTitle("#theta / degree");
	h_Pfragz_theta_left_both->GetXaxis()->CenterTitle(1);
	h_Pfragz_theta_left_both->GetXaxis()->SetTitleFont(32);
   h_Pfragz_theta_left_both->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_theta_left_both->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_theta_left_both->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_theta_left_both->GetYaxis()->CenterTitle(1);
	h_Pfragz_theta_left_both->GetYaxis()->SetTitleFont(32);
   h_Pfragz_theta_left_both->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pfragz_theta_right_both = new TH2F("h_Pfragz_theta_right_both","Fragment Momentum Z component vs. proton polar angle (Right, both detected)",200,10,60,200,39,44);
   h_Pfragz_theta_right_both->SetXTitle("#theta / degree");
	h_Pfragz_theta_right_both->GetXaxis()->CenterTitle(1);
	h_Pfragz_theta_right_both->GetXaxis()->SetTitleFont(32);
   h_Pfragz_theta_right_both->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_theta_right_both->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_theta_right_both->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_theta_right_both->GetYaxis()->CenterTitle(1);
	h_Pfragz_theta_right_both->GetYaxis()->SetTitleFont(32);
   h_Pfragz_theta_right_both->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pfragz_theta_left_ratio = new TH2F("h_Pfragz_theta_left_ratio","Fragment Momentum Z component vs. proton polar angle (Left, ratio)",200,10,60,200,39,44);
   h_Pfragz_theta_left_ratio->SetXTitle("#theta / degree");
	h_Pfragz_theta_left_ratio->GetXaxis()->CenterTitle(1);
	h_Pfragz_theta_left_ratio->GetXaxis()->SetTitleFont(32);
   h_Pfragz_theta_left_ratio->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_theta_left_ratio->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_theta_left_ratio->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_theta_left_ratio->GetYaxis()->CenterTitle(1);
	h_Pfragz_theta_left_ratio->GetYaxis()->SetTitleFont(32);
   h_Pfragz_theta_left_ratio->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pfragz_theta_right_ratio = new TH2F("h_Pfragz_theta_right_ratio","Fragment Momentum Z component vs. proton polar angle (Right, ratio)",200,10,60,200,39,44);
   h_Pfragz_theta_right_ratio->SetXTitle("#theta / degree");
	h_Pfragz_theta_right_ratio->GetXaxis()->CenterTitle(1);
	h_Pfragz_theta_right_ratio->GetXaxis()->SetTitleFont(32);
   h_Pfragz_theta_right_ratio->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_theta_right_ratio->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_theta_right_ratio->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_theta_right_ratio->GetYaxis()->CenterTitle(1);
	h_Pfragz_theta_right_ratio->GetYaxis()->SetTitleFont(32);
   h_Pfragz_theta_right_ratio->GetYaxis()->SetTitleSize(0.04);

   TH1D *h_Pfragz_left_ratio = new TH1D("h_Pfragz_left_ratio", "Both detected ratio vs. fragment Momentum Z component (Left)",200,39,44);
   h_Pfragz_left_ratio->SetXTitle("Pfrag_{z} / GeV");
	h_Pfragz_left_ratio->GetXaxis()->CenterTitle(1);
	h_Pfragz_left_ratio->GetXaxis()->SetTitleFont(32);
   h_Pfragz_left_ratio->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_left_ratio->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_left_ratio->SetYTitle("Ratio");
	h_Pfragz_left_ratio->GetYaxis()->CenterTitle(1);
	h_Pfragz_left_ratio->GetYaxis()->SetTitleFont(32);
   h_Pfragz_left_ratio->GetYaxis()->SetTitleSize(0.04);

   TH1D *h_Pfragz_right_ratio = new TH1D("h_Pfragz_right_ratio", "Both detected ratio vs. fragment Momentum Z component (Right)",200,39,44);
   h_Pfragz_right_ratio->SetXTitle("Pfrag_{z} / GeV");
	h_Pfragz_right_ratio->GetXaxis()->CenterTitle(1);
	h_Pfragz_right_ratio->GetXaxis()->SetTitleFont(32);
   h_Pfragz_right_ratio->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_right_ratio->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_right_ratio->SetYTitle("Ratio");
	h_Pfragz_right_ratio->GetYaxis()->CenterTitle(1);
	h_Pfragz_right_ratio->GetYaxis()->SetTitleFont(32);
   h_Pfragz_right_ratio->GetYaxis()->SetTitleSize(0.04);
   
   // 36 z
   TH2F* h_Pfragz_PmissTheta_both = new TH2F("h_Pfragz_PmissTheta_both","Fragment Momentum Z component vs. Pmiss polar angle (both detected)",200,0,10,100,39,44);
   h_Pfragz_PmissTheta_both->SetXTitle("#theta / degree");
	h_Pfragz_PmissTheta_both->GetXaxis()->CenterTitle(1);
	h_Pfragz_PmissTheta_both->GetXaxis()->SetTitleFont(32);
   h_Pfragz_PmissTheta_both->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_PmissTheta_both->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_PmissTheta_both->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_PmissTheta_both->GetYaxis()->CenterTitle(1);
	h_Pfragz_PmissTheta_both->GetYaxis()->SetTitleFont(32);
   h_Pfragz_PmissTheta_both->GetYaxis()->SetTitleSize(0.04);
   // 36 z
   TH2F* h_Pfragz_PmissTheta_left = new TH2F("h_Pfragz_PmissTheta_left","Fragment Momentum Z component vs. Pmiss polar angle (Left)",200,0,10,100,39,44);
   h_Pfragz_PmissTheta_left->SetXTitle("#theta / degree");
	h_Pfragz_PmissTheta_left->GetXaxis()->CenterTitle(1);
	h_Pfragz_PmissTheta_left->GetXaxis()->SetTitleFont(32);
   h_Pfragz_PmissTheta_left->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_PmissTheta_left->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_PmissTheta_left->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_PmissTheta_left->GetYaxis()->CenterTitle(1);
	h_Pfragz_PmissTheta_left->GetYaxis()->SetTitleFont(32);
   h_Pfragz_PmissTheta_left->GetYaxis()->SetTitleSize(0.04);
   // 36 z
   TH2F* h_Pfragz_PmissTheta_right = new TH2F("h_Pfragz_PmissTheta_right","Fragment Momentum Z component vs. Pmiss polar angle (Right)",200,0,10,100,39,44);
   h_Pfragz_PmissTheta_right->SetXTitle("#theta / degree");
	h_Pfragz_PmissTheta_right->GetXaxis()->CenterTitle(1);
	h_Pfragz_PmissTheta_right->GetXaxis()->SetTitleFont(32);
   h_Pfragz_PmissTheta_right->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_PmissTheta_right->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_PmissTheta_right->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_PmissTheta_right->GetYaxis()->CenterTitle(1);
	h_Pfragz_PmissTheta_right->GetYaxis()->SetTitleFont(32);
   h_Pfragz_PmissTheta_right->GetYaxis()->SetTitleSize(0.04);
   // 36 z
   TH2F* h_Pfragz_PmissTheta_all = new TH2F("h_Pfragz_PmissTheta_all","Fragment Momentum Z component vs. Pmiss polar angle (Generator)",200,0,10,100,39,44);
   h_Pfragz_PmissTheta_all->SetXTitle("#theta / degree");
	h_Pfragz_PmissTheta_all->GetXaxis()->CenterTitle(1);
	h_Pfragz_PmissTheta_all->GetXaxis()->SetTitleFont(32);
   h_Pfragz_PmissTheta_all->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_PmissTheta_all->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_PmissTheta_all->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_PmissTheta_all->GetYaxis()->CenterTitle(1);
	h_Pfragz_PmissTheta_all->GetYaxis()->SetTitleFont(32);
   h_Pfragz_PmissTheta_all->GetYaxis()->SetTitleSize(0.04);

   // 36 x
   TH2F* h_Pfragx_PmissTheta_both = new TH2F("h_Pfragx_PmissTheta_both","Fragment Momentum X component vs. Pmiss polar angle (both detected)",200,0,10,100,-0.5,0.5);
   h_Pfragx_PmissTheta_both->SetXTitle("#theta / degree");
	h_Pfragx_PmissTheta_both->GetXaxis()->CenterTitle(1);
	h_Pfragx_PmissTheta_both->GetXaxis()->SetTitleFont(32);
   h_Pfragx_PmissTheta_both->GetXaxis()->SetTitleSize(0.06);
	h_Pfragx_PmissTheta_both->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragx_PmissTheta_both->SetYTitle("Pfrag_{x} / GeV");
	h_Pfragx_PmissTheta_both->GetYaxis()->CenterTitle(1);
	h_Pfragx_PmissTheta_both->GetYaxis()->SetTitleFont(32);
   h_Pfragx_PmissTheta_both->GetYaxis()->SetTitleSize(0.04);
   // 36 x
   TH2F* h_Pfragx_PmissTheta_left = new TH2F("h_Pfragx_PmissTheta_left","Fragment Momentum X component vs. Pmiss polar angle (Left)",200,0,10,100,-0.5,0.5);
   h_Pfragx_PmissTheta_left->SetXTitle("#theta / degree");
	h_Pfragx_PmissTheta_left->GetXaxis()->CenterTitle(1);
	h_Pfragx_PmissTheta_left->GetXaxis()->SetTitleFont(32);
   h_Pfragx_PmissTheta_left->GetXaxis()->SetTitleSize(0.06);
	h_Pfragx_PmissTheta_left->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragx_PmissTheta_left->SetYTitle("Pfrag_{x} / GeV");
	h_Pfragx_PmissTheta_left->GetYaxis()->CenterTitle(1);
	h_Pfragx_PmissTheta_left->GetYaxis()->SetTitleFont(32);
   h_Pfragx_PmissTheta_left->GetYaxis()->SetTitleSize(0.04);
   // 36 x
   TH2F* h_Pfragx_PmissTheta_right = new TH2F("h_Pfragx_PmissTheta_right","Fragment Momentum X component vs. Pmiss polar angle (Right)",200,0,10,100,-0.5,0.5);
   h_Pfragx_PmissTheta_right->SetXTitle("#theta / degree");
	h_Pfragx_PmissTheta_right->GetXaxis()->CenterTitle(1);
	h_Pfragx_PmissTheta_right->GetXaxis()->SetTitleFont(32);
   h_Pfragx_PmissTheta_right->GetXaxis()->SetTitleSize(0.06);
	h_Pfragx_PmissTheta_right->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragx_PmissTheta_right->SetYTitle("Pfrag_{x} / GeV");
	h_Pfragx_PmissTheta_right->GetYaxis()->CenterTitle(1);
	h_Pfragx_PmissTheta_right->GetYaxis()->SetTitleFont(32);
   h_Pfragx_PmissTheta_right->GetYaxis()->SetTitleSize(0.04);
   // 36 x
   TH2F* h_Pfragx_PmissTheta_all = new TH2F("h_Pfragx_PmissTheta_all","Fragment Momentum X component vs. Pmiss polar angle (Generator)",200,0,10,100,-0.5,0.5);
   h_Pfragx_PmissTheta_all->SetXTitle("#theta / degree");
	h_Pfragx_PmissTheta_all->GetXaxis()->CenterTitle(1);
	h_Pfragx_PmissTheta_all->GetXaxis()->SetTitleFont(32);
   h_Pfragx_PmissTheta_all->GetXaxis()->SetTitleSize(0.06);
	h_Pfragx_PmissTheta_all->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragx_PmissTheta_all->SetYTitle("Pfrag_{x} / GeV");
	h_Pfragx_PmissTheta_all->GetYaxis()->CenterTitle(1);
	h_Pfragx_PmissTheta_all->GetYaxis()->SetTitleFont(32);
   h_Pfragx_PmissTheta_all->GetYaxis()->SetTitleSize(0.04);

   // 36 y
   TH2F* h_Pfragy_PmissTheta_both = new TH2F("h_Pfragy_PmissTheta_both","Fragment Momentum Y component vs. Pmiss polar angle (both detected)",200,0,10,100,-0.5,0.5);
   h_Pfragy_PmissTheta_both->SetXTitle("#theta / degree");
	h_Pfragy_PmissTheta_both->GetXaxis()->CenterTitle(1);
	h_Pfragy_PmissTheta_both->GetXaxis()->SetTitleFont(32);
   h_Pfragy_PmissTheta_both->GetXaxis()->SetTitleSize(0.06);
	h_Pfragy_PmissTheta_both->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragy_PmissTheta_both->SetYTitle("Pfrag_{y} / GeV");
	h_Pfragy_PmissTheta_both->GetYaxis()->CenterTitle(1);
	h_Pfragy_PmissTheta_both->GetYaxis()->SetTitleFont(32);
   h_Pfragy_PmissTheta_both->GetYaxis()->SetTitleSize(0.04);
   // 36 y
   TH2F* h_Pfragy_PmissTheta_left = new TH2F("h_Pfragy_PmissTheta_left","Fragment Momentum Y component vs. Pmiss polar angle (Left)",200,0,10,100,-0.5,0.5);
   h_Pfragy_PmissTheta_left->SetXTitle("#theta / degree");
	h_Pfragy_PmissTheta_left->GetXaxis()->CenterTitle(1);
	h_Pfragy_PmissTheta_left->GetXaxis()->SetTitleFont(32);
   h_Pfragy_PmissTheta_left->GetXaxis()->SetTitleSize(0.06);
	h_Pfragy_PmissTheta_left->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragy_PmissTheta_left->SetYTitle("Pfrag_{y} / GeV");
	h_Pfragy_PmissTheta_left->GetYaxis()->CenterTitle(1);
	h_Pfragy_PmissTheta_left->GetYaxis()->SetTitleFont(32);
   h_Pfragy_PmissTheta_left->GetYaxis()->SetTitleSize(0.04);
   // 36 y
   TH2F* h_Pfragy_PmissTheta_right = new TH2F("h_Pfragy_PmissTheta_right","Fragment Momentum Y component vs. Pmiss polar angle (Right)",200,0,10,100,-0.5,0.5);
   h_Pfragy_PmissTheta_right->SetXTitle("#theta / degree");
	h_Pfragy_PmissTheta_right->GetXaxis()->CenterTitle(1);
	h_Pfragy_PmissTheta_right->GetXaxis()->SetTitleFont(32);
   h_Pfragy_PmissTheta_right->GetXaxis()->SetTitleSize(0.06);
	h_Pfragy_PmissTheta_right->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragy_PmissTheta_right->SetYTitle("Pfrag_{y} / GeV");
	h_Pfragy_PmissTheta_right->GetYaxis()->CenterTitle(1);
	h_Pfragy_PmissTheta_right->GetYaxis()->SetTitleFont(32);
   h_Pfragy_PmissTheta_right->GetYaxis()->SetTitleSize(0.04);
   // 36 y
   TH2F* h_Pfragy_PmissTheta_all = new TH2F("h_Pfragy_PmissTheta_all","Fragment Momentum Y component vs. Pmiss polar angle (Generator)",200,0,10,100,-0.5,0.5);
   h_Pfragy_PmissTheta_all->SetXTitle("#theta / degree");
	h_Pfragy_PmissTheta_all->GetXaxis()->CenterTitle(1);
	h_Pfragy_PmissTheta_all->GetXaxis()->SetTitleFont(32);
   h_Pfragy_PmissTheta_all->GetXaxis()->SetTitleSize(0.06);
	h_Pfragy_PmissTheta_all->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragy_PmissTheta_all->SetYTitle("Pfrag_{y} / GeV");
	h_Pfragy_PmissTheta_all->GetYaxis()->CenterTitle(1);
	h_Pfragy_PmissTheta_all->GetYaxis()->SetTitleFont(32);
   h_Pfragy_PmissTheta_all->GetYaxis()->SetTitleSize(0.04);

   // 37 z
   TH2F* h_Pfragz_OpeningTheta_both = new TH2F("h_Pfragz_OpeningTheta_both","Fragment Momentum Z component vs. Protons opening angle (both detected)",200,0,100,100,39,44);
   h_Pfragz_OpeningTheta_both->SetXTitle("#theta / degree");
	h_Pfragz_OpeningTheta_both->GetXaxis()->CenterTitle(1);
	h_Pfragz_OpeningTheta_both->GetXaxis()->SetTitleFont(32);
   h_Pfragz_OpeningTheta_both->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_OpeningTheta_both->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_OpeningTheta_both->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_OpeningTheta_both->GetYaxis()->CenterTitle(1);
	h_Pfragz_OpeningTheta_both->GetYaxis()->SetTitleFont(32);
   h_Pfragz_OpeningTheta_both->GetYaxis()->SetTitleSize(0.04);
   // 37 z
   TH2F* h_Pfragz_OpeningTheta_left = new TH2F("h_Pfragz_OpeningTheta_left","Fragment Momentum Z component vs. Protons opening angle (Left)",200,0,100,100,39,44);
   h_Pfragz_OpeningTheta_left->SetXTitle("#theta / degree");
	h_Pfragz_OpeningTheta_left->GetXaxis()->CenterTitle(1);
	h_Pfragz_OpeningTheta_left->GetXaxis()->SetTitleFont(32);
   h_Pfragz_OpeningTheta_left->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_OpeningTheta_left->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_OpeningTheta_left->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_OpeningTheta_left->GetYaxis()->CenterTitle(1);
	h_Pfragz_OpeningTheta_left->GetYaxis()->SetTitleFont(32);
   h_Pfragz_OpeningTheta_left->GetYaxis()->SetTitleSize(0.04);
   // 37 z
   TH2F* h_Pfragz_OpeningTheta_right = new TH2F("h_Pfragz_OpeningTheta_right","Fragment Momentum Z component vs. Protons opening angle (Right)",200,0,100,100,39,44);
   h_Pfragz_OpeningTheta_right->SetXTitle("#theta / degree");
	h_Pfragz_OpeningTheta_right->GetXaxis()->CenterTitle(1);
	h_Pfragz_OpeningTheta_right->GetXaxis()->SetTitleFont(32);
   h_Pfragz_OpeningTheta_right->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_OpeningTheta_right->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_OpeningTheta_right->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_OpeningTheta_right->GetYaxis()->CenterTitle(1);
	h_Pfragz_OpeningTheta_right->GetYaxis()->SetTitleFont(32);
   h_Pfragz_OpeningTheta_right->GetYaxis()->SetTitleSize(0.04);
   // 37 z
   TH2F* h_Pfragz_OpeningTheta_all = new TH2F("h_Pfragz_OpeningTheta_all","Fragment Momentum Z component vs. Protons opening angle (Generator)",200,0,100,100,39,44);
   h_Pfragz_OpeningTheta_all->SetXTitle("#theta / degree");
	h_Pfragz_OpeningTheta_all->GetXaxis()->CenterTitle(1);
	h_Pfragz_OpeningTheta_all->GetXaxis()->SetTitleFont(32);
   h_Pfragz_OpeningTheta_all->GetXaxis()->SetTitleSize(0.06);
	h_Pfragz_OpeningTheta_all->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragz_OpeningTheta_all->SetYTitle("Pfrag_{z} / GeV");
	h_Pfragz_OpeningTheta_all->GetYaxis()->CenterTitle(1);
	h_Pfragz_OpeningTheta_all->GetYaxis()->SetTitleFont(32);
   h_Pfragz_OpeningTheta_all->GetYaxis()->SetTitleSize(0.04);

   // 37 x
   TH2F* h_Pfragx_OpeningTheta_both = new TH2F("h_Pfragx_OpeningTheta_both","Fragment Momentum X component vs. Protons opening angle (both detected)",200,0,100,100,-0.5,0.5);
   h_Pfragx_OpeningTheta_both->SetXTitle("#theta / degree");
	h_Pfragx_OpeningTheta_both->GetXaxis()->CenterTitle(1);
	h_Pfragx_OpeningTheta_both->GetXaxis()->SetTitleFont(32);
   h_Pfragx_OpeningTheta_both->GetXaxis()->SetTitleSize(0.06);
	h_Pfragx_OpeningTheta_both->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragx_OpeningTheta_both->SetYTitle("Pfrag_{x} / GeV");
	h_Pfragx_OpeningTheta_both->GetYaxis()->CenterTitle(1);
	h_Pfragx_OpeningTheta_both->GetYaxis()->SetTitleFont(32);
   h_Pfragx_OpeningTheta_both->GetYaxis()->SetTitleSize(0.04);
   // 37 x
   TH2F* h_Pfragx_OpeningTheta_left = new TH2F("h_Pfragx_OpeningTheta_left","Fragment Momentum X component vs. Protons opening angle (Left)",200,0,100,100,-0.5,0.5);
   h_Pfragx_OpeningTheta_left->SetXTitle("#theta / degree");
	h_Pfragx_OpeningTheta_left->GetXaxis()->CenterTitle(1);
	h_Pfragx_OpeningTheta_left->GetXaxis()->SetTitleFont(32);
   h_Pfragx_OpeningTheta_left->GetXaxis()->SetTitleSize(0.06);
	h_Pfragx_OpeningTheta_left->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragx_OpeningTheta_left->SetYTitle("Pfrag_{x} / GeV");
	h_Pfragx_OpeningTheta_left->GetYaxis()->CenterTitle(1);
	h_Pfragx_OpeningTheta_left->GetYaxis()->SetTitleFont(32);
   h_Pfragx_OpeningTheta_left->GetYaxis()->SetTitleSize(0.04);
   // 37 x
   TH2F* h_Pfragx_OpeningTheta_right = new TH2F("h_Pfragx_OpeningTheta_right","Fragment Momentum X component vs. Protons opening angle (Right)",200,0,100,100,-0.5,0.5);
   h_Pfragx_OpeningTheta_right->SetXTitle("#theta / degree");
	h_Pfragx_OpeningTheta_right->GetXaxis()->CenterTitle(1);
	h_Pfragx_OpeningTheta_right->GetXaxis()->SetTitleFont(32);
   h_Pfragx_OpeningTheta_right->GetXaxis()->SetTitleSize(0.06);
	h_Pfragx_OpeningTheta_right->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragx_OpeningTheta_right->SetYTitle("Pfrag_{x} / GeV");
	h_Pfragx_OpeningTheta_right->GetYaxis()->CenterTitle(1);
	h_Pfragx_OpeningTheta_right->GetYaxis()->SetTitleFont(32);
   h_Pfragx_OpeningTheta_right->GetYaxis()->SetTitleSize(0.04);
   // 37 x
   TH2F* h_Pfragx_OpeningTheta_all = new TH2F("h_Pfragx_OpeningTheta_all","Fragment Momentum X component vs. Protons opening angle (Generator)",200,0,100,100,-0.5,0.5);
   h_Pfragx_OpeningTheta_all->SetXTitle("#theta / degree");
	h_Pfragx_OpeningTheta_all->GetXaxis()->CenterTitle(1);
	h_Pfragx_OpeningTheta_all->GetXaxis()->SetTitleFont(32);
   h_Pfragx_OpeningTheta_all->GetXaxis()->SetTitleSize(0.06);
	h_Pfragx_OpeningTheta_all->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragx_OpeningTheta_all->SetYTitle("Pfrag_{x} / GeV");
	h_Pfragx_OpeningTheta_all->GetYaxis()->CenterTitle(1);
	h_Pfragx_OpeningTheta_all->GetYaxis()->SetTitleFont(32);
   h_Pfragx_OpeningTheta_all->GetYaxis()->SetTitleSize(0.04);

   // 37 y
   TH2F* h_Pfragy_OpeningTheta_both = new TH2F("h_Pfragy_OpeningTheta_both","Fragment Momentum Y component vs. Protons opening angle (both detected)",200,0,100,100,-0.5,0.5);
   h_Pfragy_OpeningTheta_both->SetXTitle("#theta / degree");
	h_Pfragy_OpeningTheta_both->GetXaxis()->CenterTitle(1);
	h_Pfragy_OpeningTheta_both->GetXaxis()->SetTitleFont(32);
   h_Pfragy_OpeningTheta_both->GetXaxis()->SetTitleSize(0.06);
	h_Pfragy_OpeningTheta_both->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragy_OpeningTheta_both->SetYTitle("Pfrag_{y} / GeV");
	h_Pfragy_OpeningTheta_both->GetYaxis()->CenterTitle(1);
	h_Pfragy_OpeningTheta_both->GetYaxis()->SetTitleFont(32);
   h_Pfragy_OpeningTheta_both->GetYaxis()->SetTitleSize(0.04);
   // 37 y
   TH2F* h_Pfragy_OpeningTheta_left = new TH2F("h_Pfragy_OpeningTheta_left","Fragment Momentum Y component vs. Protons opening angle (Left)",200,0,100,100,-0.5,0.5);
   h_Pfragy_OpeningTheta_left->SetXTitle("#theta / degree");
	h_Pfragy_OpeningTheta_left->GetXaxis()->CenterTitle(1);
	h_Pfragy_OpeningTheta_left->GetXaxis()->SetTitleFont(32);
   h_Pfragy_OpeningTheta_left->GetXaxis()->SetTitleSize(0.06);
	h_Pfragy_OpeningTheta_left->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragy_OpeningTheta_left->SetYTitle("Pfrag_{y} / GeV");
	h_Pfragy_OpeningTheta_left->GetYaxis()->CenterTitle(1);
	h_Pfragy_OpeningTheta_left->GetYaxis()->SetTitleFont(32);
   h_Pfragy_OpeningTheta_left->GetYaxis()->SetTitleSize(0.04);
   // 37 y
   TH2F* h_Pfragy_OpeningTheta_right = new TH2F("h_Pfragy_OpeningTheta_right","Fragment Momentum Y component vs. Protons opening angle (Right)",200,0,100,100,-0.5,0.5);
   h_Pfragy_OpeningTheta_right->SetXTitle("#theta / degree");
	h_Pfragy_OpeningTheta_right->GetXaxis()->CenterTitle(1);
	h_Pfragy_OpeningTheta_right->GetXaxis()->SetTitleFont(32);
   h_Pfragy_OpeningTheta_right->GetXaxis()->SetTitleSize(0.06);
	h_Pfragy_OpeningTheta_right->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragy_OpeningTheta_right->SetYTitle("Pfrag_{y} / GeV");
	h_Pfragy_OpeningTheta_right->GetYaxis()->CenterTitle(1);
	h_Pfragy_OpeningTheta_right->GetYaxis()->SetTitleFont(32);
   h_Pfragy_OpeningTheta_right->GetYaxis()->SetTitleSize(0.04);
   // 37 y
   TH2F* h_Pfragy_OpeningTheta_all = new TH2F("h_Pfragy_OpeningTheta_all","Fragment Momentum Y component vs. Protons opening angle (Generator)",200,0,100,100,-0.5,0.5);
   h_Pfragy_OpeningTheta_all->SetXTitle("#theta / degree");
	h_Pfragy_OpeningTheta_all->GetXaxis()->CenterTitle(1);
	h_Pfragy_OpeningTheta_all->GetXaxis()->SetTitleFont(32);
   h_Pfragy_OpeningTheta_all->GetXaxis()->SetTitleSize(0.06);
	h_Pfragy_OpeningTheta_all->GetXaxis()->SetTitleOffset(0.7);
   h_Pfragy_OpeningTheta_all->SetYTitle("Pfrag_{y} / GeV");
	h_Pfragy_OpeningTheta_all->GetYaxis()->CenterTitle(1);
	h_Pfragy_OpeningTheta_all->GetYaxis()->SetTitleFont(32);
   h_Pfragy_OpeningTheta_all->GetYaxis()->SetTitleSize(0.04);

   // 38
   TH1F *h_M_miss_square_frag_with_accp = new TH1F("M_miss_square_frag_with_accp","M^{2}_{ miss }",60,0.08,2);
   TH1F *h_M_miss_square_frag = new TH1F("M_miss_square_frag","M^{2}_{ miss }",60,0.08,2);
   h_M_miss_square_frag_with_accp->SetXTitle("M^{2}_{ miss } / GeV");
	h_M_miss_square_frag_with_accp->GetXaxis()->CenterTitle(1);
	h_M_miss_square_frag_with_accp->GetXaxis()->SetTitleFont(32);
   h_M_miss_square_frag_with_accp->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_square_frag_with_accp->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_square_frag_with_accp->SetYTitle("Counts");
	h_M_miss_square_frag_with_accp->GetYaxis()->CenterTitle(1);
	h_M_miss_square_frag_with_accp->GetYaxis()->SetTitleFont(32);
   h_M_miss_square_frag_with_accp->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_frag_with_accp = new TH1F("P_miss_frag_with_accp","P_{ miss }",70,0,0.7);
   TH1F *h_P_miss_frag = new TH1F("P_miss_frag","P_{ miss }",70,0,0.7);
   h_P_miss_frag_with_accp->SetXTitle("P_{ miss } / GeV");
	h_P_miss_frag_with_accp->GetXaxis()->CenterTitle(1);
	h_P_miss_frag_with_accp->GetXaxis()->SetTitleFont(32);
   h_P_miss_frag_with_accp->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_frag_with_accp->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_frag_with_accp->SetYTitle("Counts");
	h_P_miss_frag_with_accp->GetYaxis()->CenterTitle(1);
	h_P_miss_frag_with_accp->GetYaxis()->SetTitleFont(32);
   h_P_miss_frag_with_accp->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_x_frag_with_accp = new TH1F("P_miss_x_frag_with_accp","Pmiss_{ x }",100,-1,1);
   TH1F *h_P_miss_x_frag = new TH1F("P_miss_x_frag","Pmiss_{ x }",100,-1,1);
   h_P_miss_x_frag_with_accp->SetXTitle("Pmiss_{ x } / GeV");
	h_P_miss_x_frag_with_accp->GetXaxis()->CenterTitle(1);
	h_P_miss_x_frag_with_accp->GetXaxis()->SetTitleFont(32);
   h_P_miss_x_frag_with_accp->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_x_frag_with_accp->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_x_frag_with_accp->SetYTitle("Counts");
	h_P_miss_x_frag_with_accp->GetYaxis()->CenterTitle(1);
	h_P_miss_x_frag_with_accp->GetYaxis()->SetTitleFont(32);
   h_P_miss_x_frag_with_accp->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_y_frag_with_accp = new TH1F("P_miss_y_frag_with_accp","Pmiss_{ y }",100,-1,1);
   TH1F *h_P_miss_y_frag = new TH1F("P_miss_y_frag","Pmiss_{ y }",100,-1,1);
   h_P_miss_y_frag_with_accp->SetXTitle("Pmiss_{ y }/ GeV");
	h_P_miss_y_frag_with_accp->GetXaxis()->CenterTitle(1);
	h_P_miss_y_frag_with_accp->GetXaxis()->SetTitleFont(32);
   h_P_miss_y_frag_with_accp->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_y_frag_with_accp->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_y_frag_with_accp->SetYTitle("Counts");
	h_P_miss_y_frag_with_accp->GetYaxis()->CenterTitle(1);
	h_P_miss_y_frag_with_accp->GetYaxis()->SetTitleFont(32);
   h_P_miss_y_frag_with_accp->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_z_frag_with_accp = new TH1F("P_miss_z_frag_with_accp","Pmiss_{ z }",100,-1,1);
   TH1F *h_P_miss_z_frag = new TH1F("P_miss_z_frag","Pmiss_{ z }",100,-1,1);
   h_P_miss_z_frag_with_accp->SetXTitle("Pmiss_{ z }/ GeV");
	h_P_miss_z_frag_with_accp->GetXaxis()->CenterTitle(1);
	h_P_miss_z_frag_with_accp->GetXaxis()->SetTitleFont(32);
   h_P_miss_z_frag_with_accp->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_z_frag_with_accp->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_z_frag_with_accp->SetYTitle("Counts");
	h_P_miss_z_frag_with_accp->GetYaxis()->CenterTitle(1);
	h_P_miss_z_frag_with_accp->GetYaxis()->SetTitleFont(32);
   h_P_miss_z_frag_with_accp->GetYaxis()->SetTitleSize(0.04);

   // 39
   TH1F *h_M_miss_square_frag_with_accp_diff = new TH1F("M_miss_square_frag_with_accp_diff","M^{2}_{ miss } difference between two reconstruction methods",100,-1,1);
   h_M_miss_square_frag_with_accp_diff->SetXTitle("M^{2}_{ miss } / GeV");
	h_M_miss_square_frag_with_accp_diff->GetXaxis()->CenterTitle(1);
	h_M_miss_square_frag_with_accp_diff->GetXaxis()->SetTitleFont(32);
   h_M_miss_square_frag_with_accp_diff->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_square_frag_with_accp_diff->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_square_frag_with_accp_diff->SetYTitle("Counts");
	h_M_miss_square_frag_with_accp_diff->GetYaxis()->CenterTitle(1);
	h_M_miss_square_frag_with_accp_diff->GetYaxis()->SetTitleFont(32);
   h_M_miss_square_frag_with_accp_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_frag_with_accp_diff = new TH1F("P_miss_frag_with_accp_diff","P_{ miss } difference between two reconstruction methods",100,-1,1);
   h_P_miss_frag_with_accp_diff->SetXTitle("P_{ miss } / GeV");
	h_P_miss_frag_with_accp_diff->GetXaxis()->CenterTitle(1);
	h_P_miss_frag_with_accp_diff->GetXaxis()->SetTitleFont(32);
   h_P_miss_frag_with_accp_diff->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_frag_with_accp_diff->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_frag_with_accp_diff->SetYTitle("Counts");
	h_P_miss_frag_with_accp_diff->GetYaxis()->CenterTitle(1);
	h_P_miss_frag_with_accp_diff->GetYaxis()->SetTitleFont(32);
   h_P_miss_frag_with_accp_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_x_frag_with_accp_diff = new TH1F("P_miss_x_frag_with_accp_diff","Pmiss_{ x } difference between two reconstruction methods",100,-1,1);
   h_P_miss_x_frag_with_accp_diff->SetXTitle("Pmiss_{ x } / GeV");
	h_P_miss_x_frag_with_accp_diff->GetXaxis()->CenterTitle(1);
	h_P_miss_x_frag_with_accp_diff->GetXaxis()->SetTitleFont(32);
   h_P_miss_x_frag_with_accp_diff->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_x_frag_with_accp_diff->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_x_frag_with_accp_diff->SetYTitle("Counts");
	h_P_miss_x_frag_with_accp_diff->GetYaxis()->CenterTitle(1);
	h_P_miss_x_frag_with_accp_diff->GetYaxis()->SetTitleFont(32);
   h_P_miss_x_frag_with_accp_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_y_frag_with_accp_diff = new TH1F("P_miss_y_frag_with_accp_diff","Pmiss_{ y } difference between two reconstruction methods",100,-1,1);
   h_P_miss_y_frag_with_accp_diff->SetXTitle("Pmiss_{ y }/ GeV");
	h_P_miss_y_frag_with_accp_diff->GetXaxis()->CenterTitle(1);
	h_P_miss_y_frag_with_accp_diff->GetXaxis()->SetTitleFont(32);
   h_P_miss_y_frag_with_accp_diff->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_y_frag_with_accp_diff->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_y_frag_with_accp_diff->SetYTitle("Counts");
	h_P_miss_y_frag_with_accp_diff->GetYaxis()->CenterTitle(1);
	h_P_miss_y_frag_with_accp_diff->GetYaxis()->SetTitleFont(32);
   h_P_miss_y_frag_with_accp_diff->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_z_frag_with_accp_diff = new TH1F("P_miss_z_frag_with_accp_diff","Pmiss_{ z } difference between two reconstruction methods",100,-1,1);
   h_P_miss_z_frag_with_accp_diff->SetXTitle("Pmiss_{ z }/ GeV");
	h_P_miss_z_frag_with_accp_diff->GetXaxis()->CenterTitle(1);
	h_P_miss_z_frag_with_accp_diff->GetXaxis()->SetTitleFont(32);
   h_P_miss_z_frag_with_accp_diff->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_z_frag_with_accp_diff->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_z_frag_with_accp_diff->SetYTitle("Counts");
	h_P_miss_z_frag_with_accp_diff->GetYaxis()->CenterTitle(1);
	h_P_miss_z_frag_with_accp_diff->GetYaxis()->SetTitleFont(32);
   h_P_miss_z_frag_with_accp_diff->GetYaxis()->SetTitleSize(0.04);

   // 40
   TH2F *h_M_miss_square_frag_with_accp_vs_method1 = new TH2F("M_miss_square_frag_with_accp_vs_method1","M^{2}_{ miss } from two reconstruction methods",100,0,2,100,0,2);
   h_M_miss_square_frag_with_accp_vs_method1->SetXTitle("M^{2}_{ miss } from Fragments / GeV");
	h_M_miss_square_frag_with_accp_vs_method1->GetXaxis()->CenterTitle(1);
	h_M_miss_square_frag_with_accp_vs_method1->GetXaxis()->SetTitleFont(32);
   h_M_miss_square_frag_with_accp_vs_method1->GetXaxis()->SetTitleSize(0.06);
	h_M_miss_square_frag_with_accp_vs_method1->GetXaxis()->SetTitleOffset(0.7);
   h_M_miss_square_frag_with_accp_vs_method1->SetYTitle("M^{2}_{ miss } from Protons / GeV");
	h_M_miss_square_frag_with_accp_vs_method1->GetYaxis()->CenterTitle(1);
	h_M_miss_square_frag_with_accp_vs_method1->GetYaxis()->SetTitleFont(32);
   h_M_miss_square_frag_with_accp_vs_method1->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_P_miss_frag_with_accp_vs_method1 = new TH2F("P_miss_frag_with_accp_vs_method1","P_{ miss } from two reconstruction methods",70,0,0.7,70,0,0.7);
   h_P_miss_frag_with_accp_vs_method1->SetYTitle("P_{ miss } from Fragments / GeV");
   h_P_miss_frag_with_accp_vs_method1->SetXTitle("P_{ miss } from Protons / GeV");
	h_P_miss_frag_with_accp_vs_method1->GetXaxis()->CenterTitle(1);
	h_P_miss_frag_with_accp_vs_method1->GetXaxis()->SetTitleFont(32);
   h_P_miss_frag_with_accp_vs_method1->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_frag_with_accp_vs_method1->GetXaxis()->SetTitleOffset(0.7);
	h_P_miss_frag_with_accp_vs_method1->GetYaxis()->CenterTitle(1);
	h_P_miss_frag_with_accp_vs_method1->GetYaxis()->SetTitleFont(32);
   h_P_miss_frag_with_accp_vs_method1->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_P_miss_x_frag_with_accp_vs_method1 = new TH2F("P_miss_x_frag_with_accp_vs_method1","Pmiss_{ x } from two reconstruction methods",100,-1,1,100,-1,1);
   h_P_miss_x_frag_with_accp_vs_method1->SetYTitle("Pmiss_{ x } from Fragments / GeV");
   h_P_miss_x_frag_with_accp_vs_method1->SetXTitle("Pmiss_{ x } from Protons / GeV");
	h_P_miss_x_frag_with_accp_vs_method1->GetXaxis()->CenterTitle(1);
	h_P_miss_x_frag_with_accp_vs_method1->GetXaxis()->SetTitleFont(32);
   h_P_miss_x_frag_with_accp_vs_method1->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_x_frag_with_accp_vs_method1->GetXaxis()->SetTitleOffset(0.7);
	h_P_miss_x_frag_with_accp_vs_method1->GetYaxis()->CenterTitle(1);
	h_P_miss_x_frag_with_accp_vs_method1->GetYaxis()->SetTitleFont(32);
   h_P_miss_x_frag_with_accp_vs_method1->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_P_miss_y_frag_with_accp_vs_method1 = new TH2F("P_miss_y_frag_with_accp_vs_method1","Pmiss_{ y } from two reconstruction methods",100,-1,1,100,-1,1);
   h_P_miss_y_frag_with_accp_vs_method1->SetYTitle("Pmiss_{ y } from Fragments / GeV");
   h_P_miss_y_frag_with_accp_vs_method1->SetXTitle("Pmiss_{ y } from Protons / GeV");
	h_P_miss_y_frag_with_accp_vs_method1->GetXaxis()->CenterTitle(1);
	h_P_miss_y_frag_with_accp_vs_method1->GetXaxis()->SetTitleFont(32);
   h_P_miss_y_frag_with_accp_vs_method1->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_y_frag_with_accp_vs_method1->GetXaxis()->SetTitleOffset(0.7);
	h_P_miss_y_frag_with_accp_vs_method1->GetYaxis()->CenterTitle(1);
	h_P_miss_y_frag_with_accp_vs_method1->GetYaxis()->SetTitleFont(32);
   h_P_miss_y_frag_with_accp_vs_method1->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_P_miss_z_frag_with_accp_vs_method1 = new TH2F("P_miss_z_frag_with_accp_vs_method1","Pmiss_{ z } from two reconstruction methods",100,-1,1,100,-1,1);
   h_P_miss_z_frag_with_accp_vs_method1->SetYTitle("Pmiss_{ z } from Fragments / GeV");
   h_P_miss_z_frag_with_accp_vs_method1->SetXTitle("Pmiss_{ z } from Protons / GeV");
	h_P_miss_z_frag_with_accp_vs_method1->GetXaxis()->CenterTitle(1);
	h_P_miss_z_frag_with_accp_vs_method1->GetXaxis()->SetTitleFont(32);
   h_P_miss_z_frag_with_accp_vs_method1->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_z_frag_with_accp_vs_method1->GetXaxis()->SetTitleOffset(0.7);
	h_P_miss_z_frag_with_accp_vs_method1->GetYaxis()->CenterTitle(1);
	h_P_miss_z_frag_with_accp_vs_method1->GetYaxis()->SetTitleFont(32);
   h_P_miss_z_frag_with_accp_vs_method1->GetYaxis()->SetTitleSize(0.04);

   // 41
   TH2F *h_px_diff_polar = new TH2F("px_diff_polar","Proton X momentum diff vs. polar angle",100,0,90,100,-0.05,0.05);
   h_px_diff_polar->SetXTitle("Ploar angle / degree");
	h_px_diff_polar->GetXaxis()->CenterTitle(1);
	h_px_diff_polar->GetXaxis()->SetTitleFont(32);
   h_px_diff_polar->GetXaxis()->SetTitleSize(0.06);
	h_px_diff_polar->GetXaxis()->SetTitleOffset(0.7);
   h_px_diff_polar->SetYTitle("Momentum diff / GeV");
	h_px_diff_polar->GetYaxis()->CenterTitle(1);
	h_px_diff_polar->GetYaxis()->SetTitleFont(32);
   h_px_diff_polar->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_py_diff_polar = new TH2F("py_diff_polar","Proton Y momentum diff vs. polar angle",100,0,90,100,-0.05,0.05);
   h_py_diff_polar->SetXTitle("Ploar angle / degree");
	h_py_diff_polar->GetXaxis()->CenterTitle(1);
	h_py_diff_polar->GetXaxis()->SetTitleFont(32);
   h_py_diff_polar->GetXaxis()->SetTitleSize(0.06);
	h_py_diff_polar->GetXaxis()->SetTitleOffset(0.7);
   h_py_diff_polar->SetYTitle("Momentum diff / GeV");
	h_py_diff_polar->GetYaxis()->CenterTitle(1);
	h_py_diff_polar->GetYaxis()->SetTitleFont(32);
   h_py_diff_polar->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_pz_diff_polar = new TH2F("pz_diff_polar","Proton Z momentum diff vs. polar angle",100,0,90,100,-0.05,0.05);
   h_pz_diff_polar->SetXTitle("Ploar angle / degree");
	h_pz_diff_polar->GetXaxis()->CenterTitle(1);
	h_pz_diff_polar->GetXaxis()->SetTitleFont(32);
   h_pz_diff_polar->GetXaxis()->SetTitleSize(0.06);
	h_pz_diff_polar->GetXaxis()->SetTitleOffset(0.7);
   h_pz_diff_polar->SetYTitle("Momentum diff / GeV");
	h_pz_diff_polar->GetYaxis()->CenterTitle(1);
	h_pz_diff_polar->GetYaxis()->SetTitleFont(32);
   h_pz_diff_polar->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_P_miss_x_diff_polar = new TH2F("P_miss_x_diff_polar","Pmiss X diff vs. polar angle",100,0,90,100,-0.05,0.05);
   h_P_miss_x_diff_polar->SetXTitle("Ploar angle / degree");
	h_P_miss_x_diff_polar->GetXaxis()->CenterTitle(1);
	h_P_miss_x_diff_polar->GetXaxis()->SetTitleFont(32);
   h_P_miss_x_diff_polar->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_x_diff_polar->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_x_diff_polar->SetYTitle("Momentum diff / GeV");
	h_P_miss_x_diff_polar->GetYaxis()->CenterTitle(1);
	h_P_miss_x_diff_polar->GetYaxis()->SetTitleFont(32);
   h_P_miss_x_diff_polar->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_P_miss_y_diff_polar = new TH2F("P_miss_y_diff_polar","Pmiss Y diff vs. polar angle",100,0,90,100,-0.05,0.05);
   h_P_miss_y_diff_polar->SetXTitle("Ploar angle / degree");
	h_P_miss_y_diff_polar->GetXaxis()->CenterTitle(1);
	h_P_miss_y_diff_polar->GetXaxis()->SetTitleFont(32);
   h_P_miss_y_diff_polar->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_y_diff_polar->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_y_diff_polar->SetYTitle("Momentum diff / GeV");
	h_P_miss_y_diff_polar->GetYaxis()->CenterTitle(1);
	h_P_miss_y_diff_polar->GetYaxis()->SetTitleFont(32);
   h_P_miss_y_diff_polar->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_P_miss_z_diff_polar = new TH2F("P_miss_z_diff_polar","Pmiss X diff vs. polar angle",100,0,90,100,-0.05,0.05);
   h_P_miss_z_diff_polar->SetXTitle("Ploar angle / degree");
	h_P_miss_z_diff_polar->GetXaxis()->CenterTitle(1);
	h_P_miss_z_diff_polar->GetXaxis()->SetTitleFont(32);
   h_P_miss_z_diff_polar->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_z_diff_polar->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_z_diff_polar->SetYTitle("Momentum diff / GeV");
	h_P_miss_z_diff_polar->GetYaxis()->CenterTitle(1);
	h_P_miss_z_diff_polar->GetYaxis()->SetTitleFont(32);
   h_P_miss_z_diff_polar->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_Pmiss_diff_ratio = new TH1F("Pmiss_diff_ratio","(Pmiss_{ frag } - Pmiss_{ arm }) / Pmiss_{ frag } ",300,-200,100);
   h_Pmiss_diff_ratio->SetXTitle("Percentage");
	h_Pmiss_diff_ratio->GetXaxis()->CenterTitle(1);
	h_Pmiss_diff_ratio->GetXaxis()->SetTitleFont(32);
   h_Pmiss_diff_ratio->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_diff_ratio->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_diff_ratio->SetYTitle("Counts");
	h_Pmiss_diff_ratio->GetYaxis()->CenterTitle(1);
	h_Pmiss_diff_ratio->GetYaxis()->SetTitleFont(32);
   h_Pmiss_diff_ratio->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pmiss_diff_ratio_frag = new TH2F("h_Pmiss_diff_ratio_frag","(Pmiss_{ frag } - Pmiss_{ arm }) / Pmiss_{ frag } vs. Pmiss_{ frag }",200,0,2,300,-200,100);
   h_Pmiss_diff_ratio_frag->SetXTitle("Pmiss_{ frag } / GeV");
	h_Pmiss_diff_ratio_frag->GetXaxis()->CenterTitle(1);
	h_Pmiss_diff_ratio_frag->GetXaxis()->SetTitleFont(32);
   h_Pmiss_diff_ratio_frag->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_diff_ratio_frag->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_diff_ratio_frag->SetYTitle("Percentage");
	h_Pmiss_diff_ratio_frag->GetYaxis()->CenterTitle(1);
	h_Pmiss_diff_ratio_frag->GetYaxis()->SetTitleFont(32);
   h_Pmiss_diff_ratio_frag->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pmiss_diff_ratio_arm = new TH2F("h_Pmiss_diff_ratio_arm","(Pmiss_{ frag } - Pmiss_{ arm }) / Pmiss_{ frag } vs. Pmiss_{ arm }",200,0,2,300,-200,100);
   h_Pmiss_diff_ratio_arm->SetXTitle("Pmiss_{ arm } / GeV");
	h_Pmiss_diff_ratio_arm->GetXaxis()->CenterTitle(1);
	h_Pmiss_diff_ratio_arm->GetXaxis()->SetTitleFont(32);
   h_Pmiss_diff_ratio_arm->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_diff_ratio_arm->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_diff_ratio_arm->SetYTitle("Percentage");
	h_Pmiss_diff_ratio_arm->GetYaxis()->CenterTitle(1);
	h_Pmiss_diff_ratio_arm->GetYaxis()->SetTitleFont(32);
   h_Pmiss_diff_ratio_arm->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pmiss_frag_theta = new TH2F("h_Pmiss_frag_theta","Pmiss_{ frag } vs. Theta",200,0,100,200,0,2);
   h_Pmiss_frag_theta->SetXTitle("Theta");
	h_Pmiss_frag_theta->GetXaxis()->CenterTitle(1);
	h_Pmiss_frag_theta->GetXaxis()->SetTitleFont(32);
   h_Pmiss_frag_theta->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_frag_theta->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_frag_theta->SetYTitle("Pmiss_{ frag } / GeV");
	h_Pmiss_frag_theta->GetYaxis()->CenterTitle(1);
	h_Pmiss_frag_theta->GetYaxis()->SetTitleFont(32);
   h_Pmiss_frag_theta->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_Pmiss_arm_theta = new TH2F("h_Pmiss_arm_theta","Pmiss_{ arm } vs. Theta",200,0,100,200,0,2);
   h_Pmiss_arm_theta->SetXTitle("Theta");
	h_Pmiss_arm_theta->GetXaxis()->CenterTitle(1);
	h_Pmiss_arm_theta->GetXaxis()->SetTitleFont(32);
   h_Pmiss_arm_theta->GetXaxis()->SetTitleSize(0.06);
	h_Pmiss_arm_theta->GetXaxis()->SetTitleOffset(0.7);
   h_Pmiss_arm_theta->SetYTitle("Pmiss_{ arm } / GeV");
	h_Pmiss_arm_theta->GetYaxis()->CenterTitle(1);
	h_Pmiss_arm_theta->GetYaxis()->SetTitleFont(32);
   h_Pmiss_arm_theta->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_CSC_Hits_pos = new TH2F("h_CSC_Hits_pos","CSC Hits Position Distribution",50,-60,140,50,-100,100);
   h_CSC_Hits_pos->SetXTitle("X (cm)");
	h_CSC_Hits_pos->GetXaxis()->CenterTitle(1);
	h_CSC_Hits_pos->GetXaxis()->SetTitleFont(32);
   h_CSC_Hits_pos->GetXaxis()->SetTitleSize(0.06);
	h_CSC_Hits_pos->GetXaxis()->SetTitleOffset(0.7);
   h_CSC_Hits_pos->SetYTitle("Y (cm)");
	h_CSC_Hits_pos->GetYaxis()->CenterTitle(1);
	h_CSC_Hits_pos->GetYaxis()->SetTitleFont(32);
   h_CSC_Hits_pos->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_CSC_Hits_pos_X = new TH1F("h_CSC_Hits_pos_X","CSC Hits X Position Distribution",50,-60,140);
   h_CSC_Hits_pos_X->SetXTitle("X (cm)");
	h_CSC_Hits_pos_X->GetXaxis()->CenterTitle(1);
	h_CSC_Hits_pos_X->GetXaxis()->SetTitleFont(32);
   h_CSC_Hits_pos_X->GetXaxis()->SetTitleSize(0.06);
	h_CSC_Hits_pos_X->GetXaxis()->SetTitleOffset(0.7);
   h_CSC_Hits_pos_X->SetYTitle("Counts");
	h_CSC_Hits_pos_X->GetYaxis()->CenterTitle(1);
	h_CSC_Hits_pos_X->GetYaxis()->SetTitleFont(32);
   h_CSC_Hits_pos_X->GetYaxis()->SetTitleSize(0.04);

   TH1F* h_CSC_Hits_pos_Y = new TH1F("h_CSC_Hits_pos_Y","CSC Hits Y Position Distribution",50,-100,100);
   h_CSC_Hits_pos_Y->SetXTitle("Y (cm)");
	h_CSC_Hits_pos_Y->GetXaxis()->CenterTitle(1);
	h_CSC_Hits_pos_Y->GetXaxis()->SetTitleFont(32);
   h_CSC_Hits_pos_Y->GetXaxis()->SetTitleSize(0.06);
	h_CSC_Hits_pos_Y->GetXaxis()->SetTitleOffset(0.7);
   h_CSC_Hits_pos_Y->SetYTitle("Counts");
	h_CSC_Hits_pos_Y->GetYaxis()->CenterTitle(1);
	h_CSC_Hits_pos_Y->GetYaxis()->SetTitleFont(32);
   h_CSC_Hits_pos_Y->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_Pfrag_proton_x = new TH1F("Pfrag_x","Pfrag_{ x} (proton) in lab  system",200,-0.5,1.5);
   h_Pfrag_proton_x->SetXTitle("Pfrag_{x} / GeV");
	h_Pfrag_proton_x->GetXaxis()->CenterTitle(1);
	h_Pfrag_proton_x->GetXaxis()->SetTitleFont(32);
   h_Pfrag_proton_x->GetXaxis()->SetTitleSize(0.06);
	h_Pfrag_proton_x->GetXaxis()->SetTitleOffset(0.7);
   h_Pfrag_proton_x->SetYTitle("Counts");
	h_Pfrag_proton_x->GetYaxis()->CenterTitle(1);
	h_Pfrag_proton_x->GetYaxis()->SetTitleFont(32);
   h_Pfrag_proton_x->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_Pfrag_proton_y = new TH1F("Pfrag_y","Pfrag_{ y} (proton) in lab  system",200,-1,1);
   h_Pfrag_proton_y->SetXTitle("Pfrag_{y} / GeV");
	h_Pfrag_proton_y->GetXaxis()->CenterTitle(1);
	h_Pfrag_proton_y->GetXaxis()->SetTitleFont(32);
   h_Pfrag_proton_y->GetXaxis()->SetTitleSize(0.06);
	h_Pfrag_proton_y->GetXaxis()->SetTitleOffset(0.7);
   h_Pfrag_proton_y->SetYTitle("Counts");
	h_Pfrag_proton_y->GetYaxis()->CenterTitle(1);
	h_Pfrag_proton_y->GetYaxis()->SetTitleFont(32);
   h_Pfrag_proton_y->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_Pfrag_proton_z = new TH1F("Pfrag_z","Pfrag_{ z} (proton) in lab  system",200,-4,2);
   h_Pfrag_proton_z->SetXTitle("Pfrag_{z} / GeV");
	h_Pfrag_proton_z->GetXaxis()->CenterTitle(1);
	h_Pfrag_proton_z->GetXaxis()->SetTitleFont(32);
   h_Pfrag_proton_z->GetXaxis()->SetTitleSize(0.06);
	h_Pfrag_proton_z->GetXaxis()->SetTitleOffset(0.7);
   h_Pfrag_proton_z->SetYTitle("Counts");
	h_Pfrag_proton_z->GetYaxis()->CenterTitle(1);
	h_Pfrag_proton_z->GetYaxis()->SetTitleFont(32);
   h_Pfrag_proton_z->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_Pfrag_proton = new TH1F("Pfrag","Pfrag (proton) in lab  system",200,0,4);
   h_Pfrag_proton->SetXTitle("P / GeV");
	h_Pfrag_proton->GetXaxis()->CenterTitle(1);
	h_Pfrag_proton->GetXaxis()->SetTitleFont(32);
   h_Pfrag_proton->GetXaxis()->SetTitleSize(0.06);
	h_Pfrag_proton->GetXaxis()->SetTitleOffset(0.7);
   h_Pfrag_proton->SetYTitle("Counts");
	h_Pfrag_proton->GetYaxis()->CenterTitle(1);
	h_Pfrag_proton->GetYaxis()->SetTitleFont(32);
   h_Pfrag_proton->GetYaxis()->SetTitleSize(0.04);

   TH2F *h_Pfrag_proton_xy = new TH2F("Pfrag_x","Pfrag_{ x} vs. Pfrag_{ y}",100,-0.5,1.5,100,-1,1);
   h_Pfrag_proton_xy->SetXTitle("Pfrag_{x} / GeV");
	h_Pfrag_proton_xy->GetXaxis()->CenterTitle(1);
	h_Pfrag_proton_xy->GetXaxis()->SetTitleFont(32);
   h_Pfrag_proton_xy->GetXaxis()->SetTitleSize(0.06);
	h_Pfrag_proton_xy->GetXaxis()->SetTitleOffset(0.7);
   h_Pfrag_proton_xy->SetYTitle("Pfrag_{y} / GeV");
	h_Pfrag_proton_xy->GetYaxis()->CenterTitle(1);
	h_Pfrag_proton_xy->GetYaxis()->SetTitleFont(32);
   h_Pfrag_proton_xy->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_proton_rec_angle_diff = new TH1F("proton_rec_angle_diff","Angle difference between reconstructed proton momentum and generator",100,-10,10);
   h_proton_rec_angle_diff->SetXTitle("Angle Diff");
	h_proton_rec_angle_diff->GetXaxis()->CenterTitle(1);
	h_proton_rec_angle_diff->GetXaxis()->SetTitleFont(32);
   h_proton_rec_angle_diff->GetXaxis()->SetTitleSize(0.06);
	h_proton_rec_angle_diff->GetXaxis()->SetTitleOffset(0.7);
   h_proton_rec_angle_diff->SetYTitle("Counts");
	h_proton_rec_angle_diff->GetYaxis()->CenterTitle(1);
	h_proton_rec_angle_diff->GetYaxis()->SetTitleFont(32);
   h_proton_rec_angle_diff->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_openingTheta_mintu = new TH2F("h_openingTheta_mintu","Opening #theta vs. min{|t|,|u|}",100,55,75,100,0.5,3.5);
   h_openingTheta_mintu->SetXTitle("Opening #theta");
   h_openingTheta_mintu->GetXaxis()->CenterTitle(1);
   h_openingTheta_mintu->GetXaxis()->SetTitleFont(32);
   h_openingTheta_mintu->GetXaxis()->SetTitleSize(0.06);
   h_openingTheta_mintu->GetXaxis()->SetTitleOffset(0.7);
   h_openingTheta_mintu->SetYTitle("min{|t|,|u|}");
   h_openingTheta_mintu->GetYaxis()->CenterTitle(1);
   h_openingTheta_mintu->GetYaxis()->SetTitleFont(32);
   h_openingTheta_mintu->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_TOF400_XY = new TH2F("h_TOF400_XY","Hit positions on TOF400;X [cm];Y [cm]",400,-200,200,400,-100,100);
   h_TOF400_XY->SetXTitle("X [cm]");
   h_TOF400_XY->GetXaxis()->CenterTitle(1);
   h_TOF400_XY->GetXaxis()->SetTitleFont(32);
   h_TOF400_XY->GetXaxis()->SetTitleSize(0.06);
   h_TOF400_XY->GetXaxis()->SetTitleOffset(0.7);
   h_TOF400_XY->SetYTitle("Y [cm]");
   h_TOF400_XY->GetYaxis()->CenterTitle(1);
   h_TOF400_XY->GetYaxis()->SetTitleFont(32);
   h_TOF400_XY->GetYaxis()->SetTitleSize(0.04);

   TH1F *h_P_miss_T_diff = new TH1F("P_miss_T_diff","P_{ miss} transverse component diff in ^{12}C reference system",200,-1,1); 
   // h_P_miss_T_diff->SetStats(0);
   h_P_miss_T_diff->SetXTitle("P_{ miss} / GeV#bulletc^{-1}");
   // h_P_miss_T_diff->GetXaxis()->SetNdivisions(10,kTRUE);
	h_P_miss_T_diff->GetXaxis()->CenterTitle(1);
	h_P_miss_T_diff->GetXaxis()->SetTitleFont(32);
   h_P_miss_T_diff->GetXaxis()->SetTitleSize(0.06);
	h_P_miss_T_diff->GetXaxis()->SetTitleOffset(0.7);
   h_P_miss_T_diff->SetYTitle("Counts");
	h_P_miss_T_diff->GetYaxis()->CenterTitle(1);
	h_P_miss_T_diff->GetYaxis()->SetTitleFont(32);
   h_P_miss_T_diff->GetYaxis()->SetTitleSize(0.04);

   TH2F* h_openingtheta_Pmiss = new TH2F("h_openingtheta_Pmiss","Opening #theta vs. P_{miss}",100,0,0.5,100,59,77);
   h_openingtheta_Pmiss->SetXTitle("P_{miss}");
   h_openingtheta_Pmiss->GetXaxis()->CenterTitle(1);
   h_openingtheta_Pmiss->GetXaxis()->SetTitleFont(32);
   h_openingtheta_Pmiss->GetXaxis()->SetTitleSize(0.06);
   h_openingtheta_Pmiss->GetXaxis()->SetTitleOffset(0.7);
   h_openingtheta_Pmiss->SetYTitle("Opening #theta");
   h_openingtheta_Pmiss->GetYaxis()->CenterTitle(1);
   h_openingtheta_Pmiss->GetYaxis()->SetTitleFont(32);
   h_openingtheta_Pmiss->GetYaxis()->SetTitleSize(0.04);

   TFile *file_output_QE = new TFile("./QE_Simulation_NoAbs_CarlosWF_20Mio.root","RECREATE"); // "UPDATE"
   TTree *tree_QE = new TTree("sim","data");

   double weight_QE = 1.;
   double Pfragx_12C, Pfragy_12C, Pfragz_12C, Pfrag_12C;
   double opening_theta, Trieman_Yang_Angle_cos;
   Int_t Trigger_GEM, Trigger_CSC, Trigger_TOF;
   double Hit_GEM_left[3], Hit_GEM_right[3];
   double Hit_CSC_left[3], Hit_CSC_right[3];
   double Hit_TOF_left[3], Hit_TOF_right[3];
   double p1_QE[3], p2_QE[3];

   tree_QE->Branch("p1_QE",p1_QE,"p1_QE[3]/D");
   tree_QE->Branch("p2_QE",p2_QE,"p2_QE[3]/D");

   tree_QE->Branch("P_left",&P_left,"P_left/D");
   tree_QE->Branch("Px_left",&Px_left,"Px_left/D");
   tree_QE->Branch("Py_left",&Py_left,"Py_left/D");
   tree_QE->Branch("Pz_left",&Pz_left,"Pz_left/D");
   tree_QE->Branch("P_right",&P_right,"P_right/D");
   tree_QE->Branch("Px_right",&Px_right,"Px_right/D");
   tree_QE->Branch("Py_right",&Py_right,"Py_right/D");
   tree_QE->Branch("Pz_right",&Pz_right,"Pz_right/D");

   tree_QE->Branch("P_miss",&P_miss,"P_miss/D");
   tree_QE->Branch("P_miss_x",&P_miss_x,"P_miss_x/D");
   tree_QE->Branch("P_miss_y",&P_miss_y,"P_miss_y/D");
   tree_QE->Branch("P_miss_z",&P_miss_z,"P_miss_z/D");
   tree_QE->Branch("E_miss",&E_miss,"E_miss/D");
   tree_QE->Branch("M_miss",&M_miss,"M_miss/D");
   tree_QE->Branch("M_miss_square",&M_miss_square,"M_miss_square/D");

   tree_QE->Branch("opening_theta",&opening_theta,"opening_theta/D");
   tree_QE->Branch("theta_left",&theta1,"theta_left/D");
   tree_QE->Branch("theta_right",&theta2,"theta_right/D");
   tree_QE->Branch("phi_left",&phi1,"phi_left/D");
   tree_QE->Branch("phi_right",&phi2,"phi_right/D");

   tree_QE->Branch("Mandelstam_s",&ss,"Mandelstam_s/D");
   tree_QE->Branch("Mandelstam_t",&tt,"Mandelstam_t/D");
   tree_QE->Branch("Mandelstam_u",&uu,"Mandelstam_u/D");
   tree_QE->Branch("Mandelstam_p",&pp,"Mandelstam_p/D");
   tree_QE->Branch("Mandelstam_Angle",&CA,"Mandelstam_Angle/D");

   tree_QE->Branch("vertex_x",&vertex_x,"vertex_x/D");
   tree_QE->Branch("vertex_y",&vertex_y,"vertex_y/D");
   tree_QE->Branch("vertex_z",&vertex_z,"vertex_z/D");

   tree_QE->Branch("Pfrag_x",&Pfragx_12C,"Pfrag_x/D");
   tree_QE->Branch("Pfrag_y",&Pfragy_12C,"Pfrag_y/D");
   tree_QE->Branch("Pfrag_z",&Pfragz_12C,"Pfrag_z/D");
   tree_QE->Branch("Pfrag",&Pfrag_12C,"Pfrag/D");

   tree_QE->Branch("angle_pmiss_pfrag",&angle_pmiss_pfrag,"angle_pmiss_pfrag/D");
   tree_QE->Branch("weight",&weight,"weight/D");

   tree_QE->Branch("Hit_GEM_left",Hit_GEM_left,"Hit_GEM_left[3]/D");
   tree_QE->Branch("Hit_GEM_right",Hit_GEM_right,"Hit_GEM_right[3]/D");
   tree_QE->Branch("Hit_CSC_left",Hit_CSC_left,"Hit_CSC_left[3]/D");
   tree_QE->Branch("Hit_CSC_right",Hit_CSC_right,"Hit_CSC_right[3]/D");
   tree_QE->Branch("Hit_TOF400_left",Hit_TOF_left,"Hit_TOF400_left[3]/D");
   tree_QE->Branch("Hit_TOF400_right",Hit_TOF_right,"Hit_TOF400_right[3]/D");

   tree_QE->Branch("TOF400DetectorID_left",&DetecID_left,"TOF400DetectorID_left/I");
   tree_QE->Branch("TOF400DetectorID_right",&DetecID_right,"TOF400DetectorID_right/I");

   tree_QE->Branch("TimeOfFlight_TOF400_left",&TOF_left,"TimeOfFlight_TOF400_left/D");
   tree_QE->Branch("TimeOfFlight_TOF400_right",&TOF_right,"TimeOfFlight_TOF400_right/D");

   tree_QE->Branch("PathOfFlight_TOF400_left",&LOF_left,"PathOfFlight_TOF400_left/D");
   tree_QE->Branch("PathOfFlight_TOF400_right",&LOF_right,"PathOfFlight_TOF400_right/D");

   tree_QE->Branch("Trieman_Yang_Angle_cos",&Trieman_Yang_Angle_cos,"Trieman_Yang_Angle_cos/D");

   tree_QE->Branch("Beta_left",&Beta_left,"Beta_left/D");
   tree_QE->Branch("Beta_right",&Beta_right,"Beta_right/D");

   TTree *tree_Generator = new TTree("gen","generator level");
   double weight_Generator = 1.;
   double opening_theta_1, vertex_x_1, vertex_y_1, vertex_z_1;
   double angle_pmiss_pfrag_1, Trieman_Yang_Angle_cos_1;

   tree_Generator->Branch("P_left",&p_left_initial,"P_left/D");
   tree_Generator->Branch("Px_left",&px_left_initial,"Px_left/D");
   tree_Generator->Branch("Py_left",&py_left_initial,"Py_left/D");
   tree_Generator->Branch("Pz_left",&pz_left_initial,"Pz_left/D");
   tree_Generator->Branch("P_right",&p_right_initial,"P_right/D");
   tree_Generator->Branch("Px_right",&px_right_initial,"Px_right/D");
   tree_Generator->Branch("Py_right",&py_right_initial,"Py_right/D");
   tree_Generator->Branch("Pz_right",&pz_right_initial,"Pz_right/D");

   tree_Generator->Branch("P_miss",&P_miss_1,"P_miss/D");
   tree_Generator->Branch("P_miss_x",&P_miss_x_1,"P_miss_x/D");
   tree_Generator->Branch("P_miss_y",&P_miss_y_1,"P_miss_y/D");
   tree_Generator->Branch("P_miss_z",&P_miss_z_1,"P_miss_z/D");
   tree_Generator->Branch("E_miss",&E_miss_1,"E_miss/D");
   tree_Generator->Branch("M_miss",&M_miss_1,"M_miss/D");

   tree_Generator->Branch("opening_theta",&opening_theta_1,"opening_theta/D");
   tree_Generator->Branch("theta_left",&theta1_1,"theta_left/D");
   tree_Generator->Branch("theta_right",&theta2_1,"theta_right/D");
   tree_Generator->Branch("phi_left",&phi1_1,"phi_left/D");
   tree_Generator->Branch("phi_right",&phi2_1,"phi_right/D");

   tree_Generator->Branch("Mandelstam_s",&ss_1,"Mandelstam_s/D");
   tree_Generator->Branch("Mandelstam_t",&tt_1,"Mandelstam_t/D");
   tree_Generator->Branch("Mandelstam_u",&uu_1,"Mandelstam_u/D");
   tree_Generator->Branch("Mandelstam_p",&pp_1,"Mandelstam_p/D");
   tree_Generator->Branch("Mandelstam_Angle",&CA_1,"Mandelstam_Angle/D");

   tree_Generator->Branch("vertex_x",&vertex_x_1,"vertex_x/D");
   tree_Generator->Branch("vertex_y",&vertex_y_1,"vertex_y/D");
   tree_Generator->Branch("vertex_z",&vertex_z_1,"vertex_z/D");

   tree_Generator->Branch("angle_pmiss_pfrag",&angle_pmiss_pfrag_1,"angle_pmiss_pfrag/D");
   tree_Generator->Branch("weight",&weight_Generator,"weight/D");

   tree_Generator->Branch("Trieman_Yang_Angle_cos",&Trieman_Yang_Angle_cos_1,"Trieman_Yang_Angle_cos/D");

   tree_Generator->Branch("Beta_left",&beta_left_initial,"Beta_left/D");
   tree_Generator->Branch("Beta_right",&beta_right_initial,"Beta_right/D");

   // 1695249 (01-08)
   // 2118026 (09-18)
   Long64_t nentries = fChain->GetEntries();
   std::cout<<nentries<<std::endl;
   // Double_t NormFactor = 6753;
   // Double_t NormFactor = 104960; // No beta cut
   Double_t NormFactor = 4578; // No beta cut
   double NormFactor_weight = 0.;
   // Double_t NormFactor = 7252;//11634 -> 720 (without cut -> with cut) 170 ns
   // Double_t NormFactor = 6391;//11634 -> 720 (without cut -> with cut) 170 ns
   // Double_t NormFactor = 6911;//11634 -> 720 (without cut -> with cut) 90 ns
   // Double_t NormFactor = 7773;//11634 -> 720 (without cut -> with cut) 95 ns
   // Double_t NormFactor = 12894;//11634 -> 720 (without cut -> with cut) 170 ns all TOF no beta cut
   // Double_t NormFactor = 12894;//11634 -> 720 (without cut -> with cut) 170 ns all TOF no beta cut no 90ps TOF shift
   // Double_t NormFactor = 12208;//11634 -> 720 (without cut -> with cut) 95 ns all TOF no beta cut
   // Double_t NormFactor = 7054;//11634 -> 720 (without cut -> with cut)
   // Double_t NormFactor = 698;//1243 -> 720 (without cut -> with cut)
   // cout<<nentries<<endl;
   Double_t TOF_Mean_left = 0.;
   Double_t TOF_Mean_right = 0.;
   Double_t TOF_Counts = 0.;
   Int_t NEvents_total = 0;
   Int_t NEvents_all_TOF = 0;
   Int_t NEvents_No_cuts = 0;
   Int_t NEvents_With_cuts = 0;
   Int_t GoodFragEvents = 0;
   Long64_t nbytes = 0, nb = 0;
   Double_t Arm_And = 0;
   Double_t CSC_After_Mag = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
   // for (Long64_t jentry=0; jentry<212117;jentry++) {
   // for (Long64_t jentry=3175428; jentry<4233118;jentry++) {
      // for (Long64_t jentry=0; jentry<212117;jentry++) {

      Long64_t ientry = LoadTree(jentry);

      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      ch.GetEntry(jentry);
      weight_Generator = weight;
      weight_QE = weight;
      P1x = p3[0];
      P1y = p3[1];
      P1z = p3[2];
      P2x = p4[0];
      P2y = p4[1];
      P2z = p4[2];
      PBx = pAm1[0];
      PBy = pAm1[1];
      PBz = pAm1[2];
      if(P1x>0){
         px_left_initial = P1x;
         py_left_initial = P1y;
         pz_left_initial = P1z;
         px_right_initial = P2x;
         py_right_initial = P2y;
         pz_right_initial = P2z;
      }
      else{
         px_left_initial = P2x;
         py_left_initial = P2y;
         pz_left_initial = P2z;
         px_right_initial = P1x;
         py_right_initial = P1y;
         pz_right_initial = P1z;         
      }
      p_left_initial = sqrt(pow(px_left_initial,2)+pow(py_left_initial,2)+pow(pz_left_initial,2));
      beta_left_initial = p_left_initial/m_p/sqrt(1.+pow(p_left_initial/m_p,2));
      p_right_initial = sqrt(pow(px_right_initial,2)+pow(py_right_initial,2)+pow(pz_right_initial,2));
      beta_right_initial = p_right_initial/m_p/sqrt(1.+pow(p_right_initial/m_p,2));

      double PB_resolution = 0.0135;
      double PB_resolution_xy = 0.1;
      // double PB_resolution = 0.0159;
      if(Smearing_Flag==0) PB_resolution = 0.0;
      // PBX = gRandom->Gaus(PBx,PBx*PB_resolution_xy);
      // PBY = gRandom->Gaus(PBy,PBy*PB_resolution_xy);
      PBX = gRandom->Gaus(PBx,PB_resolution_xy);
      PBY = gRandom->Gaus(PBy,PB_resolution_xy);
      PBZ = gRandom->Gaus(PBz,PBz*PB_resolution);

      // Double_t P_12C_frag = gRandom->Gaus(P_12C_Real,P_12C_Real*0.01);
      // double m_12C = 11.174950; // 12C mass in GeV/c^2
      // double m_11B = 11.*0.93149432; // 11B mass in GeV/c^2
      Double_t P_12C_frag = P_12C_Real;
      Double_t beta_12C_frag = P_12C_frag/m_12C/sqrt(1.+pow(P_12C_frag/m_12C,2));
      TLorentzRotation boost_frag;
      boost_frag.Boost(0,0,-beta_12C_frag);

      TLorentzVector Frag, Beam, proton_miss, proton_miss_initial;
      Frag.SetXYZM(PBX,PBY,PBZ,m_11B);
      Beam.SetXYZM(0.,0.,P_12C_frag,m_12C);
      proton_miss_initial = Beam - Frag;
      proton_miss = boost_frag *proton_miss_initial;
      Double_t M2_frag = proton_miss.M2();
      Double_t Pmiss_x_frag = proton_miss.Px();
      Double_t Pmiss_y_frag = proton_miss.Py();
      Double_t Pmiss_z_frag = proton_miss.Pz();
      Double_t Pmiss_frag = sqrt(pow(Pmiss_x_frag,2)+pow(Pmiss_y_frag,2)+pow(Pmiss_z_frag,2));
      h_M_miss_square_frag->Fill(M2_frag,weight);
      h_P_miss_frag->Fill(Pmiss_frag,weight);
      h_P_miss_x_frag->Fill(Pmiss_x_frag,weight);
      h_P_miss_y_frag->Fill(Pmiss_y_frag,weight);
      h_P_miss_z_frag->Fill(Pmiss_z_frag,weight);

      double pos_x, pos_y;
      // MWPC4
      Double_t MWPC4_distance = 342; //cm
      pos_x = MWPC4_distance/PBZ*PBX;
      pos_y = MWPC4_distance/PBZ*PBY;
      h_11B_MWPC4_pos->Fill(pos_x,pos_y,weight);

      // SP-41
      Double_t SP41_distance = 124.5+260.0/2.+576.2; // 830.7 cm
      pos_x = SP41_distance/PBZ*PBX;
      pos_y = SP41_distance/PBZ*PBY;
      h_11B_SP41_pos->Fill(pos_x,pos_y,weight);

      // -------------------------------Reconstruction for generator-----------------------------------
      TVector3 kp1, kp2, kp, kz;
      kz.SetXYZ(0,0,1);
      kp1.SetXYZ(px_left_initial,py_left_initial,pz_left_initial);
      kp2.SetXYZ(px_right_initial,py_right_initial,pz_right_initial);
      kp = kp1 + kp2;
      h_Pfragx_PmissTheta_all->Fill(kp.Angle(kz)/3.1415926535*180,PBX,weight);
      h_Pfragx_OpeningTheta_all->Fill(kp1.Angle(kp2)/3.1415926535*180,PBX,weight);
      h_Pfragy_PmissTheta_all->Fill(kp.Angle(kz)/3.1415926535*180,PBY,weight);
      h_Pfragy_OpeningTheta_all->Fill(kp1.Angle(kp2)/3.1415926535*180,PBY,weight);
      h_Pfragz_PmissTheta_all->Fill(kp.Angle(kz)/3.1415926535*180,PBZ,weight);
      h_Pfragz_OpeningTheta_all->Fill(kp1.Angle(kp2)/3.1415926535*180,PBZ,weight);

      // Double_t Pbeam = 12*3.706;
      // Double_t MA = 12*(0.938-0.768014E-02);
      // Double_t Ebeam = sqrt(Pbeam*Pbeam+MA*MA);
      // Double_t Beta_Beam = Pbeam/Ebeam;
      // m_11B = 11*(0.938-0.692771E-02);
      // TLorentzRotation boost;
      // boost.Boost(0,0,-Beta_Beam);
      P_12C = gRandom->Gaus(P_12C_Real,Boost_resolution);
      beta_12C = P_12C/m_12C/sqrt(1.+pow(P_12C/m_12C,2));
      TLorentzRotation boost;
      boost.Boost(0,0,-beta_12C);
      P4_proton_initial.SetPxPyPzE(0,0,0,m_p);
      P4_proton_transformed = boost *P4_proton_initial;

      PB_initial.SetXYZM(PBX,PBY,PBZ,m_11B);
      // PB_initial.SetXYZM(PBX,PBY,PBZ,m_10B);
      PB_transformed = boost *PB_initial;

      PB_initial_generator.SetXYZM(PBx,PBy,PBz,m_11B);
      PB_transformed_generator = boost *PB_initial_generator;

      Pfragx_12C = PB_transformed.Px();
      Pfragy_12C = PB_transformed.Py();
      Pfragz_12C = PB_transformed.Pz();
      Pfrag_12C = sqrt(pow(PB_transformed.Px(),2)+pow(PB_transformed.Py(),2)+pow(PB_transformed.Pz(),2));

      h_pbx_2->Fill(PB_transformed.Px(),weight);
      h_pby_2->Fill(PB_transformed.Py(),weight);
      h_pbz_2->Fill(PB_transformed.Pz(),weight);
      h_pb_2->Fill(sqrt(pow(PB_transformed.Px(),2)+pow(PB_transformed.Py(),2)+pow(PB_transformed.Pz(),2)),weight);      

      // -------------------------------Protons----------------------------
      // Total TOF : 9.7020 ns (left), 9.57443 ns (right)
      // TOF smearing: 90 ps
      Double_t Smearing_relative = 90./1000./9.7;
      Double_t Smearing_left = gRandom->Gaus(1.,Smearing_relative);
      Double_t Smearing_right = gRandom->Gaus(1.,Smearing_relative);
      Double_t Px_left_smearing, Py_left_smearing, Pz_left_smearing, P_left_smearing;
      Double_t Px_right_smearing, Py_right_smearing, Pz_right_smearing, P_right_smearing;
      TLorentzVector P4_left_smearing, P4_right_smearing, P4_left_smearing_transformed, P4_right_smearing_transformed;

      Px_left_smearing = px_left_initial/Smearing_left;
      Py_left_smearing = py_left_initial/Smearing_left;
      Pz_left_smearing = pz_left_initial/Smearing_left;
      P_left_smearing = p_left_initial/Smearing_left;
      P4_left_smearing.SetXYZM(Px_left_smearing,Py_left_smearing,Pz_left_smearing,m_p);
      P4_left_smearing_transformed = boost *P4_left_smearing;

      Px_right_smearing = px_right_initial/Smearing_right;
      Py_right_smearing = py_right_initial/Smearing_right;
      Pz_right_smearing = pz_right_initial/Smearing_right;
      P_right_smearing = p_right_initial/Smearing_right;
      P4_right_smearing.SetXYZM(Px_right_smearing,Py_right_smearing,Pz_right_smearing,m_p);
      P4_right_smearing_transformed = boost *P4_right_smearing;

      // left
      Px_left = px_left_initial;
      Py_left = py_left_initial;
      Pz_left = pz_left_initial;
      P_left = p_left_initial;
      E_left = p_left_initial/beta_left_initial;
      theta1_1 = TMath::ATan(sqrt(pow(Px_left,2)+pow(Py_left,2))/Pz_left)/3.1415926535*180;
      if(Py_left>0&&Px_left>0){
         phi1_1 = TMath::ATan(Py_left/Px_left)/3.1415926535*180;
      }
      if(Py_left>0&&Px_left<0){
         phi1_1 = 180-TMath::ATan(-Py_left/Px_left)/3.1415926535*180;
      }
      if(Py_left<0&&Px_left>0){
         phi1_1 = -TMath::ATan(-Py_left/Px_left)/3.1415926535*180;
      }
      if(Py_left<0&&Px_left<0){
         phi1_1 = TMath::ATan(Py_left/Px_left)/3.1415926535*180-180;
      }
      P4_left_initial.SetPxPyPzE(Px_left,Py_left,Pz_left,E_left);
      P4_left_transformed = boost *P4_left_initial;

      // right
      Px_right = px_right_initial;
      Py_right = py_right_initial;
      Pz_right = pz_right_initial;
      P_right = p_right_initial;
      E_right = p_right_initial/beta_right_initial;
      theta2_1 = TMath::ATan(sqrt(pow(Px_right,2)+pow(Py_right,2))/Pz_right)/3.1415926535*180;
      if(Py_right>0&&Px_right>0){
         phi2_1 = TMath::ATan(Py_right/Px_right)/3.1415926535*180;
      }
      if(Py_right>0&&Px_right<0){
         phi2_1 = 180-TMath::ATan(-Py_right/Px_right)/3.1415926535*180;
      }
      if(Py_right<0&&Px_right>0){
         phi2_1 = -TMath::ATan(-Py_right/Px_right)/3.1415926535*180;
      }
      if(Py_right<0&&Px_right<0){
         phi2_1 = TMath::ATan(Py_right/Px_right)/3.1415926535*180-180;
      }
      P4_right_initial.SetPxPyPzE(Px_right,Py_right,Pz_right,E_right);
      P4_right_transformed = boost *P4_right_initial;

      // h_Pfragz_theta_left->Fill(theta1_1,PBZ,weight);

      double v3_1_x, v3_1_y, v3_1_z, v4_1_x, v4_1_y, v4_1_z;
      v3_1_x = P4_left_transformed.Px();
      v3_1_y = P4_left_transformed.Py();
      v3_1_z = P4_left_transformed.Pz();
      v4_1_x = P4_right_transformed.Px();
      v4_1_y = P4_right_transformed.Py();
      v4_1_z = P4_right_transformed.Pz();

      P_miss_x_1 = P4_left_transformed.Px()+P4_right_transformed.Px()-P4_proton_transformed.Px();
      P_miss_y_1 = P4_left_transformed.Py()+P4_right_transformed.Py()-P4_proton_transformed.Py();
      P_miss_z_1 = P4_left_transformed.Pz()+P4_right_transformed.Pz()-P4_proton_transformed.Pz();
      P_miss_E_1 = P4_left_transformed.E()+P4_right_transformed.E()-P4_proton_transformed.E();
      P_miss_1 = sqrt(pow(P_miss_x_1,2)+pow(P_miss_y_1,2)+pow(P_miss_z_1,2));
      E_miss_1 = m_p-P_miss_E_1;
      M_miss_1 = sqrt(pow(P_miss_E_1,2)-pow(P_miss_1,2));

      Double_t P_miss_x_smearing, P_miss_y_smearing, P_miss_z_smearing, P_miss_E_smearing;
      Double_t P_miss_smearing, E_miss_smearing, M_miss_smearing;
      P_miss_x_smearing = P4_left_smearing_transformed.Px()+P4_right_smearing_transformed.Px()-P4_proton_transformed.Px();
      P_miss_y_smearing = P4_left_smearing_transformed.Py()+P4_right_smearing_transformed.Py()-P4_proton_transformed.Py();
      P_miss_z_smearing = P4_left_smearing_transformed.Pz()+P4_right_smearing_transformed.Pz()-P4_proton_transformed.Pz();
      P_miss_E_smearing = P4_left_smearing_transformed.E()+P4_right_smearing_transformed.E()-P4_proton_transformed.E();
      P_miss_smearing = sqrt(pow(P_miss_x_smearing,2)+pow(P_miss_y_smearing,2)+pow(P_miss_z_smearing,2));
      E_miss_smearing = m_p-P_miss_E_smearing;
      M_miss_smearing = sqrt(pow(P_miss_E_smearing,2)-pow(P_miss_smearing,2));

      Double_t px1_diff, py1_diff, pz1_diff, p1_diff, px2_diff, py2_diff, pz2_diff, p2_diff;
      Double_t P_miss_x_diff, P_miss_y_diff, P_miss_z_diff, P_miss_diff;
      px1_diff = P4_left_smearing_transformed.Px() - P4_left_transformed.Px();
      py1_diff = P4_left_smearing_transformed.Py() - P4_left_transformed.Py();
      pz1_diff = P4_left_smearing_transformed.Pz() - P4_left_transformed.Pz();
      px2_diff = P4_right_smearing_transformed.Px() - P4_right_transformed.Px();
      py2_diff = P4_right_smearing_transformed.Py() - P4_right_transformed.Py();
      pz2_diff = P4_right_smearing_transformed.Pz() - P4_right_transformed.Pz();
      P_miss_x_diff = P_miss_x_smearing - P_miss_x_1;
      P_miss_y_diff = P_miss_y_smearing - P_miss_y_1;
      P_miss_z_diff = P_miss_z_smearing - P_miss_z_1;

      // polar angles: theta1_1, theta2_1
      Double_t theta1_x = TMath::ATan(Px_left/Pz_left)/3.1415926535*180;
      Double_t theta2_x = TMath::ATan(Px_left/Pz_left)/3.1415926535*180;
      Double_t theta1_y = TMath::ATan(Py_left/Pz_left)/3.1415926535*180;
      Double_t theta2_y = TMath::ATan(Py_left/Pz_left)/3.1415926535*180;

      // h_px_diff_polar->Fill(theta1_x,px1_diff); h_px_diff_polar->Fill(theta2_x,px2_diff,weight);
      // h_py_diff_polar->Fill(theta1_x,py1_diff); h_py_diff_polar->Fill(theta2_x,py2_diff,weight);
      // h_pz_diff_polar->Fill(theta1_x,pz1_diff); h_pz_diff_polar->Fill(theta2_x,pz2_diff,weight);
      // h_P_miss_x_diff_polar->Fill(theta1_x+theta2_x,P_miss_x_diff,weight);
      // h_P_miss_y_diff_polar->Fill(theta1_x+theta2_x,P_miss_y_diff,weight);
      // h_P_miss_z_diff_polar->Fill(theta1_x+theta2_x,P_miss_z_diff,weight);

      // h_px_diff_polar->Fill(theta1_y,px1_diff); h_px_diff_polar->Fill(theta2_y,px2_diff,weight);
      // h_py_diff_polar->Fill(theta1_y,py1_diff); h_py_diff_polar->Fill(theta2_y,py2_diff,weight);
      // h_pz_diff_polar->Fill(theta1_y,pz1_diff); h_pz_diff_polar->Fill(theta2_y,pz2_diff,weight);
      // h_P_miss_x_diff_polar->Fill(theta1_y+theta2_y,P_miss_x_diff,weight);
      // h_P_miss_y_diff_polar->Fill(theta1_y+theta2_y,P_miss_y_diff,weight);
      // h_P_miss_z_diff_polar->Fill(theta1_y+theta2_y,P_miss_z_diff,weight);

      // h_px_diff_polar->Fill(theta1_x+theta2_x,P_miss_x_diff,weight);
      // h_px_diff_polar->Fill(theta1_x+theta2_x,P_miss_y_diff,weight);

      ss_1 = pow(sqrt(m_12C/12.*m_12C/12.+P_12C_Real/12.*P_12C_Real/12.)+m_p,2)-pow(P_12C_Real/12.,2);
      tt_1 = pow(m_p-E_left,2)-pow(Px_left,2)-pow(Py_left,2)-pow(Pz_left,2);
      uu_1 = pow(m_p-E_right,2)-pow(Px_right,2)-pow(Py_right,2)-pow(Pz_right,2);
      pp_1 = (ss_1-pow(m_p+m_12C/12.,2))*(ss_1-pow(m_p-m_12C/12.,2))/4./ss_1;
      CA_1 = TMath::ACos(cos_theta(ss_1,tt_1,uu_1,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180;
      h_scattering_angle_2->Fill(CA_1,weight);

         // h_p1x_1->Fill(px_left_initial);
         // h_p1y_1->Fill(py_left_initial);
         // h_p1z_1->Fill(pz_left_initial);
         // h_E1_1->Fill(p_left_initial);
         // h_p2x_1->Fill(px_right_initial);
         // h_p2y_1->Fill(py_right_initial);
         // h_p2z_1->Fill(pz_right_initial);
         // h_E2_1->Fill(p_right_initial);
         // h_p1xp2x_1->Fill(P_miss_x_1);
         // h_p1yp2y_1->Fill(P_miss_y_1);
         // // h_p1zp2z_1->Fill(P_miss_z_1);
         // h_P_miss_1->Fill(P_miss_1);
         // h_E_miss_1->Fill(E_miss_1);
         // h_M_miss_1->Fill(M_miss_1);
         // h_M_miss_square_1->Fill(M_miss_1*M_miss_1);
         // h_opening_theta_1->Fill(theta1_1+theta2_1);
         // if(phi1_1-phi2_1>-180 && phi1_1-phi2_1<180) h_opening_phi_1->Fill(phi1_1-phi2_1);
         // else if(phi1_1-phi2_1<-180) h_opening_phi_1->Fill(phi1_1-phi2_1+360);
         // else h_opening_phi_1->Fill(phi1_1-phi2_1-360);
         // h_phi1_1->Fill(phi1_1);
         // h_phi2_1->Fill(phi2_1);

         // h_Mandelstam_u_t_min_1->Fill(std::min(fabs(tt_1),fabs(uu_1))); 
         // h_Mandelstam_t_1->Fill(fabs(tt_1));
         // h_Mandelstam_u_1->Fill(fabs(uu_1));
         // h_Mandelstam_u_t_1->Fill(std::max(fabs(tt_1),fabs(uu_1)));

      // h_p1x->Fill(P4_left_transformed.Px(),weight);
      // h_p1y->Fill(P4_left_transformed.Py(),weight);
      // h_p1z->Fill(P4_left_transformed.Pz(),weight);
      // h_p2x->Fill(P4_right_transformed.Px(),weight);
      // h_p2y->Fill(P4_right_transformed.Py(),weight);
      // h_p2z->Fill(P4_right_transformed.Pz(),weight);
      h_p1xp2x_2->Fill(P_miss_x_1,weight);
      h_p1yp2y_2->Fill(P_miss_y_1,weight);
      h_p1zp2z_2->Fill(P_miss_z_1,weight);
      h_P_miss_2->Fill(P_miss_1,weight);
      h_E_miss_2->Fill(E_miss_1,weight);
      h_M_miss_2->Fill(M_miss_1,weight);
      h_M_miss_square_2->Fill(M_miss_1*M_miss_1,weight);
      h_opening_theta_2->Fill(theta1_1+theta2_1,weight);
      if(phi1_1-phi2_1>-180 && phi1_1-phi2_1<180) h_opening_phi_2->Fill(phi1_1-phi2_1,weight);
      else if(phi1_1-phi2_1<-180) h_opening_phi_2->Fill(phi1_1-phi2_1+360,weight);
      else h_opening_phi_2->Fill(phi1_1-phi2_1-360,weight);
      h_E_theta_all->Fill(E_miss_1,theta1_1+theta2_1,weight);
      if(CA_1>70.&&CA_1<110.) NEvents_total++;
      if(CA_1>60.&&CA_1<120.){
         h_theta12_all->Fill(theta1_1,theta2_1,weight);
         h_phi12_all->Fill(phi1_1,phi2_1,weight);
         h_theta_phi_all->Fill(theta1_1,phi1_1,weight);
         h_theta_phi1_all->Fill(theta1_1,phi1_1,weight);
         h_theta_phi_all->Fill(theta2_1,phi2_1,weight);
         h_theta_phi2_all->Fill(theta2_1,phi2_1,weight);
      }
      // h_E_theta->Fill(E_miss,theta1+theta2,weight);
      // h_theta12->Fill(theta1,theta2,weight);
      // h_phi12->Fill(phi1,phi2,weight);

      // h_pbx->Fill(PB_transformed.Px(),weight);
      // h_pby->Fill(PB_transformed.Py(),weight);
      // h_pbz->Fill(PB_transformed.Pz(),weight);
      // h_pb->Fill(sqrt(pow(PB_transformed.Px(),2)+pow(PB_transformed.Py(),2)+pow(PB_transformed.Pz(),2)),weight);

      // if(CSCPoint_fPdgId[0]==2212){ // proton
      // if(CSCPoint_fPdgId[0]==2212 && CSCPoint_fTrackID[0]==2){ // proton
      //    P_Frag_proton_initial.SetXYZM(CSCPoint_fPx[0],CSCPoint_fPy[0],CSCPoint_fPz[0],m_p);
      //    P_Frag_proton_transformed = boost *P_Frag_proton_initial;

      //    h_Pfrag_proton_x->Fill(P_Frag_proton_transformed.Px(),weight);
      //    h_Pfrag_proton_y->Fill(P_Frag_proton_transformed.Py(),weight);
      //    h_Pfrag_proton_z->Fill(P_Frag_proton_transformed.Pz(),weight);
      //    h_Pfrag_proton->Fill(sqrt(pow(P_Frag_proton_transformed.Px(),2)+pow(P_Frag_proton_transformed.Py(),2)+pow(P_Frag_proton_transformed.Pz(),2)),weight);

      //    h_Pfrag_proton_xy->Fill(P_Frag_proton_transformed.Px(),P_Frag_proton_transformed.Py(),weight);
      //    // cout<<CSCPoint_fPdgId[0]<<"\t"<<CSCPoint_fTrackID[0]<<endl;
      // }

      // tree_Generator->Fill();

      TVector3 v1_1(P_miss_x_1,P_miss_y_1,P_miss_z_1);
      TVector3 v2_1(P4_proton_transformed.Px(),P4_proton_transformed.Py(),P4_proton_transformed.Pz());
      TVector3 v3_1(v3_1_x,v3_1_y,v3_1_z);
      TVector3 v4_1(v4_1_x,v4_1_y,v4_1_z);
      TVector3 n1_1 = v1_1.Cross(v2_1);
      TVector3 n2_1 = v3_1.Cross(v4_1);
      double cosTheta_1 = n1_1.Dot(n2_1) / (n1_1.Mag() * n2_1.Mag()); 
      Trieman_Yang_Angle_cos_1 = cosTheta_1;

      TVector3 Pfrag_1(PB_transformed.Px(),PB_transformed.Py(),PB_transformed.Pz());
      TVector3 Pmiss_1(P_miss_x_1,P_miss_y_1,P_miss_z_1);
      angle_pmiss_pfrag_1 = Pmiss_1.Angle(Pfrag_1);

      ch_vertex.GetEntry(jentry);
      vertex_x_1 = vertex_x;
      vertex_y_1 = vertex_y;
      vertex_z_1 = vertex_z;

      if(Smearing_Flag==1){
         // vertex_x = gRandom->Gaus(vertex_x,0.5);
         // vertex_y = gRandom->Gaus(vertex_y,0.5);
         vertex_x = gRandom->Gaus(vertex_x,0.33);
         vertex_y = gRandom->Gaus(vertex_y,0.33);
         // vertex_x = gRandom->Gaus(vertex_x,0.22);
         // vertex_y = gRandom->Gaus(vertex_y,0.22);
         // vertex_z = gRandom->Gaus(vertex_z,3.0);
         vertex_z = gRandom->Gaus(vertex_z,2.6); // 1.0 before
      }

      // -------------------------------Reconstruction for generator-----------------------------------
      for(int k=0;k<3;k++){
         Hit_GEM_left[k] = -1e4;
         Hit_GEM_right[k] = -1e4;
         Hit_CSC_left[k] = -1e4;
         Hit_CSC_right[k] = -1e4;
         Hit_TOF_left[k] = -1e4;
         Hit_TOF_right[k] = -1e4;
      }

      Int_t Trigger_left, Trigger_right;

      Trigger_left=0; Trigger_right=0; Trigger_GEM=0;
      for(int i=0;i<kMaxbmnroot_0_STS_StsPoint;i++){
         if(StsPoint_fPx[i]>0.3){
            if(Trigger_left==0){
               Hit_GEM_left[0] = StsPoint_fX[i];
               Hit_GEM_left[1] = StsPoint_fY[i];
               Hit_GEM_left[2] = StsPoint_fZ[i];
            }
            Trigger_left=1;
         }
         if(StsPoint_fPx[i]<-0.3){
            if(Trigger_right==0){
               Hit_GEM_right[0] = StsPoint_fX[i];
               Hit_GEM_right[1] = StsPoint_fY[i];
               Hit_GEM_right[2] = StsPoint_fZ[i];
            }
            Trigger_right=1;
         }
      }
      if(Trigger_left==1&&Trigger_right==1) Trigger_GEM=1;
      // Trigger_GEM=1;

      Trigger_left=0; Trigger_right=0; Trigger_CSC=0;
      for(int i=0;i<kMaxbmnroot_0_CSC_CSCPoint;i++){
         if(CSCPoint_fPx[i]>0.3){
            if(Trigger_left==0){
               Hit_CSC_left[0] = CSCPoint_fX[i];
               Hit_CSC_left[1] = CSCPoint_fY[i];
               Hit_CSC_left[2] = CSCPoint_fZ[i];
            }
            Trigger_left=1;
         }
         if(CSCPoint_fPx[i]<-0.3){
            if(Trigger_right==0){
               Hit_CSC_right[0] = CSCPoint_fX[i];
               Hit_CSC_right[1] = CSCPoint_fY[i];
               Hit_CSC_right[2] = CSCPoint_fZ[i];
            }
            Trigger_right=1;
         }
      }
      if(Trigger_left==1&&Trigger_right==1) Trigger_CSC=1;
      // Trigger_CSC=1;

      Trigger_left=0; Trigger_right=0; Trigger_TOF=0;
      for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
         if(TOF400Point_fPx[i]>0.3){
            if(Trigger_left==0){
               Hit_TOF_left[0] = TOF400Point_fX[i];
               Hit_TOF_left[1] = TOF400Point_fY[i];
               Hit_TOF_left[2] = TOF400Point_fZ[i];
            }
            Trigger_left=1;
         }
         if(TOF400Point_fPx[i]<-0.3){
            if(Trigger_right==0){
               Hit_TOF_right[0] = TOF400Point_fX[i];
               Hit_TOF_right[1] = TOF400Point_fY[i];
               Hit_TOF_right[2] = TOF400Point_fZ[i];
            }
            Trigger_right=1;
         }
      }
      if(Trigger_left==1&&Trigger_right==1) Trigger_TOF=1;
      // Trigger_TOF=1;

      Int_t Overlap_strips1 = 0;
      Int_t Overlap_strips2 = 0;

      for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
         if(TOF400Point_fPz[i]>1e-5 && TOF400Point_fPx[i]>0 && (TOF400Point_fTrackID[i]==0 || TOF400Point_fTrackID[i]==1)){
            if(TOF400Point_fDetectorID[i]>=769&&TOF400Point_fDetectorID[i]<=816) Overlap_strips1 = 1;
            if(TOF400Point_fDetectorID[i]>=1025&&TOF400Point_fDetectorID[i]<=1072) Overlap_strips2 = 1;
         }
      }

      // if(Overlap_strips1==1&&Overlap_strips2==1){
      if(Overlap_strips1==1||Overlap_strips2==1){
         for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
            if(TOF400Point_fPz[i]>1e-5 && TOF400Point_fPx[i]>0 && (TOF400Point_fTrackID[i]==0 || TOF400Point_fTrackID[i]==1)){
               if((TOF400Point_fDetectorID[i]>=769&&TOF400Point_fDetectorID[i]<=816)||(TOF400Point_fDetectorID[i]>=1025&&TOF400Point_fDetectorID[i]<=1072)){
                  h_TOF400_XY->Fill(TOF400Point_fX[i],TOF400Point_fY[i]);
               }
               // if(TOF400Point_fDetectorID[i]>=257&&TOF400Point_fDetectorID[i]<=304) h_TOF400_XY->Fill(TOF400Point_fX[i],TOF400Point_fY[i]);
               // if(TOF400Point_fDetectorID[i]>=769&&TOF400Point_fDetectorID[i]<=816) h_TOF400_XY->Fill(TOF400Point_fX[i],TOF400Point_fY[i]);
               // if(TOF400Point_fDetectorID[i]>=1025&&TOF400Point_fDetectorID[i]<=1072) h_TOF400_XY->Fill(TOF400Point_fX[i],TOF400Point_fY[i]);
            }
         }
      }

      // if(fabs(StsPoint_fPx[0])<1e-5 || fabs(CSCPoint_fPx[0])<1e-5 || fabs(TOF400Point_fPx[0])<1e-5){
      // if(!(Trigger_GEM==1 || Trigger_CSC==1) || Trigger_TOF==0){
      // if(Trigger_GEM==0 || Trigger_CSC==0 || Trigger_TOF==0){
      // if(Trigger_TOF==0){
      if(Trigger_CSC==0 || Trigger_TOF==0){
         memset(StsPoint_fPx,0,sizeof(StsPoint_fPx));
         memset(StsPoint_fPy,0,sizeof(StsPoint_fPy));
         memset(StsPoint_fPz,0,sizeof(StsPoint_fPz));
         memset(StsPoint_fX,0,sizeof(StsPoint_fX));
         memset(StsPoint_fY,0,sizeof(StsPoint_fY));
         memset(StsPoint_fZ,0,sizeof(StsPoint_fZ));
         memset(StsPoint_fTrackID,0,sizeof(StsPoint_fTrackID));
         
         memset(CSCPoint_fX,0,sizeof(CSCPoint_fX));
         memset(CSCPoint_fY,0,sizeof(CSCPoint_fY));
         memset(CSCPoint_fZ,0,sizeof(CSCPoint_fZ));
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
         continue;
      }

      Flag_left = 0;
      Flag_right = 0;
      DetecID_left = 0;
      DetecID_right = 0;
      for(int i=0;i<kMaxbmnroot_0_TOF1_TOF400Point;i++){
         if(TOF400Point_fPz[i]>1e-5 && (TOF400Point_fTrackID[i]==0 || TOF400Point_fTrackID[i]==1)){
            // h_TOF400_XY->Fill(TOF400Point_fX[i],TOF400Point_fY[i]);
            if(TOF400Point_fPx[i]>0){
               // Beam Line to outside, up to down
               // Left:  1,1500-1700 2,1700-1900 3,1900-2200 4,2200-2500 5,2500-2700
               //        6,0-400 7,400-700 8,700-900 9,900-1200 10,1200-1500

               Flag_left = 1;
               // if(TOF400Point_fDetectorID[i]>1500&&TOF400Point_fDetectorID[i]<1700) Flag_left = 1; // 1
               // if(TOF400Point_fDetectorID[i]>1700&&TOF400Point_fDetectorID[i]<1900) Flag_left = 1; // 2
               // if(TOF400Point_fDetectorID[i]>1900&&TOF400Point_fDetectorID[i]<2200) Flag_left = 1; // 3
               // if(TOF400Point_fDetectorID[i]>2200&&TOF400Point_fDetectorID[i]<2500) Flag_left = 1; // 4
               // if(TOF400Point_fDetectorID[i]>2500&&TOF400Point_fDetectorID[i]<2700) Flag_left = 1; // 5
               // if(TOF400Point_fDetectorID[i]>0&&TOF400Point_fDetectorID[i]<400) Flag_left = 1;     // 6
               // if(TOF400Point_fDetectorID[i]>400&&TOF400Point_fDetectorID[i]<700) Flag_left = 1;   // 7
               // if(TOF400Point_fDetectorID[i]>700&&TOF400Point_fDetectorID[i]<900) Flag_left = 1;   // 8
               // if(TOF400Point_fDetectorID[i]>900&&TOF400Point_fDetectorID[i]<1200) Flag_left = 1;  // 9
               // if(TOF400Point_fDetectorID[i]>1200&&TOF400Point_fDetectorID[i]<1500) Flag_left = 1; // 10
               px_left = TOF400Point_fPx[i];
               py_left = TOF400Point_fPy[i];
               pz_left = TOF400Point_fPz[i];
               p_left = sqrt(pow(px_left,2)+pow(py_left,2)+pow(pz_left,2));
               beta_left = p_left/m_p/sqrt(1.+pow(p_left/m_p,2));

               x_left = TOF400Point_fX[i];
               y_left = TOF400Point_fY[i];
               z_left = TOF400Point_fZ[i];

               Hit_TOF_left[0] = x_left;
               Hit_TOF_left[1] = y_left;
               Hit_TOF_left[2] = z_left;

               // if(TOF_Shift==1) TOF_left = TOF400Point_fTime[i]+0.09;//ns
               // if(TOF_Shift==1) TOF_left = TOF400Point_fTime[i]-0.09;//ns
               // if(TOF_Shift==1) TOF_left = TOF400Point_fTime[i]-0.065;//ns
               // if(TOF_Shift==1) TOF_left = TOF400Point_fTime[i]-0.03;//ns
               // if(TOF_Shift==1) TOF_left = TOF400Point_fTime[i];//ns
               if(TOF_Shift==1) TOF_left = TOF400Point_fTime[i]+ToF_offset;//ns
               else TOF_left = TOF400Point_fTime[i];//ns

               DetecID_left = TOF400Point_fDetectorID[i];
            }
            else{
               // Beam Line to outside, up to down
               // Right: 1,2700-3000 2,3000-3200 3,3200-3500 4,3500-3700 5,3700-4000
               //        6,4000-4300 7,4300-4500 8,4500-4800 9,4800-5000 10,5000-5400

               Flag_right = 1;
               // if(TOF400Point_fDetectorID[i]>2700&&TOF400Point_fDetectorID[i]<3000) Flag_right = 1;    // 1
               // if(TOF400Point_fDetectorID[i]>3000&&TOF400Point_fDetectorID[i]<3200) Flag_right = 1;    // 2
               // if(TOF400Point_fDetectorID[i]>3200&&TOF400Point_fDetectorID[i]<3500) Flag_right = 1;    // 3
               // if(TOF400Point_fDetectorID[i]>3500&&TOF400Point_fDetectorID[i]<3700) Flag_right = 1;    // 4
               // if(TOF400Point_fDetectorID[i]>3700&&TOF400Point_fDetectorID[i]<4000) Flag_right = 1;    // 5
               // if(TOF400Point_fDetectorID[i]>4000&&TOF400Point_fDetectorID[i]<4300) Flag_right = 1;    // 6
               // if(TOF400Point_fDetectorID[i]>4300&&TOF400Point_fDetectorID[i]<4500) Flag_right = 1;    // 7
               // if(TOF400Point_fDetectorID[i]>4500&&TOF400Point_fDetectorID[i]<4800) Flag_right = 1;    // 8
               // if(TOF400Point_fDetectorID[i]>4800&&TOF400Point_fDetectorID[i]<5000) Flag_right = 1;    // 9
               // if(TOF400Point_fDetectorID[i]>5000&&TOF400Point_fDetectorID[i]<5400) Flag_right = 1;    // 10
               px_right = TOF400Point_fPx[i];
               py_right = TOF400Point_fPy[i];
               pz_right = TOF400Point_fPz[i];
               p_right = sqrt(pow(px_right,2)+pow(py_right,2)+pow(pz_right,2));
               beta_right = p_right/m_p/sqrt(1.+pow(p_right/m_p,2));

               x_right = TOF400Point_fX[i];
               y_right = TOF400Point_fY[i];
               z_right = TOF400Point_fZ[i];

               Hit_TOF_right[0] = x_right;
               Hit_TOF_right[1] = y_right;
               Hit_TOF_right[2] = z_right;

               // if(TOF_Shift==1) TOF_right = TOF400Point_fTime[i]+0.09;//ns
               // if(TOF_Shift==1) TOF_right = TOF400Point_fTime[i]-0.09;//ns
               // if(TOF_Shift==1) TOF_right = TOF400Point_fTime[i]-0.065;//ns
               // if(TOF_Shift==1) TOF_right = TOF400Point_fTime[i]-0.03;//ns
               // if(TOF_Shift==1) TOF_right = TOF400Point_fTime[i];//ns
               if(TOF_Shift==1) TOF_right = TOF400Point_fTime[i]+ToF_offset;//ns
               else TOF_right = TOF400Point_fTime[i];//ns

               DetecID_right = TOF400Point_fDetectorID[i];
            }
         }
      }

      if(Flag_left==1&&Flag_right==1) NEvents_all_TOF++;
      
      double theta1_tof, phi1_tof, theta2_tof, phi2_tof;
      double P_miss_x_tof, P_miss_y_tof, P_miss_z_tof, P_miss_E_tof, P_miss_tof, E_miss_tof, M_miss_tof;
      if(Flag_left==1&&Flag_right==1){
         // TOF recorded momentum reconstruction left
         Beta_left = beta_left;
         Gamma_left = 1./sqrt(1-pow(Beta_left,2));
         P_left = p_left;
         Px_left = px_left;
         Py_left = py_left;
         Pz_left = pz_left;
         E_left = Gamma_left*m_p;

         theta1_tof = TMath::ATan(sqrt(pow(Px_left,2)+pow(Py_left,2))/Pz_left)/3.1415926535*180;
         if(Py_left>0&&Px_left>0){
            phi1_tof = TMath::ATan(Py_left/Px_left)/3.1415926535*180;
         }
         if(Py_left>0&&Px_left<0){
            phi1_tof = 180-TMath::ATan(-Py_left/Px_left)/3.1415926535*180;
         }
         if(Py_left<0&&Px_left>0){
            phi1_tof = -TMath::ATan(-Py_left/Px_left)/3.1415926535*180;
         }
         if(Py_left<0&&Px_left<0){
            phi1_tof = TMath::ATan(Py_left/Px_left)/3.1415926535*180-180;
         }

         P4_left_initial.SetPxPyPzE(Px_left,Py_left,Pz_left,E_left);
         P4_left_transformed = boost *P4_left_initial;

         // TOF recorded momentum reconstruction right
         Beta_right = beta_right;
         Gamma_right = 1./sqrt(1-pow(Beta_right,2));
         P_right = p_right;
         Px_right = px_right;
         Py_right = py_right;
         Pz_right = pz_right;
         E_right = Gamma_right*m_p;

         theta2_tof = TMath::ATan(sqrt(pow(Px_right,2)+pow(Py_right,2))/Pz_right)/3.1415926535*180;
         if(Py_right>0&&Px_right>0){
            phi2_tof = TMath::ATan(Py_right/Px_right)/3.1415926535*180;
         }
         if(Py_right>0&&Px_right<0){
            phi2_tof = 180-TMath::ATan(-Py_right/Px_right)/3.1415926535*180;
         }
         if(Py_right<0&&Px_right>0){
            phi2_tof = -TMath::ATan(-Py_right/Px_right)/3.1415926535*180;
         }
         if(Py_right<0&&Px_right<0){
            phi2_tof = TMath::ATan(Py_right/Px_right)/3.1415926535*180-180;
         }

         P4_right_initial.SetPxPyPzE(Px_right,Py_right,Pz_right,E_right);
         P4_right_transformed = boost *P4_right_initial;

         // TOF recorded momentum reconstruction result
         P_miss_x_tof = P4_left_transformed.Px()+P4_right_transformed.Px()-P4_proton_transformed.Px();
         P_miss_y_tof = P4_left_transformed.Py()+P4_right_transformed.Py()-P4_proton_transformed.Py();
         P_miss_z_tof = P4_left_transformed.Pz()+P4_right_transformed.Pz()-P4_proton_transformed.Pz();
         P_miss_E_tof = P4_left_transformed.E()+P4_right_transformed.E()-P4_proton_transformed.E();
         P_miss_tof = sqrt(pow(P_miss_x_tof,2)+pow(P_miss_y_tof,2)+pow(P_miss_z_tof,2));
         E_miss_tof = m_p-P_miss_E_tof;
         M_miss_tof = sqrt(pow(P_miss_E_tof,2)-pow(P_miss_tof,2));
      }
      
      // Ignore Dead TOF400 modules:
      if(DetecID_left>400&&DetecID_left<650) Flag_left = 0;
      if(DetecID_right>4200&&DetecID_right<4750) Flag_right = 0;
      if(DetecID_right>3800&&DetecID_right<3950&&x_right>-122.&&x_right<-112.) Flag_right = 0;
      if(x_left>85.&&x_left<152.&&y_left>-22&&y_left<5) Flag_left = 0;

      if(DetecID_left==1544 || DetecID_left==2572) Flag_left = 0;
      if(DetecID_right>=3841&&DetecID_right<=3854) Flag_right = 0;
      if(DetecID_right==3864) Flag_right = 0;

      // New Accp
      // Int_t Good_Strip_Flag_left = 0;
      // if(DetecID_left>=257 && DetecID_left<=304 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=769 && DetecID_left<=816 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=1025 && DetecID_left<=1053 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=1055 && DetecID_left<=1072 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=1281 && DetecID_left<=1328 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=1537 && DetecID_left<=1543 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=1545 && DetecID_left<=1584 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=1795 && DetecID_left<=1840 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=2049 && DetecID_left<=2096 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=2305 && DetecID_left<=2352 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=2561 && DetecID_left<=2571 ) Good_Strip_Flag_left = 1;
      // else if(DetecID_left==2573) Good_Strip_Flag_left = 1;
      // else if(DetecID_left>=2575 && DetecID_left<=2608 ) Good_Strip_Flag_left = 1;
      // if(Good_Strip_Flag_left==0) Flag_left = 0;

      // Int_t Good_Strip_Flag_right = 0;
      // if(DetecID_right>=2817 && DetecID_right<=2864 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=3073 && DetecID_right<=3120 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=3329 && DetecID_right<=3335 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=3337 && DetecID_right<=3376 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=3585 && DetecID_right<=3632 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=3865 && DetecID_right<=3888 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=4097 && DetecID_right<=4144 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=4353 && DetecID_right<=4400 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=4633 && DetecID_right<=4656 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=4865 && DetecID_right<=4912 ) Good_Strip_Flag_right = 1;
      // else if(DetecID_right>=5121 && DetecID_right<=5168 ) Good_Strip_Flag_right = 1;
      // if(Good_Strip_Flag_right==0) Flag_right = 0;

      // Beam Line to outside, up to down
      // Left:  1,1500-1700 2,1700-1900 3,1900-2200 4,2200-2500 5,2500-2700
      //        6,0-400 7,400-700 8,700-900 9,900-1200 10,1200-1500
      // Right: 1,2700-3000 2,3000-3200 3,3200-3500 4,3500-3700 5,3700-4000
      //        6,4000-4300 7,4300-4500 8,4500-4800 9,4800-5000 10,5000-5400

      // Flag_left = 0;
      // Flag_right = 0;
      // if(DetecID_left>1900&&DetecID_left<2200) Flag_left = 1;       // 3
      // if(DetecID_right>3200&&DetecID_right<3500) Flag_right = 1;    // 3

      if(Flag_left==1&&Flag_right==1){

         // h_opening_theta->Fill(theta1_1+theta2_1,weight);
         // h_theta12->Fill(theta1_1,theta2_1,weight);

         h_Pfragx_PmissTheta_both->Fill(kp.Angle(kz)/3.1415926535*180,PBX,weight);
         h_Pfragx_OpeningTheta_both->Fill(kp1.Angle(kp2)/3.1415926535*180,PBX,weight);
         h_Pfragy_PmissTheta_both->Fill(kp.Angle(kz)/3.1415926535*180,PBY,weight);
         h_Pfragy_OpeningTheta_both->Fill(kp1.Angle(kp2)/3.1415926535*180,PBY,weight);
         h_Pfragz_PmissTheta_both->Fill(kp.Angle(kz)/3.1415926535*180,PBZ,weight);
         h_Pfragz_OpeningTheta_both->Fill(kp1.Angle(kp2)/3.1415926535*180,PBZ,weight);
         // h_M_miss_square_frag_with_accp->Fill(M2_frag,weight);
         // h_P_miss_frag_with_accp->Fill(Pmiss_frag,weight);
         // h_P_miss_x_frag_with_accp->Fill(Pmiss_x_frag,weight);
         // h_P_miss_y_frag_with_accp->Fill(Pmiss_y_frag,weight);
         // h_P_miss_z_frag_with_accp->Fill(Pmiss_z_frag,weight);

         NEvents_No_cuts++;
      }

      // if(beta_left<0.8||beta_left>0.95) Flag_left = 0;
      // if(beta_right<0.8||beta_right>0.95) Flag_right = 0;

      // ch_vertex.GetEntry(jentry);
      // if(Smearing_Flag==1){
      //    vertex_x = gRandom->Gaus(vertex_x,0.5);
      //    vertex_y = gRandom->Gaus(vertex_y,0.5);
      //    vertex_z = gRandom->Gaus(vertex_z,1.0);
      // }

      //---------------------------Calculate momentum using TOF-------------------------
      if(Flag_left==1){
         // h_tof_pos_left->Fill(x_left,y_left,weight);
         h_Pfragx_PmissTheta_left->Fill(kp.Angle(kz)/3.1415926535*180,PBX,weight);
         h_Pfragx_OpeningTheta_left->Fill(kp1.Angle(kp2)/3.1415926535*180,PBX,weight);
         h_Pfragy_PmissTheta_left->Fill(kp.Angle(kz)/3.1415926535*180,PBY,weight);
         h_Pfragy_OpeningTheta_left->Fill(kp1.Angle(kp2)/3.1415926535*180,PBY,weight);
         h_Pfragz_PmissTheta_left->Fill(kp.Angle(kz)/3.1415926535*180,PBZ,weight);
         h_Pfragz_OpeningTheta_left->Fill(kp1.Angle(kp2)/3.1415926535*180,PBZ,weight);

         LOF_x_left = x_left - vertex_x;
         LOF_y_left = y_left - vertex_y;
         LOF_z_left = z_left - vertex_z;
         LOF_left = sqrt(pow(LOF_x_left,2)+pow(LOF_y_left,2)+pow(LOF_z_left,2));

         // LOF_left += 1.;

         if(Smearing_Flag==1){
            TOF_left = gRandom->Gaus(TOF_left,TOF_resolution/1000.);   //ns
         }
         else if(Smearing_Flag==0) TOF_left = gRandom->Gaus(TOF_left,0./1000.);   //ns

         vx_left = LOF_x_left/TOF_left*1e7;  // m/s
         vy_left = LOF_y_left/TOF_left*1e7;  // m/s
         vz_left = LOF_z_left/TOF_left*1e7;  // m/s
         v_left = LOF_left/TOF_left*1e7;     // m/s

         if(TOF_Momenta_Flag==1){
            Beta_left = beta_left;
            if(Beta_left<BetaCut_left||Beta_left>BetaCut_right) Flag_left = 0;
            Gamma_left = 1./sqrt(1-pow(Beta_left,2));
            P_left = p_left;
            Px_left = px_left;
            Py_left = py_left;
            Pz_left = pz_left;
            E_left = Gamma_left*m_p;
         }
         else{
            Beta_left = v_left/3e8;
            if(Beta_left<BetaCut_left||Beta_left>BetaCut_right) Flag_left = 0;
            Gamma_left = 1./sqrt(1-pow(Beta_left,2));
            P_left = Beta_left*Gamma_left*m_p;
            Px_left = vx_left*P_left/v_left;
            Py_left = vy_left*P_left/v_left;
            Pz_left = vz_left*P_left/v_left;
            E_left = Gamma_left*m_p;
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

         // if(theta1<25.||theta1>40.) Flag_left = 0;

         h_Pfragz_theta_left->Fill(theta1,PBZ,weight);

         P4_left_initial.SetPxPyPzE(Px_left,Py_left,Pz_left,E_left);
         P4_left_transformed = boost *P4_left_initial;
      }
      if(Flag_right==1){
         // h_tof_pos_right->Fill(x_right,y_right,weight);
         h_Pfragx_PmissTheta_right->Fill(kp.Angle(kz)/3.1415926535*180,PBX,weight);
         h_Pfragx_OpeningTheta_right->Fill(kp1.Angle(kp2)/3.1415926535*180,PBX,weight);
         h_Pfragy_PmissTheta_right->Fill(kp.Angle(kz)/3.1415926535*180,PBY,weight);
         h_Pfragy_OpeningTheta_right->Fill(kp1.Angle(kp2)/3.1415926535*180,PBY,weight);
         h_Pfragz_PmissTheta_right->Fill(kp.Angle(kz)/3.1415926535*180,PBZ,weight);
         h_Pfragz_OpeningTheta_right->Fill(kp1.Angle(kp2)/3.1415926535*180,PBZ,weight);

         LOF_x_right = x_right - vertex_x;
         LOF_y_right = y_right - vertex_y;
         LOF_z_right = z_right - vertex_z;
         LOF_right = sqrt(pow(LOF_x_right,2)+pow(LOF_y_right,2)+pow(LOF_z_right,2));

         // LOF_right += 1.;

         if(Smearing_Flag==1){
            TOF_right = gRandom->Gaus(TOF_right,TOF_resolution/1000.);   //ns
         }
         else if(Smearing_Flag==0) TOF_right = gRandom->Gaus(TOF_right,0./1000.);   //ns

         vx_right = LOF_x_right/TOF_right*1e7;// m/s
         vy_right = LOF_y_right/TOF_right*1e7;// m/s
         vz_right = LOF_z_right/TOF_right*1e7;// m/s
         v_right = LOF_right/TOF_right*1e7;   // m/s

         if(TOF_Momenta_Flag==1){
            Beta_right = beta_right;
            if(Beta_right<BetaCut_left||Beta_right>BetaCut_right) Flag_right = 0;
            Gamma_right = 1./sqrt(1-pow(Beta_right,2));
            P_right = p_right;
            Px_right = px_right;
            Py_right = py_right;
            Pz_right = pz_right;
            E_right = Gamma_right*m_p;
         }
         else{
            Beta_right = v_right/3e8;
            if(Beta_right<BetaCut_left||Beta_right>BetaCut_right) Flag_right = 0;
            Gamma_right = 1./sqrt(1-pow(Beta_right,2));
            P_right = Beta_right*Gamma_right*m_p;
            Px_right = vx_right*P_right/v_right;
            Py_right = vy_right*P_right/v_right;
            Pz_right = vz_right*P_right/v_right;
            E_right = Gamma_right*m_p;
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

         // if(theta2<25.||theta2>40.) Flag_right = 0;

         h_Pfragz_theta_right->Fill(theta2,PBZ,weight);

         P4_right_initial.SetPxPyPzE(Px_right,Py_right,Pz_right,E_right);
         P4_right_transformed = boost *P4_right_initial;
      }
      if(Flag_left==1&&Flag_right==1){
         TVector3 vec1(Px_left, Py_left, Pz_left);
         TVector3 vec2(Px_right, Py_right, Pz_right);

         Double_t angle_rad = vec1.Angle(vec2);
         Double_t angle_deg = angle_rad * 180.0 / TMath::Pi();

         // if(angle_deg<61.||angle_deg>70.){
         //    memset(StsPoint_fPx,0,sizeof(StsPoint_fPx));
         //    memset(StsPoint_fPy,0,sizeof(StsPoint_fPy));
         //    memset(StsPoint_fPz,0,sizeof(StsPoint_fPz));
         //    memset(StsPoint_fX,0,sizeof(StsPoint_fX));
         //    memset(StsPoint_fY,0,sizeof(StsPoint_fY));
         //    memset(StsPoint_fZ,0,sizeof(StsPoint_fZ));
         //    memset(StsPoint_fTrackID,0,sizeof(StsPoint_fTrackID));
            
         //    memset(CSCPoint_fX,0,sizeof(CSCPoint_fX));
         //    memset(CSCPoint_fY,0,sizeof(CSCPoint_fY));
         //    memset(CSCPoint_fZ,0,sizeof(CSCPoint_fZ));
         //    memset(CSCPoint_fPx,0,sizeof(CSCPoint_fPx));
         //    memset(CSCPoint_fPy,0,sizeof(CSCPoint_fPy));
         //    memset(CSCPoint_fPz,0,sizeof(CSCPoint_fPz));
         //    memset(CSCPoint_fPdgId,-1,sizeof(CSCPoint_fPdgId));
         //    memset(CSCPoint_fTrackID,-1,sizeof(CSCPoint_fTrackID));
         //    memset(CSCPoint_fStation,-1,sizeof(CSCPoint_fStation));
         
         //    memset(TOF400Point_fPx,0,sizeof(TOF400Point_fPx));
         //    memset(TOF400Point_fPy,0,sizeof(TOF400Point_fPy));
         //    memset(TOF400Point_fPz,0,sizeof(TOF400Point_fPz));
         //    memset(TOF400Point_fX,0,sizeof(TOF400Point_fX));
         //    memset(TOF400Point_fY,0,sizeof(TOF400Point_fY));
         //    memset(TOF400Point_fZ,0,sizeof(TOF400Point_fZ));
         //    memset(TOF400Point_fTrackID,-1,sizeof(TOF400Point_fTrackID));
         //    memset(TOF400Point_fTime,0,sizeof(TOF400Point_fTime));
         //    memset(TOF400Point_fLength,0,sizeof(TOF400Point_fLength));
         //    memset(TOF400Point_fDetectorID,0,sizeof(TOF400Point_fDetectorID));
         //    continue;
         // }

         // h_Pfragz_PmissTheta_both->Fill(kp.Angle(kz)/3.1415926535*180,PBZ,weight);

         h_Pfragz_theta_left_both->Fill(theta1,PBZ,weight);
         h_Pfragz_theta_right_both->Fill(theta2,PBZ,weight);

         h_px_diff_polar->Fill(theta1_x,px1_diff,weight); h_px_diff_polar->Fill(theta2_x,px2_diff,weight);
         h_py_diff_polar->Fill(theta1_y,py1_diff,weight); h_py_diff_polar->Fill(theta2_y,py2_diff,weight);
         h_pz_diff_polar->Fill(theta1_1,pz1_diff,weight); h_pz_diff_polar->Fill(theta2_1,pz2_diff,weight);
         h_P_miss_x_diff_polar->Fill(theta1_x+theta2_x,P_miss_x_diff,weight);
         h_P_miss_y_diff_polar->Fill(theta1_y+theta2_y,P_miss_y_diff,weight);
         h_P_miss_z_diff_polar->Fill(theta1_1+theta2_1,P_miss_z_diff,weight);
         
         // double pos_x, pos_y;
         // // MWPC4
         // Double_t MWPC4_distance = 342; //cm
         // pos_x = MWPC4_distance/PBZ*PBX;
         // pos_y = MWPC4_distance/PBZ*PBY;
         // h_11B_MWPC4_pos->Fill(pos_x,pos_y,weight);
         // // SP-41
         // Double_t SP41_distance = 124.5+260.0/2.+576.2; // 830.7 cm
         // pos_x = SP41_distance/PBZ*PBX;
         // pos_y = SP41_distance/PBZ*PBY;
         // h_11B_SP41_pos->Fill(pos_x,pos_y,weight);

         // cout<<DetecID_left<<"\t"<<DetecID_right<<endl;
         TOF_Mean_left += TOF_left;
         TOF_Mean_right += TOF_right;
         TOF_Counts += 1.;

         Int_t Continue_Flag = 0;
         // if(P_miss_x_1<-0.005||P_miss_x_1>0.005) {Cut_Flag=0;Continue_Flag=1;}
         // if(P_miss_x_1<0.05-0.005||P_miss_x_1>0.05+0.005) {Cut_Flag=1;Continue_Flag=1;}
         // if(P_miss_y_1<-0.005||P_miss_y_1>0.005){Cut_Flag=0;Continue_Flag=1;}
         // if(P_miss_y_1<0.05-0.005||P_miss_y_1>0.05+0.005) {Cut_Flag=1;Continue_Flag=1;}
         // if(P_miss_z_1<-0.06-0.005||P_miss_z_1>-0.06+0.005){Cut_Flag=0;Continue_Flag=1;}

         if(Continue_Flag==1){
            memset(StsPoint_fPx,0,sizeof(StsPoint_fPx));
            memset(StsPoint_fPy,0,sizeof(StsPoint_fPy));
            memset(StsPoint_fPz,0,sizeof(StsPoint_fPz));
            memset(StsPoint_fX,0,sizeof(StsPoint_fX));
            memset(StsPoint_fY,0,sizeof(StsPoint_fY));
            memset(StsPoint_fZ,0,sizeof(StsPoint_fZ));
            memset(StsPoint_fTrackID,0,sizeof(StsPoint_fTrackID));
            
            memset(CSCPoint_fX,0,sizeof(CSCPoint_fX));
            memset(CSCPoint_fY,0,sizeof(CSCPoint_fY));
            memset(CSCPoint_fZ,0,sizeof(CSCPoint_fZ));
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
            continue;
         }

         P_miss_x = P4_left_transformed.Px()+P4_right_transformed.Px()-P4_proton_transformed.Px();
         P_miss_y = P4_left_transformed.Py()+P4_right_transformed.Py()-P4_proton_transformed.Py();
         P_miss_z = P4_left_transformed.Pz()+P4_right_transformed.Pz()-P4_proton_transformed.Pz();
         P_miss_E = P4_left_transformed.E()+P4_right_transformed.E()-P4_proton_transformed.E();
         P_miss = sqrt(pow(P_miss_x,2)+pow(P_miss_y,2)+pow(P_miss_z,2));
         E_miss = m_p-P_miss_E;
         M_miss = sqrt(pow(P_miss_E,2)-pow(P_miss,2));
         M_miss_square = M_miss*M_miss;

         // if(E_miss<-0.2||E_miss>0.2){
         //    memset(StsPoint_fPx,0,sizeof(StsPoint_fPx));
         //    memset(StsPoint_fPy,0,sizeof(StsPoint_fPy));
         //    memset(StsPoint_fPz,0,sizeof(StsPoint_fPz));
         //    memset(StsPoint_fX,0,sizeof(StsPoint_fX));
         //    memset(StsPoint_fY,0,sizeof(StsPoint_fY));
         //    memset(StsPoint_fZ,0,sizeof(StsPoint_fZ));
         //    memset(StsPoint_fTrackID,0,sizeof(StsPoint_fTrackID));
            
         //    memset(CSCPoint_fX,0,sizeof(CSCPoint_fX));
         //    memset(CSCPoint_fY,0,sizeof(CSCPoint_fY));
         //    memset(CSCPoint_fZ,0,sizeof(CSCPoint_fZ));
         //    memset(CSCPoint_fPx,0,sizeof(CSCPoint_fPx));
         //    memset(CSCPoint_fPy,0,sizeof(CSCPoint_fPy));
         //    memset(CSCPoint_fPz,0,sizeof(CSCPoint_fPz));
         //    memset(CSCPoint_fPdgId,-1,sizeof(CSCPoint_fPdgId));
         //    memset(CSCPoint_fTrackID,-1,sizeof(CSCPoint_fTrackID));
         //    memset(CSCPoint_fStation,-1,sizeof(CSCPoint_fStation));
         
         //    memset(TOF400Point_fPx,0,sizeof(TOF400Point_fPx));
         //    memset(TOF400Point_fPy,0,sizeof(TOF400Point_fPy));
         //    memset(TOF400Point_fPz,0,sizeof(TOF400Point_fPz));
         //    memset(TOF400Point_fX,0,sizeof(TOF400Point_fX));
         //    memset(TOF400Point_fY,0,sizeof(TOF400Point_fY));
         //    memset(TOF400Point_fZ,0,sizeof(TOF400Point_fZ));
         //    memset(TOF400Point_fTrackID,-1,sizeof(TOF400Point_fTrackID));
         //    memset(TOF400Point_fTime,0,sizeof(TOF400Point_fTime));
         //    memset(TOF400Point_fLength,0,sizeof(TOF400Point_fLength));
         //    memset(TOF400Point_fDetectorID,0,sizeof(TOF400Point_fDetectorID));
         //    continue;
         // }

         TVector3 Pmiss(P_miss_x,P_miss_y,P_miss_z);
         TVector3 Pfrag(PB_transformed.Px(),PB_transformed.Py(),PB_transformed.Pz());
         TVector3 Pmiss_2D(P_miss_x,P_miss_y,0);
         TVector3 Pfrag_2D(PB_transformed.Px(),PB_transformed.Py(),0);
         angle_pmiss_pfrag = Pmiss.Angle(Pfrag);

         angle_pmiss_pfrag_2D = Pmiss_2D.Angle(Pfrag_2D);

         if(angle_pmiss_pfrag*180.0/TMath::Pi()>=145.) GoodFragEvents++;

         P4_12C.SetPxPyPzE(0,0,0,m_12C);
         P4_neutron = P4_12C + P4_proton_transformed - P4_left_transformed - P4_right_transformed - PB_transformed;
         TVector3 P_neutron(P4_neutron.Px(),P4_neutron.Py(),P4_neutron.Pz());
         TVector3 P_rel = Pmiss - P_neutron;
         double angle_pmiss_pn = Pmiss.Angle(P_neutron);
         double angle_pfrag_prel = Pfrag.Angle(P_rel);
         double Mmiss_excl = P4_neutron.M2();

         TVector3 v1(P_miss_x,P_miss_y,P_miss_z);
         TVector3 v2(P4_proton_transformed.Px(),P4_proton_transformed.Py(),P4_proton_transformed.Pz());
         TVector3 v3(P4_left_transformed.Px(),P4_left_transformed.Py(),P4_left_transformed.Pz());
         TVector3 v4(P4_right_transformed.Px(),P4_right_transformed.Py(),P4_right_transformed.Pz());
         TVector3 n1 = v1.Cross(v2);
         TVector3 n2 = v3.Cross(v4);
         double cosTheta = n1.Dot(n2) / (n1.Mag() * n2.Mag()); 
         Trieman_Yang_Angle_cos = cosTheta;

         // if(fabs((theta1+theta2 - thetaMean) / thetaSigma)<2.){
            h_E_miss_with_tail->Fill(E_miss,weight);
            h_E_miss_with_tail_1->Fill(E_miss_1,weight);
            h_M_miss_square_beforeQE->Fill(M_miss*M_miss,weight);
            h_M_miss_square_beforeQE_1->Fill(M_miss_1*M_miss_1,weight);
         // }
         // if(QE_cut(E_miss,theta1+theta2)&&QE_Cut_Flag) Continue_Flag=1;
         if(QE_cut_Mmiss2(M_miss*M_miss,theta1+theta2)&&QE_Cut_Flag) Continue_Flag=1;
         // if(QE_cut_Mmiss2_square(M_miss*M_miss,theta1+theta2)&&QE_Cut_Flag) Continue_Flag=1;

         double P_survive = 1 - breakup_possibility(-576.2+15-vertex_z_1);
         double Value_random = gRandom->Uniform(0,1);
         if(Value_random>P_survive) Continue_Flag=1;

         // if(vertex_z<-576.2 - 15||vertex_z>-576.2 + 15) Continue_Flag=1;
         // if((vertex_x-1)*(vertex_x-1)+vertex_y*vertex_y>9) Continue_Flag=1;
         if(vertex_z<-576.2 - 13||vertex_z>-576.2 + 17) Continue_Flag=1;
         if((vertex_x-0.5)*(vertex_x-0.5)+vertex_y*vertex_y>9) Continue_Flag=1;
         // if(vertex_z<-576.2 - 15||vertex_z>-576.2 - 5) Continue_Flag=1;
         // if(vertex_z<-576.2 - 5||vertex_z>-576.2 + 5) Continue_Flag=1;
         // if(vertex_z<-576.2 + 5||vertex_z>-576.2 + 15) Continue_Flag=1;
         

         // cout<<angle_pmiss_pn<<"\t"<<angle_pfrag_prel<<endl;

         // if(PB_transformed.Px()<-0.005||PB_transformed.Px()>0.005) Continue_Flag=1;
         // if(PB_transformed.Py()<-0.005||PB_transformed.Py()>0.005) Continue_Flag=1;
         // if(PB_transformed.Pz()<0.06-0.005||PB_transformed.Pz()>0.06+0.005) Continue_Flag=1;

         // if(angle_pmiss_pfrag*180.0/TMath::Pi()<145.) Continue_Flag=1;

         if(CA_New_Flag==1){
            // 1 (Px_left,Py_left,Pz_left,  E_left)
            // 2 (Px_right,Py_right,Pz_right,   E_right)
            // 3 (0,0,0,   m_p)
            // 4 (0,0,P_12C_Real/12,   sqrt(m_12C/12.*m_12C/12.+P_12C_Real/12.*P_12C_Real/12.))
            // ss = (1+2)^2, tt = (1-3)^2, uu = (1-4)^2
            // ss = pow(E_left+E_right,2)-pow(Px_left+Px_right,2)-pow(Py_left+Py_right,2)-pow(Pz_left+Pz_right,2);
            // uu = pow(E_left-sqrt(m_12C/12.*m_12C/12.+P_12C_Real/12.*P_12C_Real/12.),2)-pow(Px_left,2)-pow(Py_left,2)-pow(Pz_left-P_12C_Real/12,2);
            // tt = pow(E_left-m_p,2)-pow(Px_left,2)-pow(Py_left,2)-pow(Pz_left,2);
            // pp = (ss-pow(m_p+m_12C/12.,2))*(ss-pow(m_p-m_12C/12.,2))/4./ss;
            // CA = TMath::ACos(cos_theta(ss,tt,uu,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180;

            // 2 (0,0,P_12C_Real/12,sqrt(m_12C/12.*m_12C/12.+P_12C_Real/12.*P_12C_Real/12.))
            // 1 (0,0,0,m_p)
            // 3 (Px_left,Py_left,Pz_left,E_left)
            // 4 (Px_right,Py_right,Pz_right,E_right)
            // ss = (3+4)^2, tt = (1-3)^2, uu = (1-4)^2
            ss = pow(E_left+E_right,2)-pow(Px_left+Px_right,2)-pow(Py_left+Py_right,2)-pow(Pz_left+Pz_right,2);
            tt = pow(m_p-E_left,2)-pow(Px_left,2)-pow(Py_left,2)-pow(Pz_left,2);
            uu = pow(m_p-E_right,2)-pow(Px_right,2)-pow(Py_right,2)-pow(Pz_right,2);
            pp = (ss-pow(m_p+m_12C/12.,2))*(ss-pow(m_p-m_12C/12.,2))/4./ss;
            CA = TMath::ACos(cos_theta(ss,tt,uu,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180;
         }
         else{
            // 2 (0,0,P_12C_Real/12,sqrt(m_12C/12.*m_12C/12.+P_12C_Real/12.*P_12C_Real/12.))
            // 1 (0,0,0,m_p)
            // 3 (Px_left,Py_left,Pz_left,E_left)
            // 4 (Px_right,Py_right,Pz_right,E_right)s
            ss = pow(sqrt(m_12C/12.*m_12C/12.+P_12C_Real/12.*P_12C_Real/12.)+m_p,2)-pow(P_12C_Real/12.,2);
            tt = pow(m_p-E_left,2)-pow(Px_left,2)-pow(Py_left,2)-pow(Pz_left,2);
            uu = pow(m_p-E_right,2)-pow(Px_right,2)-pow(Py_right,2)-pow(Pz_right,2);
            pp = (ss-pow(m_p+m_12C/12.,2))*(ss-pow(m_p-m_12C/12.,2))/4./ss;
            CA = TMath::ACos(cos_theta(ss,tt,uu,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180;
         }


         // if(CA>100||CA<80) Continue_Flag=1;
         if((CA>CA_max||CA<CA_min)&&CA_cut_flag==1) Continue_Flag=1;
         double min_t_and_u = std::min(fabs(tt),fabs(uu));
         if((min_t_and_u>TUcut_max||min_t_and_u<TUcut_min)&&TU_cut_flag==1) Continue_Flag=1;

         if(Continue_Flag==1){
            memset(StsPoint_fPx,0,sizeof(StsPoint_fPx));
            memset(StsPoint_fPy,0,sizeof(StsPoint_fPy));
            memset(StsPoint_fPz,0,sizeof(StsPoint_fPz));
            memset(StsPoint_fX,0,sizeof(StsPoint_fX));
            memset(StsPoint_fY,0,sizeof(StsPoint_fY));
            memset(StsPoint_fZ,0,sizeof(StsPoint_fZ));
            memset(StsPoint_fTrackID,0,sizeof(StsPoint_fTrackID));
            
            memset(CSCPoint_fX,0,sizeof(CSCPoint_fX));
            memset(CSCPoint_fY,0,sizeof(CSCPoint_fY));
            memset(CSCPoint_fZ,0,sizeof(CSCPoint_fZ));
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
            continue;
         }

         h_fly_path_x_left->Fill(LOF_x_left,weight);
         h_fly_path_y_left->Fill(LOF_y_left,weight);
         h_fly_path_z_left->Fill(LOF_z_left,weight);
         h_fly_path_left->Fill(LOF_left,weight);
         h_fly_path_x_right->Fill(LOF_x_right,weight);
         h_fly_path_y_right->Fill(LOF_y_right,weight);
         h_fly_path_z_right->Fill(LOF_z_right,weight);
         h_fly_path_right->Fill(LOF_right,weight);

         h_fly_time_left->Fill(TOF_left,weight);
         h_fly_time_right->Fill(TOF_right,weight);

         NormFactor_weight += weight;

         h_tof_pos_left->Fill(x_left,y_left,weight);
         h_tof_pos_right->Fill(x_right,y_right,weight);

         h_Angle_Pmiss_PFrag->Fill(angle_pmiss_pfrag*180.0/TMath::Pi(),weight);
         h_Angle_Pmiss_PFrag_cos->Fill(cos(angle_pmiss_pfrag),weight);
         h_Angle_Pmiss_PFrag_cos_2D->Fill(cos(angle_pmiss_pfrag_2D),weight);
         h_Pmiss_Pfrag_x->Fill(P_miss_x,PB_transformed.Px(),weight);
         h_Pmiss_Pfrag_y->Fill(P_miss_y,PB_transformed.Py(),weight);
         // h_Pmiss_Pfrag_z->Fill(P_miss_z,PB_transformed.Pz(),weight);
         h_Pmiss_Pfrag_z->Fill(P_miss_z_1,PB_transformed_generator.Pz(),weight);
         h_Pmiss_Pfrag_tot->Fill(P_miss,sqrt(pow(PB_transformed.Px(),2)+pow(PB_transformed.Py(),2)+pow(PB_transformed.Pz(),2)),weight);

         h_pbx->Fill(PB_transformed.Px(),weight);
         h_pby->Fill(PB_transformed.Py(),weight);
         h_pbz->Fill(PB_transformed.Pz(),weight);
         h_pb->Fill(sqrt(pow(PB_transformed.Px(),2)+pow(PB_transformed.Py(),2)+pow(PB_transformed.Pz(),2)),weight);
         h_vertex_z_breakup->Fill(vertex_z,weight);

         // 2 (0,0,P_12C_Real/12,sqrt(m_12C/12.*m_12C/12.+P_12C_Real/12.*P_12C_Real/12.))
         // 1 (0,0,0,m_p)
         // 3 (Px_left,Py_left,Pz_left,E_left)
         // 4 (Px_right,Py_right,Pz_right,E_right)
         // ss = pow(sqrt(m_12C/12.*m_12C/12.+P_12C_Real/12.*P_12C_Real/12.)+m_p,2)-pow(P_12C_Real/12.,2);
         // tt = pow(m_p-E_left,2)-pow(Px_left,2)-pow(Py_left,2)-pow(Pz_left,2);
         // uu = pow(m_p-E_right,2)-pow(Px_right,2)-pow(Py_right,2)-pow(Pz_right,2);
         // pp = (ss-pow(m_p+m_12C/12.,2))*(ss-pow(m_p-m_12C/12.,2))/4./ss;
         // CA = TMath::ACos(cos_theta(ss,tt,uu,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180;
         h_scattering_angle->Fill(CA,weight);
         h_scattering_angle_1->Fill(CA_1,weight);
         if(CA>70.&&CA<110.) NEvents_With_cuts++;
         if(CA>85.&&CA<95.) h_vertex_z_with_cut->Fill(vertex_z,weight);
         h_Mandelstam_t->Fill(fabs(tt),weight);
         h_Mandelstam_u->Fill(fabs(uu),weight);
         h_Mandelstam_t_diff->Fill(fabs(tt)-fabs(tt_1),weight);
         h_Mandelstam_u_diff->Fill(fabs(uu)-fabs(uu_1),weight);
         h_Mandelstam_u_t->Fill(std::max(fabs(tt),fabs(uu)),weight); 
         h_Mandelstam_u_t_min->Fill(std::min(fabs(tt),fabs(uu)),weight); 
         // h_Mandelstam_u_t_min_1->Fill(std::min(fabs(tt_1),fabs(uu_1)),weight); 
         // h_Mandelstam_t_1->Fill(fabs(tt_1),weight);
         // h_Mandelstam_u_1->Fill(fabs(uu_1),weight);
         // h_Mandelstam_u_t_1->Fill(std::max(fabs(tt_1),fabs(uu_1)),,weight);
         // cout<<TMath::ACos(cos_theta(ss,tt,uu,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180<<"\t";
         // cout<<TMath::ACos(cos_theta(ss,uu,tt,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180<<endl;
         // cout<<TMath::ACos(cos_theta(ss,tt,uu,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180+TMath::ACos(cos_theta(ss,uu,tt,m_p,m_12C/12.,m_p,m_p))/3.1415926535*180<<endl;

         // Fill difference between reco and TOF reco
         h_p1x_diff_1->Fill(Px_left-px_left,weight);
         h_p1y_diff_1->Fill(Py_left-py_left,weight);
         h_p1z_diff_1->Fill(Pz_left-pz_left,weight);
         h_p1_diff_1->Fill(P_left-p_left,weight);   
         h_p2x_diff_1->Fill(Px_right-px_right,weight);
         h_p2y_diff_1->Fill(Py_right-py_right,weight);
         h_p2z_diff_1->Fill(Pz_right-pz_right,weight);
         h_p2_diff_1->Fill(P_right-p_right,weight);
         h_p_miss_x_diff_1->Fill(P_miss_x-P_miss_x_tof,weight);
         h_p_miss_y_diff_1->Fill(P_miss_y-P_miss_y_tof,weight);
         h_p_miss_z_diff_1->Fill(P_miss_z-P_miss_z_tof,weight);
         h_p_miss_diff_1->Fill(P_miss-P_miss_tof,weight);
         h_E_miss_diff_1->Fill(E_miss-E_miss_tof,weight);
         h_M_miss_diff_1->Fill(M_miss-M_miss_tof,weight);
         h_M_miss_square_diff_1->Fill(M_miss*M_miss-M_miss_tof*M_miss_tof,weight);

         // Fill difference between reco and generator
         h_p1x_diff->Fill(Px_left-px_left_initial,weight);
         h_p1y_diff->Fill(Py_left-py_left_initial,weight);
         h_p1z_diff->Fill(Pz_left-pz_left_initial,weight);
         h_p1_diff->Fill(P_left-p_left_initial,weight);   
         h_p2x_diff->Fill(Px_right-px_right_initial,weight);
         h_p2y_diff->Fill(Py_right-py_right_initial,weight);
         h_p2z_diff->Fill(Pz_right-pz_right_initial,weight);
         h_p2_diff->Fill(P_right-p_right_initial,weight);
         h_p_miss_x_diff->Fill(P_miss_x-P_miss_x_1,weight);
         h_p_miss_y_diff->Fill(P_miss_y-P_miss_y_1,weight);
         h_p_miss_z_diff->Fill(P_miss_z-P_miss_z_1,weight);
         h_p_miss_diff->Fill(P_miss-P_miss_1,weight);
         h_E_miss_diff->Fill(E_miss-E_miss_1,weight);
         h_M_miss_diff->Fill(M_miss-M_miss_1,weight);
         h_M_miss_square_diff->Fill(M_miss*M_miss-M_miss_1*M_miss_1,weight);

         h_P_miss_T_diff->Fill(sqrt(P_miss_x*P_miss_x+P_miss_y*P_miss_y)-sqrt(P_miss_x_1*P_miss_x_1+P_miss_y_1*P_miss_y_1),weight);

         // if(rec_type==2112) h_Emiss_Pmiss->Fill(P_miss,E_miss,weight);

         // in-plane opening angle larger than 63°
         // if(rec_type==2112 && theta1+theta2>=63){ // 2212 proton; 2112 neutron
         //    h_Emiss_Pmiss->Fill(P_miss,E_miss,weight);
         //    if(P_miss>0.35 && E_miss>=-0.11 && E_miss<=0.24){
         //       h_E_miss_src->Fill(E_miss,weight);
         //       h_P_miss_src->Fill(P_miss,weight);
               
         //       h_Angle_Pfrag_Prel_cos->Fill(cos(angle_pfrag_prel),weight);
         //       h_Angle_Pmiss_Pn_cos->Fill(cos(angle_pmiss_pn),weight);
         //       h_Mmiss_excl->Fill(Mmiss_excl,weight);
         //    }
         // }

         // // if(CSCPoint_fPdgId[0]==2212 || CSCPoint_fPdgId[0]==2112){ // proton and neutron
         // if(CSCPoint_fPdgId[0]==2212 && CSCPoint_fTrackID[0]==2){ // proton
         //    // cout<<CSCPoint_fTrackID[0]<<endl;

         //    h_CSC_Hits_pos->Fill(CSCPoint_fX[0],CSCPoint_fY[0],weight);
         //    h_CSC_Hits_pos_X->Fill(CSCPoint_fX[0],weight);
         //    h_CSC_Hits_pos_Y->Fill(CSCPoint_fY[0],weight);
         //    CSC_After_Mag += weight;

         //    P_Frag_proton_initial.SetXYZM(CSCPoint_fPx[0],CSCPoint_fPy[0],CSCPoint_fPz[0],m_p);
         //    P_Frag_proton_transformed = boost *P_Frag_proton_initial;

         //    h_Pfrag_proton_x->Fill(P_Frag_proton_transformed.Px(),weight);
         //    h_Pfrag_proton_y->Fill(P_Frag_proton_transformed.Py(),weight);
         //    h_Pfrag_proton_z->Fill(P_Frag_proton_transformed.Pz(),weight);
         //    h_Pfrag_proton->Fill(sqrt(pow(P_Frag_proton_transformed.Px(),2)+pow(P_Frag_proton_transformed.Py(),2)+pow(P_Frag_proton_transformed.Pz(),2)),weight);

         //    h_Pfrag_proton_xy->Fill(P_Frag_proton_transformed.Px(),P_Frag_proton_transformed.Py(),weight);

         //    // cout<<CSCPoint_fPdgId[0]<<"\t"<<CSCPoint_fTrackID[0]<<endl;
         // }
         // if(rec_type==2212) Arm_And += weight;

         h_p1zp2z_1->Fill(P_miss_z_1, weight);
         h_pbz_1->Fill(PB_transformed_generator.Pz(), weight);

         h_pmiss_z_plus_pfrag_z->Fill(P_miss_z+PB_transformed.Pz(), weight);
         h_pmiss_z_plus_pfrag_z_generator->Fill(P_miss_z_1+PB_transformed_generator.Pz(), weight);

         p1_QE[0] = Px_left;
         p1_QE[1] = Py_left;
         p1_QE[2] = Pz_left;
         p2_QE[0] = Px_right;
         p2_QE[1] = Py_right;
         p2_QE[2] = Pz_right;

         h_p1x->Fill(Px_left,weight);
         h_p1y->Fill(Py_left,weight);
         h_p1z->Fill(Pz_left,weight);
         h_E1->Fill(P_left,weight);
         h_p2x->Fill(Px_right,weight);
         h_p2y->Fill(Py_right,weight);
         h_p2z->Fill(Pz_right,weight);
         h_E2->Fill(P_right,weight);
         h_p1xp2x->Fill(P_miss_x,weight);
         h_p1yp2y->Fill(P_miss_y,weight);
         h_p1zp2z->Fill(P_miss_z,weight);
         h_P_miss->Fill(P_miss,weight);
         h_M_miss->Fill(M_miss,weight);
         h_E_miss->Fill(E_miss,weight);
         h_M_miss_square->Fill(M_miss*M_miss,weight);
         h_M_miss_square_betaL->Fill(Beta_left,M_miss*M_miss,weight);
         h_M_miss_square_betaR->Fill(Beta_right,M_miss*M_miss,weight);
         h_openingtheta_Pmiss->Fill(P_miss,theta1+theta2,weight);
         // h_E_miss->Fill(E_miss+0.12,weight);
         // h_M_miss_square->Fill(M_miss*M_miss-0.2,weight);
         // h_E_miss->Fill(E_miss+0.15,weight);
         // h_M_miss_square->Fill(M_miss*M_miss-0.2,weight);
         // h_E_miss->Fill(E_miss-0.015,weight);
         // h_M_miss_square->Fill(M_miss*M_miss+0.1,weight);
         if(std::min(fabs(tt),fabs(uu))<1.8) h_M_miss_square_mintuCut->Fill(M_miss*M_miss,weight);
         h_opening_theta->Fill(theta1+theta2,weight);
         h_openingTheta_mintu->Fill(theta1+theta2,std::min(fabs(tt),fabs(uu)),weight);
         opening_theta = theta1 + theta2;
         if(phi1-phi2>-180 && phi1-phi2<180) h_opening_phi->Fill(phi1-phi2,weight);
         else if(phi1-phi2<-180) h_opening_phi->Fill(phi1-phi2+360,weight);
         else h_opening_phi->Fill(phi1-phi2-360,weight);
         h_E_theta->Fill(E_miss,theta1+theta2,weight);
         h_theta12->Fill(theta1,theta2,weight);
         h_phi12->Fill(phi1,phi2,weight);
         h_theta1_phi1->Fill(theta1,phi1,weight);
         h_theta2_phi2->Fill(theta2,phi2,weight);
         h_phi1->Fill(phi1,weight);
         h_phi2->Fill(phi2,weight);
         h_theta1->Fill(theta1,weight);
         // h_theta2->Fill(theta2,weight);
         h_theta2->Fill(-theta2,weight);
         h_vertex_x->Fill(vertex_x,weight);
         h_vertex_y->Fill(vertex_y,weight);
         h_vertex_xy->Fill(vertex_x,vertex_y,weight);
         h_vertex_z->Fill(vertex_z,weight);
         // if(phi2>0) h_phi12->Fill(phi1,phi2,weight);
         // else h_phi12->Fill(phi1,phi2+360.,weight);

         h_beta_left->Fill(Beta_left,weight);
         h_beta_right->Fill(Beta_right,weight);
         h_beta_left_vs_right->Fill(Beta_left,Beta_right,weight);

         // if(QE_cut(E_miss,theta1+theta2)==0){
            // cout<<QE_cut(E_miss,theta1+theta2)<<endl;
            // tree_QE->Fill();
         // }

         // if(jentry>=3175428 && jentry<4233118) tree_QE->Fill();
         tree_QE->Fill();
         // tree_Generator->Fill();

         //--Comparation between reconstruction form fragments and reconstruction form protons
         h_M_miss_square_frag_with_accp->Fill(M2_frag,weight);
         h_P_miss_frag_with_accp->Fill(Pmiss_frag,weight);
         h_P_miss_x_frag_with_accp->Fill(Pmiss_x_frag,weight);
         h_P_miss_y_frag_with_accp->Fill(Pmiss_y_frag,weight);
         h_P_miss_z_frag_with_accp->Fill(Pmiss_z_frag,weight);

         h_M_miss_square_frag_with_accp_diff->Fill(M2_frag-M_miss,weight);
         h_P_miss_frag_with_accp_diff->Fill(Pmiss_frag-P_miss,weight);
         h_P_miss_x_frag_with_accp_diff->Fill(Pmiss_x_frag-P_miss_x,weight);
         h_P_miss_y_frag_with_accp_diff->Fill(Pmiss_y_frag-P_miss_y,weight);
         h_P_miss_z_frag_with_accp_diff->Fill(Pmiss_z_frag-P_miss_z,weight);

         h_Pmiss_diff_ratio->Fill((Pmiss_frag-P_miss)/Pmiss_frag*100.,weight);
         h_Pmiss_diff_ratio_frag->Fill(Pmiss_frag,(Pmiss_frag-P_miss)/Pmiss_frag*100.,weight);
         h_Pmiss_diff_ratio_arm->Fill(P_miss,(Pmiss_frag-P_miss)/Pmiss_frag*100.,weight);
         h_Pmiss_frag_theta->Fill(angle_deg,Pmiss_frag,weight);
         h_Pmiss_arm_theta->Fill(angle_deg,P_miss,weight);

         h_M_miss_square_frag_with_accp_vs_method1->Fill(M2_frag,M_miss,weight);
         // h_P_miss_frag_with_accp_vs_method1->Fill(Pmiss_frag,P_miss,weight);
         // h_P_miss_x_frag_with_accp_vs_method1->Fill(Pmiss_x_frag,P_miss_x,weight);
         // h_P_miss_y_frag_with_accp_vs_method1->Fill(Pmiss_y_frag,P_miss_y,weight);
         // h_P_miss_z_frag_with_accp_vs_method1->Fill(Pmiss_z_frag,P_miss_z,weight);
         h_P_miss_frag_with_accp_vs_method1->Fill(P_miss,Pmiss_frag,weight);
         h_P_miss_x_frag_with_accp_vs_method1->Fill(P_miss_x,Pmiss_x_frag,weight);
         h_P_miss_y_frag_with_accp_vs_method1->Fill(P_miss_y,Pmiss_y_frag,weight);
         h_P_miss_z_frag_with_accp_vs_method1->Fill(P_miss_z,Pmiss_z_frag,weight);
         //--Comparation between reconstruction form fragments and reconstruction form protons

         h_vertex_x_1->Fill(vertex_x_1,weight);
         h_vertex_y_1->Fill(vertex_y_1,weight);
         h_vertex_xy_1->Fill(vertex_x_1,vertex_y_1,weight);
         h_vertex_z_1->Fill(vertex_z_1,weight);
         h_p1x_1->Fill(px_left_initial,weight);
         h_p1y_1->Fill(py_left_initial,weight);
         h_p1z_1->Fill(pz_left_initial,weight);
         h_E1_1->Fill(p_left_initial,weight);
         h_p2x_1->Fill(px_right_initial,weight);
         h_p2y_1->Fill(py_right_initial,weight);
         h_p2z_1->Fill(pz_right_initial,weight);
         h_E2_1->Fill(p_right_initial,weight);
         h_p1xp2x_1->Fill(P_miss_x_1,weight);
         h_p1yp2y_1->Fill(P_miss_y_1,weight);
         h_p1zp2z_1->Fill(P_miss_z_1,weight);
         h_P_miss_1->Fill(P_miss_1,weight);
         h_E_miss_1->Fill(E_miss_1,weight);
         h_M_miss_1->Fill(M_miss_1,weight);
         h_M_miss_square_1->Fill(M_miss_1*M_miss_1,weight);
         h_opening_theta_1->Fill(theta1_1+theta2_1,weight);
         if(phi1_1-phi2_1>-180 && phi1_1-phi2_1<180) h_opening_phi_1->Fill(phi1_1-phi2_1,weight);
         else if(phi1_1-phi2_1<-180) h_opening_phi_1->Fill(phi1_1-phi2_1+360,weight);
         else h_opening_phi_1->Fill(phi1_1-phi2_1-360,weight);
         h_phi1_1->Fill(phi1_1,weight);
         h_phi2_1->Fill(phi2_1,weight);
         h_theta1_1->Fill(theta1_1,weight);
         h_theta2_1->Fill(theta2_1,weight);

         h_Mandelstam_u_t_min_1->Fill(std::min(fabs(tt_1),fabs(uu_1))); 
         h_Mandelstam_t_1->Fill(fabs(tt_1));
         h_Mandelstam_u_1->Fill(fabs(uu_1));
         h_Mandelstam_u_t_1->Fill(std::max(fabs(tt_1),fabs(uu_1)));

         if(CA_1>60.&&CA_1<120.){
            h_theta12_accp->Fill(theta1_1,theta2_1,weight);
            h_phi12_accp->Fill(phi1_1,phi2_1,weight);
            h_theta_phi_accp->Fill(theta1_1,phi1_1,weight);
            h_theta_phi1_accp->Fill(theta1_1,phi1_1,weight);
            h_theta_phi_accp->Fill(theta2_1,phi2_1,weight);
            h_theta_phi2_accp->Fill(theta2_1,phi2_1,weight);
         }
      }
      //---------------------------Calculate momentum using TOF-------------------------

      // cout<<jentry<<"   ----------------------------------------------"<<endl;
      // if(Flag_left==1){
      //    Eloss_left = p_left_initial/beta_left_initial-p_left/beta_left;
      //    // cout<<"Eloss_left "<<Eloss_left<<endl;
      //    // cout<<"Left Arm:"<<endl;
      //    // cout<<"Initial:"<<"\t"<<px_left_initial<<"\t"<<py_left_initial<<"\t"<<pz_left_initial<<endl;
      //    // cout<<"Final:"<<"\t"<<"\t"<<px_left<<"\t"<<py_left<<"\t"<<pz_left<<endl;
      //    // cout<<"Energy loss: "<<p_left_initial<<" - "<<p_left<<" = "<<Eloss_left<<endl;
      //    h_Eloss_left->Fill(p_left_initial,Eloss_left*1000.,weight);
      //    h_Eloss_total->Fill(p_left_initial,Eloss_left*1000.,weight);
      //    h_Eloss_total_Px->Fill(fabs(px_left_initial),Eloss_left*1000.,weight);
      //    h_Eloss_total_Py->Fill(py_left_initial,Eloss_left*1000.,weight);
      //    h_Eloss_total_Pz->Fill(pz_left_initial,Eloss_left*1000.,weight);
      // }
      // if(Flag_right==1){
      //    Eloss_right = p_right_initial/beta_right_initial-p_right/beta_right;
      //    // cout<<"Eloss_right "<<Eloss_right<<endl;
      //    // if(Flag_left==1) cout<<endl;
      //    // cout<<"Right Arm:"<<endl;
      //    // cout<<"Initial:"<<"\t"<<px_right_initial<<"\t"<<py_right_initial<<"\t"<<pz_right_initial<<endl;
      //    // cout<<"Final:"<<"\t"<<"\t"<<px_right<<"\t"<<py_right<<"\t"<<pz_right<<endl;
      //    // cout<<"Energy loss: "<<p_right_initial<<" - "<<p_right<<" = "<<Eloss_right<<endl;
      //    h_Eloss_right->Fill(p_right_initial,Eloss_right*1000.,weight);
      //    h_Eloss_total->Fill(p_right_initial,Eloss_right*1000.,weight);
      //    h_Eloss_total_Px->Fill(fabs(px_right_initial),Eloss_right*1000.,weight);
      //    h_Eloss_total_Py->Fill(py_right_initial,Eloss_right*1000.,weight);
      //    h_Eloss_total_Pz->Fill(pz_right_initial,Eloss_right*1000.,weight);
      // }
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
      memset(StsPoint_fX,0,sizeof(StsPoint_fX));
      memset(StsPoint_fY,0,sizeof(StsPoint_fY));
      memset(StsPoint_fZ,0,sizeof(StsPoint_fZ));
      memset(StsPoint_fTrackID,0,sizeof(StsPoint_fTrackID));
      
      memset(CSCPoint_fX,0,sizeof(CSCPoint_fX));
      memset(CSCPoint_fY,0,sizeof(CSCPoint_fY));
      memset(CSCPoint_fZ,0,sizeof(CSCPoint_fZ));
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
      
   }
   file_output_QE->cd();
   tree_QE->Write();
   // tree_Generator->Write();
   file_output_QE->Close();
   delete file_output_QE;

   TFile *My_output = new TFile("./my_output_NoAbs_CarlosWF_20Mio.root", "RECREATE");
   h_M_miss_square_betaL->Write();
   h_M_miss_square_betaR->Write();
   h_TOF400_XY->Write();
   h_vertex_z->Write();
   h_vertex_x->Write();
   h_vertex_y->Write();
   h_vertex_xy->Write();
   h_p1x->Write();
   h_p1y->Write();
   h_p1z->Write();
   h_E1->Write();
   h_p2x->Write();
   h_p2y->Write();
   h_p2z->Write();
   h_E2->Write();
   h_openingtheta_Pmiss->Write();

   h_p1x_diff->Write();
   h_p1y_diff->Write();
   h_p1z_diff->Write();
   h_p2x_diff->Write();
   h_p2y_diff->Write();
   h_p2z_diff->Write();

   h_beta_right->Write();
   h_beta_left->Write();
   h_beta_left_vs_right->Write();
   h_p1xp2x->Write();
   h_p1yp2y->Write();
   h_p1zp2z->Write();
   h_P_miss->Write();
   h_E_miss->Write();
   h_E_miss_with_tail->Write();
   h_M_miss_square->Write();
   h_M_miss_square_mintuCut->Write();
   h_M_miss_square_beforeQE->Write();
   h_opening_theta->Write();
   h_openingTheta_mintu->Write();
   h_opening_phi->Write();
   h_phi1->Write();
   h_phi2->Write();
   h_phi12->Write();
   h_theta1->Write();
   h_theta2->Write();
   h_theta12->Write();
   h_theta1_phi1->Write();
   h_theta2_phi2->Write();
   h_scattering_angle->Write();
   h_fly_path_right->Write();
   h_fly_path_left->Write();
   h_fly_time_left->Write();
   h_fly_time_right->Write();
   h_Mandelstam_t->Write();
   h_Mandelstam_u->Write();
   h_Mandelstam_t_diff->Write();
   h_Mandelstam_u_diff->Write();
   h_Mandelstam_u_t->Write();
   h_Mandelstam_u_t_min->Write();
   h_Angle_Pmiss_PFrag_cos->Write();
   h_Angle_Pmiss_PFrag_cos_2D->Write();
   h_Pfrag_proton->Write();
   h_Pfrag_proton_x->Write();
   h_Pfrag_proton_y->Write();
   h_Pfrag_proton_z->Write();
   h_pb->Write();
   h_pbx->Write();
   h_pby->Write();
   h_pbz->Write();
   My_output->Close();
   delete My_output;

   TFile *My_output_generator = new TFile("./my_output_generator_NoAbs_CarlosWF_20Mio.root", "RECREATE");
   h_vertex_z_1->Write();
   h_vertex_x_1->Write();
   h_vertex_y_1->Write();
   h_vertex_xy_1->Write();
   h_p1x_1->Write();
   h_p1y_1->Write();
   h_p1z_1->Write();
   h_E1_1->Write();
   h_p2x_1->Write();
   h_p2y_1->Write();
   h_p2z_1->Write();
   h_E2_1->Write();
   h_p1xp2x_1->Write();
   h_p1yp2y_1->Write();
   h_p1zp2z_1->Write();
   h_P_miss_1->Write();
   h_E_miss_1->Write();
   h_E_miss_with_tail_1->Write();
   h_M_miss_square_1->Write();
   h_M_miss_square_beforeQE_1->Write();
   h_opening_theta_1->Write();
   h_opening_phi_1->Write();
   h_phi1_1->Write();
   h_phi2_1->Write();
   h_theta1_1->Write();
   h_theta2_1->Write();
   h_scattering_angle_1->Write();
   h_Mandelstam_t_1->Write();
   h_Mandelstam_u_1->Write();
   h_Mandelstam_u_t_1->Write();
   h_Mandelstam_u_t_min_1->Write();
   My_output_generator->Close();
   delete My_output_generator;

   // TF1 *doubleGaussian = new TF1("doubleGaussian", "[0]*exp(-0.5*((x-[1])/[2])**2) + [3]*exp(-0.5*((x-[4])/[5])**2)", -0.4, 0.4);
   
   // if(Cut_Flag==1) doubleGaussian->SetParameters(100, 0.01, 0.1, 100, 0.1, 0.05);
   // else doubleGaussian->SetParameters(100, 0.01, 0.1, 100, 0.01, 0.05);

   // gStyle->SetOptFit(11);
   // gStyle->SetOptStat(11);
   TCanvas* c_Pmiss_x_simulation = new TCanvas("c_Pmiss_x_simulation","c_Pmiss_x_simulation",1200,800);
   // h_p1xp2x->Fit("gaus","","SAME",-0.4,0.4);
   // h_p1xp2x->Fit("doubleGaussian","","SAME",-0.4,0.4);
   h_p1xp2x->Draw("HIST");
   c_Pmiss_x_simulation->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_x_simulation.pdf",Boost_resolution,TOF_resolution));

   // if(Cut_Flag==1) doubleGaussian->SetParameters(100, 0.01, 0.1, 100, 0.1, 0.05);
   // else doubleGaussian->SetParameters(100, 0.01, 0.1, 100, 0.01, 0.05);

   TCanvas* c_Pmiss_y_simulation = new TCanvas("c_Pmiss_y_simulation","c_Pmiss_y_simulation",1200,800);
   // h_p1yp2y->Fit("gaus","","SAME",-0.4,0.4);
   // h_p1yp2y->Fit("doubleGaussian","","SAME",-0.4,0.4);
   h_p1yp2y->Draw("HIST");
   c_Pmiss_y_simulation->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_y_simulation.pdf",Boost_resolution,TOF_resolution));

   TCanvas* c_Pmiss_z_simulation = new TCanvas("c_Pmiss_z_simulation","c_Pmiss_z_simulation",1200,800);
   // h_p1zp2z->Fit("gaus","","SAME",-0.4,0.4);
   // h_p1yp2y->Fit("doubleGaussian","","SAME",-0.4,0.4);
   h_p1zp2z->Draw("HIST");
   c_Pmiss_z_simulation->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_z_simulation.pdf",Boost_resolution,TOF_resolution));


   TCanvas* c_Pmiss_x_generator = new TCanvas("c_Pmiss_x_generator","c_Pmiss_x_generator",1200,800);
   // h_p1xp2x_1->Fit("gaus","","SAME",-0.4,0.4);
   h_p1xp2x_1->Draw("HIST");
   c_Pmiss_x_generator->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_x_generator.pdf",Boost_resolution,TOF_resolution));

   TCanvas* c_Pmiss_y_generator = new TCanvas("c_Pmiss_y_generator","c_Pmiss_y_generator",1200,800);
   // h_p1yp2y_1->Fit("gaus","","SAME",-0.4,0.4);
   h_p1yp2y_1->Draw("HIST");
   c_Pmiss_y_generator->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_y_generator.pdf",Boost_resolution,TOF_resolution));

   //---------------PLOT difference between reconstruction momentum and TOF Momentum----------------
   TCanvas *c_p1x_diff_1 = new TCanvas("c_p1x_diff_1","p1x_diff_1",1200,800);
   c_p1x_diff_1->SetLogy();
   h_p1x_diff_1->Draw("HIST");
   c_p1x_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/1_p1x_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1y_diff_1 = new TCanvas("c_p1y_diff_1","p1y_diff_1",1200,800);
   c_p1y_diff_1->SetLogy();
   h_p1y_diff_1->Draw("HIST");
   c_p1y_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/2_p1y_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1z_diff_1 = new TCanvas("c_p1z_diff_1","p1z_diff_1",1200,800);
   c_p1z_diff_1->SetLogy();
   h_p1z_diff_1->Draw("HIST");
   c_p1z_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/3_p1z_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1_diff_1 = new TCanvas("c_p1_diff_1","p1_diff_1",1200,800);
   c_p1_diff_1->SetLogy();
   h_p1_diff_1->Draw("HIST");
   c_p1_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/4_p1_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2x_diff_1 = new TCanvas("c_p2x_diff_1","p2x_diff_1",1200,800);
   c_p2x_diff_1->SetLogy();
   h_p2x_diff_1->Draw("HIST");
   c_p2x_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/5_p2x_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2y_diff_1 = new TCanvas("c_p2y_diff_1","p2y_diff_1",1200,800);
   c_p2y_diff_1->SetLogy();
   h_p2y_diff_1->Draw("HIST");
   c_p2y_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/6_p2y_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2z_diff_1 = new TCanvas("c_p2z_diff_1","p2z_diff_1",1200,800);
   c_p2z_diff_1->SetLogy();
   h_p2z_diff_1->Draw("HIST");
   c_p2z_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/7_p2z_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2_diff_1 = new TCanvas("c_p2_diff_1","p2_diff_1",1200,800);
   c_p2_diff_1->SetLogy();
   h_p2_diff_1->Draw("HIST");
   c_p2_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/8_p2_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p_miss_x_diff_1 = new TCanvas("c_p_miss_x_diff_1","p_miss_x_diff_1",1200,800);
   h_p_miss_x_diff_1->Draw("HIST");
   c_p_miss_x_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/9_p_miss_x_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p_miss_y_diff_1 = new TCanvas("c_p_miss_y_diff_1","p_miss_y_diff_1",1200,800);
   h_p_miss_y_diff_1->Draw("HIST");
   c_p_miss_y_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/10_p_miss_y_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p_miss_z_diff_1 = new TCanvas("c_p_miss_z_diff_1","p_miss_z_diff_1",1200,800);
   h_p_miss_z_diff_1->Draw("HIST");
   c_p_miss_z_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/11_p_miss_z_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p_miss_diff_1 = new TCanvas("c_p_miss_diff_1","p_miss_diff_1",1200,800);
   h_p_miss_diff_1->Draw("HIST");
   c_p_miss_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/12_P_miss_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_E_miss_diff_1 = new TCanvas("c_E_miss_diff_1","E_miss_diff_1",1200,800);
   h_E_miss_diff_1->Draw("HIST");
   c_E_miss_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/13_E_miss_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_M_miss_diff_1 = new TCanvas("c_M_miss_diff_1","M_miss_diff_1",1200,800);
   h_M_miss_diff_1->Draw("HIST");
   c_M_miss_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/14_M_miss_diff_1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_M_miss_square_diff_1 = new TCanvas("c_M_miss_square_diff_1","M_miss_square_diff_1",1200,800);
   h_M_miss_square_diff_1->Draw("HIST");
   c_M_miss_square_diff_1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/15_M_miss_square_diff_1.pdf",Boost_resolution,TOF_resolution));

   //---------------PLOT difference between reconstruction momentum and Generator Momentum----------------
   TCanvas *c_p1x_diff = new TCanvas("c_p1x_diff","p1x_diff",1200,800);
   c_p1x_diff->SetLogy();
   h_p1x_diff->Draw("HIST");
   c_p1x_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/1_p1x_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1y_diff = new TCanvas("c_p1y_diff","p1y_diff",1200,800);
   c_p1y_diff->SetLogy();
   h_p1y_diff->Draw("HIST");
   c_p1y_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/2_p1y_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1z_diff = new TCanvas("c_p1z_diff","p1z_diff",1200,800);
   c_p1z_diff->SetLogy();
   h_p1z_diff->Draw("HIST");
   c_p1z_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/3_p1z_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1_diff = new TCanvas("c_p1_diff","p1_diff",1200,800);
   c_p1_diff->SetLogy();
   h_p1_diff->Draw("HIST");
   c_p1_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/4_p1_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2x_diff = new TCanvas("c_p2x_diff","p2x_diff",1200,800);
   c_p2x_diff->SetLogy();
   h_p2x_diff->Draw("HIST");
   c_p2x_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/5_p2x_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2y_diff = new TCanvas("c_p2y_diff","p2y_diff",1200,800);
   c_p2y_diff->SetLogy();
   h_p2y_diff->Draw("HIST");
   c_p2y_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/6_p2y_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2z_diff = new TCanvas("c_p2z_diff","p2z_diff",1200,800);
   c_p2z_diff->SetLogy();
   h_p2z_diff->Draw("HIST");
   c_p2z_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/7_p2z_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2_diff = new TCanvas("c_p2_diff","p2_diff",1200,800);
   c_p2_diff->SetLogy();
   h_p2_diff->Draw("HIST");
   c_p2_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/8_p2_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p_miss_x_diff = new TCanvas("c_p_miss_x_diff","p_miss_x_diff",1200,800);
   h_p_miss_x_diff->Draw("HIST");
   c_p_miss_x_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/9_p_miss_x_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p_miss_y_diff = new TCanvas("c_p_miss_y_diff","p_miss_y_diff",1200,800);
   h_p_miss_y_diff->Draw("HIST");
   c_p_miss_y_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/10_p_miss_y_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p_miss_z_diff = new TCanvas("c_p_miss_z_diff","p_miss_z_diff",1200,800);
   h_p_miss_z_diff->Draw("HIST");
   c_p_miss_z_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/11_p_miss_z_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p_miss_diff = new TCanvas("c_p_miss_diff","p_miss_diff",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_p_miss_diff->Draw("HIST");
   h_p_miss_diff->Fit("gaus","","SAME",-0.4,0.4);
   c_p_miss_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/12_P_miss_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_T_diff = new TCanvas("c_P_miss_T_diff","P_miss_T_diff",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_T_diff->Draw("HIST");
   h_P_miss_T_diff->Fit("gaus","","SAME",-0.4,0.4);
   c_P_miss_T_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/12_P_miss_T_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_E_miss_diff = new TCanvas("c_E_miss_diff","E_miss_diff",1200,800);
   h_E_miss_diff->Draw("HIST");
   c_E_miss_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/13_E_miss_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_M_miss_diff = new TCanvas("c_M_miss_diff","M_miss_diff",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_M_miss_diff->Fit("gaus","SAME");
   h_M_miss_diff->Draw("HIST");
   c_M_miss_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/14_M_miss_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_M_miss_square_diff = new TCanvas("c_M_miss_square_diff","M_miss_square_diff",1200,800);
   h_M_miss_square_diff->Draw("HIST");
   c_M_miss_square_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/15_M_miss_square_diff.pdf",Boost_resolution,TOF_resolution));


   TFile* filein = new TFile("PhysicsHist.root");
   // ---------------PLOT reconstruction momentum of protons----------------
   TCanvas *c_p1x = new TCanvas("c_p1x","p1x",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_p1x->SetLineColor(1);
   h_p1x->Draw("HIST");
   h_p1x->GetYaxis()->SetRangeUser(0,120*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_p1x_1->SetLineColor(4);
      h_p1x_1->SetLineStyle(7);
      h_p1x_1->Draw("SameHIST");
      h_p1x_1->SetNormFactor(NormFactor);
   }
   TH1F *h_p1x_3 = (TH1F*)gROOT->FindObject("hPLX_Lab");
   if(Experiment_Flag==1){
      h_p1x_3->SetLineColor(6);
      h_p1x_3->Draw("SameHIST");
      h_p1x_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p1x = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_p1x->SetFillColor(0);
	l_p1x->SetBorderSize(1);
	l_p1x->SetTextSize(0.03);
	l_p1x->SetTextFont(32);
   l_p1x->AddEntry(h_p1x,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p1x->AddEntry(h_p1x_1,"Generator with acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p1x->AddEntry(h_p1x_3,"Experiment Dec 13, 2024","l");
   }
   l_p1x->Draw("HIST");
   c_p1x->SaveAs(Form("./reco_plot_%3.1f_%2.0f/1_p1x.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1y = new TCanvas("c_p1y","p1y",1200,800);
   h_p1y->SetLineColor(1);
   h_p1y->Draw("HIST");
   h_p1y->GetYaxis()->SetRangeUser(0,100*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_p1y_1->SetLineColor(4);
      h_p1y_1->SetLineStyle(7);
      h_p1y_1->Draw("SameHIST");
      h_p1y_1->SetNormFactor(NormFactor);
   }
   TH1F *h_p1y_3 = (TH1F*)gROOT->FindObject("hPLY_Lab");
   if(Experiment_Flag==1){
      h_p1y_3->SetLineColor(6);
      h_p1y_3->Draw("SameHIST");
      h_p1y_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p1y = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_p1y->SetFillColor(0);
	l_p1y->SetBorderSize(1);
	l_p1y->SetTextSize(0.03);
	l_p1y->SetTextFont(32);
   l_p1y->AddEntry(h_p1y,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p1y->AddEntry(h_p1y_1,"Generator with acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p1y->AddEntry(h_p1y_3,"Experiment Dec 13, 2024","l");
   }
   l_p1y->Draw("HIST");
   c_p1y->SaveAs(Form("./reco_plot_%3.1f_%2.0f/2_p1y.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1z = new TCanvas("c_p1z","p1z",1200,800);
   h_p1z->SetLineColor(1);
   h_p1z->Draw("HIST");
   h_p1z->GetYaxis()->SetRangeUser(0,80*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_p1z_1->SetLineColor(4);
      h_p1z_1->SetLineStyle(7);
      h_p1z_1->Draw("SameHIST");
      h_p1z_1->SetNormFactor(NormFactor);
   }
   TH1F *h_p1z_3 = (TH1F*)gROOT->FindObject("hPLZ_Lab");
   if(Experiment_Flag==1){
      h_p1z_3->SetLineColor(6);
      h_p1z_3->Draw("SameHIST");
      h_p1z_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p1z = new TLegend(0.55,0.2,0.9,0.4,Form(""));
	l_p1z->SetFillColor(0);
	l_p1z->SetBorderSize(1);
	l_p1z->SetTextSize(0.03);
	l_p1z->SetTextFont(32);
   l_p1z->AddEntry(h_p1z,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p1z->AddEntry(h_p1z_1,"Generator with acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p1z->AddEntry(h_p1z_3,"Experiment Dec 13, 2024","l");
   }
   l_p1z->Draw("HIST");
   c_p1z->SaveAs(Form("./reco_plot_%3.1f_%2.0f/3_p1z.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_E1 = new TCanvas("c_P1","P1",1200,800);
   h_E1->SetLineColor(1);
   h_E1->Draw("HIST");
   h_E1->GetYaxis()->SetRangeUser(0,90*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_E1_1->SetLineColor(4);
      h_E1_1->SetLineStyle(7);
      h_E1_1->Draw("SameHIST");
      h_E1_1->SetNormFactor(NormFactor);
   }
   TH1F *h_E1_3 = (TH1F*)gROOT->FindObject("hPL_Lab");
   if(Experiment_Flag==1){
      h_E1_3->SetLineColor(6);
      h_E1_3->Draw("SameHIST");
      h_E1_3->SetNormFactor(NormFactor);
   }
	TLegend *l_E1 = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_E1->SetFillColor(0);
	l_E1->SetBorderSize(1);
	l_E1->SetTextSize(0.03);
	l_E1->SetTextFont(32);
   l_E1->AddEntry(h_E1,"Simulation","l");
   if(Generator_With_Cut==1){
      l_E1->AddEntry(h_E1_1,"Generator with acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_E1->AddEntry(h_E1_3,"Experiment Dec 13, 2024","l");
   }
   l_E1->Draw("HIST");
   c_E1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/4_p1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2x = new TCanvas("c_p2x","p2x",1200,800);
   h_p2x->SetLineColor(1);
   h_p2x->Draw("HIST");
   h_p2x->GetYaxis()->SetRangeUser(0,140*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_p2x_1->SetLineColor(4);
      h_p2x_1->SetLineStyle(7);
      h_p2x_1->Draw("SameHIST");
      h_p2x_1->SetNormFactor(NormFactor);
   }
   TH1F *h_p2x_3 = (TH1F*)gROOT->FindObject("hPRX_Lab");
   if(Experiment_Flag==1){
      h_p2x_3->SetLineColor(6);
      h_p2x_3->Draw("SameHIST");
      h_p2x_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p2x = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_p2x->SetFillColor(0);
	l_p2x->SetBorderSize(1);
	l_p2x->SetTextSize(0.03);
	l_p2x->SetTextFont(32);
   l_p2x->AddEntry(h_p2x,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p2x->AddEntry(h_p2x_1,"Generator with acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p2x->AddEntry(h_p2x_3,"Experiment Dec 13, 2024","l");
   }
   l_p2x->Draw("HIST");
   c_p2x->SaveAs(Form("./reco_plot_%3.1f_%2.0f/5_p2x.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2y = new TCanvas("c_p2y","p2y",1200,800);
   h_p2y->SetLineColor(1);
   h_p2y->Draw("HIST");
   h_p2y->GetYaxis()->SetRangeUser(0,100*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_p2y_1->SetLineColor(4);
      h_p2y_1->SetLineStyle(7);
      h_p2y_1->Draw("SameHIST");
      h_p2y_1->SetNormFactor(NormFactor);
   }
   TH1F *h_p2y_3 = (TH1F*)gROOT->FindObject("hPRY_Lab");
   if(Experiment_Flag==1){
      h_p2y_3->SetLineColor(6);
      h_p2y_3->Draw("SameHIST");
      h_p2y_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p2y = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_p2y->SetFillColor(0);
	l_p2y->SetBorderSize(1);
	l_p2y->SetTextSize(0.03);
	l_p2y->SetTextFont(32);
   l_p2y->AddEntry(h_p2y,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p2y->AddEntry(h_p2y_1,"Generator with acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p2y->AddEntry(h_p2y_3,"Experiment Dec 13, 2024","l");
   }
   l_p2y->Draw("HIST");
   c_p2y->SaveAs(Form("./reco_plot_%3.1f_%2.0f/6_p2y.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p2z = new TCanvas("c_p2z","p2z",1200,800);
   h_p2z->SetLineColor(1);
   h_p2z->Draw("HIST");
   h_p2z->GetYaxis()->SetRangeUser(0,80*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_p2z_1->SetLineColor(4);
      h_p2z_1->SetLineStyle(7);
      h_p2z_1->Draw("SameHIST");
      h_p2z_1->SetNormFactor(NormFactor);
   }
   TH1F *h_p2z_3 = (TH1F*)gROOT->FindObject("hPRZ_Lab");
   if(Experiment_Flag==1){
      h_p2z_3->SetLineColor(6);
      h_p2z_3->Draw("SameHIST");
      h_p2z_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p2z = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_p2z->SetFillColor(0);
	l_p2z->SetBorderSize(1);
	l_p2z->SetTextSize(0.03);
	l_p2z->SetTextFont(32);
   l_p2z->AddEntry(h_p2z,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p2z->AddEntry(h_p2z_1,"Generator with acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p2z->AddEntry(h_p2z_3,"Experiment Dec 13, 2024","l");
   }
   l_p2z->Draw("HIST");
   c_p2z->SaveAs(Form("./reco_plot_%3.1f_%2.0f/7_p2z.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_E2 = new TCanvas("c_P2","P2",1200,800);
   h_E2->SetLineColor(1);
   h_E2->Draw("HIST");
   h_E2->GetYaxis()->SetRangeUser(0,80*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_E2_1->SetLineColor(4);
      h_E2_1->SetLineStyle(7);
      h_E2_1->Draw("SameHIST");
      h_E2_1->SetNormFactor(NormFactor);
   }
   TH1F *h_E2_3 = (TH1F*)gROOT->FindObject("hPR_Lab");
   if(Experiment_Flag==1){
      h_E2_3->SetLineColor(6);
      h_E2_3->Draw("SameHIST");
      h_E2_3->SetNormFactor(NormFactor);
   }
	TLegend *l_E2 = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_E2->SetFillColor(0);
	l_E2->SetBorderSize(1);
	l_E2->SetTextSize(0.03);
	l_E2->SetTextFont(32);
   l_E2->AddEntry(h_E2,"Simulation","l");
   if(Generator_With_Cut==1){
      l_E2->AddEntry(h_E2_1,"Generator with acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_E2->AddEntry(h_E2_3,"Experiment Dec 13, 2024","l");
   }
   l_E2->Draw("HIST");
   c_E2->SaveAs(Form("./reco_plot_%3.1f_%2.0f/8_p2.pdf",Boost_resolution,TOF_resolution));

   Double_t NormFactor_exp = 1718.;
   // TCanvas *c_p1xp2x = new TCanvas("c_p1xp2x","p1xp2x",1200,800);
   // h_p1xp2x->SetLineColor(1);
   // h_p1xp2x->SetStats(0);
   // h_p1xp2x->SetNormFactor(NormFactor_exp);
   // h_p1xp2x->Draw("HIST");
   // h_p1xp2x->GetYaxis()->SetRangeUser(0,100*5*NormFactor_exp/1718.);
   // TH1F *h_p1xp2x_3 = (TH1F*)gROOT->FindObject("hPmissX_Proton");
   // h_p1xp2x_3->SetLineColor(6);
   // h_p1xp2x_3->Draw("Same E");
	// TLegend *l_p1xp2x = new TLegend(0.7,0.7,0.89,0.89,Form(""));
	// l_p1xp2x->SetFillColor(0);
	// l_p1xp2x->SetBorderSize(1);
	// l_p1xp2x->SetTextSize(0.03);
	// l_p1xp2x->SetTextFont(32);
   // l_p1xp2x->AddEntry(h_p1xp2x,"Simulation","l");
   // l_p1xp2x->AddEntry(h_p1xp2x_3,"Experiment Dec 13, 2024","l");
   // l_p1xp2x->Draw("HIST");
   // c_p1xp2x->SaveAs(Form("./reco_plot_%3.1f_%2.0f/9_p_miss_x.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1xp2x = new TCanvas("c_p1xp2x","p1xp2x",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_p1xp2x->SetLineColor(1);
   h_p1xp2x->Draw("HIST");
   h_p1xp2x->Fit("gaus","","SAME",-0.4,0.4);
   h_p1xp2x->GetYaxis()->SetRangeUser(0,140*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_p1xp2x_1->SetLineColor(4);
      h_p1xp2x_1->SetLineStyle(7);
      h_p1xp2x_1->Draw("SameHIST"); 
      h_p1xp2x_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_p1xp2x_2->SetLineColor(3);
      h_p1xp2x_2->SetLineStyle(9);
      h_p1xp2x_2->Draw("SameHIST");
      h_p1xp2x_2->SetNormFactor(NormFactor);
   }
   TH1F *h_P_miss_x_exp = (TH1F*)gROOT->FindObject("hPmissX_Proton");
   TH1F *h_p1xp2x_3 = (TH1F*)gROOT->FindObject("hPmissX_Proton");
   if(Experiment_Flag==1){
      h_p1xp2x_3->SetLineColor(6);
      h_p1xp2x_3->Draw("SameHIST");
      h_p1xp2x_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p1xp2x = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_p1xp2x->SetFillColor(0);
	l_p1xp2x->SetBorderSize(1);
	l_p1xp2x->SetTextSize(0.03);
	l_p1xp2x->SetTextFont(32);
   l_p1xp2x->AddEntry(h_p1xp2x,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p1xp2x->AddEntry(h_p1xp2x_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_p1xp2x->AddEntry(h_p1xp2x_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p1xp2x->AddEntry(h_p1xp2x_3,"Experiment Dec 13, 2024","l");
   }
   l_p1xp2x->Draw("HIST");
   c_p1xp2x->SaveAs(Form("./reco_plot_%3.1f_%2.0f/9_p_miss_x.pdf",Boost_resolution,TOF_resolution));

   // TCanvas *c_p1yp2y = new TCanvas("c_p1yp2y","p1yp2y",1200,800);
   // h_p1yp2y->SetLineColor(1);
   // h_p1yp2y->SetStats(0);
   // h_p1yp2y->SetNormFactor(NormFactor_exp);
   // h_p1yp2y->Draw("HIST");
   // h_p1yp2y->GetYaxis()->SetRangeUser(0,120*5*NormFactor_exp/1718.);
   // TH1F *h_p1yp2y_3 = (TH1F*)gROOT->FindObject("hPmissY_Proton");
   // h_p1yp2y_3->SetLineColor(6);
   // h_p1yp2y_3->Draw("Same E");
	// TLegend *l_p1yp2y = new TLegend(0.7,0.7,0.89,0.89,Form(""));
	// l_p1yp2y->SetFillColor(0);
	// l_p1yp2y->SetBorderSize(1);
	// l_p1yp2y->SetTextSize(0.03);
	// l_p1yp2y->SetTextFont(32);
   // l_p1yp2y->AddEntry(h_p1yp2y,"Simulation","l");
   // l_p1yp2y->AddEntry(h_p1yp2y_3,"Experiment Dec 13, 2024","l");
   // l_p1yp2y->Draw("HIST");
   // c_p1yp2y->SaveAs(Form("./reco_plot_%3.1f_%2.0f/10_p_miss_y.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1yp2y = new TCanvas("c_p1yp2y","p1yp2y",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_p1yp2y->SetLineColor(1);
   h_p1yp2y->Draw("HIST");
   h_p1yp2y->Fit("gaus","","SAME",-0.4,0.4);
   h_p1yp2y->GetYaxis()->SetRangeUser(0,140*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_p1yp2y_1->SetLineColor(4);
      h_p1yp2y_1->SetLineStyle(7);
      h_p1yp2y_1->Draw("SameHIST");
      h_p1yp2y_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_p1yp2y_2->SetLineColor(3);
      h_p1yp2y_2->SetLineStyle(9);
      h_p1yp2y_2->Draw("SameHIST");
      h_p1yp2y_2->SetNormFactor(NormFactor);
   }
   TH1F *h_P_miss_y_exp = (TH1F*)gROOT->FindObject("hPmissY_Proton");
   TH1F *h_p1yp2y_3 = (TH1F*)gROOT->FindObject("hPmissY_Proton");
   if(Experiment_Flag==1){
      h_p1yp2y_3->SetLineColor(6);
      h_p1yp2y_3->Draw("SameHIST");
      h_p1yp2y_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p1yp2y = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_p1yp2y->SetFillColor(0);
	l_p1yp2y->SetBorderSize(1);
	l_p1yp2y->SetTextSize(0.03);
	l_p1yp2y->SetTextFont(32);
   l_p1yp2y->AddEntry(h_p1yp2y,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p1yp2y->AddEntry(h_p1yp2y_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_p1yp2y->AddEntry(h_p1yp2y_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p1yp2y->AddEntry(h_p1yp2y_3,"Experiment Dec 13, 2024","l");
   }
   l_p1yp2y->Draw("HIST");
   c_p1yp2y->SaveAs(Form("./reco_plot_%3.1f_%2.0f/10_p_miss_y.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_p1zp2z = new TCanvas("c_p1zp2z","p1zp2z",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_p1zp2z->SetLineColor(1);
   h_p1zp2z->Draw("HIST");
   h_p1zp2z->SetNormFactor(NormFactor);
   h_p1zp2z->Fit("gaus","","SAME",-0.4,0.4);
   h_p1zp2z->GetYaxis()->SetRangeUser(0,140*NormFactor/1243.);

   double weightedEntries = 0.0;
   for (int i = 1; i <= h_p1zp2z->GetNbinsX(); ++i) {
      weightedEntries += h_p1zp2z->GetBinContent(i);
   }
   h_p1zp2z->Scale(NormFactor/weightedEntries);

   if(Generator_With_Cut==1){
      h_p1zp2z_1->SetLineColor(4);
      // h_p1zp2z_1->SetLineStyle(7);
      h_p1zp2z_1->Draw("SameHIST");
      h_p1zp2z_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_p1zp2z_2->SetLineColor(3);
      h_p1zp2z_2->SetLineStyle(9);
      h_p1zp2z_2->Draw("SameHIST");
      h_p1zp2z_2->SetNormFactor(NormFactor);
   }
   TH1F *h_P_miss_z_exp = (TH1F*)gROOT->FindObject("hPmissZ_Proton");
   TH1F *h_p1zp2z_3 = (TH1F*)gROOT->FindObject("hPmissZ_Proton");
   if(Experiment_Flag==1){
      h_p1zp2z_3->SetLineColor(6);
      h_p1zp2z_3->Draw("SameE");
      h_p1zp2z_3->SetNormFactor(NormFactor);
   }
	TLegend *l_p1zp2z = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_p1zp2z->SetFillColor(0);
	l_p1zp2z->SetBorderSize(1);
	l_p1zp2z->SetTextSize(0.03);
	l_p1zp2z->SetTextFont(32);
   l_p1zp2z->AddEntry(h_p1zp2z,"Simulation","l");
   if(Generator_With_Cut==1){
      l_p1zp2z->AddEntry(h_p1zp2z_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_p1zp2z->AddEntry(h_p1zp2z_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_p1zp2z->AddEntry(h_p1zp2z_3,"Experiment Dec 13, 2024","lep");
   }
   l_p1zp2z->Draw("HIST");
   c_p1zp2z->SaveAs(Form("./reco_plot_%3.1f_%2.0f/11_p_miss_z.pdf",Boost_resolution,TOF_resolution));

   // TCanvas *c_P_miss = new TCanvas("c_P_miss","P_miss",1200,800);
   // h_P_miss->SetStats(0);
   // h_P_miss->SetLineColor(1);
   // h_P_miss->SetNormFactor(NormFactor_exp);
   // h_P_miss->Draw("HIST");
   // h_P_miss->GetYaxis()->SetRangeUser(0,85*5*NormFactor_exp/1718.);
   // TH1F *h_P_miss_3 = (TH1F*)gROOT->FindObject("hPmiss_Proton");
   // h_P_miss_3->SetLineColor(6);
   // h_P_miss_3->Draw("Same E");
	// TLegend *l_P_miss = new TLegend(0.7,0.7,0.89,0.89,Form(""));
	// l_P_miss->SetFillColor(0);
	// l_P_miss->SetBorderSize(1);
	// l_P_miss->SetTextSize(0.03);
	// l_P_miss->SetTextFont(32);
   // l_P_miss->AddEntry(h_P_miss,"Simulation","l");
   // l_P_miss->AddEntry(h_P_miss_3,"Experiment Dec 13, 2024","l");
   // l_P_miss->Draw("HIST");
   // c_P_miss->SaveAs(Form("./reco_plot_%3.1f_%2.0f/12_P_miss.pdf",Boost_resolution,TOF_resolution));
   
   TCanvas *c_P_miss = new TCanvas("c_P_miss","P_miss",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss->SetLineColor(1);
   h_P_miss->Draw("HIST");
   h_P_miss->Fit("gaus","","SAME",0,0.3);
   h_P_miss->GetYaxis()->SetRangeUser(0,95*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_P_miss_1->SetLineColor(4);
      h_P_miss_1->SetLineStyle(7);
      h_P_miss_1->Draw("SameHIST");
      h_P_miss_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_P_miss_2->SetLineColor(3);
      h_P_miss_2->SetLineStyle(9);
      h_P_miss_2->Draw("SameHIST");
      h_P_miss_2->SetNormFactor(NormFactor);
   }
   TH1F *h_P_miss_exp = (TH1F*)gROOT->FindObject("hPmiss_Proton");
   TH1F *h_P_miss_3 = (TH1F*)gROOT->FindObject("hPmiss_Proton");
   if(Experiment_Flag==1){
      h_P_miss_3->SetLineColor(6);
      h_P_miss_3->Draw("SameHIST");
      h_P_miss_3->SetNormFactor(NormFactor);
   }
	TLegend *l_P_miss = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_P_miss->SetFillColor(0);
	l_P_miss->SetBorderSize(1);
	l_P_miss->SetTextSize(0.03);
	l_P_miss->SetTextFont(32);
   l_P_miss->AddEntry(h_P_miss,"Simulation","l");
   if(Generator_With_Cut==1){
      l_P_miss->AddEntry(h_P_miss_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_P_miss->AddEntry(h_P_miss_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_P_miss->AddEntry(h_P_miss_3,"Experiment Dec 13, 2024","l");
   }
   l_P_miss->Draw("HIST");
   c_P_miss->SaveAs(Form("./reco_plot_%3.1f_%2.0f/12_P_miss.pdf",Boost_resolution,TOF_resolution));

   std::cout<<std::endl;
   std::cout<<std::endl;
   std::cout<<std::endl;
   TCanvas *c_E_miss = new TCanvas("c_E_miss","E_miss",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_E_miss->SetLineColor(1);
   h_E_miss->Draw("HIST");
   h_E_miss->Fit("gaus","","SAME",0.0,0.25);
   h_E_miss->GetYaxis()->SetRangeUser(0,300*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_E_miss_1->SetLineColor(4);
      h_E_miss_1->SetLineStyle(7);
      h_E_miss_1->Draw("SameHIST");
      h_E_miss_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_E_miss_2->SetLineColor(3);
      h_E_miss_2->SetLineStyle(9);
      h_E_miss_2->Draw("SameHIST");
      h_E_miss_2->SetNormFactor(NormFactor);
   }
   TH1F *h_E_miss_exp = (TH1F*)gROOT->FindObject("hEmiss_11B_QE");
   TH1F *h_E_miss_3 = (TH1F*)gROOT->FindObject("hEmiss_11B_QE"); 
   if(Experiment_Flag==1){
      h_E_miss_3->SetLineColor(6);
      h_E_miss_3->Draw("SameHIST");
      h_E_miss_3->SetNormFactor(NormFactor);
      h_E_miss_3->Fit("gaus","","SAME",0.0,0.25);
   }
	TLegend *l_E_miss = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_E_miss->SetFillColor(0);
	l_E_miss->SetBorderSize(1);
	l_E_miss->SetTextSize(0.03);
	l_E_miss->SetTextFont(32);
   l_E_miss->AddEntry(h_E_miss,"Simulation","l");
   if(Generator_With_Cut==1){
      l_E_miss->AddEntry(h_E_miss_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_E_miss->AddEntry(h_E_miss_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_E_miss->AddEntry(h_E_miss_3,"Experiment Dec 13, 2024","l");
   }
   l_E_miss->Draw("HIST");
   c_E_miss->SaveAs(Form("./reco_plot_%3.1f_%2.0f/13_E_miss.pdf",Boost_resolution,TOF_resolution));
   std::cout<<std::endl;
   std::cout<<std::endl;
   std::cout<<std::endl;
   // TF1 *fitFunc_M_miss = h_E_miss->GetFunction("gaus");
   // double mean_M_miss = fitFunc_M_miss->GetParameter(1);
   // double sigma_M_miss = fitFunc_M_miss->GetParameter(2);

   TCanvas *c_M_miss = new TCanvas("c_M_miss","M_miss",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_M_miss->SetLineColor(1);
   h_M_miss->Draw("HIST");
   h_M_miss->Fit("gaus","","SAME",0.8,1.0);
   h_M_miss->GetYaxis()->SetRangeUser(0,300*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_M_miss_1->SetLineColor(4);
      h_M_miss_1->SetLineStyle(7);
      // h_M_miss_1->Fit("gaus","","SAME",0.8,1.0);
      h_M_miss_1->Draw("SameHIST");
      h_M_miss_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_M_miss_2->SetLineColor(3);
      h_M_miss_2->SetLineStyle(9);
      h_M_miss_2->Draw("SameHIST");
      h_M_miss_2->SetNormFactor(NormFactor);
   }
	TLegend *l_M_miss = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_M_miss->SetFillColor(0);
	l_M_miss->SetBorderSize(1);
	l_M_miss->SetTextSize(0.03);
	l_M_miss->SetTextFont(32);
   l_M_miss->AddEntry(h_M_miss,"Simulation","l");
   if(Generator_With_Cut==1){
      l_M_miss->AddEntry(h_M_miss_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_M_miss->AddEntry(h_M_miss_2,"Generator without acceptance cut","l");
   }
   l_M_miss->Draw("HIST");
   c_M_miss->SaveAs(Form("./reco_plot_%3.1f_%2.0f/14_M_miss.pdf",Boost_resolution,TOF_resolution));

   // TF1 *fitFunc_M_miss = h_M_miss->GetFunction("gaus");
   // double mean_M_miss = fitFunc_M_miss->GetParameter(1);
   // double sigma_M_miss = fitFunc_M_miss->GetParameter(2);

   std::cout<<std::endl;
   std::cout<<std::endl;
   std::cout<<std::endl;
   TCanvas *c_M_miss_square = new TCanvas("c_M_miss_square","M_miss_square",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_M_miss_square->SetLineColor(1);
   h_M_miss_square->Draw("HIST");
   h_M_miss_square->Fit("gaus","","SAME",0.5,0.9);
   h_M_miss_square->GetYaxis()->SetRangeUser(0,190*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_M_miss_square_1->SetLineColor(4);
      h_M_miss_square_1->SetLineStyle(7);
      h_M_miss_square_1->Draw("SameHIST");
      h_M_miss_square_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_M_miss_square_2->SetLineColor(3);
      h_M_miss_square_2->SetLineStyle(9);
      h_M_miss_square_2->Draw("SameHIST");
      h_M_miss_square_2->SetNormFactor(NormFactor);
   }
   TH1F *h_M_miss_square_exp = (TH1F*)gROOT->FindObject("hMMiss2_11B_QE");
   TH1F *h_M_miss_square_3 = (TH1F*)gROOT->FindObject("hMMiss2_11B_QE");
   if(Experiment_Flag==1){
      h_M_miss_square_3->SetLineColor(6);
      h_M_miss_square_3->Draw("SameHIST");
      h_M_miss_square_3->SetNormFactor(NormFactor);
      // h_M_miss_square_3->Fit("gaus","","SAME",0.5,0.9);
   }
	TLegend *l_M_miss_square = new TLegend(0.55,0.4,0.9,0.6,Form(""));
	l_M_miss_square->SetFillColor(0);
	l_M_miss_square->SetBorderSize(1);
	l_M_miss_square->SetTextSize(0.03);
	l_M_miss_square->SetTextFont(32);
   l_M_miss_square->AddEntry(h_M_miss_square,"Simulation","l");
   if(Generator_With_Cut==1){
      l_M_miss_square->AddEntry(h_M_miss_square_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_M_miss_square->AddEntry(h_M_miss_square_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_M_miss_square->AddEntry(h_M_miss_square_3,"Experiment Dec 13, 2024","l");
   }
   l_M_miss_square->Draw("HIST");
   c_M_miss_square->SaveAs(Form("./reco_plot_%3.1f_%2.0f/15_M_miss_square.pdf",Boost_resolution,TOF_resolution));
   std::cout<<std::endl;
   std::cout<<std::endl;
   std::cout<<std::endl;
   TF1 *fitFunc_M_miss = h_M_miss_square->GetFunction("gaus");
   double mean_M_miss = fitFunc_M_miss->GetParameter(1);
   double sigma_M_miss = fitFunc_M_miss->GetParameter(2);

   // TCanvas *c_opening_theta = new TCanvas("c_opening_theta","opening_theta",1200,800);
   // h_opening_theta->SetStats(0);
   // h_opening_theta->SetLineColor(1);
   // h_opening_theta->SetNormFactor(NormFactor_exp);
   // h_opening_theta->Draw("HIST");
   // h_opening_theta->GetYaxis()->SetRangeUser(0,160*5*NormFactor_exp/1718.);
   // TH1F *h_opening_theta_3 = (TH1F*)gROOT->FindObject("hOpeningTheta_11B_QE");
   // h_opening_theta_3->SetLineColor(6);
   // h_opening_theta_3->Draw("Same E");
	// TLegend *l_opening_theta = new TLegend(0.7,0.7,0.89,0.89,Form(""));
	// l_opening_theta->SetFillColor(0);
	// l_opening_theta->SetBorderSize(1);
	// l_opening_theta->SetTextSize(0.03);
	// l_opening_theta->SetTextFont(32);
   // l_opening_theta->AddEntry(h_opening_theta,"Simulation","l");
   // l_opening_theta->AddEntry(h_opening_theta_3,"Experiment Dec 13, 2024","l");
   // l_opening_theta->Draw("HIST");
   // c_opening_theta->SaveAs(Form("./reco_plot_%3.1f_%2.0f/16_opening_theta.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_opening_theta = new TCanvas("c_opening_theta","opening_theta",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_opening_theta->SetLineColor(1);
   h_opening_theta->Draw("HIST");
   h_opening_theta->Fit("gaus","","SAME",60,72);
   h_opening_theta->GetYaxis()->SetRangeUser(0,160*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_opening_theta_1->SetLineColor(4);
      h_opening_theta_1->SetLineStyle(7);
      h_opening_theta_1->Draw("SameHIST");
      h_opening_theta_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_opening_theta_2->SetLineColor(3);
      h_opening_theta_2->SetLineStyle(9);
      h_opening_theta_2->Draw("SameHIST");
      h_opening_theta_2->SetNormFactor(NormFactor);
   }
   TH1F *h_opening_theta_3 = (TH1F*)gROOT->FindObject("hOpeningTheta_11B_QE");
   if(Experiment_Flag==1){
      h_opening_theta_3->SetLineColor(6);
      h_opening_theta_3->Draw("SameHIST");
      h_opening_theta_3->SetNormFactor(NormFactor);
   }
	TLegend *l_opening_theta = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_opening_theta->SetFillColor(0);
	l_opening_theta->SetBorderSize(1);
	l_opening_theta->SetTextSize(0.03);
	l_opening_theta->SetTextFont(32);
   l_opening_theta->AddEntry(h_opening_theta,"Simulation","l");
   if(Generator_With_Cut==1){
      l_opening_theta->AddEntry(h_opening_theta_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_opening_theta->AddEntry(h_opening_theta_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_opening_theta->AddEntry(h_opening_theta_3,"Experiment Dec 13, 2024","l");
   }
   l_opening_theta->Draw("HIST");
   c_opening_theta->SaveAs(Form("./reco_plot_%3.1f_%2.0f/16_opening_theta.pdf",Boost_resolution,TOF_resolution));

   // TCanvas *c_opening_phi = new TCanvas("c_opening_phi","opening_phi",1200,800);
   // gStyle->SetOptFit(111);
   // gStyle->SetOptStat(1111);
   // h_opening_phi->SetLineColor(1);
   // h_opening_phi->SetNormFactor(NormFactor_exp);
   // h_opening_phi->Draw("HIST");
   // h_opening_phi->SetStats(0);
   // h_opening_phi->GetYaxis()->SetRangeUser(0,330*5*NormFactor_exp/1718.);
   // TH1F *h_opening_phi_3 = (TH1F*)gROOT->FindObject("hOpeningPhi_11B_QE");
   // h_opening_phi_3->SetLineColor(6);
   // h_opening_phi_3->Draw("Same E");
	// TLegend *l_opening_phi = new TLegend(0.7,0.7,0.87,0.89,Form(""));
	// l_opening_phi->SetFillColor(0);
	// l_opening_phi->SetBorderSize(1);
	// l_opening_phi->SetTextSize(0.03);
	// l_opening_phi->SetTextFont(32);
   // l_opening_phi->AddEntry(h_opening_phi,"Simulation","l");
   // l_opening_phi->AddEntry(h_opening_phi_3,"Experiment Dec 13, 2024","l");
   // l_opening_phi->Draw("HIST");
   // c_opening_phi->SaveAs(Form("./reco_plot_%3.1f_%2.0f/17_opening_phi.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_opening_phi = new TCanvas("c_opening_phi","opening_phi",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_opening_phi->SetLineColor(1);
   h_opening_phi->Draw("HIST");
   // h_opening_phi->Fit("gaus","","SAME",0,0.5);
   h_opening_phi->GetYaxis()->SetRangeUser(0,330*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_opening_phi_1->SetLineColor(4);
      h_opening_phi_1->SetLineStyle(7);
      h_opening_phi_1->Draw("SameHIST");
      h_opening_phi_1->SetNormFactor(NormFactor);
   }
   if(Generator_Without_Cut==1){
      h_opening_phi_2->SetLineColor(3);
      h_opening_phi_2->SetLineStyle(9);
      h_opening_phi_2->Draw("SameHIST");
      h_opening_phi_2->SetNormFactor(NormFactor);
   }
   TH1F *h_opening_phi_3 = (TH1F*)gROOT->FindObject("hOpeningPhi_11B_QE");
   if(Experiment_Flag==1){
      h_opening_phi_3->SetLineColor(6);
      h_opening_phi_3->Draw("SameHIST");
      h_opening_phi_3->SetNormFactor(NormFactor);
   }
	TLegend *l_opening_phi = new TLegend(0.2,0.7,0.55,0.9,Form(""));
	l_opening_phi->SetFillColor(0);
	l_opening_phi->SetBorderSize(1);
	l_opening_phi->SetTextSize(0.03);
	l_opening_phi->SetTextFont(32);
   l_opening_phi->AddEntry(h_opening_phi,"Simulation","l");
   if(Generator_With_Cut==1){
      l_opening_phi->AddEntry(h_opening_phi_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_opening_phi->AddEntry(h_opening_phi_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_opening_phi->AddEntry(h_opening_phi_3,"Experiment Dec 13, 2024","l");
   }
   l_opening_phi->Draw("HIST");
   c_opening_phi->SaveAs(Form("./reco_plot_%3.1f_%2.0f/17_opening_phi.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_phi1 = new TCanvas("c_phi1","phi1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_phi1->SetLineColor(1);
   h_phi1->Draw("HIST");
   h_phi1->GetYaxis()->SetRangeUser(0,200*NormFactor/1243.);
   TH1F *h_phi1_3 = (TH1F*)gROOT->FindObject("hPhiLeft");
   h_phi1_3->SetLineColor(6);
   h_phi1_3->Draw("SameHIST");
   h_phi1_3->SetNormFactor(NormFactor);
	TLegend *l_phi1 = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_phi1->SetFillColor(0);
	l_phi1->SetBorderSize(1);
	l_phi1->SetTextSize(0.03);
	l_phi1->SetTextFont(32);
   l_phi1->AddEntry(h_phi1,"Simulation","l");
   l_phi1->AddEntry(h_phi1_3,"Experiment Dec 13, 2024","l");
   l_phi1->Draw("HIST");
   c_phi1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/17_phi1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_phi2 = new TCanvas("c_phi2","phi2",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_phi2->SetLineColor(1);
   h_phi2->Draw("HIST");
   h_phi2->GetYaxis()->SetRangeUser(0,200*NormFactor/1243.);
   TH1F *h_phi2_3 = (TH1F*)gROOT->FindObject("hPhiRight");
   h_phi2_3->SetLineColor(6);
   h_phi2_3->Draw("SameHIST");
   h_phi2_3->SetNormFactor(NormFactor);
	TLegend *l_phi2 = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_phi2->SetFillColor(0);
	l_phi2->SetBorderSize(1);
	l_phi2->SetTextSize(0.03);
	l_phi2->SetTextFont(32);
   l_phi2->AddEntry(h_phi2,"Simulation","l");
   l_phi2->AddEntry(h_phi2_3,"Experiment Dec 13, 2024","l");
   l_phi2->Draw("HIST");
   c_phi2->SaveAs(Form("./reco_plot_%3.1f_%2.0f/17_phi2.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_scattering_angle = new TCanvas("c_scattering_angle","scattering_angle",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_scattering_angle->SetLineColor(1);
   h_scattering_angle->Draw("HIST");
   h_scattering_angle->GetYaxis()->SetRangeUser(0,90*NormFactor/1243.);
   if(Generator_With_Cut==1){
      h_scattering_angle_1->SetLineColor(4);
      h_scattering_angle_1->SetLineStyle(7);
      h_scattering_angle_1->Draw("SameHIST");
   }
   if(Generator_Without_Cut==1){
      h_scattering_angle_2->SetLineColor(3);
      h_scattering_angle_2->SetLineStyle(9);
      h_scattering_angle_2->Draw("SameHIST");
      h_scattering_angle_2->SetNormFactor(NormFactor);
   }
	TLegend *l_scattering_angle = new TLegend(0.15,0.7,0.65,0.85,Form(""));
	l_scattering_angle->SetFillColor(0);
	l_scattering_angle->SetBorderSize(0);
	l_scattering_angle->SetTextSize(0.03);
	l_scattering_angle->SetTextFont(32);
   // l_scattering_angle->AddEntry(h_scattering_angle,"Simulation(90 ps TOF shift, TOF and #beta cut)","l");
   // l_scattering_angle->AddEntry(h_scattering_angle,"Simulation(90 ps TOF shift, no TOF and #beta cut)","l");
   // l_scattering_angle->AddEntry(h_scattering_angle,"Simulation(no TOF shift, no TOF and #beta cut)","l");
   // l_scattering_angle->AddEntry(h_scattering_angle,"Simulation(no TOF shift, with TOF and #beta cut)","l");
   l_scattering_angle->AddEntry(h_scattering_angle,"Simulation","l");
   if(Generator_With_Cut==1){
      l_scattering_angle->AddEntry(h_scattering_angle_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_scattering_angle->AddEntry(h_scattering_angle_2,"Generator without acceptance cut","l");
   }
   l_scattering_angle->Draw();
   c_scattering_angle->SaveAs(Form("./reco_plot_%3.1f_%2.0f/18_scattering_angle.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Mandelstam_t = new TCanvas("c_Mandelstam_t","Mandelstam_t",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Mandelstam_t->SetLineColor(1);
   h_Mandelstam_t->Draw("HIST");
   h_Mandelstam_t->GetYaxis()->SetRangeUser(0,30*NormFactor/230.);
   // if(Generator_With_Cut==1){
   //    h_Mandelstam_t_1->SetLineColor(4);
   //    h_Mandelstam_t_1->SetLineStyle(7);
   //    h_Mandelstam_t_1->Draw("SameHIST");
   // }
   TH1F *h_Mandelstam_t_3 = (TH1F*)gROOT->FindObject("hMandelstamT_QE_MM");
   if(Experiment_Flag==1){
      h_Mandelstam_t_3->SetLineColor(6);
      h_Mandelstam_t_3->Draw("SameHIST");
      h_Mandelstam_t_3->SetNormFactor(NormFactor);
   }
   TLegend *l_Mandelstam_t = new TLegend(0.15,0.7,0.65,0.85,Form(""));
	l_Mandelstam_t->SetFillColor(0);
	l_Mandelstam_t->SetBorderSize(0);
	l_Mandelstam_t->SetTextSize(0.03);
	l_Mandelstam_t->SetTextFont(32);
   // l_Mandelstam_t->AddEntry(h_Mandelstam_t,"Simulation(90 ps TOF shift, TOF and #beta cut)","l");
   // l_Mandelstam_t->AddEntry(h_Mandelstam_t,"Simulation(90 ps TOF shift, no TOF and #beta cut)","l");
   // l_Mandelstam_t->AddEntry(h_Mandelstam_t,"Simulation(no TOF shift, no TOF and #beta cut)","l");
   // l_Mandelstam_t->AddEntry(h_Mandelstam_t,"Simulation(no TOF shift, with TOF and #beta cut)","l");
   l_Mandelstam_t->AddEntry(h_Mandelstam_t,"Simulation","l");
   // if(Generator_With_Cut==1){
   //    l_Mandelstam_t->AddEntry(h_Mandelstam_t_1,"Generator with acceptance cut","l");
   // }
   if(Experiment_Flag==1){
      l_Mandelstam_t->AddEntry(h_Mandelstam_t_3,"Experiment May 14","l");
   }
   l_Mandelstam_t->Draw("HIST");
   c_Mandelstam_t->SaveAs(Form("./reco_plot_%3.1f_%2.0f/18_Mandelstam_t.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Mandelstam_u = new TCanvas("c_Mandelstam_u","Mandelstam_u",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Mandelstam_u->SetLineColor(1);
   h_Mandelstam_u->Draw("HIST");
   h_Mandelstam_u->GetYaxis()->SetRangeUser(0,30*NormFactor/260.);
   // if(Generator_With_Cut==1){
   //    h_Mandelstam_u_1->SetLineColor(4);
   //    h_Mandelstam_u_1->SetLineStyle(7);
   //    h_Mandelstam_u_1->Draw("SameHIST");
   // }
   TH1F *h_Mandelstam_u_3 = (TH1F*)gROOT->FindObject("hMandelstamU_QE_MM");
   if(Experiment_Flag==1){
      h_Mandelstam_u_3->SetLineColor(6);
      h_Mandelstam_u_3->Draw("SameHIST");
      h_Mandelstam_u_3->SetNormFactor(NormFactor);
   }
   TLegend *l_Mandelstam_u = new TLegend(0.15,0.7,0.65,0.85,Form(""));
	l_Mandelstam_u->SetFillColor(0);
	l_Mandelstam_u->SetBorderSize(0);
	l_Mandelstam_u->SetTextSize(0.03);
	l_Mandelstam_u->SetTextFont(32);
   // l_Mandelstam_u->AddEntry(h_Mandelstam_u,"Simulation(90 ps TOF shift, TOF and #beta cut)","l");
   // l_Mandelstam_u->AddEntry(h_Mandelstam_u,"Simulation(90 ps TOF shift, no TOF and #beta cut)","l");
   // l_Mandelstam_u->AddEntry(h_Mandelstam_u,"Simulation(no TOF shift, no TOF and #beta cut)","l");
   // l_Mandelstam_u->AddEntry(h_Mandelstam_u,"Simulation(no TOF shift, with TOF and #beta cut)","l");
   l_Mandelstam_u->AddEntry(h_Mandelstam_u,"Simulation","l");
   if(Experiment_Flag==1){
      l_Mandelstam_u->AddEntry(h_Mandelstam_u_3,"Experiment May 14","l");
   }
   // if(Generator_With_Cut==1){
   //    l_Mandelstam_u->AddEntry(h_Mandelstam_u_1,"Generator with acceptance cut","l");
   // }
   l_Mandelstam_u->Draw("HIST");
   c_Mandelstam_u->SaveAs(Form("./reco_plot_%3.1f_%2.0f/18_Mandelstam_u.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Mandelstam_u_t = new TCanvas("c_Mandelstam_u_t","Mandelstam_u_t",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Mandelstam_u_t->SetLineColor(1);
   h_Mandelstam_u_t->Draw("HIST");
   h_Mandelstam_u_t->GetYaxis()->SetRangeUser(0,30*NormFactor/260.);
   // if(Generator_With_Cut==1){
   //    h_Mandelstam_u_t_1->SetLineColor(4);
   //    h_Mandelstam_u_t_1->SetLineStyle(7);
   //    h_Mandelstam_u_t_1->Draw("SameHIST");
   // }
   TH1F *h_Mandelstam_u_t_3 = (TH1F*)gROOT->FindObject("hMandelstamMaxTU_QE_MM");
   if(Experiment_Flag==1){
      h_Mandelstam_u_t_3->SetLineColor(6);
      h_Mandelstam_u_t_3->Draw("SameHIST");
      h_Mandelstam_u_t_3->SetNormFactor(NormFactor);
   }
   TLegend *l_Mandelstam_u_t = new TLegend(0.15,0.7,0.65,0.85,Form(""));
	l_Mandelstam_u_t->SetFillColor(0);
	l_Mandelstam_u_t->SetBorderSize(0);
	l_Mandelstam_u_t->SetTextSize(0.03);
	l_Mandelstam_u_t->SetTextFont(32);
   // l_Mandelstam_u_t->AddEntry(h_Mandelstam_u_t,"Simulation(90 ps TOF shift, TOF and #beta cut)","l");
   // l_Mandelstam_u_t->AddEntry(h_Mandelstam_u_t,"Simulation(90 ps TOF shift, no TOF and #beta cut)","l");
   // l_Mandelstam_u_t->AddEntry(h_Mandelstam_u_t,"Simulation(no TOF shift, no TOF and #beta cut)","l");
   // l_Mandelstam_u_t->AddEntry(h_Mandelstam_u_t,"Simulation(no TOF shift, with TOF and #beta cut)","l");
   l_Mandelstam_u_t->AddEntry(h_Mandelstam_u_t,"Simulation","l");
   if(Experiment_Flag==1){
      l_Mandelstam_u_t->AddEntry(h_Mandelstam_u_t_3,"Experiment May 14","l");
   }
   // if(Generator_With_Cut==1){
   //    l_Mandelstam_u_t->AddEntry(h_Mandelstam_u_t_1,"Generator with acceptance cut","l");
   // }
   l_Mandelstam_u_t->Draw("HIST");
   c_Mandelstam_u_t->SaveAs(Form("./reco_plot_%3.1f_%2.0f/18_Mandelstam_max_ut.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_E_theta = new TCanvas("c_E_theta","E_theta",1200,800);
   h_E_theta->Draw("COLZ");
   c_E_theta->SaveAs(Form("./reco_plot_%3.1f_%2.0f/19_E_vs_theta.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_E_theta_all = new TCanvas("c_E_theta_all","E_theta_all",1200,800);
   h_E_theta_all->Draw("COLZ");
   c_E_theta_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/20_E_vs_theta_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta12 = new TCanvas("c_theta12","theta12",1200,800);
   h_theta12->Draw("COLZ");
   c_theta12->SaveAs(Form("./reco_plot_%3.1f_%2.0f/21_theta1_vs_theta2.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta12_all = new TCanvas("c_theta12_all","theta12_all",1200,800);
   h_theta12_all->Draw("COLZ");
   c_theta12_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/22_theta1_vs_theta2_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta12_accp = new TCanvas("c_theta12_accp","theta12_accp",1200,800);
   h_theta12_accp->Draw("COLZ");
   c_theta12_accp->SaveAs(Form("./reco_plot_%3.1f_%2.0f/22_theta1_vs_theta2_accp.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_phi12 = new TCanvas("c_phi12","phi12",1200,800);
   h_phi12->Draw("COLZ");
   c_phi12->SaveAs(Form("./reco_plot_%3.1f_%2.0f/23_phi1_vs_phi2.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_phi12_all = new TCanvas("c_phi12_all","phi12_all",1200,800);
   h_phi12_all->Draw("COLZ");
   c_phi12_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/24_phi1_vs_phi2_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_phi12_accp = new TCanvas("c_phi12_accp","phi12_accp",1200,800);
   h_phi12_accp->Draw("COLZ");
   c_phi12_accp->SaveAs(Form("./reco_plot_%3.1f_%2.0f/24_phi1_vs_phi2_accp.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta_phi_accp = new TCanvas("c_theta_phi_accp","theta_phi_accp",1200,800);
   h_theta_phi_accp->Draw("COLZ");
   c_theta_phi_accp->SaveAs(Form("./reco_plot_%3.1f_%2.0f/27_theta_vs_phi_accp.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta_phi_all = new TCanvas("c_theta_phi_all","theta_phi_all",1200,800);
   h_theta_phi_all->Draw("COLZ");
   c_theta_phi_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/27_theta_vs_phi_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta_phi1_accp = new TCanvas("c_theta_phi1_accp","theta_phi1_accp",1200,800);
   h_theta_phi1_accp->Draw("COLZ");
   c_theta_phi1_accp->SaveAs(Form("./reco_plot_%3.1f_%2.0f/27_theta_vs_phi1_accp.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta_phi1_all = new TCanvas("c_theta_phi1_all","theta_phi1_all",1200,800);
   h_theta_phi1_all->Draw("COLZ");
   c_theta_phi1_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/27_theta_vs_phi1_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta_phi2_accp = new TCanvas("c_theta_phi2_accp","theta_phi2_accp",1200,800);
   h_theta_phi2_accp->Draw("COLZ");
   c_theta_phi2_accp->SaveAs(Form("./reco_plot_%3.1f_%2.0f/27_theta_vs_phi2_accp.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_theta_phi2_all = new TCanvas("c_theta_phi2_all","theta_phi2_all",1200,800);
   h_theta_phi2_all->Draw("COLZ");
   c_theta_phi2_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/27_theta_vs_phi2_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_vertex_x = new TCanvas("c_vertex_x","vertex_x",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_vertex_x->Draw("HIST");
   h_vertex_x->Fit("gaus","","SAME",-3.0,4.0);
   c_vertex_x->SaveAs(Form("./reco_plot_%3.1f_%2.0f/0_vertex_x.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_vertex_y = new TCanvas("c_vertex_y","vertex_y",1200,800);
   h_vertex_y->Draw("HIST");
   h_vertex_y->Fit("gaus","","SAME",-3.0,3.0);
   c_vertex_y->SaveAs(Form("./reco_plot_%3.1f_%2.0f/0_vertex_y.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_vertex_z = new TCanvas("c_vertex_z","vertex_z",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_vertex_z->Draw("HIST");
   c_vertex_z->SaveAs(Form("./reco_plot_%3.1f_%2.0f/0_vertex_z.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_vertex_z_with_cut = new TCanvas("c_vertex_z_with_cut","vertex_z_with_cut",1200,800);
   h_vertex_z_with_cut->Draw("HIST");
   c_vertex_z_with_cut->SaveAs(Form("./reco_plot_%3.1f_%2.0f/0_vertex_z_with_cut.pdf",Boost_resolution,TOF_resolution));
   // ---------------PLOT reconstruction momentum of protons----------------

   // TCanvas *c_Eloss_left = new TCanvas("c_Eloss_left","Eloss_left",1200,800);
   // h_Eloss_left->Draw("HIST");
   // c_Eloss_left->SaveAs("./Eloss_plot/Eloss_left.pdf");

   // TCanvas *c_Eloss_right = new TCanvas("c_Eloss_right","Eloss_right",1200,800);
   // h_Eloss_right->Draw("HIST");
   // c_Eloss_right->SaveAs("./Eloss_plot/Eloss_right.pdf");

   // TCanvas *c_Eloss_total = new TCanvas("c_Eloss_total","Eloss_total",1200,800);
   // h_Eloss_total->Draw("HIST");
   // c_Eloss_total->SaveAs("./Eloss_plot/Eloss_total.pdf");

   // TCanvas *c_Eloss_total_Px = new TCanvas("c_Eloss_total_Px","Eloss_total_Px",1200,800);
   // h_Eloss_total_Px->Draw("HIST");
   // c_Eloss_total_Px->SaveAs("./Eloss_plot/Eloss_total_Px.pdf");

   // TCanvas *c_Eloss_total_Py = new TCanvas("c_Eloss_total_Py","Eloss_total_Py",1200,800);
   // h_Eloss_total_Py->Draw("HIST");
   // c_Eloss_total_Py->SaveAs("./Eloss_plot/Eloss_total_Py.pdf");

   // TCanvas *c_Eloss_total_Pz = new TCanvas("c_Eloss_total_Pz","Eloss_total_Pz",1200,800);
   // h_Eloss_total_Pz->Draw("HIST");
   // c_Eloss_total_Pz->SaveAs("./Eloss_plot/Eloss_total_Pz.pdf");

   TCanvas *c_tof_pos_left = new TCanvas("c_tof_pos_left","tof_pos_left",1200,800);
   h_tof_pos_left->Draw("COLZ");
   // c_tof_pos_left->SaveAs("./tof_pos_left.pdf");
   c_tof_pos_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/25_tof_pos_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_tof_pos_right = new TCanvas("c_tof_pos_right","tof_pos_right",1200,800);
   h_tof_pos_right->Draw("COLZ");
   // c_tof_pos_right->SaveAs("./tof_pos_right.pdf");
   c_tof_pos_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/26_tof_pos_right.pdf",Boost_resolution,TOF_resolution));
   
   TCanvas *c_Pmiss_Pfrag_x = new TCanvas("c_Pmiss_Pfrag_x","c_Pmiss_Pfrag_x",1200,800);
   h_Pmiss_Pfrag_x->Draw("COLZ");
   c_Pmiss_Pfrag_x->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_Pfrag_x.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pmiss_Pfrag_y = new TCanvas("c_Pmiss_Pfrag_y","c_Pmiss_Pfrag_y",1200,800);
   h_Pmiss_Pfrag_y->Draw("COLZ");
   c_Pmiss_Pfrag_y->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_Pfrag_y.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pmiss_Pfrag_z = new TCanvas("c_Pmiss_Pfrag_z","c_Pmiss_Pfrag_z",1200,800);
   h_Pmiss_Pfrag_z->Draw("COLZ");
   c_Pmiss_Pfrag_z->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_Pfrag_z.pdf",Boost_resolution,TOF_resolution));


   TCanvas *c_pmiss_z_plus_pfrag_z = new TCanvas("c_pmiss_z_plus_pfrag_z","c_pmiss_z_plus_pfrag_z",1200,800);
   h_pmiss_z_plus_pfrag_z->Draw("HIST");
   h_pmiss_z_plus_pfrag_z->GetYaxis()->SetRangeUser(0,400*NormFactor/1243.);
   weightedEntries = 0.0;
   for (int i = 1; i <= h_pmiss_z_plus_pfrag_z->GetNbinsX(); ++i) {
      weightedEntries += h_pmiss_z_plus_pfrag_z->GetBinContent(i);
   }
   h_pmiss_z_plus_pfrag_z->Scale(NormFactor/weightedEntries);

   h_pmiss_z_plus_pfrag_z_generator->SetLineColor(4);
   h_pmiss_z_plus_pfrag_z_generator->Draw("SameHIST");
   h_pmiss_z_plus_pfrag_z_generator->SetNormFactor(NormFactor);
	TLegend *l_pmiss_z_plus_pfrag_z = new TLegend(0.12,0.7,0.3,0.88,Form(""));
	l_pmiss_z_plus_pfrag_z->SetFillColor(0);
	l_pmiss_z_plus_pfrag_z->SetBorderSize(1);
	l_pmiss_z_plus_pfrag_z->SetTextSize(0.03);
	l_pmiss_z_plus_pfrag_z->SetTextFont(32);
   l_pmiss_z_plus_pfrag_z->AddEntry(h_pmiss_z_plus_pfrag_z,"Simulation","l");
   l_pmiss_z_plus_pfrag_z->AddEntry(h_pmiss_z_plus_pfrag_z_generator,"Generator","l");
   l_pmiss_z_plus_pfrag_z->Draw("HIST");
   c_pmiss_z_plus_pfrag_z->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_pmiss_z_plus_pfrag_z.pdf",Boost_resolution,TOF_resolution));


   TCanvas *c_Pmiss_Pfrag_tot = new TCanvas("c_Pmiss_Pfrag_tot","c_Pmiss_Pfrag_tot",1200,800);
   h_Pmiss_Pfrag_tot->Draw("COLZ");
   c_Pmiss_Pfrag_tot->SaveAs(Form("./reco_plot_%3.1f_%2.0f/32_Pmiss_Pfrag_tot.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Angle_Pmiss_PFrag = new TCanvas("c_Angle_Pmiss_PFrag","c_Angle_Pmiss_PFrag",1200,800);
   h_Angle_Pmiss_PFrag->Draw("HIST");
   c_Angle_Pmiss_PFrag->SaveAs(Form("./reco_plot_%3.1f_%2.0f/28_Angle_Pmiss_Pfrag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Angle_Pmiss_PFrag_cos = new TCanvas("c_Angle_Pmiss_PFrag_cos","c_Angle_Pmiss_PFrag_cos",1200,800);
   h_Angle_Pmiss_PFrag_cos->Draw("HIST");
   h_Angle_Pmiss_PFrag_cos->GetYaxis()->SetRangeUser(0,400*NormFactor/1243.);
   TH1F *h_Angle_Pmiss_PFrag_cos_3 = (TH1F*)gROOT->FindObject("hCosGamma_11B_QE");
   if(Experiment_Flag==1){
      h_Angle_Pmiss_PFrag_cos_3->SetLineColor(6);
      h_Angle_Pmiss_PFrag_cos_3->Draw("SameHIST");
      h_Angle_Pmiss_PFrag_cos_3->SetNormFactor(NormFactor);
   }
	TLegend *l_Angle_Pmiss_PFrag_cos = new TLegend(0.55,0.2,0.9,0.4,Form(""));
	l_Angle_Pmiss_PFrag_cos->SetFillColor(0);
	l_Angle_Pmiss_PFrag_cos->SetBorderSize(1);
	l_Angle_Pmiss_PFrag_cos->SetTextSize(0.03);
	l_Angle_Pmiss_PFrag_cos->SetTextFont(32);
   l_Angle_Pmiss_PFrag_cos->AddEntry(h_Angle_Pmiss_PFrag_cos,"Simulation","l");
   if(Experiment_Flag==1){
      l_Angle_Pmiss_PFrag_cos->AddEntry(h_Angle_Pmiss_PFrag_cos_3,"Experiment Dec 13, 2024","l");
   }
   l_Angle_Pmiss_PFrag_cos->Draw("HIST");
   c_Angle_Pmiss_PFrag_cos->SaveAs(Form("./reco_plot_%3.1f_%2.0f/28_Angle_Pmiss_PFrag_cos.pdf",Boost_resolution,TOF_resolution));

   // Generator_Without_Cut = 1;
   TCanvas *c_pbx = new TCanvas("c_pbx","c_pbx",1200,800);
   h_pbx->Draw("HIST");
   if(Generator_Without_Cut==1){
      h_pbx_2->SetLineColor(2);
      h_pbx_2->SetLineStyle(1);
      h_pbx_2->Draw("SameHIST");
      h_pbx_2->SetNormFactor(NormFactor);
   }
	TLegend *l_pbx = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_pbx->SetFillColor(0);
	l_pbx->SetBorderSize(1);
	l_pbx->SetTextSize(0.03);
	l_pbx->SetTextFont(32);
   l_pbx->AddEntry(h_pbx,"Generator with acceptance cut","l");
   if(Generator_Without_Cut==1){
      l_pbx->AddEntry(h_pbx_2,"Generator without acceptance cut","l");
   }
   // l_pbx->Draw("HIST");
   c_pbx->SaveAs(Form("./reco_plot_%3.1f_%2.0f/29_pbx.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_pby = new TCanvas("c_pby","c_pby",1200,800);
   h_pby->Draw("HIST");
   if(Generator_Without_Cut==1){
      h_pby_2->SetLineColor(2);
      h_pby_2->SetLineStyle(1);
      h_pby_2->Draw("SameHIST");
      h_pby_2->SetNormFactor(NormFactor);
   }
	TLegend *l_pby = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_pby->SetFillColor(0);
	l_pby->SetBorderSize(1);
	l_pby->SetTextSize(0.03);
	l_pby->SetTextFont(32);
   l_pby->AddEntry(h_pby,"Generator with acceptance cut","l");
   if(Generator_Without_Cut==1){
      l_pby->AddEntry(h_pby_2,"Generator without acceptance cut","l");
   }
   // l_pby->Draw("HIST");
   c_pby->SaveAs(Form("./reco_plot_%3.1f_%2.0f/29_pby.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_pbz = new TCanvas("c_pbz","c_pbz",1200,800);
   h_pbz->SetLineColor(1);
   h_pbz->Draw("HIST");
   h_pbz->GetYaxis()->SetRangeUser(0,140*NormFactor/1243.);

   weightedEntries = 0.0;
   for (int i = 1; i <= h_pbz->GetNbinsX(); ++i) {
      weightedEntries += h_pbz->GetBinContent(i);
   }
   h_pbz->Scale(NormFactor/weightedEntries);

   if(Generator_With_Cut==1){
      h_pbz_1->SetLineColor(4);
      // h_pbz_1->SetLineStyle(1);
      h_pbz_1->Draw("SameHIST");
      h_pbz_1->SetNormFactor(NormFactor);
      // h_pbz_1->SetNormFactor(12894.);
   }
   if(Generator_Without_Cut==1){
      h_pbz_2->SetLineColor(2);
      h_pbz_2->SetLineStyle(1);
      h_pbz_2->Draw("SameHIST");
      h_pbz_2->SetNormFactor(NormFactor);
      // h_pbz_2->SetNormFactor(12894.);
   }
   TH1F *h_pbz_3 = (TH1F*)gROOT->FindObject("hPFrag11BZ");
   if(Experiment_Flag==1){
      h_pbz_3->SetLineColor(6);
      h_pbz_3->Draw("SameE");
      h_pbz_3->SetNormFactor(NormFactor);
   }
	TLegend *l_pbz = new TLegend(0.1,0.7,0.45,0.9,Form(""));
	l_pbz->SetFillColor(0);
	l_pbz->SetBorderSize(1);
	l_pbz->SetTextSize(0.03);
	l_pbz->SetTextFont(32);
   l_pbz->AddEntry(h_pbz,"Simulation with smearing","l");
   if(Generator_With_Cut==1){
      l_pbz->AddEntry(h_pbz_1,"Generator with acceptance cut","l");
   }
   if(Generator_Without_Cut==1){
      l_pbz->AddEntry(h_pbz_2,"Generator without acceptance cut","l");
   }
   if(Experiment_Flag==1){
      l_pbz->AddEntry(h_pbz_3,"Experiment Dec 13, 2024","lep");
   }
   l_pbz->Draw("HIST");
   c_pbz->SaveAs(Form("./reco_plot_%3.1f_%2.0f/29_pbz.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_pb = new TCanvas("c_pb","c_pb",1200,800);
   h_pb->Draw("HIST");
   if(Generator_Without_Cut==1){
      h_pb_2->SetLineColor(2);
      h_pb_2->SetLineStyle(1);
      h_pb_2->Draw("SameHIST");
      h_pb_2->SetNormFactor(NormFactor);
   }
	TLegend *l_pb = new TLegend(0.55,0.2,0.9,0.4,Form(""));
	l_pb->SetFillColor(0);
	l_pb->SetBorderSize(1);
	l_pb->SetTextSize(0.03);
	l_pb->SetTextFont(32);
   l_pb->AddEntry(h_pb,"Generator with acceptance cut","l");
   if(Generator_Without_Cut==1){
      l_pb->AddEntry(h_pb_2,"Generator without acceptance cut","l");
   }
   // l_pb->Draw("HIST");
   c_pb->SaveAs(Form("./reco_plot_%3.1f_%2.0f/29_pb.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_11B_MWPC4_pos = new TCanvas("c_11B_MWPC4_pos","c_11B_MWPC4_pos",1200,800);
   h_11B_MWPC4_pos->Draw("COLZ");
   c_11B_MWPC4_pos->SaveAs(Form("./reco_plot_%3.1f_%2.0f/30_11B_MWPC4_pos.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_11B_SP41_pos = new TCanvas("c_11B_SP41_pos","c_11B_SP41_pos",1200,800);
   h_11B_SP41_pos->Draw("COLZ");
   c_11B_SP41_pos->SaveAs(Form("./reco_plot_%3.1f_%2.0f/31_11B_SP41_pos.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_path_x_left = new TCanvas("c_fly_path_x_left","c_fly_path_x_left",1200,800);
   h_fly_path_x_left->Draw("HIST");
   c_fly_path_x_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/33_fly_path_x_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_path_y_left = new TCanvas("c_fly_path_y_left","c_fly_path_y_left",1200,800);
   h_fly_path_y_left->Draw("HIST");
   c_fly_path_y_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/33_fly_path_y_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_path_z_left = new TCanvas("c_fly_path_z_left","c_fly_path_z_left",1200,800);
   h_fly_path_z_left->Draw("HIST");
   c_fly_path_z_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/33_fly_path_z_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_path_left = new TCanvas("c_fly_path_left","c_fly_path_left",1200,800);
   h_fly_path_left->Draw("HIST");
   c_fly_path_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/33_fly_path_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_path_x_right = new TCanvas("c_fly_path_x_right","c_fly_path_x_right",1200,800);
   h_fly_path_x_right->Draw("HIST");
   c_fly_path_x_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/33_fly_path_x_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_path_y_right = new TCanvas("c_fly_path_y_right","c_fly_path_y_right",1200,800);
   h_fly_path_y_right->Draw("HIST");
   c_fly_path_y_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/33_fly_path_y_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_path_z_right = new TCanvas("c_fly_path_z_right","c_fly_path_z_right",1200,800);
   h_fly_path_z_right->Draw("HIST");
   c_fly_path_z_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/33_fly_path_z_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_path_right = new TCanvas("c_fly_path_right","c_fly_path_right",1200,800);
   h_fly_path_right->Draw("HIST");
   c_fly_path_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/33_fly_path_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_time_left = new TCanvas("c_fly_time_left","c_fly_time_left",1200,800);
   h_fly_time_left->Draw("HIST");
   c_fly_time_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/34_fly_time_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_fly_time_right = new TCanvas("c_fly_time_right","c_fly_time_right",1200,800);
   h_fly_time_right->Draw("HIST");
   c_fly_time_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/34_fly_time_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_theta_left = new TCanvas("c_Pfragz_theta_left","c_Pfragz_theta_left",1200,800);
   // h_Pfragz_theta_left->SetStats(0);
   h_Pfragz_theta_left->Draw("COLZ");
   c_Pfragz_theta_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/35_Pfragz_theta_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_theta_right = new TCanvas("c_Pfragz_theta_right","c_Pfragz_theta_right",1200,800);
   h_Pfragz_theta_right->SetStats(0);
   h_Pfragz_theta_right->Draw("COLZ");
   c_Pfragz_theta_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/35_Pfragz_theta_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_theta_left_both = new TCanvas("c_Pfragz_theta_left_both","c_Pfragz_theta_left_both",1200,800);
   h_Pfragz_theta_left_both->SetStats(0);
   h_Pfragz_theta_left_both->Draw("COLZ");
   c_Pfragz_theta_left_both->SaveAs(Form("./reco_plot_%3.1f_%2.0f/35_Pfragz_theta_left_both.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_theta_right_both = new TCanvas("c_Pfragz_theta_right_both","c_Pfragz_theta_right_both",1200,800);
   h_Pfragz_theta_right_both->SetStats(0);
   h_Pfragz_theta_right_both->Draw("COLZ");
   c_Pfragz_theta_right_both->SaveAs(Form("./reco_plot_%3.1f_%2.0f/35_Pfragz_theta_right_both.pdf",Boost_resolution,TOF_resolution));

   for (int i = 1; i <= 200; ++i) {
      for (int j = 1; j <= 200; ++j) {
         double value1 = h_Pfragz_theta_left_both->GetBinContent(i, j);
         double value2 = h_Pfragz_theta_left->GetBinContent(i, j);
         double ratio = (value2 != 0) ? value1 / value2 : 0.0;
         h_Pfragz_theta_left_ratio->SetBinContent(i, j, ratio);
      }
   }
   TCanvas *c_Pfragz_theta_left_ratio = new TCanvas("c_Pfragz_theta_left_ratio","c_Pfragz_theta_left_ratio",1200,800);
   h_Pfragz_theta_left_ratio->SetStats(0);
   h_Pfragz_theta_left_ratio->Draw("COLZ");
   c_Pfragz_theta_left_ratio->SaveAs(Form("./reco_plot_%3.1f_%2.0f/35_Pfragz_theta_left_ratio.pdf",Boost_resolution,TOF_resolution));

   for (int i = 1; i <= 200; ++i) {
      for (int j = 1; j <= 200; ++j) {
         double value1 = h_Pfragz_theta_right_both->GetBinContent(i, j);
         double value2 = h_Pfragz_theta_right->GetBinContent(i, j);
         double ratio = (value2 != 0) ? value1 / value2 : 0.0;
         h_Pfragz_theta_right_ratio->SetBinContent(i, j, ratio);
      }
   }
   TCanvas *c_Pfragz_theta_right_ratio = new TCanvas("c_Pfragz_theta_right_ratio","c_Pfragz_theta_right_ratio",1200,800);
   h_Pfragz_theta_right_ratio->SetStats(0);
   h_Pfragz_theta_right_ratio->Draw("COLZ");
   c_Pfragz_theta_right_ratio->SaveAs(Form("./reco_plot_%3.1f_%2.0f/35_Pfragz_theta_right_ratio.pdf",Boost_resolution,TOF_resolution));

   for (int j = 1; j <= 200; ++j) {
      double sum1 = 0.0;
      double sum2 = 0.0;
      for (int i = 1; i <= 200; ++i) {
         sum1 += h_Pfragz_theta_left_both->GetBinContent(i, j);
         sum2 += h_Pfragz_theta_left->GetBinContent(i, j);
      }
      double ratio = (sum2 != 0) ? sum1 / sum2 : 0.0;
      h_Pfragz_left_ratio->SetBinContent(j, ratio);
   }
   TCanvas *c_Pfragz_left_ratio = new TCanvas("c_Pfragz_left_ratio","c_Pfragz_left_ratio",1200,800);
   h_Pfragz_left_ratio->SetStats(0);
   h_Pfragz_left_ratio->Draw("HIST");
   c_Pfragz_left_ratio->SaveAs(Form("./reco_plot_%3.1f_%2.0f/35_Pfragz_left_ratio.pdf",Boost_resolution,TOF_resolution));

   for (int j = 1; j <= 200; ++j) {
      double sum1 = 0.0;
      double sum2 = 0.0;
      for (int i = 1; i <= 200; ++i) {
         sum1 += h_Pfragz_theta_right_both->GetBinContent(i, j);
         sum2 += h_Pfragz_theta_right->GetBinContent(i, j);
      }
      double ratio = (sum2 != 0) ? sum1 / sum2 : 0.0;
      h_Pfragz_right_ratio->SetBinContent(j, ratio);
   }
   TCanvas *c_Pfragz_right_ratio = new TCanvas("c_Pfragz_right_ratio","c_Pfragz_right_ratio",1200,800);
   h_Pfragz_right_ratio->SetStats(0);
   h_Pfragz_right_ratio->Draw("HIST");
   c_Pfragz_right_ratio->SaveAs(Form("./reco_plot_%3.1f_%2.0f/35_Pfragz_right_ratio.pdf",Boost_resolution,TOF_resolution));


   TCanvas *c_Pfragz_PmissTheta_both = new TCanvas("c_Pfragz_PmissTheta_both","c_Pfragz_PmissTheta_both",1200,800);
   // h_Pfragz_PmissTheta_both->SetStats(0);
   h_Pfragz_PmissTheta_both->Draw("COLZ");
   c_Pfragz_PmissTheta_both->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragz_PmissTheta_both.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragx_PmissTheta_both = new TCanvas("c_Pfragx_PmissTheta_both","c_Pfragx_PmissTheta_both",1200,800);
   // h_Pfragx_PmissTheta_both->SetStats(0);
   h_Pfragx_PmissTheta_both->Draw("COLZ");
   c_Pfragx_PmissTheta_both->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragx_PmissTheta_both.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragy_PmissTheta_both = new TCanvas("c_Pfragy_PmissTheta_both","c_Pfragy_PmissTheta_both",1200,800);
   // h_Pfragy_PmissTheta_both->SetStats(0);
   h_Pfragy_PmissTheta_both->Draw("COLZ");
   c_Pfragy_PmissTheta_both->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragy_PmissTheta_both.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_PmissTheta_left = new TCanvas("c_Pfragz_PmissTheta_left","c_Pfragz_PmissTheta_left",1200,800);
   // h_Pfragz_PmissTheta_left->SetStats(0);
   h_Pfragz_PmissTheta_left->Draw("COLZ");
   c_Pfragz_PmissTheta_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragz_PmissTheta_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragx_PmissTheta_left = new TCanvas("c_Pfragx_PmissTheta_left","c_Pfragx_PmissTheta_left",1200,800);
   // h_Pfragx_PmissTheta_left->SetStats(0);
   h_Pfragx_PmissTheta_left->Draw("COLZ");
   c_Pfragx_PmissTheta_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragx_PmissTheta_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragy_PmissTheta_left = new TCanvas("c_Pfragy_PmissTheta_left","c_Pfragy_PmissTheta_left",1200,800);
   // h_Pfragy_PmissTheta_left->SetStats(0);
   h_Pfragy_PmissTheta_left->Draw("COLZ");
   c_Pfragy_PmissTheta_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragy_PmissTheta_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_PmissTheta_right = new TCanvas("c_Pfragz_PmissTheta_right","c_Pfragz_PmissTheta_right",1200,800);
   // h_Pfragz_PmissTheta_right->SetStats(0);
   h_Pfragz_PmissTheta_right->Draw("COLZ");
   c_Pfragz_PmissTheta_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragz_PmissTheta_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragx_PmissTheta_right = new TCanvas("c_Pfragx_PmissTheta_right","c_Pfragx_PmissTheta_right",1200,800);
   // h_Pfragx_PmissTheta_right->SetStats(0);
   h_Pfragx_PmissTheta_right->Draw("COLZ");
   c_Pfragx_PmissTheta_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragx_PmissTheta_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragy_PmissTheta_right = new TCanvas("c_Pfragy_PmissTheta_right","c_Pfragy_PmissTheta_right",1200,800);
   // h_Pfragy_PmissTheta_right->SetStats(0);
   h_Pfragy_PmissTheta_right->Draw("COLZ");
   c_Pfragy_PmissTheta_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragy_PmissTheta_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_OpeningTheta_both = new TCanvas("c_Pfragz_OpeningTheta_both","c_Pfragz_OpeningTheta_both",1200,800);
   // h_Pfragz_OpeningTheta_both->SetStats(0);
   h_Pfragz_OpeningTheta_both->Draw("COLZ");
   c_Pfragz_OpeningTheta_both->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragz_OpeningTheta_both.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragx_OpeningTheta_both = new TCanvas("c_Pfragx_OpeningTheta_both","c_Pfragx_OpeningTheta_both",1200,800);
   // h_Pfragx_OpeningTheta_both->SetStats(0);
   h_Pfragx_OpeningTheta_both->Draw("COLZ");
   c_Pfragx_OpeningTheta_both->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragx_OpeningTheta_both.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragy_OpeningTheta_both = new TCanvas("c_Pfragy_OpeningTheta_both","c_Pfragy_OpeningTheta_both",1200,800);
   // h_Pfragy_OpeningTheta_both->SetStats(0);
   h_Pfragy_OpeningTheta_both->Draw("COLZ");
   c_Pfragy_OpeningTheta_both->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragy_OpeningTheta_both.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_OpeningTheta_left = new TCanvas("c_Pfragz_OpeningTheta_left","c_Pfragz_OpeningTheta_left",1200,800);
   // h_Pfragz_OpeningTheta_left->SetStats(0);
   h_Pfragz_OpeningTheta_left->Draw("COLZ");
   c_Pfragz_OpeningTheta_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragz_OpeningTheta_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragx_OpeningTheta_left = new TCanvas("c_Pfragx_OpeningTheta_left","c_Pfragx_OpeningTheta_left",1200,800);
   // h_Pfragx_OpeningTheta_left->SetStats(0);
   h_Pfragx_OpeningTheta_left->Draw("COLZ");
   c_Pfragx_OpeningTheta_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragx_OpeningTheta_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragy_OpeningTheta_left = new TCanvas("c_Pfragy_OpeningTheta_left","c_Pfragy_OpeningTheta_left",1200,800);
   // h_Pfragy_OpeningTheta_left->SetStats(0);
   h_Pfragy_OpeningTheta_left->Draw("COLZ");
   c_Pfragy_OpeningTheta_left->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragy_OpeningTheta_left.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_OpeningTheta_right = new TCanvas("c_Pfragz_OpeningTheta_right","c_Pfragz_OpeningTheta_right",1200,800);
   // h_Pfragz_OpeningTheta_right->SetStats(0);
   h_Pfragz_OpeningTheta_right->Draw("COLZ");
   c_Pfragz_OpeningTheta_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragz_OpeningTheta_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragx_OpeningTheta_right = new TCanvas("c_Pfragx_OpeningTheta_right","c_Pfragx_OpeningTheta_right",1200,800);
   // h_Pfragx_OpeningTheta_right->SetStats(0);
   h_Pfragx_OpeningTheta_right->Draw("COLZ");
   c_Pfragx_OpeningTheta_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragx_OpeningTheta_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragy_OpeningTheta_right = new TCanvas("c_Pfragy_OpeningTheta_right","c_Pfragy_OpeningTheta_right",1200,800);
   // h_Pfragy_OpeningTheta_right->SetStats(0);
   h_Pfragy_OpeningTheta_right->Draw("COLZ");
   c_Pfragy_OpeningTheta_right->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragy_OpeningTheta_right.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_PmissTheta_all = new TCanvas("c_Pfragz_PmissTheta_all","c_Pfragz_PmissTheta_all",1200,800);
   // h_Pfragz_PmissTheta_all->SetStats(0);
   h_Pfragz_PmissTheta_all->Draw("COLZ");
   c_Pfragz_PmissTheta_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragz_PmissTheta_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragx_PmissTheta_all = new TCanvas("c_Pfragx_PmissTheta_all","c_Pfragx_PmissTheta_all",1200,800);
   // h_Pfragx_PmissTheta_all->SetStats(0);
   h_Pfragx_PmissTheta_all->Draw("COLZ");
   c_Pfragx_PmissTheta_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragx_PmissTheta_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragy_PmissTheta_all = new TCanvas("c_Pfragy_PmissTheta_all","c_Pfragy_PmissTheta_all",1200,800);
   // h_Pfragy_PmissTheta_all->SetStats(0);
   h_Pfragy_PmissTheta_all->Draw("COLZ");
   c_Pfragy_PmissTheta_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/36_Pfragy_PmissTheta_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragz_OpeningTheta_all = new TCanvas("c_Pfragz_OpeningTheta_all","c_Pfragz_OpeningTheta_all",1200,800);
   // h_Pfragz_OpeningTheta_all->SetStats(0);
   h_Pfragz_OpeningTheta_all->Draw("COLZ");
   c_Pfragz_OpeningTheta_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragz_OpeningTheta_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragx_OpeningTheta_all = new TCanvas("c_Pfragx_OpeningTheta_all","c_Pfragx_OpeningTheta_all",1200,800);
   // h_Pfragx_OpeningTheta_all->SetStats(0);
   h_Pfragx_OpeningTheta_all->Draw("COLZ");
   c_Pfragx_OpeningTheta_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragx_OpeningTheta_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfragy_OpeningTheta_all = new TCanvas("c_Pfragy_OpeningTheta_all","c_Pfragy_OpeningTheta_all",1200,800);
   // h_Pfragy_OpeningTheta_all->SetStats(0);
   h_Pfragy_OpeningTheta_all->Draw("COLZ");
   c_Pfragy_OpeningTheta_all->SaveAs(Form("./reco_plot_%3.1f_%2.0f/37_Pfragy_OpeningTheta_all.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_M_miss_square_frag = new TCanvas("c_M_miss_square_frag","M_miss_square_frag",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_M_miss_square_frag_with_accp->SetLineColor(4);
   h_M_miss_square_frag_with_accp->Draw("HIST");
   // h_M_miss_square_frag_with_accp->SetNormFactor(8478);
   // h_M_miss_square_frag_with_accp->Fit("gaus","","SAME",0.6,0.85);
   h_M_miss_square->SetLineColor(1);
   h_M_miss_square->Draw("SameHIST");
   // h_M_miss_square->SetNormFactor(8478);
   // h_M_miss_square_frag->Fit("gaus","","SAME",0.5,0.9);
   // h_M_miss_square_frag->GetYaxis()->SetRangeUser(0,190*NormFactor/1243.);
   if(Experiment_Flag==1){
      h_M_miss_square_exp->SetLineColor(6);
      h_M_miss_square_exp->Draw("SameHIST");
      // h_M_miss_square_exp->SetNormFactor(8478);
      h_M_miss_square_exp->SetNormFactor(6836);
      // h_M_miss_square_exp->Fit("gaus","","SAME",0.5,1.1);
   }
	TLegend *l_M_miss_square_frag = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_M_miss_square_frag->SetFillColor(0);
	l_M_miss_square_frag->SetBorderSize(1);
	l_M_miss_square_frag->SetTextSize(0.03);
	l_M_miss_square_frag->SetTextFont(32);
   // l_M_miss_square_frag->AddEntry(h_M_miss_square,"Fragments - all","l");
   l_M_miss_square_frag->AddEntry(h_M_miss_square,"Protons","l");
   l_M_miss_square_frag->AddEntry(h_M_miss_square_frag_with_accp,"Fragments - accp","l");
   if(Experiment_Flag==1){
      l_M_miss_square_frag->AddEntry(h_M_miss_square_exp,"Experiment Dec 13, 2024","l");
   }
   l_M_miss_square_frag->Draw("HIST");
   c_M_miss_square_frag->SaveAs(Form("./reco_plot_%3.1f_%2.0f/38_M_miss_square_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_frag = new TCanvas("c_P_miss_frag","P_miss_frag",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_frag_with_accp->SetLineColor(4);
   h_P_miss_frag_with_accp->Draw("HIST");
   // h_P_miss_frag_with_accp->SetNormFactor(8478);
   // h_P_miss_frag_with_accp->Fit("gaus","","SAME",0.6,0.85);
   h_P_miss_frag_with_accp->GetYaxis()->SetRangeUser(0,NormFactor/10.*0.7);
   h_P_miss->SetLineColor(1);
   h_P_miss->Draw("SameHIST");
   // h_P_miss_frag->SetNormFactor(8478);
   // h_P_miss_frag->Fit("gaus","","SAME",0.5,0.9);
   if(Experiment_Flag==1){
      h_P_miss_exp->SetLineColor(6);
      h_P_miss_exp->Draw("SameHIST");
      // h_P_miss_exp->SetNormFactor(8478);
      h_P_miss_exp->SetNormFactor(6836);
      // h_P_miss_exp->Fit("gaus","","SAME",0.5,1.1);
   }
	TLegend *l_P_miss_frag = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_frag->SetFillColor(0);
	l_P_miss_frag->SetBorderSize(1);
	l_P_miss_frag->SetTextSize(0.03);
	l_P_miss_frag->SetTextFont(32);
   l_P_miss_frag->AddEntry(h_P_miss,"Protons","l");
   l_P_miss_frag->AddEntry(h_P_miss_frag_with_accp,"Fragments - accp","l");
   if(Experiment_Flag==1){
      l_P_miss_frag->AddEntry(h_P_miss_exp,"Experiment Dec 13, 2024","l");
   }
   l_P_miss_frag->Draw("HIST");
   c_P_miss_frag->SaveAs(Form("./reco_plot_%3.1f_%2.0f/38_P_miss_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_x_frag = new TCanvas("c_P_miss_x_frag","P_miss_x_frag",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_x_frag_with_accp->SetLineColor(4);
   h_P_miss_x_frag_with_accp->Draw("HIST");
   // h_P_miss_x_frag_with_accp->SetNormFactor(8478);
   // h_P_miss_x_frag_with_accp->Fit("gaus","","SAME",0.6,0.85);
   h_p1xp2x->SetLineColor(1);
   h_p1xp2x->Draw("SameHIST");
   // h_P_miss_x_frag->SetNormFactor(8478);
   // h_P_miss_x_frag->Fit("gaus","","SAME",0.5,0.9);
   // h_P_miss_x_frag->GetYaxis()->SetRangeUser(0,190*NormFactor/1243.);
   if(Experiment_Flag==1){
      h_P_miss_x_exp->SetLineColor(6);
      h_P_miss_x_exp->Draw("SameHIST");
      h_P_miss_x_exp->SetNormFactor(6836);
      // h_P_miss_x_exp->Fit("gaus","","SAME",0.5,1.1);
   }
	TLegend *l_P_miss_x_frag = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_x_frag->SetFillColor(0);
	l_P_miss_x_frag->SetBorderSize(1);
	l_P_miss_x_frag->SetTextSize(0.03);
	l_P_miss_x_frag->SetTextFont(32);
   l_P_miss_x_frag->AddEntry(h_p1xp2x,"Protons","l");
   l_P_miss_x_frag->AddEntry(h_P_miss_x_frag_with_accp,"Fragments - accp","l");
   if(Experiment_Flag==1){
      l_P_miss_x_frag->AddEntry(h_P_miss_x_exp,"Experiment Dec 13, 2024","l");
   }
   l_P_miss_x_frag->Draw("HIST");
   c_P_miss_x_frag->SaveAs(Form("./reco_plot_%3.1f_%2.0f/38_P_miss_x_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_y_frag = new TCanvas("c_P_miss_y_frag","P_miss_y_frag",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_y_frag_with_accp->SetLineColor(4);
   h_P_miss_y_frag_with_accp->Draw("HIST");
   // h_P_miss_y_frag_with_accp->SetNormFactor(8478);
   // h_P_miss_y_frag_with_accp->Fit("gaus","","SAME",0.6,0.85);
   h_p1yp2y->SetLineColor(1);
   h_p1yp2y->Draw("SameHIST");
   // h_P_miss_y_frag->SetNormFactor(8478);
   // h_P_miss_y_frag->Fit("gaus","","SAME",0.5,0.9);
   // h_P_miss_y_frag->GetYaxis()->SetRangeUser(0,190*NormFactor/1243.);
   if(Experiment_Flag==1){
      h_P_miss_y_exp->SetLineColor(6);
      h_P_miss_y_exp->Draw("SameHIST");
      h_P_miss_y_exp->SetNormFactor(6836);
      // h_P_miss_y_exp->Fit("gaus","","SAME",0.5,1.1);
   }
	TLegend *l_P_miss_y_frag = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_y_frag->SetFillColor(0);
	l_P_miss_y_frag->SetBorderSize(1);
	l_P_miss_y_frag->SetTextSize(0.03);
	l_P_miss_y_frag->SetTextFont(32);
   l_P_miss_y_frag->AddEntry(h_p1yp2y,"Protons","l");
   l_P_miss_y_frag->AddEntry(h_P_miss_y_frag_with_accp,"Fragments - accp","l");
   if(Experiment_Flag==1){
      l_P_miss_y_frag->AddEntry(h_P_miss_y_exp,"Experiment Dec 13, 2024","l");
   }
   l_P_miss_y_frag->Draw("HIST");
   c_P_miss_y_frag->SaveAs(Form("./reco_plot_%3.1f_%2.0f/38_P_miss_y_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_z_frag = new TCanvas("c_P_miss_z_frag","P_miss_z_frag",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_z_frag_with_accp->SetLineColor(4);
   h_P_miss_z_frag_with_accp->Draw("HIST");
   // h_P_miss_z_frag_with_accp->SetNormFactor(8478);
   // h_P_miss_z_frag_with_accp->Fit("gaus","","SAME",0.6,0.85);
   h_P_miss_z_frag_with_accp->GetYaxis()->SetRangeUser(0,NormFactor/10.*1.2);
   h_p1zp2z->SetLineColor(1);
   h_p1zp2z->Draw("SameHIST");
   // h_P_miss_z_frag->SetNormFactor(8478);
   // h_P_miss_z_frag->Fit("gaus","","SAME",0.5,0.9);
   // h_P_miss_z_frag->GetYaxis()->SetRangeUser(0,190*NormFactor/1243.);
   if(Experiment_Flag==1){
      h_P_miss_z_exp->SetLineColor(6);
      h_P_miss_z_exp->Draw("SameHIST");
      h_P_miss_z_exp->SetNormFactor(6836);
      // h_P_miss_z_exp->Fit("gaus","","SAME",0.5,1.1);
   }
	TLegend *l_P_miss_z_frag = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_z_frag->SetFillColor(0);
	l_P_miss_z_frag->SetBorderSize(1);
	l_P_miss_z_frag->SetTextSize(0.03);
	l_P_miss_z_frag->SetTextFont(32);
   l_P_miss_z_frag->AddEntry(h_p1zp2z,"Protons","l");
   l_P_miss_z_frag->AddEntry(h_P_miss_z_frag_with_accp,"Fragments - accp","l");
   if(Experiment_Flag==1){
      l_P_miss_z_frag->AddEntry(h_P_miss_z_exp,"Experiment Dec 13, 2024","l");
   }
   l_P_miss_z_frag->Draw("HIST");
   c_P_miss_z_frag->SaveAs(Form("./reco_plot_%3.1f_%2.0f/38_P_miss_z_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_M_miss_square_frag_diff = new TCanvas("c_M_miss_square_frag_diff","M_miss_square_frag_diff",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_M_miss_square_frag_with_accp_diff->SetLineColor(4);
   h_M_miss_square_frag_with_accp_diff->Draw("HIST");
   c_M_miss_square_frag_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/39_M_miss_square_frag_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_frag_diff = new TCanvas("c_P_miss_frag_diff","P_miss_frag_diff",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_frag_with_accp_diff->SetLineColor(4);
   h_P_miss_frag_with_accp_diff->Draw("HIST");
   c_P_miss_frag_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/39_P_miss_frag_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_x_frag_diff = new TCanvas("c_P_miss_x_frag_diff","P_miss_x_frag_diff",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_x_frag_with_accp_diff->SetLineColor(4);
   h_P_miss_x_frag_with_accp_diff->Draw("HIST");
   c_P_miss_x_frag_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/39_P_miss_x_frag_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_y_frag_diff = new TCanvas("c_P_miss_y_frag_diff","P_miss_y_frag_diff",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_y_frag_with_accp_diff->SetLineColor(4);
   h_P_miss_y_frag_with_accp_diff->Draw("HIST");
   c_P_miss_y_frag_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/39_P_miss_y_frag_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_z_frag_diff = new TCanvas("c_P_miss_z_frag_diff","P_miss_z_frag_diff",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_z_frag_with_accp_diff->SetLineColor(4);
   h_P_miss_z_frag_with_accp_diff->Draw("HIST");
   c_P_miss_z_frag_diff->SaveAs(Form("./reco_plot_%3.1f_%2.0f/39_P_miss_z_frag_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_M_miss_square_frag_vs_method1 = new TCanvas("c_M_miss_square_frag_vs_method1","M_miss_square_frag_vs_method1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_M_miss_square_frag_with_accp_vs_method1->SetLineColor(4);
   h_M_miss_square_frag_with_accp_vs_method1->Draw("COLZ");
   c_M_miss_square_frag_vs_method1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/40_M_miss_square_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_frag_vs_method1 = new TCanvas("c_P_miss_frag_vs_method1","P_miss_frag_vs_method1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_frag_with_accp_vs_method1->SetLineColor(4);
   h_P_miss_frag_with_accp_vs_method1->Draw("COLZ");
   c_P_miss_frag_vs_method1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/40_P_miss_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_x_frag_vs_method1 = new TCanvas("c_P_miss_x_frag_vs_method1","P_miss_x_frag_vs_method1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_x_frag_with_accp_vs_method1->SetLineColor(4);
   h_P_miss_x_frag_with_accp_vs_method1->Draw("COLZ");
   c_P_miss_x_frag_vs_method1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/40_P_miss_x_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_y_frag_vs_method1 = new TCanvas("c_P_miss_y_frag_vs_method1","P_miss_y_frag_vs_method1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_y_frag_with_accp_vs_method1->SetLineColor(4);
   h_P_miss_y_frag_with_accp_vs_method1->Draw("COLZ");
   c_P_miss_y_frag_vs_method1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/40_P_miss_y_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_z_frag_vs_method1 = new TCanvas("c_P_miss_z_frag_vs_method1","P_miss_z_frag_vs_method1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_z_frag_with_accp_vs_method1->SetLineColor(4);
   h_P_miss_z_frag_with_accp_vs_method1->Draw("COLZ");
   c_P_miss_z_frag_vs_method1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/40_P_miss_z_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   // 41
   TCanvas *c_px_diff_polar = new TCanvas("c_px_diff_polar","px_diff_polar",1200,800);
   h_px_diff_polar->SetLineColor(4);
   h_px_diff_polar->Draw("COLZ");
   c_px_diff_polar->SaveAs(Form("./reco_plot_%3.1f_%2.0f/41_px_diff_polar.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_py_diff_polar = new TCanvas("c_py_diff_polar","py_diff_polar",1200,800);
   h_py_diff_polar->SetLineColor(4);
   h_py_diff_polar->Draw("COLZ");
   c_py_diff_polar->SaveAs(Form("./reco_plot_%3.1f_%2.0f/41_py_diff_polar.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_pz_diff_polar = new TCanvas("c_pz_diff_polar","pz_diff_polar",1200,800);
   h_pz_diff_polar->SetLineColor(4);
   h_pz_diff_polar->Draw("COLZ");
   c_pz_diff_polar->SaveAs(Form("./reco_plot_%3.1f_%2.0f/41_pz_diff_polar.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_x_diff_polar = new TCanvas("c_P_miss_x_diff_polar","P_miss_x_diff_polar",1200,800);
   h_P_miss_x_diff_polar->SetLineColor(4);
   h_P_miss_x_diff_polar->Draw("COLZ");
   c_P_miss_x_diff_polar->SaveAs(Form("./reco_plot_%3.1f_%2.0f/41_P_miss_x_diff_polar.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_y_diff_polar = new TCanvas("c_P_miss_y_diff_polar","P_miss_y_diff_polar",1200,800);
   h_P_miss_y_diff_polar->SetLineColor(4);
   h_P_miss_y_diff_polar->Draw("COLZ");
   c_P_miss_y_diff_polar->SaveAs(Form("./reco_plot_%3.1f_%2.0f/41_P_miss_y_diff_polar.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_z_diff_polar = new TCanvas("c_P_miss_z_diff_polar","P_miss_z_diff_polar",1200,800);
   h_P_miss_z_diff_polar->SetLineColor(4);
   h_P_miss_z_diff_polar->Draw("COLZ");
   c_P_miss_z_diff_polar->SaveAs(Form("./reco_plot_%3.1f_%2.0f/41_P_miss_z_diff_polar.pdf",Boost_resolution,TOF_resolution));

   Double_t N_Sim = 6753.;
   TFile* filein_new = new TFile("TreeHist.root");

   TH1F *h1 = (TH1F*)gROOT->FindObject("hPmissT");   // PmissT fragments 6
   TH1F *h2 = (TH1F*)gROOT->FindObject("hPmissT_X");
   TH1F *h3 = (TH1F*)gROOT->FindObject("hPmissT_Y");
   TH1F *h4 = (TH1F*)gROOT->FindObject("hPmissT_Z");
   TH1F *h5 = (TH1F*)gROOT->FindObject("hPmissG");   // PmissG arm 3
   TH1F *h6 = (TH1F*)gROOT->FindObject("hPmissG_X");
   TH1F *h7 = (TH1F*)gROOT->FindObject("hPmissG_Y");
   TH1F *h8 = (TH1F*)gROOT->FindObject("hPmissG_Z");

   TH2F *h9 = (TH2F*)gROOT->FindObject("hPmissT_vs_PmissG");
   TH2F *h10 = (TH2F*)gROOT->FindObject("hPmissT_X_vs_PmissG_X");
   TH2F *h11 = (TH2F*)gROOT->FindObject("hPmissT_Y_vs_PmissG_Y");
   TH2F *h12 = (TH2F*)gROOT->FindObject("hPmissT_Z_vs_PmissG_Z");

   TH1F *h13 = (TH1F*)gROOT->FindObject("hPmissT_minus_PmissG");
   TH1F *h14 = (TH1F*)gROOT->FindObject("hPmissT_X_minus_PmissG_X");
   TH1F *h15 = (TH1F*)gROOT->FindObject("hPmissT_Y_minus_PmissG_Y");
   TH1F *h16 = (TH1F*)gROOT->FindObject("hPmissT_Z_minus_PmissG_Z");

   TH1F *h17 = (TH1F*)gROOT->FindObject("PmissT_PmissG_PmissT_100");
   TH2F *h18 = (TH2F*)gROOT->FindObject("PmissT_PmissG_PmissT_100_vs_PmissT");
   TH2F *h19 = (TH2F*)gROOT->FindObject("PmissT_PmissG_PmissT_100_vs_PmissG");

   TH2F *h20 = (TH2F*)gROOT->FindObject("PmissG_vs_theta");
   TH2F *h21 = (TH2F*)gROOT->FindObject("PmissT_vs_theta");

   // 42
   TCanvas *c_P_miss_frag_new = new TCanvas("c_P_miss_frag_new","P_miss_frag_new",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_frag_with_accp->SetLineColor(4);
   h_P_miss_frag_with_accp->Draw("HIST");
   // h_P_miss_frag_with_accp->SetNormFactor(8478);
   // h_P_miss_frag_with_accp->Fit("gaus","","SAME",0.6,0.85);
   h_P_miss_frag_with_accp->GetYaxis()->SetRangeUser(0,N_Sim/10.*0.7);
   h_P_miss->SetLineColor(1);
   h_P_miss->Draw("SameHIST");
   h1->SetLineColor(6);
   h1->Draw("SameHIST");
   h1->SetNormFactor(N_Sim);
   h5->SetLineColor(3);
   h5->Draw("SameHIST");
   h5->SetNormFactor(N_Sim);
	TLegend *l_P_miss_frag_new = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_frag_new->SetFillColor(0);
	l_P_miss_frag_new->SetBorderSize(1);
	l_P_miss_frag_new->SetTextSize(0.03);
	l_P_miss_frag_new->SetTextFont(32);
   l_P_miss_frag_new->AddEntry(h_P_miss,"Arm-Sim","l");
   l_P_miss_frag_new->AddEntry(h_P_miss_frag_with_accp,"Frag-Sim","l");
   l_P_miss_frag_new->AddEntry(h5,"Arm-Data","l");
   l_P_miss_frag_new->AddEntry(h1,"Frag-Data","l");
   l_P_miss_frag_new->Draw("HIST");
   c_P_miss_frag_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/42_P_miss_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_x_frag_new = new TCanvas("c_P_miss_x_frag_new","P_miss_x_frag_new",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_x_frag_with_accp->SetLineColor(4);
   h_P_miss_x_frag_with_accp->Draw("HIST");
   h_p1xp2x->SetLineColor(1);
   h_p1xp2x->Draw("SameHIST");
   h2->SetLineColor(6);
   h2->Draw("SameHIST");
   h2->SetNormFactor(N_Sim);
   h6->SetLineColor(3);
   h6->Draw("SameHIST");
   h6->SetNormFactor(N_Sim);
	TLegend *l_P_miss_x_frag_new = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_x_frag_new->SetFillColor(0);
	l_P_miss_x_frag_new->SetBorderSize(1);
	l_P_miss_x_frag_new->SetTextSize(0.03);
	l_P_miss_x_frag_new->SetTextFont(32);
   l_P_miss_x_frag_new->AddEntry(h_P_miss,"Arm-Sim","l");
   l_P_miss_x_frag_new->AddEntry(h_P_miss_frag_with_accp,"Frag-Sim","l");
   l_P_miss_x_frag_new->AddEntry(h6,"Arm-Data","l");
   l_P_miss_x_frag_new->AddEntry(h2,"Frag-Data","l");
   l_P_miss_x_frag_new->Draw("HIST");
   c_P_miss_x_frag_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/42_P_miss_x_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_y_frag_new = new TCanvas("c_P_miss_y_frag_new","P_miss_y_frag_new",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_y_frag_with_accp->SetLineColor(4);
   h_P_miss_y_frag_with_accp->Draw("HIST");
   h_p1yp2y->SetLineColor(1);
   h_p1yp2y->Draw("SameHIST");
   h3->SetLineColor(6);
   h3->Draw("SameHIST");
   h3->SetNormFactor(N_Sim);
   h7->SetLineColor(3);
   h7->Draw("SameHIST");
   h7->SetNormFactor(N_Sim);
	TLegend *l_P_miss_y_frag_new = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_y_frag_new->SetFillColor(0);
	l_P_miss_y_frag_new->SetBorderSize(1);
	l_P_miss_y_frag_new->SetTextSize(0.03);
	l_P_miss_y_frag_new->SetTextFont(32);
   l_P_miss_y_frag_new->AddEntry(h_P_miss,"Arm-Sim","l");
   l_P_miss_y_frag_new->AddEntry(h_P_miss_frag_with_accp,"Frag-Sim","l");
   l_P_miss_y_frag_new->AddEntry(h7,"Arm-Data","l");
   l_P_miss_y_frag_new->AddEntry(h3,"Frag-Data","l");
   l_P_miss_y_frag_new->Draw("HIST");
   c_P_miss_y_frag_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/42_P_miss_y_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_z_frag_new = new TCanvas("c_P_miss_z_frag_new","P_miss_z_frag_new",1200,800);
   gStyle->SetOptFit(11);
   gStyle->SetOptStat(11);
   h_P_miss_z_frag_with_accp->SetLineColor(4);
   h_P_miss_z_frag_with_accp->Draw("HIST");
   h_P_miss_z_frag_with_accp->GetYaxis()->SetRangeUser(0,N_Sim/10.*1.2);
   h_p1zp2z->SetLineColor(1);
   h_p1zp2z->Draw("SameHIST");
   h4->SetLineColor(6);
   h4->Draw("SameHIST");
   h4->SetNormFactor(N_Sim);
   h8->SetLineColor(3);
   h8->Draw("SameHIST");
   h8->SetNormFactor(N_Sim);
	TLegend *l_P_miss_z_frag_new = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_z_frag_new->SetFillColor(0);
	l_P_miss_z_frag_new->SetBorderSize(1);
	l_P_miss_z_frag_new->SetTextSize(0.03);
	l_P_miss_z_frag_new->SetTextFont(32);
   l_P_miss_z_frag_new->AddEntry(h_P_miss,"Arm-Sim","l");
   l_P_miss_z_frag_new->AddEntry(h_P_miss_frag_with_accp,"Frag-Sim","l");
   l_P_miss_z_frag_new->AddEntry(h8,"Arm-Data","l");
   l_P_miss_z_frag_new->AddEntry(h4,"Frag-Data","l");
   l_P_miss_z_frag_new->Draw("HIST");
   c_P_miss_z_frag_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/42_P_miss_z_frag.pdf",Boost_resolution,TOF_resolution));

   //43
   TCanvas *c_P_miss_frag_vs_method1_new = new TCanvas("c_P_miss_frag_vs_method1_new","P_miss_frag_vs_method1_new",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_frag_with_accp_vs_method1->SetLineColor(4);
   h_P_miss_frag_with_accp_vs_method1->Draw("COLZ");
   c_P_miss_frag_vs_method1_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/43_P_miss_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_x_frag_vs_method1_new = new TCanvas("c_P_miss_x_frag_vs_method1_new","P_miss_x_frag_vs_method1_new",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_x_frag_with_accp_vs_method1->SetLineColor(4);
   h_P_miss_x_frag_with_accp_vs_method1->Draw("COLZ");
   c_P_miss_x_frag_vs_method1_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/43_P_miss_x_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_y_frag_vs_method1_new = new TCanvas("c_P_miss_y_frag_vs_method1_new","P_miss_y_frag_vs_method1_new",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_y_frag_with_accp_vs_method1->SetLineColor(4);
   h_P_miss_y_frag_with_accp_vs_method1->Draw("COLZ");
   c_P_miss_y_frag_vs_method1_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/43_P_miss_y_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_z_frag_vs_method1_new = new TCanvas("c_P_miss_z_frag_vs_method1_new","P_miss_z_frag_vs_method1_new",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_z_frag_with_accp_vs_method1->SetLineColor(4);
   h_P_miss_z_frag_with_accp_vs_method1->Draw("COLZ");
   c_P_miss_z_frag_vs_method1_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/43_P_miss_z_frag_vs_method1.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_frag_vs_method1_new1 = new TCanvas("c_P_miss_frag_vs_method1_new1","P_miss_frag_vs_method1_new1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h9->SetYTitle("P_{ miss } from Fragments / GeV");
   h9->SetXTitle("P_{ miss } from Protons / GeV");
   h9->GetXaxis()->CenterTitle(1);
   h9->GetXaxis()->SetTitleFont(32);
   h9->GetXaxis()->SetTitleSize(0.06);
	h9->GetXaxis()->SetTitleOffset(0.7);
	h9->GetYaxis()->CenterTitle(1);
	h9->GetYaxis()->SetTitleFont(32);
   h9->GetYaxis()->SetTitleSize(0.04);
   h9->Draw("COLZ");
   c_P_miss_frag_vs_method1_new1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/43_P_miss_frag_vs_method1_data.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_x_frag_vs_method1_new1 = new TCanvas("c_P_miss_x_frag_vs_method1_new1","P_miss_x_frag_vs_method1_new1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h10->SetYTitle("Pmiss_{ x } from Fragments / GeV");
   h10->SetXTitle("Pmiss_{ x } from Protons / GeV");
   h10->GetXaxis()->CenterTitle(1);
   h10->GetXaxis()->SetTitleFont(32);
   h10->GetXaxis()->SetTitleSize(0.06);
	h10->GetXaxis()->SetTitleOffset(0.7);
	h10->GetYaxis()->CenterTitle(1);
	h10->GetYaxis()->SetTitleFont(32);
   h10->GetYaxis()->SetTitleSize(0.04);
   h10->Draw("COLZ");
   c_P_miss_x_frag_vs_method1_new1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/43_P_miss_x_frag_vs_method1_data.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_y_frag_vs_method1_new1 = new TCanvas("c_P_miss_y_frag_vs_method1_new1","P_miss_y_frag_vs_method1_new1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h11->SetYTitle("Pmiss_{ y } from Fragments / GeV");
   h11->SetXTitle("Pmiss_{ y } from Protons / GeV");
   h11->GetXaxis()->CenterTitle(1);
   h11->GetXaxis()->SetTitleFont(32);
   h11->GetXaxis()->SetTitleSize(0.06);
	h11->GetXaxis()->SetTitleOffset(0.7);
	h11->GetYaxis()->CenterTitle(1);
	h11->GetYaxis()->SetTitleFont(32);
   h11->GetYaxis()->SetTitleSize(0.04);
   h11->Draw("COLZ");
   c_P_miss_y_frag_vs_method1_new1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/43_P_miss_y_frag_vs_method1_data.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_z_frag_vs_method1_new1 = new TCanvas("c_P_miss_z_frag_vs_method1_new1","P_miss_z_frag_vs_method1_new1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h12->SetYTitle("Pmiss_{ z } from Fragments / GeV");
   h12->SetXTitle("Pmiss_{ z } from Protons / GeV");
   h12->GetXaxis()->CenterTitle(1);
   h12->GetXaxis()->SetTitleFont(32);
   h12->GetXaxis()->SetTitleSize(0.06);
	h12->GetXaxis()->SetTitleOffset(0.7);
	h12->GetYaxis()->CenterTitle(1);
	h12->GetYaxis()->SetTitleFont(32);
   h12->GetYaxis()->SetTitleSize(0.04);
   h12->Draw("COLZ");
   c_P_miss_z_frag_vs_method1_new1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/43_P_miss_z_frag_vs_method1_data.pdf",Boost_resolution,TOF_resolution));

   // 44
   TCanvas *c_P_miss_frag_diff_new = new TCanvas("c_P_miss_frag_diff_new","P_miss_frag_diff_new",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_frag_with_accp_diff->SetLineColor(4);
   h_P_miss_frag_with_accp_diff->Draw("HIST");
   // h_P_miss_frag_with_accp_diff->GetYaxis()->SetRangeUser(0,N_Sim/10.*1.2);
   h13->SetLineColor(6);
   h13->Draw("SameHIST");
   h13->SetNormFactor(N_Sim);
	TLegend *l_P_miss_frag_with_accp_diff_new = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_frag_with_accp_diff_new->SetFillColor(0);
	l_P_miss_frag_with_accp_diff_new->SetBorderSize(1);
	l_P_miss_frag_with_accp_diff_new->SetTextSize(0.03);
	l_P_miss_frag_with_accp_diff_new->SetTextFont(32);
   l_P_miss_frag_with_accp_diff_new->AddEntry(h_P_miss_frag_with_accp_diff,"Frag-Arm(Sim)","l");
   l_P_miss_frag_with_accp_diff_new->AddEntry(h13,"Frag-Arm(Data)","l");
   l_P_miss_frag_with_accp_diff_new->Draw("HIST");
   c_P_miss_frag_diff_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/44_P_miss_frag_diff.pdf",Boost_resolution,TOF_resolution));


   TCanvas *c_P_miss_x_frag_diff_new = new TCanvas("c_P_miss_x_frag_diff_new","P_miss_x_frag_diff_new",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_x_frag_with_accp_diff->SetLineColor(4);
   h_P_miss_x_frag_with_accp_diff->Draw("HIST");
   // h_P_miss_x_frag_with_accp_diff->GetYaxis()->SetRangeUser(0,N_Sim/10.*1.2);
   h14->SetLineColor(6);
   h14->Draw("SameHIST");
   h14->SetNormFactor(N_Sim);
	TLegend *l_P_miss_x_frag_with_accp_diff_new = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_x_frag_with_accp_diff_new->SetFillColor(0);
	l_P_miss_x_frag_with_accp_diff_new->SetBorderSize(1);
	l_P_miss_x_frag_with_accp_diff_new->SetTextSize(0.03);
	l_P_miss_x_frag_with_accp_diff_new->SetTextFont(32);
   l_P_miss_x_frag_with_accp_diff_new->AddEntry(h_P_miss_x_frag_with_accp_diff,"Frag-Arm(Sim)","l");
   l_P_miss_x_frag_with_accp_diff_new->AddEntry(h14,"Frag-Arm(Data)","l");
   l_P_miss_x_frag_with_accp_diff_new->Draw("HIST");
   c_P_miss_x_frag_diff_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/44_P_miss_x_frag_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_y_frag_diff_new = new TCanvas("c_P_miss_y_frag_diff_new","P_miss_y_frag_diff_new",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_y_frag_with_accp_diff->SetLineColor(4);
   h_P_miss_y_frag_with_accp_diff->Draw("HIST");
   // h_P_miss_y_frag_with_accp_diff->GetYaxis()->SetRangeUser(0,N_Sim/10.*1.2);
   h15->SetLineColor(6);
   h15->Draw("SameHIST");
   h15->SetNormFactor(N_Sim);
	TLegend *l_P_miss_y_frag_with_accp_diff_new = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_y_frag_with_accp_diff_new->SetFillColor(0);
	l_P_miss_y_frag_with_accp_diff_new->SetBorderSize(1);
	l_P_miss_y_frag_with_accp_diff_new->SetTextSize(0.03);
	l_P_miss_y_frag_with_accp_diff_new->SetTextFont(32);
   l_P_miss_y_frag_with_accp_diff_new->AddEntry(h_P_miss_y_frag_with_accp_diff,"Frag-Arm(Sim)","l");
   l_P_miss_y_frag_with_accp_diff_new->AddEntry(h15,"Frag-Arm(Data)","l");
   l_P_miss_y_frag_with_accp_diff_new->Draw("HIST");
   c_P_miss_y_frag_diff_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/44_P_miss_y_frag_diff.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_z_frag_diff_new = new TCanvas("c_P_miss_z_frag_diff_new","P_miss_z_frag_diff_new",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_z_frag_with_accp_diff->SetLineColor(4);
   h_P_miss_z_frag_with_accp_diff->Draw("HIST");
   // h_P_miss_z_frag_with_accp_diff->GetYaxis()->SetRangeUser(0,N_Sim/10.*1.2);
   h16->SetLineColor(6);
   h16->Draw("SameHIST");
   h16->SetNormFactor(N_Sim);
	TLegend *l_P_miss_z_frag_with_accp_diff_new = new TLegend(0.65,0.2,0.9,0.4,Form(""));
	l_P_miss_z_frag_with_accp_diff_new->SetFillColor(0);
	l_P_miss_z_frag_with_accp_diff_new->SetBorderSize(1);
	l_P_miss_z_frag_with_accp_diff_new->SetTextSize(0.03);
	l_P_miss_z_frag_with_accp_diff_new->SetTextFont(32);
   l_P_miss_z_frag_with_accp_diff_new->AddEntry(h_P_miss_z_frag_with_accp_diff,"Frag-Arm(Sim)","l");
   l_P_miss_z_frag_with_accp_diff_new->AddEntry(h16,"Frag-Arm(Data)","l");
   l_P_miss_z_frag_with_accp_diff_new->Draw("HIST");
   c_P_miss_z_frag_diff_new->SaveAs(Form("./reco_plot_%3.1f_%2.0f/44_P_miss_z_frag_diff.pdf",Boost_resolution,TOF_resolution));
   
   // 45
   TCanvas *c_Pmiss_diff_ratio = new TCanvas("c_Pmiss_diff_ratio","Pmiss_diff_ratio",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Pmiss_diff_ratio->SetLineColor(4);
   h_Pmiss_diff_ratio->Draw("HIST");
   // h_Pmiss_diff_ratio->GetYaxis()->SetRangeUser(0,N_Sim/10.*1.2);
   h17->SetLineColor(6);
   h17->Draw("SameHIST");
   h17->SetNormFactor(N_Sim);
	TLegend *l_Pmiss_diff_ratio_new = new TLegend(0.11,0.69,0.36,0.89,Form(""));
	l_Pmiss_diff_ratio_new->SetFillColor(0);
	l_Pmiss_diff_ratio_new->SetBorderSize(1);
	l_Pmiss_diff_ratio_new->SetTextSize(0.03);
	l_Pmiss_diff_ratio_new->SetTextFont(32);
   l_Pmiss_diff_ratio_new->AddEntry(h_Pmiss_diff_ratio,"Simulation","l");
   l_Pmiss_diff_ratio_new->AddEntry(h17,"Data","l");
   l_Pmiss_diff_ratio_new->Draw("HIST");
   c_Pmiss_diff_ratio->SaveAs(Form("./reco_plot_%3.1f_%2.0f/45_Pmiss_diff_ratio.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pmiss_diff_ratio_frag = new TCanvas("c_Pmiss_diff_ratio_frag","Pmiss_diff_ratio_frag",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Pmiss_diff_ratio_frag->Draw("COLZ");
   c_Pmiss_diff_ratio_frag->SaveAs(Form("./reco_plot_%3.1f_%2.0f/45_Pmiss_diff_ratio_frag.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pmiss_diff_ratio_frag1 = new TCanvas("c_Pmiss_diff_ratio_frag1","Pmiss_diff_ratio_frag1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h18->SetYTitle("Pmiss_{ frag } / GeV");
   h18->SetXTitle("Percentage");
   h18->GetXaxis()->CenterTitle(1);
   h18->GetXaxis()->SetTitleFont(32);
   h18->GetXaxis()->SetTitleSize(0.06);
	h18->GetXaxis()->SetTitleOffset(0.7);
	h18->GetYaxis()->CenterTitle(1);
	h18->GetYaxis()->SetTitleFont(32);
   h18->GetYaxis()->SetTitleSize(0.04);
   h18->Draw("COLZ");
   c_Pmiss_diff_ratio_frag1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/45_Pmiss_diff_ratio_frag_data.pdf",Boost_resolution,TOF_resolution));
   
   TCanvas *c_Pmiss_diff_ratio_arm = new TCanvas("c_Pmiss_diff_ratio_arm","Pmiss_diff_ratio_arm",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Pmiss_diff_ratio_arm->Draw("COLZ");
   c_Pmiss_diff_ratio_arm->SaveAs(Form("./reco_plot_%3.1f_%2.0f/45_Pmiss_diff_ratio_arm.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pmiss_diff_ratio_arm1 = new TCanvas("c_Pmiss_diff_ratio_arm1","Pmiss_diff_ratio_arm1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h19->SetYTitle("Pmiss_{ arm } / GeV");
   h19->SetXTitle("Percentage");
   h19->GetXaxis()->CenterTitle(1);
   h19->GetXaxis()->SetTitleFont(32);
   h19->GetXaxis()->SetTitleSize(0.06);
	h19->GetXaxis()->SetTitleOffset(0.7);
	h19->GetYaxis()->CenterTitle(1);
	h19->GetYaxis()->SetTitleFont(32);
   h19->GetYaxis()->SetTitleSize(0.04);
   h19->Draw("COLZ");
   c_Pmiss_diff_ratio_arm1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/45_Pmiss_diff_ratio_arm_data.pdf",Boost_resolution,TOF_resolution));

   // 46
   TCanvas *c_Pmiss_frag_theta = new TCanvas("c_Pmiss_frag_theta","c_Pmiss_frag_theta",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Pmiss_frag_theta->Draw("COLZ");
   c_Pmiss_frag_theta->SaveAs(Form("./reco_plot_%3.1f_%2.0f/46_Pmiss_frag_theta.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_h_Pmiss_frag_theta1 = new TCanvas("c_Pmiss_frag_theta1","c_Pmiss_frag_theta1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h20->SetYTitle("Theta");
   h20->SetXTitle("Pmiss_{ frag } / GeV");
   h20->GetXaxis()->CenterTitle(1);
   h20->GetXaxis()->SetTitleFont(32);
   h20->GetXaxis()->SetTitleSize(0.06);
	h20->GetXaxis()->SetTitleOffset(0.7);
	h20->GetYaxis()->CenterTitle(1);
	h20->GetYaxis()->SetTitleFont(32);
   h20->GetYaxis()->SetTitleSize(0.04);
   h20->Draw("COLZ");
   c_h_Pmiss_frag_theta1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/46_Pmiss_frag_theta_data.pdf",Boost_resolution,TOF_resolution));
   
   TCanvas *c_Pmiss_arm_theta = new TCanvas("c_h_Pmiss_arm_theta","h_Pmiss_arm_theta",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Pmiss_arm_theta->Draw("COLZ");
   c_Pmiss_arm_theta->SaveAs(Form("./reco_plot_%3.1f_%2.0f/46_Pmiss_arm_theta.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pmiss_arm_theta1 = new TCanvas("c_Pmiss_arm_theta1","c_Pmiss_arm_theta1",1200,800);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h21->SetYTitle("Theta");
   h21->SetXTitle("Pmiss_{ arm } / GeV");
   h21->GetXaxis()->CenterTitle(1);
   h21->GetXaxis()->SetTitleFont(32);
   h21->GetXaxis()->SetTitleSize(0.06);
	h21->GetXaxis()->SetTitleOffset(0.7);
	h21->GetYaxis()->CenterTitle(1);
	h21->GetYaxis()->SetTitleFont(32);
   h21->GetYaxis()->SetTitleSize(0.04);
   h21->Draw("COLZ");
   c_Pmiss_arm_theta1->SaveAs(Form("./reco_plot_%3.1f_%2.0f/46_Pmiss_arm_theta_data.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_CSC_Hits_pos = new TCanvas("c_h_CSC_Hits_pos","c_h_CSC_Hits_pos",1200,800);
   // h_CSC_Hits_pos->SetStats(0);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_CSC_Hits_pos->Draw("COLZ");
   c_CSC_Hits_pos->SaveAs(Form("./reco_plot_%3.1f_%2.0f/48_CSC_Hits_pos.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_CSC_Hits_pos_X = new TCanvas("c_h_CSC_Hits_pos_X","c_h_CSC_Hits_pos_X",1200,800);
   h_CSC_Hits_pos_X->Draw("HIST");
   c_CSC_Hits_pos_X->SaveAs(Form("./reco_plot_%3.1f_%2.0f/48_CSC_Hits_pos_X.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_CSC_Hits_pos_Y = new TCanvas("c_h_CSC_Hits_pos_Y","c_h_CSC_Hits_pos_Y",1200,800);
   h_CSC_Hits_pos_Y->Draw("HIST");
   c_CSC_Hits_pos_Y->SaveAs(Form("./reco_plot_%3.1f_%2.0f/48_CSC_Hits_pos_Y.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Pfrag_proton_xy = new TCanvas("c_h_Pfrag_proton_xy","c_h_Pfrag_proton_xy",1200,800);
   h_Pfrag_proton_xy->SetStats(0);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Pfrag_proton_xy->Draw("COLZ");
   c_Pfrag_proton_xy->SaveAs(Form("./reco_plot_%3.1f_%2.0f/49_h_Pfrag_proton_xy.pdf",Boost_resolution,TOF_resolution));

   // 47
   const Int_t Number = 3;
   // Double_t Red[Number]    = {0.0, 1.0, 1.0};
   // Double_t Green[Number]  = {0.0, 1.0, 1.0};
   // Double_t Blue[Number]   = {1.0, 1.0, 1.0};
   // Double_t Length[Number] = {0.0, 0.5, 1.0};

   Double_t Red[Number]    = {0.0, 0.0, 0.0};
   Double_t Green[Number]  = {0.0, 1.0, 1.0};
   Double_t Blue[Number]   = {0.5, 1.0, 1.0};
   Double_t Length[Number] = {0.0, 0.5, 1.0};

   TColor::CreateGradientColorTable(Number, Length, Red, Green, Blue, nb);
   gStyle->SetNumberContours(100);

   TCanvas *c_Emiss_Pmiss = new TCanvas("c_h_Emiss_Pmiss","c_h_Emiss_Pmiss",1200,1200);
   c_Emiss_Pmiss->SetRightMargin(0.15); 
   c_Emiss_Pmiss->SetLeftMargin(0.15); 
   h_Emiss_Pmiss->SetStats(0);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Emiss_Pmiss->Draw("COLZ");
   c_Emiss_Pmiss->SaveAs(Form("./reco_plot_%3.1f_%2.0f/47_h_Emiss_Pmiss.pdf",Boost_resolution,TOF_resolution));
   c_Emiss_Pmiss->SaveAs(Form("./reco_plot_%3.1f_%2.0f/47_h_Emiss_Pmiss.C",Boost_resolution,TOF_resolution));

   TCanvas *c_E_miss_src = new TCanvas("c_h_E_miss_src","c_h_E_miss_src",1200,400);
   h_E_miss_src->SetStats(0);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_E_miss_src->Draw("HIST");
   c_E_miss_src->SaveAs(Form("./reco_plot_%3.1f_%2.0f/47_h_E_miss_src.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_P_miss_src = new TCanvas("c_h_P_miss_src","c_h_P_miss_src",1200,400);
   h_P_miss_src->SetStats(0);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_P_miss_src->Draw("HIST");
   c_P_miss_src->SaveAs(Form("./reco_plot_%3.1f_%2.0f/47_h_P_miss_src.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Angle_Pfrag_Prel_cos = new TCanvas("c_h_Angle_Pfrag_Prel_cos","c_h_Angle_Pfrag_Prel_cos",1200,1200);
   h_Angle_Pfrag_Prel_cos->SetStats(0);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Angle_Pfrag_Prel_cos->Draw("HIST");
   c_Angle_Pfrag_Prel_cos->SaveAs(Form("./reco_plot_%3.1f_%2.0f/47_h_Angle_Pfrag_Prel_cos.pdf",Boost_resolution,TOF_resolution));

   TCanvas *c_Angle_Pmiss_Pn_cos = new TCanvas("c_h_Angle_Pmiss_Pn_cos","c_h_Angle_Pmiss_Pn_cos",1200,1200);
   h_Angle_Pmiss_Pn_cos->SetStats(0);
   gStyle->SetOptFit(111);
   gStyle->SetOptStat(1111);
   h_Angle_Pmiss_Pn_cos->Draw("HIST");
   c_Angle_Pmiss_Pn_cos->SaveAs(Form("./reco_plot_%3.1f_%2.0f/47_h_Angle_Pmiss_Pn_cos.pdf",Boost_resolution,TOF_resolution));

   std::cout<<std::endl;
   std::cout<<"TOF Left Mean(ns): "<<TOF_Mean_left/TOF_Counts<<std::endl;
   std::cout<<"TOF Right Mean(ns): "<<TOF_Mean_right/TOF_Counts<<std::endl;
   std::cout<<std::endl;

   TFile *rootFile = new TFile("histogram.root", "RECREATE");
   h_vertex_x->Write();
   h_vertex_y->Write();
   h_vertex_z->Write();
   h_vertex_z_with_cut->Write();
   h_p1x->Write();
   h_p1y->Write();
   h_p1z->Write();
   h_E1->Write();
   h_p2x->Write();
   h_p2y->Write();
   h_p2z->Write();
   h_E2->Write();
   h_p1xp2x->Write();
   h_p1yp2y->Write();
   h_p1zp2z->Write();
   h_P_miss->Write();
   h_E_miss->Write();
   h_M_miss->Write();
   h_M_miss_square->Write();
   h_opening_theta->Write();
   h_opening_phi->Write();
   h_scattering_angle->Write();
   h_E_theta->Write();
   h_E_theta_all->Write();
   h_theta12->Write();
   h_theta12_all->Write();
   h_phi12->Write();
   h_phi12_all->Write();
   h_tof_pos_left->Write();
   h_tof_pos_right->Write();

   rootFile->Close();
   delete rootFile;
   
   TFile *rootFile_phi = new TFile("phi_distribution.root", "RECREATE");
   h_phi1->Write();
   h_phi2->Write();
   rootFile_phi->Close();
   delete rootFile_phi;

   // cout<<fitFunc_M_miss->GetParameter(0)<<"\t"<<fitFunc_M_miss->GetParameter(1)<<"\t"<<fitFunc_M_miss->GetParameter(2)<<endl;

   std::cout<<"Total events for generator input: "<<NEvents_total<<std::endl;
   std::cout<<"Events recorded by all TOF modules: "<<NEvents_all_TOF<<std::endl;
   std::cout<<"Events recorded by good TOF modules: "<<NEvents_No_cuts<<std::endl;
   std::cout<<"Events recorded by good TOF modules (after beta cut): "<<NEvents_With_cuts<<std::endl;

   std::cout<<std::endl;
   std::cout<<"Good Gragment events: "<<GoodFragEvents<<std::endl;
   std::cout<<std::endl;
   std::cout<<NormFactor_weight<<std::endl;

   cout<<"\n"<<Arm_And<<"\t"<<CSC_After_Mag<<"\n"<<endl;

   delete h_p2x_diff_1;
   delete h_p2y_diff_1;
   delete h_p2z_diff_1;
   delete h_p2_diff_1;
   delete h_p1x_diff_1;
   delete h_p1y_diff_1;
   delete h_p1z_diff_1;
   delete h_p1_diff_1;
   delete h_p_miss_x_diff_1;
   delete h_p_miss_y_diff_1;
   delete h_p_miss_z_diff_1;
   delete h_p_miss_diff_1;
   delete h_E_miss_diff_1;
   delete h_M_miss_diff_1;
   delete h_M_miss_square_diff_1;
   delete h_p2x_diff;
   delete h_p2y_diff;
   delete h_p2z_diff;
   delete h_p2_diff;
   delete h_p1x_diff;
   delete h_p1y_diff;
   delete h_p1z_diff;
   delete h_p1_diff;
   delete h_p_miss_x_diff;
   delete h_p_miss_y_diff;
   delete h_p_miss_z_diff;
   delete h_p_miss_diff;
   delete h_E_miss_diff;
   delete h_M_miss_diff;
   delete h_M_miss_square_diff;
   delete h_p1x;
   delete h_p1x_1;
   delete h_p1y;
   delete h_p1y_1;
   delete h_p1z;
   delete h_p1z_1;
   delete h_E1;
   delete h_E1_1;
   delete h_p2x;
   delete h_p2x_1;
   delete h_p2y;
   delete h_p2y_1;
   delete h_p2z;
   delete h_p2z_1;
   delete h_E2;
   delete h_E2_1;
   delete h_p1xp2x;
   delete h_p1xp2x_1;
   delete h_p1xp2x_2;
   delete h_p1yp2y;
   delete h_p1yp2y_1;
   delete h_p1yp2y_2;
   delete h_p1zp2z;
   delete h_p1zp2z_1;
   delete h_p1zp2z_2;
   delete h_P_miss_1;
   delete h_P_miss_2;
   delete h_P_miss;
   delete h_E_miss;
   delete h_E_miss_1;
   delete h_E_miss_2;
   delete h_M_miss;
   delete h_M_miss_1;
   delete h_M_miss_2;
   delete h_M_miss_square;
   delete h_M_miss_square_1;
   delete h_M_miss_square_2;
   delete h_opening_theta;
   delete h_opening_theta_1;
   delete h_opening_theta_2;
   delete h_opening_phi;
   delete h_opening_phi_1;
   delete h_opening_phi_2;
   delete h_scattering_angle;
   delete h_scattering_angle_1;
   delete h_scattering_angle_2;
   delete h_E_theta;
   delete h_E_theta_all;
   delete h_theta12;
   delete h_theta12_all;
   delete h_phi1;
   delete h_phi2;
   delete h_phi12;
   delete h_phi12_all;
   delete h_vertex_x;
   delete h_vertex_y;
   delete h_vertex_z;
   delete h_vertex_z_with_cut;
   delete h_Eloss_left;
   delete h_Eloss_right;
   delete h_Eloss_total;
   delete h_Eloss_total_Px;
   delete h_Eloss_total_Py;
   delete h_Eloss_total_Pz;
   delete h_tof_pos_left;
   delete h_tof_pos_right;

   delete c_p1x_diff_1;
   delete c_p1y_diff_1;
   delete c_p1z_diff_1;
   delete c_p1_diff_1;
   delete c_p2x_diff_1;
   delete c_p2y_diff_1;
   delete c_p2z_diff_1;
   delete c_p2_diff_1;
   delete c_p_miss_x_diff_1;
   delete c_p_miss_y_diff_1;
   delete c_p_miss_z_diff_1;
   delete c_p_miss_diff_1;
   delete c_E_miss_diff_1;
   delete c_M_miss_diff_1;
   delete c_M_miss_square_diff_1;
   delete c_p1x_diff;
   delete c_p1y_diff;
   delete c_p1z_diff;
   delete c_p1_diff;
   delete c_p2x_diff;
   delete c_p2y_diff;
   delete c_p2z_diff;
   delete c_p2_diff;
   delete c_p_miss_x_diff;
   delete c_p_miss_y_diff;
   delete c_p_miss_z_diff;
   delete c_p_miss_diff;
   delete c_E_miss_diff;
   delete c_M_miss_diff;
   delete c_M_miss_square_diff;
   delete c_p1x;
   delete c_p1y;
   delete c_p1z;
   delete c_E1;
   delete c_p2x;
   delete c_p2y;
   delete c_p2z;
   delete c_E2;
   delete c_p1xp2x;
   delete c_p1yp2y;
   delete c_p1zp2z;
   delete c_P_miss;
   delete c_E_miss;
   delete c_M_miss;
   delete c_M_miss_square;
   delete c_opening_theta;
   delete c_opening_phi;
   delete c_scattering_angle;
   delete c_E_theta;
   delete c_E_theta_all;
   delete c_theta12;
   delete c_theta12_all;
   delete c_phi1;
   delete c_phi2;
   delete c_phi12;
   delete c_phi12_all;
   delete c_vertex_x;
   delete c_vertex_y;
   delete c_vertex_z;
   delete c_vertex_z_with_cut;
   // delete c_Eloss_left;
   // delete c_Eloss_right;
   // delete c_Eloss_total;
   // delete c_Eloss_total_Px;
   // delete c_Eloss_total_Py;
   // delete c_Eloss_total_Pz;
   delete c_tof_pos_left;
   delete c_tof_pos_right;

   // return sigma_M_miss;
   return 0.;
}
