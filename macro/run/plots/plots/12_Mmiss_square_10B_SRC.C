#ifdef __CLING__
#pragma cling optimize(0)
#endif
void 12_Mmiss_square_10B_SRC()
{
//=========Macro generated from canvas: c_hist/c_hist
//=========  (Tue Jul  9 15:13:47 2024) by ROOT version 6.26/02
   TCanvas *c_hist = new TCanvas("c_hist", "c_hist",0,0,1200,800);
   c_hist->Range(-2.875,-18.0625,5.875,162.5625);
   c_hist->SetFillColor(0);
   c_hist->SetBorderMode(0);
   c_hist->SetBorderSize(2);
   c_hist->SetFrameBorderMode(0);
   c_hist->SetFrameBorderMode(0);
   
   TH1F *hMMiss2Exclusive_10B_cutSRC__31 = new TH1F("hMMiss2Exclusive_10B_cutSRC__31","Exclusive Missing Mass Square for ^{10}B SRC",50,-2,5);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(8,2);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(10,2);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(12,2);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(13,6);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(14,6);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(15,10);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(16,12);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(17,22);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(18,39);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(19,59);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(20,56);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(21,48);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(22,20);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(23,4);
   hMMiss2Exclusive_10B_cutSRC__31->SetBinContent(24,1);
   hMMiss2Exclusive_10B_cutSRC__31->SetMinimum(0);
   hMMiss2Exclusive_10B_cutSRC__31->SetMaximum(144.5);
   hMMiss2Exclusive_10B_cutSRC__31->SetEntries(289);
   hMMiss2Exclusive_10B_cutSRC__31->SetStats(0);
   hMMiss2Exclusive_10B_cutSRC__31->SetLineColor(6);
   hMMiss2Exclusive_10B_cutSRC__31->GetXaxis()->SetTitle("Mmiss^{2} (GeV^{2}/c^{4})");
   hMMiss2Exclusive_10B_cutSRC__31->GetXaxis()->CenterTitle(true);
   hMMiss2Exclusive_10B_cutSRC__31->GetXaxis()->SetLabelFont(42);
   hMMiss2Exclusive_10B_cutSRC__31->GetXaxis()->SetTitleSize(0.06);
   hMMiss2Exclusive_10B_cutSRC__31->GetXaxis()->SetTitleOffset(0.7);
   hMMiss2Exclusive_10B_cutSRC__31->GetXaxis()->SetTitleFont(32);
   hMMiss2Exclusive_10B_cutSRC__31->GetYaxis()->SetTitle("Counts");
   hMMiss2Exclusive_10B_cutSRC__31->GetYaxis()->CenterTitle(true);
   hMMiss2Exclusive_10B_cutSRC__31->GetYaxis()->SetLabelFont(42);
   hMMiss2Exclusive_10B_cutSRC__31->GetYaxis()->SetTitleSize(0.04);
   hMMiss2Exclusive_10B_cutSRC__31->GetYaxis()->SetTitleFont(32);
   hMMiss2Exclusive_10B_cutSRC__31->GetZaxis()->SetLabelFont(42);
   hMMiss2Exclusive_10B_cutSRC__31->GetZaxis()->SetTitleOffset(1);
   hMMiss2Exclusive_10B_cutSRC__31->GetZaxis()->SetTitleFont(42);
   hMMiss2Exclusive_10B_cutSRC__31->Draw("E");
   
   TH1F *__32 = new TH1F("__32","",1,0,1);
   __32->SetDirectory(0);
   __32->SetLineColor(9);
   __32->GetXaxis()->SetLabelFont(42);
   __32->GetXaxis()->SetTitleOffset(1);
   __32->GetXaxis()->SetTitleFont(42);
   __32->GetYaxis()->SetLabelFont(42);
   __32->GetYaxis()->SetTitleFont(42);
   __32->GetZaxis()->SetLabelFont(42);
   __32->GetZaxis()->SetTitleOffset(1);
   __32->GetZaxis()->SetTitleFont(42);
   __32->Draw("SameE");
   
   TH1F *h_Mmiss_excl__33 = new TH1F("h_Mmiss_excl__33","Mmiss_excl",50,-2,5);
   h_Mmiss_excl__33->SetBinContent(11,60.40038);
   h_Mmiss_excl__33->SetBinContent(12,99.80122);
   h_Mmiss_excl__33->SetBinContent(13,49.69838);
   h_Mmiss_excl__33->SetBinContent(14,534.9426);
   h_Mmiss_excl__33->SetBinContent(15,1195.546);
   h_Mmiss_excl__33->SetBinContent(16,2971.613);
   h_Mmiss_excl__33->SetBinContent(17,6190.072);
   h_Mmiss_excl__33->SetBinContent(18,18499.36);
   h_Mmiss_excl__33->SetBinContent(19,47003.96);
   h_Mmiss_excl__33->SetBinContent(20,152733.5);
   h_Mmiss_excl__33->SetBinContent(21,259924.7);
   h_Mmiss_excl__33->SetBinContent(22,76021.31);
   h_Mmiss_excl__33->SetBinContent(23,14444.63);
   h_Mmiss_excl__33->SetBinContent(24,855.1803);
   h_Mmiss_excl__33->SetBinError(11,42.77131);
   h_Mmiss_excl__33->SetBinError(12,81.85284);
   h_Mmiss_excl__33->SetBinError(13,35.45819);
   h_Mmiss_excl__33->SetBinError(14,140.8146);
   h_Mmiss_excl__33->SetBinError(15,254.7131);
   h_Mmiss_excl__33->SetBinError(16,386.8801);
   h_Mmiss_excl__33->SetBinError(17,496.5102);
   h_Mmiss_excl__33->SetBinError(18,961.9552);
   h_Mmiss_excl__33->SetBinError(19,1542.798);
   h_Mmiss_excl__33->SetBinError(20,2627.646);
   h_Mmiss_excl__33->SetBinError(21,3437.779);
   h_Mmiss_excl__33->SetBinError(22,1786.152);
   h_Mmiss_excl__33->SetBinError(23,711.0773);
   h_Mmiss_excl__33->SetBinError(24,170.5864);
   h_Mmiss_excl__33->SetNormFactor(289);
   h_Mmiss_excl__33->SetEntries(18072);
   h_Mmiss_excl__33->GetXaxis()->SetLabelFont(42);
   h_Mmiss_excl__33->GetXaxis()->SetTitleOffset(1);
   h_Mmiss_excl__33->GetXaxis()->SetTitleFont(42);
   h_Mmiss_excl__33->GetYaxis()->SetLabelFont(42);
   h_Mmiss_excl__33->GetYaxis()->SetTitleFont(42);
   h_Mmiss_excl__33->GetZaxis()->SetLabelFont(42);
   h_Mmiss_excl__33->GetZaxis()->SetTitleOffset(1);
   h_Mmiss_excl__33->GetZaxis()->SetTitleFont(42);
   h_Mmiss_excl__33->Draw("SameHIST");
   
   TPaveText *pt = new TPaveText(0.15,0.9234974,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Exclusive Missing Mass Square for ^{10}B SRC");
   pt->Draw();
   c_hist->Modified();
   c_hist->cd();
   c_hist->SetSelected(c_hist);
}
