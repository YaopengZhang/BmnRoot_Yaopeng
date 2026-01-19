//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue May 21 15:01:49 2024 by ROOT version 6.26/02
// from TTree genT/Generator Tree
// found on file: yaopeng_gcf_10M_2p892.root
//////////////////////////////////////////////////////////

#ifndef newTree_h
#define newTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class newTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           lead_type;
   Int_t           rec_type;
   Double_t        p3[3];
   Double_t        p4[3];
   Double_t        pRec[3];
   Double_t        pAm2[3];
   Double_t        pRel_Mag;
   Double_t        s;
   Double_t        t;
   Double_t        u;
   Double_t        theta_cm;
   Double_t        weight;
   Double_t        lcweight;

   // List of branches
   TBranch        *b_lead_type;   //!
   TBranch        *b_rec_type;   //!
   TBranch        *b_p3;   //!
   TBranch        *b_p4;   //!
   TBranch        *b_pRec;   //!
   TBranch        *b_pAm2;   //!
   TBranch        *b_pRel_Mag;   //!
   TBranch        *b_s;   //!
   TBranch        *b_t;   //!
   TBranch        *b_u;   //!
   TBranch        *b_theta_cm;   //!
   TBranch        *b_weight;   //!
   TBranch        *b_lcweight;   //!

   newTree(TTree *tree=0);
   virtual ~newTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef newTree_cxx
newTree::newTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("yaopeng_gcf_10M_2p892.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("yaopeng_gcf_10M_2p892.root");
      }
      f->GetObject("genT",tree);

   }
   Init(tree);
}

newTree::~newTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t newTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t newTree::LoadTree(Long64_t entry)
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

void newTree::Init(TTree *tree)
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

   fChain->SetBranchAddress("lead_type", &lead_type, &b_lead_type);
   fChain->SetBranchAddress("rec_type", &rec_type, &b_rec_type);
   fChain->SetBranchAddress("p3", p3, &b_p3);
   fChain->SetBranchAddress("p4", p4, &b_p4);
   fChain->SetBranchAddress("pRec", pRec, &b_pRec);
   fChain->SetBranchAddress("pAm2", pAm2, &b_pAm2);
   fChain->SetBranchAddress("pRel_Mag", &pRel_Mag, &b_pRel_Mag);
   fChain->SetBranchAddress("s", &s, &b_s);
   fChain->SetBranchAddress("t", &t, &b_t);
   fChain->SetBranchAddress("u", &u, &b_u);
   fChain->SetBranchAddress("theta_cm", &theta_cm, &b_theta_cm);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("lcweight", &lcweight, &b_lcweight);
   Notify();
}

Bool_t newTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void newTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t newTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef newTree_cxx
