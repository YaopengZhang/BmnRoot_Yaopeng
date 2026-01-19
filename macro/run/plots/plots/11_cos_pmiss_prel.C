#ifdef __CLING__
#pragma cling optimize(0)
#endif
void 11_cos_pmiss_prel()
{
//=========Macro generated from canvas: c_hist/c_hist
//=========  (Tue Jul  9 15:13:47 2024) by ROOT version 6.26/02
   TCanvas *c_hist = new TCanvas("c_hist", "c_hist",0,0,1200,800);
   c_hist->Range(-1.25,-12.04167,1.25,108.375);
   c_hist->SetFillColor(0);
   c_hist->SetBorderMode(0);
   c_hist->SetBorderSize(2);
   c_hist->SetFrameBorderMode(0);
   c_hist->SetFrameBorderMode(0);
   
   TH1F *hCosThetaCM_10B__28 = new TH1F("hCosThetaCM_10B__28","cos(p10B,prel) opening angle for ^{10}B SRC",11,-1,1);
   hCosThetaCM_10B__28->SetBinContent(1,70);
   hCosThetaCM_10B__28->SetBinContent(2,24);
   hCosThetaCM_10B__28->SetBinContent(3,22);
   hCosThetaCM_10B__28->SetBinContent(4,12);
   hCosThetaCM_10B__28->SetBinContent(5,16);
   hCosThetaCM_10B__28->SetBinContent(6,15);
   hCosThetaCM_10B__28->SetBinContent(7,17);
   hCosThetaCM_10B__28->SetBinContent(8,26);
   hCosThetaCM_10B__28->SetBinContent(9,17);
   hCosThetaCM_10B__28->SetBinContent(10,25);
   hCosThetaCM_10B__28->SetBinContent(11,45);
   hCosThetaCM_10B__28->SetMinimum(0);
   hCosThetaCM_10B__28->SetMaximum(96.33333);
   hCosThetaCM_10B__28->SetEntries(289);
   hCosThetaCM_10B__28->SetStats(0);
   hCosThetaCM_10B__28->SetLineColor(6);
   hCosThetaCM_10B__28->GetXaxis()->SetTitle("cos(pmiss,prel)");
   hCosThetaCM_10B__28->GetXaxis()->CenterTitle(true);
   hCosThetaCM_10B__28->GetXaxis()->SetLabelFont(42);
   hCosThetaCM_10B__28->GetXaxis()->SetTitleSize(0.06);
   hCosThetaCM_10B__28->GetXaxis()->SetTitleOffset(0.7);
   hCosThetaCM_10B__28->GetXaxis()->SetTitleFont(32);
   hCosThetaCM_10B__28->GetYaxis()->SetTitle("Counts");
   hCosThetaCM_10B__28->GetYaxis()->CenterTitle(true);
   hCosThetaCM_10B__28->GetYaxis()->SetLabelFont(42);
   hCosThetaCM_10B__28->GetYaxis()->SetTitleSize(0.04);
   hCosThetaCM_10B__28->GetYaxis()->SetTitleFont(32);
   hCosThetaCM_10B__28->GetZaxis()->SetLabelFont(42);
   hCosThetaCM_10B__28->GetZaxis()->SetTitleOffset(1);
   hCosThetaCM_10B__28->GetZaxis()->SetTitleFont(42);
   hCosThetaCM_10B__28->Draw("E");
   
   TH1F *__29 = new TH1F("__29","",1,0,1);
   __29->SetDirectory(0);
   __29->SetLineColor(9);
   __29->GetXaxis()->SetLabelFont(42);
   __29->GetXaxis()->SetTitleOffset(1);
   __29->GetXaxis()->SetTitleFont(42);
   __29->GetYaxis()->SetLabelFont(42);
   __29->GetYaxis()->SetTitleFont(42);
   __29->GetZaxis()->SetLabelFont(42);
   __29->GetZaxis()->SetTitleOffset(1);
   __29->GetZaxis()->SetTitleFont(42);
   __29->Draw("SameE");
   
   TH1F *h_Angle_Pfrag_Prel_cos__30 = new TH1F("h_Angle_Pfrag_Prel_cos__30","Opening angle berween P_{frag} and P_{rel} in ^{12}C reference system",11,-1,1);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(1,48520.88);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(2,51898.25);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(3,53667.06);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(4,57831.94);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(5,59735.57);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(6,61238.02);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(7,58137.84);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(8,58388.19);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(9,48932.19);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(10,45456.99);
   h_Angle_Pfrag_Prel_cos__30->SetBinContent(11,36777.98);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(1,1635.647);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(2,1664.647);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(3,1630.613);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(4,1690.6);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(5,1677.054);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(6,1687.452);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(7,1533.447);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(8,1507.334);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(9,1367.469);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(10,1323.583);
   h_Angle_Pfrag_Prel_cos__30->SetBinError(11,1172.778);
   h_Angle_Pfrag_Prel_cos__30->SetNormFactor(289);
   h_Angle_Pfrag_Prel_cos__30->SetEntries(18072);
   h_Angle_Pfrag_Prel_cos__30->GetXaxis()->SetTitle("cos(#theta_{p_{frag},p_{rel}})");
   h_Angle_Pfrag_Prel_cos__30->GetXaxis()->CenterTitle(true);
   h_Angle_Pfrag_Prel_cos__30->GetXaxis()->SetLabelFont(42);
   h_Angle_Pfrag_Prel_cos__30->GetXaxis()->SetTitleSize(0.06);
   h_Angle_Pfrag_Prel_cos__30->GetXaxis()->SetTitleOffset(0.7);
   h_Angle_Pfrag_Prel_cos__30->GetXaxis()->SetTitleFont(32);
   h_Angle_Pfrag_Prel_cos__30->GetYaxis()->SetTitle("Counts");
   h_Angle_Pfrag_Prel_cos__30->GetYaxis()->CenterTitle(true);
   h_Angle_Pfrag_Prel_cos__30->GetYaxis()->SetLabelFont(42);
   h_Angle_Pfrag_Prel_cos__30->GetYaxis()->SetTitleSize(0.04);
   h_Angle_Pfrag_Prel_cos__30->GetYaxis()->SetTitleFont(32);
   h_Angle_Pfrag_Prel_cos__30->GetZaxis()->SetLabelFont(42);
   h_Angle_Pfrag_Prel_cos__30->GetZaxis()->SetTitleOffset(1);
   h_Angle_Pfrag_Prel_cos__30->GetZaxis()->SetTitleFont(42);
   h_Angle_Pfrag_Prel_cos__30->Draw("SameHIST");
   
   TPaveText *pt = new TPaveText(0.1584783,0.9234974,0.8415217,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("cos(p10B,prel) opening angle for ^{10}B SRC");
   pt->Draw();
   c_hist->Modified();
   c_hist->cd();
   c_hist->SetSelected(c_hist);
}
