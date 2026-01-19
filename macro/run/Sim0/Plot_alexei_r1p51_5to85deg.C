#include "Read_srcsim_alexei_r1p51_5to85deg.C"

void Plot_alexei_r1p51_5to85deg(){
    Read_srcsim_alexei_r1p51_5to85deg t;
    // t.Loop(0.,30.); // Boost_resolution, TOF_resolution
    // t.Loop(0.,50.); // Boost_resolution, TOF_resolution
    // t.Loop(0.,90.); // Boost_resolution, TOF_resolution
    // t.Loop(0.,100.); // Boost_resolution, TOF_resolution
    // t.Loop(0.,95.); // Boost_resolution, TOF_resolution
    t.Loop(0.,170.); // Boost_resolution, TOF_resolution
    // t.Loop(0.,200.); // Boost_resolution, TOF_resolution
}

/*
void Plot(){
    Read_srcsim t;
    // t.Loop();
    const Int_t NofBins_Boost = 5;
    const Int_t NofBins_TOF = 12;
    Double_t Boost_resolution[NofBins_Boost] = {0.,0.5,1.0,1.5,2.0};
    Double_t TOF_resolution[NofBins_TOF] = {60.,70.,80.,90.,100.,110.,120.,130.,140.,150.,170.,190.};
    Double_t sigma_M_miss_Boost[NofBins_Boost];
    Double_t sigma_M_miss_TOF[NofBins_TOF];

    // TH2F *h_Boost_sigma = new TH2F("Sigma vs. boost P","^{12}C reference system M_{ miss} resolution",100,-0.1,2.1,100,0,0.1);
    // h_Boost_sigma->SetXTitle("Boost Momentum / GeV");
    // h_Boost_sigma->GetXaxis()->CenterTitle(1);
	// h_Boost_sigma->GetXaxis()->SetTitleFont(32);
    // h_Boost_sigma->GetXaxis()->SetTitleSize(0.06);
	// h_Boost_sigma->GetXaxis()->SetTitleOffset(0.7);
    // h_Boost_sigma->SetYTitle("M_{ miss} resolution / GeV");
	// h_Boost_sigma->GetYaxis()->CenterTitle(1);
	// h_Boost_sigma->GetYaxis()->SetTitleFont(32);
    // h_Boost_sigma->GetYaxis()->SetTitleSize(0.04);
    // h_Boost_sigma->SetMarkerStyle(29);
    // h_Boost_sigma->SetMarkerSize(2);

    // TH2F *h_TOF_sigma = new TH2F("Sigma vs. TOF resolution","^{12}C reference system M_{ miss} resolution",100,55,155,100,0,0.1);
    // h_TOF_sigma->SetXTitle("TOF resolution / ps");
    // h_TOF_sigma->GetXaxis()->CenterTitle(1);
	// h_TOF_sigma->GetXaxis()->SetTitleFont(32);
    // h_TOF_sigma->GetXaxis()->SetTitleSize(0.06);
	// h_TOF_sigma->GetXaxis()->SetTitleOffset(0.7);
    // h_TOF_sigma->SetYTitle("M_{ miss} resolution / GeV");
	// h_TOF_sigma->GetYaxis()->CenterTitle(1);
	// h_TOF_sigma->GetYaxis()->SetTitleFont(32);
    // h_TOF_sigma->GetYaxis()->SetTitleSize(0.04);
    // h_TOF_sigma->SetMarkerStyle(29);
    // h_TOF_sigma->SetMarkerSize(2);

    TH2F *h_TOF_sigma = new TH2F("Sigma vs. TOF resolution","^{12}C reference system M^{2}_{ miss} resolution",100,55,195,100,0.0,0.3);
    h_TOF_sigma->SetXTitle("TOF resolution / ps");
    h_TOF_sigma->GetXaxis()->CenterTitle(1);
	h_TOF_sigma->GetXaxis()->SetTitleFont(32);
    h_TOF_sigma->GetXaxis()->SetTitleSize(0.06);
	h_TOF_sigma->GetXaxis()->SetTitleOffset(0.7);
    h_TOF_sigma->SetYTitle("M^{2}_{ miss} resolution / GeV");
	h_TOF_sigma->GetYaxis()->CenterTitle(1);
	h_TOF_sigma->GetYaxis()->SetTitleFont(32);
    h_TOF_sigma->GetYaxis()->SetTitleSize(0.04);
    h_TOF_sigma->SetMarkerStyle(29);
    h_TOF_sigma->SetMarkerSize(2);

    // TH2F *h_TOF_sigma = new TH2F("Sigma vs. TOF resolution","^{12}C reference system E_{ miss} resolution",100,55,195,100,0.0,0.2);
    // h_TOF_sigma->SetXTitle("TOF resolution / ps");
    // h_TOF_sigma->GetXaxis()->CenterTitle(1);
	// h_TOF_sigma->GetXaxis()->SetTitleFont(32);
    // h_TOF_sigma->GetXaxis()->SetTitleSize(0.06);
	// h_TOF_sigma->GetXaxis()->SetTitleOffset(0.7);
    // h_TOF_sigma->SetYTitle("E_{ miss} resolution / GeV");
	// h_TOF_sigma->GetYaxis()->CenterTitle(1);
	// h_TOF_sigma->GetYaxis()->SetTitleFont(32);
    // h_TOF_sigma->GetYaxis()->SetTitleSize(0.04);
    // h_TOF_sigma->SetMarkerStyle(29);
    // h_TOF_sigma->SetMarkerSize(2);

    // for(int i=0;i<NofBins_Boost;i++){
    //     sigma_M_miss_Boost[i] = t.Loop(Boost_resolution[i],95.); // Boost_resolution, TOF_resolution
    //     h_Boost_sigma->Fill(Boost_resolution[i],sigma_M_miss_Boost[i]);
    // }

    // TCanvas* c_M_miss_Boost = new TCanvas("c_M_miss_Boost","c_M_miss_Boost",1200,800);
    // h_Boost_sigma->Draw();
    // c_M_miss_Boost->SaveAs("./resolution_plot/1_M_miss_Boost.pdf");

    for(int i=0;i<NofBins_TOF;i++){
        sigma_M_miss_TOF[i] = t.Loop(0.,TOF_resolution[i]); // Boost_resolution, TOF_resolution
        h_TOF_sigma->Fill(TOF_resolution[i],sigma_M_miss_TOF[i]);
    }

    TCanvas* c_M_miss_TOF = new TCanvas("c_M_miss_TOF","c_M_miss_TOF",1200,800);
    h_TOF_sigma->Fit("pol1","","",59.,191.);
    h_TOF_sigma->Draw();
    // c_M_miss_TOF->SaveAs("./resolution_plot/2_M_miss_TOF.pdf");
    c_M_miss_TOF->SaveAs("./resolution_plot/3_M_miss_square_TOF.pdf");
    // c_M_miss_TOF->SaveAs("./resolution_plot/4_E_miss_TOF.pdf");

    // sigma_M_miss_Boost[0] = t.Loop(0.,95.); // Boost_resolution, TOF_resolution
    // sigma_M_miss_Boost[0] = t.Loop(1.5,120.); // Boost_resolution, TOF_resolution
    // std::cout<<sigma_M_miss_Boost[0]<<std::endl;

}
*/