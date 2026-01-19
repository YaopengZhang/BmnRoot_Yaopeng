#ifdef __CLING__
#pragma cling optimize(0)
#endif
void 10_cos_pmiss_prec()
{
//=========Macro generated from canvas: c_hist/c_hist
//=========  (Tue Jul  9 15:13:47 2024) by ROOT version 6.26/02
   TCanvas *c_hist = new TCanvas("c_hist", "c_hist",0,0,1200,800);
   c_hist->Range(-1.1375,-30.10417,0.2375,270.9375);
   c_hist->SetFillColor(0);
   c_hist->SetBorderMode(0);
   c_hist->SetBorderSize(2);
   c_hist->SetFrameBorderMode(0);
   c_hist->SetFrameBorderMode(0);
   
   TH1F *hCosThetaRel_10B__25 = new TH1F("hCosThetaRel_10B__25","cos(pmiss,prec) Opening Angle for ^{10}B SRC",11,-1,0.1);
   hCosThetaRel_10B__25->SetBinContent(1,193);
   hCosThetaRel_10B__25->SetBinContent(2,40);
   hCosThetaRel_10B__25->SetBinContent(3,11);
   hCosThetaRel_10B__25->SetBinContent(4,6);
   hCosThetaRel_10B__25->SetBinContent(5,8);
   hCosThetaRel_10B__25->SetBinContent(6,4);
   hCosThetaRel_10B__25->SetBinContent(7,2);
   hCosThetaRel_10B__25->SetBinContent(8,3);
   hCosThetaRel_10B__25->SetBinContent(9,5);
   hCosThetaRel_10B__25->SetBinContent(10,1);
   hCosThetaRel_10B__25->SetBinContent(11,2);
   hCosThetaRel_10B__25->SetBinContent(12,14);
   hCosThetaRel_10B__25->SetMinimum(0);
   hCosThetaRel_10B__25->SetMaximum(240.8333);
   hCosThetaRel_10B__25->SetEntries(289);
   hCosThetaRel_10B__25->SetStats(0);
   hCosThetaRel_10B__25->SetLineColor(6);
   hCosThetaRel_10B__25->GetXaxis()->SetTitle("cos(pmiss,prec)");
   hCosThetaRel_10B__25->GetXaxis()->CenterTitle(true);
   hCosThetaRel_10B__25->GetXaxis()->SetLabelFont(42);
   hCosThetaRel_10B__25->GetXaxis()->SetTitleSize(0.06);
   hCosThetaRel_10B__25->GetXaxis()->SetTitleOffset(0.7);
   hCosThetaRel_10B__25->GetXaxis()->SetTitleFont(32);
   hCosThetaRel_10B__25->GetYaxis()->SetTitle("Counts");
   hCosThetaRel_10B__25->GetYaxis()->CenterTitle(true);
   hCosThetaRel_10B__25->GetYaxis()->SetLabelFont(42);
   hCosThetaRel_10B__25->GetYaxis()->SetTitleSize(0.04);
   hCosThetaRel_10B__25->GetYaxis()->SetTitleFont(32);
   hCosThetaRel_10B__25->GetZaxis()->SetLabelFont(42);
   hCosThetaRel_10B__25->GetZaxis()->SetTitleOffset(1);
   hCosThetaRel_10B__25->GetZaxis()->SetTitleFont(42);
   hCosThetaRel_10B__25->Draw("E");
   
   TH1F *__26 = new TH1F("__26","",1,0,1);
   __26->SetDirectory(0);
   __26->SetLineColor(9);
   __26->GetXaxis()->SetLabelFont(42);
   __26->GetXaxis()->SetTitleOffset(1);
   __26->GetXaxis()->SetTitleFont(42);
   __26->GetYaxis()->SetLabelFont(42);
   __26->GetYaxis()->SetTitleFont(42);
   __26->GetZaxis()->SetLabelFont(42);
   __26->GetZaxis()->SetTitleOffset(1);
   __26->GetZaxis()->SetTitleFont(42);
   __26->Draw("SameE");
   
   TH1F *h_Angle_Pmiss_Pn_cos__27 = new TH1F("h_Angle_Pmiss_Pn_cos__27","Opening angle berween P_{miss} and P_{n} in ^{12}C reference system",11,-1,0.1);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(1,318131.5);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(2,132428.3);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(3,61467.45);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(4,29621.72);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(5,18554.67);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(6,8489.415);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(7,3989.932);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(8,3188.148);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(9,1755.079);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(10,1424.468);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(11,502.4974);
   h_Angle_Pmiss_Pn_cos__27->SetBinContent(12,1031.113);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(1,3674.207);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(2,2397.667);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(3,1693.264);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(4,1271.833);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(5,1016.32);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(6,717.6657);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(7,498.2969);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(8,483.9169);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(9,348.6225);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(10,472.7008);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(11,212.4153);
   h_Angle_Pmiss_Pn_cos__27->SetBinError(12,300.5999);
   h_Angle_Pmiss_Pn_cos__27->SetNormFactor(289);
   h_Angle_Pmiss_Pn_cos__27->SetEntries(18072);
   h_Angle_Pmiss_Pn_cos__27->GetXaxis()->SetTitle("cos(#theta_{p_{miss},p_{n}})");
   h_Angle_Pmiss_Pn_cos__27->GetXaxis()->CenterTitle(true);
   h_Angle_Pmiss_Pn_cos__27->GetXaxis()->SetLabelFont(42);
   h_Angle_Pmiss_Pn_cos__27->GetXaxis()->SetTitleSize(0.06);
   h_Angle_Pmiss_Pn_cos__27->GetXaxis()->SetTitleOffset(0.7);
   h_Angle_Pmiss_Pn_cos__27->GetXaxis()->SetTitleFont(32);
   h_Angle_Pmiss_Pn_cos__27->GetYaxis()->SetTitle("Counts");
   h_Angle_Pmiss_Pn_cos__27->GetYaxis()->CenterTitle(true);
   h_Angle_Pmiss_Pn_cos__27->GetYaxis()->SetLabelFont(42);
   h_Angle_Pmiss_Pn_cos__27->GetYaxis()->SetTitleSize(0.04);
   h_Angle_Pmiss_Pn_cos__27->GetYaxis()->SetTitleFont(32);
   h_Angle_Pmiss_Pn_cos__27->GetZaxis()->SetLabelFont(42);
   h_Angle_Pmiss_Pn_cos__27->GetZaxis()->SetTitleOffset(1);
   h_Angle_Pmiss_Pn_cos__27->GetZaxis()->SetTitleFont(42);
   h_Angle_Pmiss_Pn_cos__27->Draw("SameHIST");
   
   TPaveText *pt = new TPaveText(0.15,0.9234974,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("cos(pmiss,prec) Opening Angle for ^{10}B SRC");
   pt->Draw();
   c_hist->Modified();
   c_hist->cd();
   c_hist->SetSelected(c_hist);
}
