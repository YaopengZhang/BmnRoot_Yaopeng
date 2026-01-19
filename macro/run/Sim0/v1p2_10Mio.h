//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Dec  5 11:33:40 2024 by ROOT version 6.26/02
// from TChain T/
//////////////////////////////////////////////////////////

#ifndef v1p2_10Mio_h
#define v1p2_10Mio_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class v1p2_10Mio {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        weight;
   Double_t        p3[3];
   Double_t        p4[3];
   Double_t        pAm1[3];

   // List of branches
   TBranch        *b_weight;   //!
   TBranch        *b_p3;   //!
   TBranch        *b_p4;   //!
   TBranch        *b_pAm1;   //!

   v1p2_10Mio(TTree *tree=0);
   virtual ~v1p2_10Mio();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef v1p2_10Mio_cxx
v1p2_10Mio::v1p2_10Mio(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("T",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("T","");
      chain->Add("gen_v1p2_10Mio_job1.root/T");
      chain->Add("gen_v1p2_10Mio_job2.root/T");
      chain->Add("gen_v1p2_10Mio_job3.root/T");
      chain->Add("gen_v1p2_10Mio_job4.root/T");
      chain->Add("gen_v1p2_10Mio_job5.root/T");
      chain->Add("gen_v1p2_10Mio_job6.root/T");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

v1p2_10Mio::~v1p2_10Mio()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t v1p2_10Mio::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t v1p2_10Mio::LoadTree(Long64_t entry)
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

void v1p2_10Mio::Init(TTree *tree)
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

   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("p3", p3, &b_p3);
   fChain->SetBranchAddress("p4", p4, &b_p4);
   fChain->SetBranchAddress("pAm1", pAm1, &b_pAm1);
   Notify();
}

Bool_t v1p2_10Mio::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void v1p2_10Mio::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t v1p2_10Mio::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef v1p2_10Mio_cxx
