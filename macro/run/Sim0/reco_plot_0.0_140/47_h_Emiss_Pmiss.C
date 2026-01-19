#ifdef __CLING__
#pragma cling optimize(0)
#endif
void 47_h_Emiss_Pmiss()
{
//=========Macro generated from canvas: c_h_Emiss_Pmiss/c_h_Emiss_Pmiss
//=========  (Sun May 18 20:58:00 2025) by ROOT version 6.26/02
   TCanvas *c_h_Emiss_Pmiss = new TCanvas("c_h_Emiss_Pmiss", "c_h_Emiss_Pmiss",0,0,1200,1200);
   gStyle->SetOptFit(1);
   c_h_Emiss_Pmiss->Range(-0.5357143,-1.9,3.035714,1.1);
   c_h_Emiss_Pmiss->SetFillColor(0);
   c_h_Emiss_Pmiss->SetBorderMode(0);
   c_h_Emiss_Pmiss->SetBorderSize(2);
   c_h_Emiss_Pmiss->SetLeftMargin(0.15);
   c_h_Emiss_Pmiss->SetRightMargin(0.15);
   c_h_Emiss_Pmiss->SetFrameBorderMode(0);
   c_h_Emiss_Pmiss->SetFrameBorderMode(0);
   
   TH2F *h_Emiss_Pmiss = new TH2F("h_Emiss_Pmiss","Emiss vs. Pmiss",500,0,2.5,480,-1.6,0.8);
   h_Emiss_Pmiss->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_Emiss_Pmiss->SetLineColor(ci);
   h_Emiss_Pmiss->GetXaxis()->SetTitle("Pmiss (GeV/c)");
   h_Emiss_Pmiss->GetXaxis()->SetLabelFont(42);
   h_Emiss_Pmiss->GetXaxis()->SetTitleOffset(1);
   h_Emiss_Pmiss->GetXaxis()->SetTitleFont(42);
   h_Emiss_Pmiss->GetYaxis()->SetTitle("Emiss (GeV/c)");
   h_Emiss_Pmiss->GetYaxis()->SetLabelFont(42);
   h_Emiss_Pmiss->GetYaxis()->SetTitleFont(42);
   h_Emiss_Pmiss->GetZaxis()->SetLabelFont(42);
   h_Emiss_Pmiss->GetZaxis()->SetTitleOffset(1);
   h_Emiss_Pmiss->GetZaxis()->SetTitleFont(42);
   h_Emiss_Pmiss->Draw("COLZ");
   
   TPaveText *pt = new TPaveText(0.2939298,0.94,0.7060702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Emiss vs. Pmiss");
   pt->Draw();
   c_h_Emiss_Pmiss->Modified();
   c_h_Emiss_Pmiss->cd();
   c_h_Emiss_Pmiss->SetSelected(c_h_Emiss_Pmiss);
}
