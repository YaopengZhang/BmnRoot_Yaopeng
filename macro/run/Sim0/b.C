
void b(){
    // TFile* filein_new = new TFile("TreeHist.root");
    TFile* filein_new = TFile::Open("TreeHist.root");

    // TH1F *h17 = (TH1F*)gROOT->FindObject("[(PmissT-PmissG)/PmissT*100%]");
    // TH1F *h17 = (TH1F*)filein_new->Get("[(PmissT-PmissG)/PmissT*100%]");

    TH1F *h17 = (TH1F*)filein_new->Get("PmissT_PmissG_PmissT_100_vs_PmissT");

    TCanvas *c_Pmiss_diff_ratio_frag = new TCanvas("c_Pmiss_diff_ratio_frag","Pmiss_diff_ratio_frag",1200,800);
    h17->Draw();
    c_Pmiss_diff_ratio_frag->SaveAs("test.pdf");
}



