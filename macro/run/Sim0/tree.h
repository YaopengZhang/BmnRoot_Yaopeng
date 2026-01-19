//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Aug 18 15:48:20 2023 by ROOT version 6.24/06
// from TTree tree/Tree with simulated QFS kinematics
// found on file: qfs_yaopeng_2.root
//////////////////////////////////////////////////////////

#ifndef tree_h
#define tree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class tree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        theta_1;
   Double_t        theta_2;
   Double_t        theta_B;
   Double_t        phi_1;
   Double_t        phi_2;
   Double_t        phi_B;
   Double_t        P1x;
   Double_t        P1y;
   Double_t        P1z;
   Double_t        P2x;
   Double_t        P2y;
   Double_t        P2z;
   Double_t        PBx;
   Double_t        PBy;
   Double_t        PBz_lab;
   Double_t        PBz_rf;
   Double_t        E1;
   Double_t        E2;
   Double_t        EB;
   Double_t        th1_cm;
   Double_t        th2_cm;
   Double_t        P1_cm;
   Double_t        P2_cm;
   Double_t        Moff;
   Double_t        Mandelstam_T;
   Double_t        Mandelstam_S;
   Double_t        Mandelstam_U;
   Double_t        Opang;
   Double_t        Dif_phi;

   // List of branches
   TBranch        *b_theta_1;   //!
   TBranch        *b_theta_2;   //!
   TBranch        *b_theta_B;   //!
   TBranch        *b_phi_1;   //!
   TBranch        *b_phi_2;   //!
   TBranch        *b_phi_B;   //!
   TBranch        *b_P1x;   //!
   TBranch        *b_P1y;   //!
   TBranch        *b_P1z;   //!
   TBranch        *b_P2x;   //!
   TBranch        *b_P2y;   //!
   TBranch        *b_P2z;   //!
   TBranch        *b_PBx;   //!
   TBranch        *b_PBy;   //!
   TBranch        *b_PBz_lab;   //!
   TBranch        *b_PBz_rf;   //!
   TBranch        *b_E1;   //!
   TBranch        *b_E2;   //!
   TBranch        *b_EB;   //!
   TBranch        *b_th1_cm;   //!
   TBranch        *b_th2_cm;   //!
   TBranch        *b_P1_cm;   //!
   TBranch        *b_P2_cm;   //!
   TBranch        *b_Moff;   //!
   TBranch        *b_Mandelstam_T;   //!
   TBranch        *b_Mandelstam_S;   //!
   TBranch        *b_Mandelstam_U;   //!
   TBranch        *b_Opang;   //!
   TBranch        *b_Dif_phi;   //!

   tree(TTree *tree=0);
   virtual ~tree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef tree_cxx
tree::tree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("qfs_yaopeng_2.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("qfs_yaopeng_2.root");
      }
      f->GetObject("tree",tree);

   }
   Init(tree);
}

tree::~tree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t tree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t tree::LoadTree(Long64_t entry)
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

void tree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("theta_1", &theta_1, &b_theta_1);
   fChain->SetBranchAddress("theta_2", &theta_2, &b_theta_2);
   fChain->SetBranchAddress("theta_B", &theta_B, &b_theta_B);
   fChain->SetBranchAddress("phi_1", &phi_1, &b_phi_1);
   fChain->SetBranchAddress("phi_2", &phi_2, &b_phi_2);
   fChain->SetBranchAddress("phi_B", &phi_B, &b_phi_B);
   fChain->SetBranchAddress("P1x", &P1x, &b_P1x);
   fChain->SetBranchAddress("P1y", &P1y, &b_P1y);
   fChain->SetBranchAddress("P1z", &P1z, &b_P1z);
   fChain->SetBranchAddress("P2x", &P2x, &b_P2x);
   fChain->SetBranchAddress("P2y", &P2y, &b_P2y);
   fChain->SetBranchAddress("P2z", &P2z, &b_P2z);
   fChain->SetBranchAddress("PBx", &PBx, &b_PBx);
   fChain->SetBranchAddress("PBy", &PBy, &b_PBy);
   fChain->SetBranchAddress("PBz_lab", &PBz_lab, &b_PBz_lab);
   fChain->SetBranchAddress("PBz_rf", &PBz_rf, &b_PBz_rf);
   fChain->SetBranchAddress("E1", &E1, &b_E1);
   fChain->SetBranchAddress("E2", &E2, &b_E2);
   fChain->SetBranchAddress("EB", &EB, &b_EB);
   fChain->SetBranchAddress("th1_cm", &th1_cm, &b_th1_cm);
   fChain->SetBranchAddress("th2_cm", &th2_cm, &b_th2_cm);
   fChain->SetBranchAddress("P1_cm", &P1_cm, &b_P1_cm);
   fChain->SetBranchAddress("P2_cm", &P2_cm, &b_P2_cm);
   fChain->SetBranchAddress("Moff", &Moff, &b_Moff);
   fChain->SetBranchAddress("Mandelstam_T", &Mandelstam_T, &b_Mandelstam_T);
   fChain->SetBranchAddress("Mandelstam_S", &Mandelstam_S, &b_Mandelstam_S);
   fChain->SetBranchAddress("Mandelstam_U", &Mandelstam_U, &b_Mandelstam_U);
   fChain->SetBranchAddress("Opang", &Opang, &b_Opang);
   fChain->SetBranchAddress("Dif_phi", &Dif_phi, &b_Dif_phi);
   Notify();
}

Bool_t tree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void tree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t tree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef tree_cxx
