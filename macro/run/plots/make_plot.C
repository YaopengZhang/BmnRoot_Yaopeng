#include <TString.h>
#include <TFile.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TChain.h>

void overlay(TString my_input, TString exp_input, TString my_plot, TString goran_plot, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.);

void overlay_delta(TString my_input_name, TString exp_input, TString exp_input_2, TString my_plot, TString goran_plot, TString title, TString x_title, TString y_title, TString pdf_name, Int_t Stat_box = 0, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.);

void overlay_other(TString input1, TString input2, TString plot1, TString plot2, TString legend1, TString legend2, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.);

void single(TString input_name, TString my_plot, TString title, TString x_title, TString y_title, Int_t Stat_box, TString pdf_name);

void plots_double(TString input1, TString input2, TString plot1, TString plot2, TString legend1, TString legend2, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Int_t Remove_title_legend = 0, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1., TString folder = "plots_double");

void triple(TString input1, TString input2, TString input3, TString plot1, TString plot2, TString plot3, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1., TString folder = "plots_triple");

void quadruple(TString input0, TString input1, TString input2, TString input3, TString plot0, TString plot1, TString plot2, TString plot3, TString legend0, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1., TString folder = "plots_quadruple");

void triple_new(TString input1, TString input2, TString input3, TString plot1, TString plot2, TString plot3, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.);

void triple_generator(TString input1, TString input2, TString input3, TString plot1, TString plot2, TString plot3, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.);

void Fit(TString input_name, TString my_plot, TString title, TString x_title, TString y_title, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1.);

void cal_chi2(TString input1, TString input2, TString plot1, TString plot2, TString legend1, TString legend2, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.);

void cal_chi2_alexei(TString input1, TString input2, TString plot1, TString plot2, TString legend1, TString legend2, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.);

void make_2D_plot(TString inputfile, TString Tree_name, TString variable_x, Int_t Nx, Double_t x_min, Double_t x_max, TString variable_y, Int_t Ny, Double_t y_min, Double_t y_max, TString title, TString x_title, TString y_title, Int_t weight_Flag, Int_t Stat_box, TString pdf_name);


void compare_breakup(){
    triple("my_output_no_breakup","my_output_with_breakup","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_breakup","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb",-1,-1,-1,"plots_breakup");
    triple("my_output_no_breakup","my_output_with_breakup","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_breakup","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx",-1,-1,-1,"plots_breakup");
    triple("my_output_no_breakup","my_output_with_breakup","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_breakup","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby",-1,-1,-1,"plots_breakup");
    triple("my_output_no_breakup","my_output_with_breakup","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_breakup","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz",-1,-1,-1,"plots_breakup");
    triple("my_output_no_breakup","my_output","PhysicsHist","vertex_z","vertex_z_breakup","hVertexZ_11B_QE","Sim_old","Sim_breakup","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_ertex_z",-1,-1,-1,"plots_vertex");

    triple("my_output_no_breakup","my_output_with_breakup","PhysicsHist","P_miss","P_miss", "hPmiss_Proton","Sim_old","Sim_breakup","Exp","Pmiss in 12C rest frame","Pmiss (GeV/c)","Counts",20,0,"2_pmiss",-1,-1,-1,"plots_breakup");
    triple("my_output_no_breakup","my_output_with_breakup","PhysicsHist","p_miss_x","p_miss_x", "hPmissX_Proton","Sim_old","Sim_breakup","Exp","Pmiss_{x} in 12C rest frame","Pmiss_{x} (GeV/c)","Counts",10,0,"2_pmiss_x",-1,-1,-1,"plots_breakup");
    triple("my_output_no_breakup","my_output_with_breakup","PhysicsHist","p_miss_y","p_miss_y", "hPmissY_Proton","Sim_old","Sim_breakup","Exp","Pmiss_{y} in 12C rest frame","Pmiss_{y} (GeV/c)","Counts",10,0,"2_pmiss_y",-1,-1,-1,"plots_breakup");
    triple("my_output_no_breakup","my_output_with_breakup","PhysicsHist","p_miss_z","p_miss_z", "hPmissZ_Proton","Sim_old","Sim_breakup","Exp","Pmiss_{z} in 12C rest frame","Pmiss_{z} (GeV/c)","Counts",10,0,"2_pmiss_z",-1,-1,-1,"plots_breakup");

}

void compare_chi2(){
    // cal_chi2("my_output", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_366",-590.4,-563.8); // -600, -550
    // cal_chi2("my_output_10", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_10",-590.4,-563.8);

    cal_chi2("my_output_100", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_100",-590.4,-563.8);
    cal_chi2("my_output_150", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_150",-590.4,-563.8);
    cal_chi2("my_output_220", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_220",-590.4,-563.8);
    // cal_chi2("my_output_240", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_260",-590.4,-563.8);
    cal_chi2("my_output_260", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_260",-590.4,-563.8);
    cal_chi2("my_output_300", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_300",-590.4,-563.8);
    cal_chi2("my_output_350", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_350",-590.4,-563.8);
    cal_chi2("my_output_400", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_400",-590.4,-563.8);
    cal_chi2("my_output_500", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_500",-590.4,-563.8);
    cal_chi2("my_output_600", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_600",-590.4,-563.8);
    cal_chi2("my_output_700", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_700",-590.4,-563.8);

    // cal_chi2("my_output_800", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_800",-590.4,-563.8);
    // cal_chi2("my_output_900", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_900",-590.4,-563.8);
    // cal_chi2("my_output_1000", "PhysicsHist", "vertex_z_breakup", "hVertexZ_11B_QE_New", "Sim", "Exp", "Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z_1000",-590.4,-563.8);
    
    // cal_chi2("my_output", "PhysicsHist", "P_miss", "hPmiss_Proton", "Sim_old", "Exp", "Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss_200",0.,0.6);
    // cal_chi2("my_output", "PhysicsHist", "E_miss_with_tail", "hEmiss_11B_CutTheta_MM", "Sim_old", "Exp", "Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail_200",-0.6,0.3);
    // cal_chi2("my_output", "PhysicsHist", "M_miss_square", "hMMiss2_11B_QE", "Sim_old", "Exp", "Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",10,0,"2_M_miss_square_200",0.5,1.4);

    // cal_chi2_alexei("my_output_alexei_xsKammerud_abs", "PhysicsHist", "P_miss", "hPmiss_Proton", "Sim_old", "Exp", "Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss_100",0.,0.6);
    // cal_chi2_alexei("my_output_alexei_xsKammerud_abs", "PhysicsHist", "E_miss_with_tail", "hEmiss_11B_CutTheta_MM", "Sim_old", "Exp", "Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail_100",-0.6,0.3);
    // cal_chi2_alexei("my_output_alexei_xsKammerud_abs", "PhysicsHist", "M_miss_square", "hMMiss2_11B_QE", "Sim_old", "Exp", "Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",10,0,"2_M_miss_square_100",0.5,1.4);

    // ---------------------------------------------------------------------
    // TFile *inputFile = TFile::Open("../Sim0/PhysicsHist.root", "UPDATE");
    // if (!inputFile || inputFile->IsZombie()) {
    //     std::cerr << "Error opening input file!" << std::endl;
    //     return;
    // }

    // TH1F* hist = (TH1F*)inputFile->Get("hVertexZ_11B_QE");
    // if (!hist) {
    //     std::cerr << "Error retrieving histogram!" << std::endl;
    //     return;
    // }
    
    // double xMin = -603;
    // double xMax = -547;

    // int binMin = hist->FindBin(xMin);
    // int binMax = hist->FindBin(xMax);

    // TH1F* newHist = new TH1F("hVertexZ_11B_QE_New", "hVertexZ_11B_QE_New", 40, xMin, xMax);

    // for (int i = binMin; i <= binMax; i++) {
    //     double content = hist->GetBinContent(i);
    //     double error = hist->GetBinError(i);
    //     newHist->SetBinContent(i - binMin + 1, content);
    //     newHist->SetBinError(i - binMin + 1, error);
    //     // cout<<content<<endl;
    // }

    // double oldEntries = hist->GetEntries();
    // newHist->SetEntries(oldEntries);

    // // Double_t entriesH0 = hist->GetEntries();
    // // // Double_t entriesH0 = hist->GetSumOfWeights();

    // // Double_t entriesH1 = newHist->GetEntries();
    // // // Double_t entriesH1 = newHist->GetSumOfWeights();
    // // cout<<entriesH0<<"\t"<<entriesH1<<endl;

    // newHist->Write();

    // inputFile->Close();
    // ---------------------------------------------------------------------

}

void compare_triple(){
    triple("my_output","my_output_alexei","PhysicsHist","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_old","Sim_alexei","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output","my_output_alexei","PhysicsHist","p1x","p1x","hPLX_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output","my_output_alexei","PhysicsHist","p1y","p1y","hPLY_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output","my_output_alexei","PhysicsHist","p1z","p1z","hPLZ_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output","my_output_alexei","PhysicsHist","P1","P1","hPL_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output","my_output_alexei","PhysicsHist","p2x","p2x","hPRX_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output","my_output_alexei","PhysicsHist","p2y","p2y","hPRY_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output","my_output_alexei","PhysicsHist","p2z","p2z","hPRZ_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output","my_output_alexei","PhysicsHist","P2","P2","hPR_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output","my_output_alexei","PhysicsHist","p_miss_x","p_miss_x","hPmissX_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output","my_output_alexei","PhysicsHist","p_miss_y","p_miss_y","hPmissY_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output","my_output_alexei","PhysicsHist","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output","my_output_alexei","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output","my_output_alexei","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output","my_output_alexei","PhysicsHist","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_old","Sim_alexei","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output","my_output_alexei","PhysicsHist","E_miss","E_miss","hEmiss_11B_QE","Sim_old","Sim_alexei","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("my_output","my_output_alexei","PhysicsHist","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_old","Sim_alexei","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output","my_output_alexei","PhysicsHist","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_old","Sim_alexei","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output","my_output_alexei","PhysicsHist","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_old","Sim_alexei","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1,5492);
    triple("my_output","my_output_alexei","PhysicsHist","phi1","phi1","hPhiLeft","Sim_old","Sim_alexei","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output","my_output_alexei","PhysicsHist","phi2","phi2","hPhiRight","Sim_old","Sim_alexei","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_old","Sim_alexei","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_old","Sim_alexei","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_old","Sim_alexei","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_old","Sim_alexei","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output","my_output_alexei","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_old","Sim_alexei","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output","my_output_alexei","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_old","Sim_alexei","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output","my_output_alexei","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_alexei","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output","my_output_alexei","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_alexei","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output","my_output_alexei","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_alexei","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output","my_output_alexei","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_alexei","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_v1p2_10Mio(){
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_old","Sim_v1p2_10Mio","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p1x","p1x","hPLX_Lab","Sim_old","Sim_v1p2_10Mio","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p1y","p1y","hPLY_Lab","Sim_old","Sim_v1p2_10Mio","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p1z","p1z","hPLZ_Lab","Sim_old","Sim_v1p2_10Mio","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","P1","P1","hPL_Lab","Sim_old","Sim_v1p2_10Mio","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p2x","p2x","hPRX_Lab","Sim_old","Sim_v1p2_10Mio","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p2y","p2y","hPRY_Lab","Sim_old","Sim_v1p2_10Mio","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p2z","p2z","hPRZ_Lab","Sim_old","Sim_v1p2_10Mio","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","P2","P2","hPR_Lab","Sim_old","Sim_v1p2_10Mio","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p_miss_x","p_miss_x","hPmissX_Proton","Sim_old","Sim_v1p2_10Mio","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p_miss_y","p_miss_y","hPmissY_Proton","Sim_old","Sim_v1p2_10Mio","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_old","Sim_v1p2_10Mio","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output","my_output_v1p2_10Mio","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_v1p2_10Mio","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_v1p2_10Mio","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_old","Sim_v1p2_10Mio","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","E_miss","E_miss","hEmiss_11B_QE","Sim_old","Sim_v1p2_10Mio","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_old","Sim_v1p2_10Mio","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_old","Sim_v1p2_10Mio","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_old","Sim_v1p2_10Mio","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1,5492);
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","phi1","phi1","hPhiLeft","Sim_old","Sim_v1p2_10Mio","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","phi2","phi2","hPhiRight","Sim_old","Sim_v1p2_10Mio","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_old","Sim_v1p2_10Mio","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_old","Sim_v1p2_10Mio","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_old","Sim_v1p2_10Mio","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_old","Sim_v1p2_10Mio","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_old","Sim_v1p2_10Mio","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_old","Sim_v1p2_10Mio","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_v1p2_10Mio","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_v1p2_10Mio","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_v1p2_10Mio","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output","my_output_v1p2_10Mio","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_v1p2_10Mio","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_double_v1p2_50Mio(){
    Int_t Remove_title_legend = 1;
    plots_double("my_output_v1p2_50Mio","PhysicsHist","vertex_z","hVertexZ_11B_QE","Sim_v1p2_50Mio","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",Remove_title_legend,-620,-520);

    plots_double("my_output_v1p2_50Mio","PhysicsHist","p1x","hPLX_Lab","Sim_v1p2_50Mio","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","p1y","hPLY_Lab","Sim_v1p2_50Mio","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","p1z","hPLZ_Lab","Sim_v1p2_50Mio","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","P1","hPL_Lab","Sim_v1p2_50Mio","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","p2x","hPRX_Lab","Sim_v1p2_50Mio","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","p2y","hPRY_Lab","Sim_v1p2_50Mio","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","p2z","hPRZ_Lab","Sim_v1p2_50Mio","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","P2","hPR_Lab","Sim_v1p2_50Mio","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2",Remove_title_legend);
    
    plots_double("my_output_v1p2_50Mio","PhysicsHist","p_miss_x","hPmissX_Proton","Sim_v1p2_50Mio","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","p_miss_y","hPmissY_Proton","Sim_v1p2_50Mio","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",12,0,"2_p_miss_y",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","p_miss_z","hPmissZ_Proton","Sim_v1p2_50Mio","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",10,0,"2_p_miss_z",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","M_miss_square","hMMiss2_11B_QE","Sim_v1p2_50Mio","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",Remove_title_legend,0.,1.5);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","E_miss","hEmiss_11B_QE","Sim_v1p2_50Mio","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",Remove_title_legend,-1,0.5);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_v1p2_50Mio","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",Remove_title_legend,-1,0.5);


    plots_double("my_output_v1p2_50Mio","PhysicsHist","opening_theta","hOpeningTheta_11B_QE","Sim_v1p2_50Mio","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",Remove_title_legend, 55, 75);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","opening_phi","hOpeningPhi_11B_QE","Sim_v1p2_50Mio","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",Remove_title_legend,-1,-1);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","phi1","hPhiLeft","Sim_v1p2_50Mio","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",Remove_title_legend, -75, 75);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","phi2","hPhiRight","Sim_v1p2_50Mio","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","theta1","hThetaLeft","Sim_v1p2_50Mio","Exp","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1",Remove_title_legend, -75, 75);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","theta2","hThetaRight","Sim_v1p2_50Mio","Exp","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2",Remove_title_legend);

    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_v1p2_50Mio","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_v1p2_50Mio","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_v1p2_50Mio","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_v1p2_50Mio","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",Remove_title_legend);

    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_v1p2_50Mio","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_v1p2_50Mio","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D",Remove_title_legend);

    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_pb","hPFrag11B","Sim_v1p2_50Mio","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_pbx","hPFrag11BX","Sim_v1p2_50Mio","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_pby","hPFrag11BY","Sim_v1p2_50Mio","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby",Remove_title_legend);
    plots_double("my_output_v1p2_50Mio","PhysicsHist","h_pbz","hPFrag11BZ","Sim_v1p2_50Mio","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz",Remove_title_legend);

}

void compare_triple_v1p2_50Mio(){
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_old","Sim_v1p2_50Mio","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p1x","p1x","hPLX_Lab","Sim_old","Sim_v1p2_50Mio","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p1y","p1y","hPLY_Lab","Sim_old","Sim_v1p2_50Mio","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p1z","p1z","hPLZ_Lab","Sim_old","Sim_v1p2_50Mio","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","P1","P1","hPL_Lab","Sim_old","Sim_v1p2_50Mio","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p2x","p2x","hPRX_Lab","Sim_old","Sim_v1p2_50Mio","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p2y","p2y","hPRY_Lab","Sim_old","Sim_v1p2_50Mio","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p2z","p2z","hPRZ_Lab","Sim_old","Sim_v1p2_50Mio","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","P2","P2","hPR_Lab","Sim_old","Sim_v1p2_50Mio","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p_miss_x","p_miss_x","hPmissX_Proton","Sim_old","Sim_v1p2_50Mio","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p_miss_y","p_miss_y","hPmissY_Proton","Sim_old","Sim_v1p2_50Mio","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_old","Sim_v1p2_50Mio","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output","my_output_v1p2_50Mio","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_v1p2_50Mio","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_v1p2_50Mio","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_old","Sim_v1p2_50Mio","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","E_miss","E_miss","hEmiss_11B_QE","Sim_old","Sim_v1p2_50Mio","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_old","Sim_v1p2_50Mio","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_old","Sim_v1p2_50Mio","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_old","Sim_v1p2_50Mio","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","phi1","phi1","hPhiLeft","Sim_old","Sim_v1p2_50Mio","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","phi2","phi2","hPhiRight","Sim_old","Sim_v1p2_50Mio","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_old","Sim_v1p2_50Mio","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_old","Sim_v1p2_50Mio","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_old","Sim_v1p2_50Mio","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_old","Sim_v1p2_50Mio","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_old","Sim_v1p2_50Mio","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_old","Sim_v1p2_50Mio","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_v1p2_50Mio","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_v1p2_50Mio","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_v1p2_50Mio","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output","my_output_v1p2_50Mio","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_v1p2_50Mio","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio(){
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_v1p2_50Mio","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_ToFoffset(){
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    // triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_40ps_offset","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_-40ps_offset","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_noSmearing(){
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    // triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_all","my_output_Abs_WF_10Mio_noSmearing","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_noQE_noSmearing(){
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    // triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_noQE_all","my_output_Abs_WF_10Mio_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_noSmearing","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_noOffset(){
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p1x","p1x","hPLX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p1y","p1y","hPLY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p1z","p1z","hPLZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","P1","P1","hPL_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p2x","p2x","hPRX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p2y","p2y","hPRY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p2z","p2z","hPRZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","P2","P2","hPR_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","theta1","theta1","hThetaLeft","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","theta2","theta2","hThetaRight","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","phi1","phi1","hPhiLeft","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","phi2","phi2","hPhiRight","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_pb","h_pb","hPFrag11B","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_7_4_2025_TimeShift_50ps","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_07_04_2025_50ps_shift","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_noOffset_new(){
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p1x","p1x","hPLX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p1y","p1y","hPLY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p1z","p1z","hPLZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","P1","P1","hPL_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p2x","p2x","hPRX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p2y","p2y","hPRY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p2z","p2z","hPRZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","P2","P2","hPR_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_fly_path_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_fly_path_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","theta1","theta1","hThetaLeft","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","theta2","theta2","hThetaRight","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","phi1","phi1","hPhiLeft","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","phi2","phi2","hPhiRight","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_pb","h_pb","hPFrag11B","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_noOffset_normalQE","PhysicsHist_17_4_2025_RotateLeft_0_2deg","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_noOffset","Sim_AbsWF_noOffset_normalQE","Exp_17_4_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_50ps(){
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1x","p1x","hPLX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1y","p1y","hPLY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1z","p1z","hPLZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P1","P1","hPL_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2x","p2x","hPRX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2y","p2y","hPRY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2z","p2z","hPRZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P2","P2","hPR_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta1","theta1","hThetaLeft","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta2","theta2","hThetaRight","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi1","phi1","hPhiLeft","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi2","phi2","hPhiRight","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pb","h_pb","hPFrag11B","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_50psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_noOffset","Sim_AbsWF_50psOffset","Exp_17_4_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_65ps(){
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1x","p1x","hPLX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1y","p1y","hPLY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1z","p1z","hPLZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P1","P1","hPL_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2x","p2x","hPRX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2y","p2y","hPRY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2z","p2z","hPRZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P2","P2","hPR_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta1","theta1","hThetaLeft","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta2","theta2","hThetaRight","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi1","phi1","hPhiLeft","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi2","phi2","hPhiRight","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pb","h_pb","hPFrag11B","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_highstat_65ps(){
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1x","p1x","hPLX_Lab","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1y","p1y","hPLY_Lab","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1z","p1z","hPLZ_Lab","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P1","P1","hPL_Lab","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2x","p2x","hPRX_Lab","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2y","p2y","hPRY_Lab","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2z","p2z","hPRZ_Lab","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P2","P2","hPR_Lab","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta1","theta1","hThetaLeft","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta2","theta2","hThetaRight","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi1","phi1","hPhiLeft","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi2","phi2","hPhiRight","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pb","h_pb","hPFrag11B","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_highstat","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_highstat","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_highstat_test(){
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p1x","p1x","hPLX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p1y","p1y","hPLY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p1z","p1z","hPLZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","P1","P1","hPL_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p2x","p2x","hPRX_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p2y","p2y","hPRY_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p2z","p2z","hPRZ_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","P2","P2","hPR_Lab","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","theta1","theta1","hThetaLeft","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","theta2","theta2","hThetaRight","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","phi1","phi1","hPhiLeft","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","phi2","phi2","hPhiRight","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_pb","h_pb","hPFrag11B","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_new_noOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_995_HighStats","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_noOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_highstat_test1(){
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p1x","p1x","hPLX_Lab","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p1y","p1y","hPLY_Lab","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p1z","p1z","hPLZ_Lab","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","P1","P1","hPL_Lab","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p2x","p2x","hPRX_Lab","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p2y","p2y","hPRY_Lab","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p2z","p2z","hPRZ_Lab","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","P2","P2","hPR_Lab","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","theta1","theta1","hThetaLeft","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","theta2","theta2","hThetaRight","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","phi1","phi1","hPhiLeft","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","phi2","phi2","hPhiRight","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_pb","h_pb","hPFrag11B","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_new_100psOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_26_5_2025_NewTof400_PionBeta0_9867_HighStats","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_100psOffset","Sim_AbsWF_65psOffset","Exp_26_5_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_highstat_65ps_254mb(){
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1x","p1x","hPLX_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1y","p1y","hPLY_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1z","p1z","hPLZ_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P1","P1","hPL_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2x","p2x","hPRX_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2y","p2y","hPRY_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2z","p2z","hPRZ_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P2","P2","hPR_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta1","theta1","hThetaLeft","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta2","theta2","hThetaRight","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi1","phi1","hPhiLeft","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi2","phi2","hPhiRight","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",20,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pb","h_pb","hPFrag11B","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_highstat_65ps_254mb_fixCosGamma(){
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p1x","p1x","hPLX_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p1y","p1y","hPLY_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p1z","p1z","hPLZ_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","P1","P1","hPL_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p2x","p2x","hPRX_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p2y","p2y","hPRY_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p2z","p2z","hPRZ_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","P2","P2","hPR_Lab","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","theta1","theta1","hThetaLeft","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","theta2","theta2","hThetaRight","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","phi1","phi1","hPhiLeft","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","phi2","phi2","hPhiRight","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",20,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_pb","h_pb","hPFrag11B","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_fixCosGamma","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_highstat_254mb","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_beta98(){
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p1x","p1x","hPLX_Lab","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p1y","p1y","hPLY_Lab","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p1z","p1z","hPLZ_Lab","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","P1","P1","hPL_Lab","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p2x","p2x","hPRX_Lab","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p2y","p2y","hPRY_Lab","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p2z","p2z","hPRZ_Lab","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","P2","P2","hPR_Lab","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","theta1","theta1","hThetaLeft","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","theta2","theta2","hThetaRight","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","phi1","phi1","hPhiLeft","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","phi2","phi2","hPhiRight","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",20,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_pb","h_pb","hPFrag11B","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_beta98","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut08-098","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_beta80-98","Sim_AbsWF_65psOffset","Exp_30_06_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_beta96(){
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p1x","p1x","hPLX_Lab","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p1y","p1y","hPLY_Lab","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p1z","p1z","hPLZ_Lab","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","P1","P1","hPL_Lab","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p2x","p2x","hPRX_Lab","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p2y","p2y","hPRY_Lab","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p2z","p2z","hPRZ_Lab","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","P2","P2","hPR_Lab","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","theta1","theta1","hThetaLeft","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","theta2","theta2","hThetaRight","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","phi1","phi1","hPhiLeft","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","phi2","phi2","hPhiRight","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",20,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_pb","h_pb","hPFrag11B","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_beta96","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_30_6_2025Shift0_2degBetaCut084-096","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_beta84-96","Sim_AbsWF_65psOffset","Exp_30_06_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_vertexXY(){
    // TString Output_Name = "./vertex_x.pdf";
    TString Output_Name = "./vertex_y.pdf";

    TFile* my_input = TFile::Open("../Sim0/my_output_Abs_WF_10Mio_July16.root");
    // TFile* my_input = TFile::Open("../Sim0/my_output_Abs_WF_10Mio.root");
    TFile* goran_input = TFile::Open("../Sim0/PhysicsHist_16_7_2025Shift0_2deg.root");

    // TH1F* hist1 = (TH1F*)my_input->Get("vertex_x");
    TH1F* hist1 = (TH1F*)my_input->Get("vertex_y");
    TH2D* hist2_ = (TH2D*)goran_input->Get("hVertexXY_11B_QE");
    // TH1D* hist2 = hist2_->ProjectionX(); 
    TH1D* hist2 = hist2_->ProjectionY(); 

    Double_t NormFactor = hist2->Integral();
    cout<<hist1->GetSumOfWeights()<<endl;

    // hist2->SetTitle("Vertex X");
    // hist2->SetXTitle("vertex_x");
    hist2->SetTitle("Vertex Y");
    hist2->SetXTitle("vertex_y");
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle("Counts");
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    hist2->SetStats(0);
    // double x_min = 
    // double x_max = 
    // if(x_min<x_max){
    //     cout<<x_min<<"\t"<<x_max<<endl;
    //     hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    //     hist1->GetXaxis()->SetRangeUser(x_min, x_max);
    //     hist1_new->GetXaxis()->SetRangeUser(x_min, x_max);
    // }
    hist2->SetLineColor(1);
    hist2->SetLineWidth(2);
    hist2->Draw("E");
    // hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    hist1->SetLineColor(2);
    hist1->Draw("SameHIST");
    hist1->SetNormFactor(NormFactor);

    TLegend *l_hist = new TLegend(0.8,0.8,0.89,0.89,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,"Sim","l");
    l_hist->AddEntry(hist2,"data","lep");
    l_hist->Draw();

    c_hist->SaveAs(Output_Name);
}

void compare_Mmiss2_beforeQE(){
    TString Output_Name = "./Mmisss2_before_QE.pdf";

    TFile* my_input = TFile::Open("../Sim0/my_output_Abs_WF_10Mio_July16.root");
    TFile* goran_input = TFile::Open("../Sim0/PhysicsHist_16_7_2025Shift0_2deg.root");

    TH1F* hist1 = (TH1F*)my_input->Get("M_miss_square_beforeQE");
    TH1F* hist2 = (TH1F*)goran_input->Get("hMMiss2_11B");

    Double_t NormFactor = hist2->Integral();
    NormFactor = NormFactor/2.7;
    cout<<hist1->GetSumOfWeights()<<endl;

    hist2->SetTitle("Missing Mass Square (no QE cut)");
    hist2->SetXTitle("Mmiss2");
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle("Counts");
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    hist2->SetStats(0);
    // double x_min = 
    // double x_max = 
    // if(x_min<x_max){
    //     cout<<x_min<<"\t"<<x_max<<endl;
    //     hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    //     hist1->GetXaxis()->SetRangeUser(x_min, x_max);
    //     hist1_new->GetXaxis()->SetRangeUser(x_min, x_max);
    // }
    hist2->SetLineColor(1);
    hist2->SetLineWidth(2);
    hist2->Draw("E");
    // hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    hist1->SetLineColor(2);
    hist1->Draw("SameHIST");
    hist1->SetNormFactor(NormFactor);

    TLegend *l_hist = new TLegend(0.8,0.8,0.89,0.89,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,"Sim","l");
    l_hist->AddEntry(hist2,"data","lep");
    l_hist->Draw();

    c_hist->SaveAs(Output_Name);
}

void compare_triple_Abs_WF_10Mio_July16_vertexCut(){
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p1x","p1x","hPLX_Lab","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p1y","p1y","hPLY_Lab","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p1z","p1z","hPLZ_Lab","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","P1","P1","hPL_Lab","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p2x","p2x","hPRX_Lab","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p2y","p2y","hPRY_Lab","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p2z","p2z","hPRZ_Lab","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","P2","P2","hPR_Lab","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p_miss_x","p_miss_x","hPmissX_Proton","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p_miss_y","p_miss_y","hPmissY_Proton","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","P_miss","P_miss","hPmiss_Proton","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","E_miss","E_miss","hEmiss_11B_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","theta1","theta1","hThetaLeft","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","theta2","theta2","hThetaRight","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","phi1","phi1","hPhiLeft","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","phi2","phi2","hPhiRight","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",20,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_pb","h_pb","hPFrag11B","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_pbx","h_pbx","hPFrag11BX","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_pby","h_pby","hPFrag11BY","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio_July16_oldvertexCut","PhysicsHist_16_7_2025Shift0_2deg","h_pbz","h_pbz","hPFrag11BZ","Sim_new_vertexZCut","Sim_old_vertexZCut","Exp_July16","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_July16(){
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","beta_left","beta_left","hBetaLeft_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Left Proton beta","beta_left","Counts",-1,0,"1_beta_left",0.75,1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","beta_right","beta_right","hBetaRight_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Right Proton beta","beta_right","Counts",-1,0,"1_beta_right",0.75,1);

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",20,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_WF_100Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio","Sim_NoAbsWF","Exp_July_16_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_July16_new(){
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p1x","p1x","hPLX_Lab","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p1y","p1y","hPLY_Lab","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p1z","p1z","hPLZ_Lab","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","P1","P1","hPL_Lab","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p2x","p2x","hPRX_Lab","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p2y","p2y","hPRY_Lab","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p2z","p2z","hPRZ_Lab","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","P2","P2","hPR_Lab","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","beta_left","beta_left","hBetaLeft_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Left Proton beta","beta_left","Counts",-1,0,"1_beta_left",0.75,1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","beta_right","beta_right","hBetaRight_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Right Proton beta","beta_right","Counts",-1,0,"1_beta_right",0.75,1);

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_x","p_miss_x","hPmissX_Proton","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_y","p_miss_y","hPmissY_Proton","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","P_miss","P_miss","hPmiss_Proton","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","E_miss","E_miss","hEmiss_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","theta1","theta1","hThetaLeft","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","theta2","theta2","hThetaRight","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","phi1","phi1","hPhiLeft","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","phi2","phi2","hPhiRight","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",20,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pb","h_pb","hPFrag11B","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pbx","h_pbx","hPFrag11BX","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pby","h_pby","hPFrag11BY","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_July16","my_output_Abs_WF_10Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pbz","h_pbz","hPFrag11BZ","Sim_170ps_Smearing","NoToFSmearing","Exp_July_16_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_July16_NoAbs(){
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","beta_left","beta_left","hBetaLeft_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Left Proton beta","beta_left","Counts",-1,0,"1_beta_left",0.75,1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","beta_right","beta_right","hBetaRight_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Right Proton beta","beta_right","Counts",-1,0,"1_beta_right",0.75,1);

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",20,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_July16","my_output_NoAbs_CarlosWF_20Mio","PhysicsHist_24_7_2025Shift0_2deg","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio","Sim_NoAbs_CarlosWF","Exp_July_16_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_July16_COM70_110(){
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",13,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_July16_COM70-110","my_output_Abs_WF_10Mio_July16_COM70-110","PhysicsHist_16_7_2025Shift0_2deg_COM_70-110deg","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm70-110","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_July16_COM80_100(){
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Mandelstam variable t","t (GeV^2/c^2)","Counts",25,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",7,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_July16_COM80-100","my_output_Abs_WF_10Mio_July16_COM80-100","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100deg","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_cm80-100","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_July16_MinTU18_25(){
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Mandelstam variable t","t (GeV^2/c^2)","Counts",20,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",13,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","my_output_Abs_WF_10Mio_July16_MinTU1_8-2_5","PhysicsHist_16_7_2025Shift0_2deg_MinTU1_8-2_5","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU18-25","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_July16_COM80_100_MinTU20_25(){
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z",-0.6,0.6);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0,0.8);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",14,0,"2_M_miss_square",0.4,1.3);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Missing Energy","E_{miss} (GeV/c)","Counts",13,0,"2_E_miss",-0.3,0.3);
    // triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",60.,71.);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Mandelstam variable t","t (GeV^2/c^2)","Counts",15,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1.1,3.3);
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",8,0,"4_Com_Angle",30,150);

    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","my_output_Abs_WF_10Mio_July16_COM80_100_MinTU20_25","PhysicsHist_16_7_2025Shift0_2deg_COM_80-100degMinTU2_0-2_5","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio","Sim_AbsWF_65psOffset","Exp_July_16_2025_MinTU20_25_COM","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_254mb(){
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_highstat_254mb","my_output_Abs_WF_10Mio","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_v1p2_50Mio","Sim_Abs_WF_10Mio","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void vertex_cut_test(){
    quadruple("my_output_Abs_WF_10Mio_1_vertex","my_output_Abs_WF_10Mio_2_vertex","my_output_Abs_WF_10Mio_3_vertex","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1x","p1x","p1x","hPLX_Lab","Sim_AbsWF_vtx_-15_-5","Sim_AbsWF_vtx_-5_5","Sim_AbsWF_vtx_5_15","Exp_17_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    quadruple("my_output_Abs_WF_10Mio_1_vertex","my_output_Abs_WF_10Mio_2_vertex","my_output_Abs_WF_10Mio_3_vertex","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2x","p2x","p2x","hPRX_Lab","Sim_AbsWF_vtx_-15_-5","Sim_AbsWF_vtx_-5_5","Sim_AbsWF_vtx_5_15","Exp_17_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
}

void compare_triple_Abs_WF_10Mio_flight_path_offset(){
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1x","p1x","hPLX_Lab","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1y","p1y","hPLY_Lab","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p1z","p1z","hPLZ_Lab","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P1","P1","hPL_Lab","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2x","p2x","hPRX_Lab","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2y","p2y","hPRY_Lab","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p2z","p2z","hPRZ_Lab","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P2","P2","hPR_Lab","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta1","theta1","hThetaLeft","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","theta2","theta2","hThetaRight","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi1","phi1","hPhiLeft","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","phi2","phi2","hPhiRight","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pb","h_pb","hPFrag11B","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_flightPath_1cmOffset","my_output_Abs_WF_10Mio_65psOffset","PhysicsHist_17_4_2025_RotateLeft_0_2deg_MoreBins","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_flightPath_1cmOffset","Sim_AbsWF_65psOffset","Exp_17_4_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_noSim(){
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_noSim","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio_QEcut","Sim_Abs_WF_10Mio_noSim","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",50,80);
}

void compare_ToF_res_test(){
    triple("my_output_Abs_WF_10Mio_noQE_170_offset","my_output_Abs_WF_10Mio_noQE_170","MiscFile_21_4_2025_NewTof400","M_miss_square","M_miss_square","hMMiss2_11B","Sim_170psToFRes_shifted","Sim_170psToFRes","Exp_04_21_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",15,0,"2_M_miss_square",0.3,1.6,7500);
    triple("my_output_Abs_WF_10Mio_noQE_170_offset","my_output_Abs_WF_10Mio_noQE_170","MiscFile_21_4_2025_NewTof400","E_miss","E_miss","hEmiss_11B","Sim_170psToFRes_shifted","Sim_170psToFRes","Exp_04_21_2025","Missing Energy","E_{miss} (GeV/c)","Counts",15,0,"2_E_miss",-0.5,0.5,7500);
}

void compare_ToF_res_test_old(){
    triple("my_output_Abs_WF_10Mio_noQE_220_shifted_old","my_output_Abs_WF_10Mio_noQE_220_old","MiscFile_23_4_2025_OldTof400","M_miss_square","M_miss_square","hMMiss2_11B","Sim_220psToFRes_shifted","Sim_220psToFRes","Exp_04_21_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",15,0,"2_M_miss_square",0.3,1.6,7000);
    triple("my_output_Abs_WF_10Mio_noQE_220_shifted_old","my_output_Abs_WF_10Mio_noQE_220_old","MiscFile_23_4_2025_OldTof400","E_miss","E_miss","hEmiss_11B","Sim_220psToFRes_shifted","Sim_220psToFRes","Exp_04_21_2025","Missing Energy","E_{miss} (GeV/c)","Counts",15,0,"2_E_miss",-0.5,0.5,7000);
}

void compare_triple_Abs_WF_10Mio_new(){
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p1x","p1x","hPLX_Lab","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p1y","p1y","hPLY_Lab","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p1z","p1z","hPLZ_Lab","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","P1","P1","hPL_Lab","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p2x","p2x","hPRX_Lab","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p2y","p2y","hPRY_Lab","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p2z","p2z","hPRZ_Lab","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","P2","P2","hPR_Lab","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","theta1","theta1","hThetaLeft","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","theta2","theta2","hThetaRight","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","phi1","phi1","hPhiLeft","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","phi2","phi2","hPhiRight","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_pb","h_pb","hPFrag11B","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_pb","h_pb","hPFrag11B","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_7_5_2025_NewTof400_TS200ps","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_10Mio_new","Sim_AbsWF_10Mio_old","Exp_07_05_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_latest(){
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p1x","p1x","hPLX_Lab","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p1y","p1y","hPLY_Lab","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p1z","p1z","hPLZ_Lab","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","P1","P1","hPL_Lab","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p2x","p2x","hPRX_Lab","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p2y","p2y","hPRY_Lab","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p2z","p2z","hPRZ_Lab","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","P2","P2","hPR_Lab","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","theta1","theta1","hThetaLeft","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","theta2","theta2","hThetaRight","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","phi1","phi1","hPhiLeft","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","phi2","phi2","hPhiRight","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    // triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pb","h_pb","hPFrag11B","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    // triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    // triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    // triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pb","h_pb","hPFrag11B","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_new_latest","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_10Mio","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_latest_May18(){
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p1x","p1x","hPLX_Lab","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p1y","p1y","hPLY_Lab","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p1z","p1z","hPLZ_Lab","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","P1","P1","hPL_Lab","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p2x","p2x","hPRX_Lab","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p2y","p2y","hPRY_Lab","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p2z","p2z","hPRZ_Lab","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","P2","P2","hPR_Lab","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","theta1","theta1","hThetaLeft","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","theta2","theta2","hThetaRight","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","phi1","phi1","hPhiLeft","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","phi2","phi2","hPhiRight","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pb","h_pb","hPFrag11B","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pb","h_pb","hPFrag11B","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_15_5_2025_NewTof400_TS100ps","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_10Mio_May18","Sim_AbsWF_10Mio_thetaCut","Exp_15_05_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_latest_May21(){
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p1x","p1x","hPLX_Lab","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p1y","p1y","hPLY_Lab","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p1z","p1z","hPLZ_Lab","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","P1","P1","hPL_Lab","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p2x","p2x","hPRX_Lab","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p2y","p2y","hPRY_Lab","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p2z","p2z","hPRZ_Lab","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","P2","P2","hPR_Lab","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","theta1","theta1","hThetaLeft","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","theta2","theta2","hThetaRight","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","phi1","phi1","hPhiLeft","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","phi2","phi2","hPhiRight","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_pb","h_pb","hPFrag11B","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    // triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_pb","h_pb","hPFrag11B","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",15,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",15,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_new","my_output_Abs_WF_10Mio_thetaCut","PhysicsHist_20_5_2025_NewTof400_OldGeom","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_10Mio_May21","Sim_AbsWF_10Mio_thetaCut","Exp_20_05_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",15,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_newTof400Calib(){
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p1x","p1x","hPLX_Lab","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p1y","p1y","hPLY_Lab","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p1z","p1z","hPLZ_Lab","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","P1","P1","hPL_Lab","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p2x","p2x","hPRX_Lab","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p2y","p2y","hPRY_Lab","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p2z","p2z","hPRZ_Lab","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","P2","P2","hPR_Lab","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p_miss_x","p_miss_x","hPmissX_Proton","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p_miss_y","p_miss_y","hPmissY_Proton","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","P_miss","P_miss","hPmiss_Proton","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","E_miss","E_miss","hEmiss_11B_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_fly_time_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_fly_time_right","h_fly_time_right","hFlightTimeRight_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","theta1","theta1","hThetaLeft","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","theta2","theta2","hThetaRight","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","phi1","phi1","hPhiLeft","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","phi2","phi2","hPhiRight","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",1,6);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",1,6);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",1.5,6);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",1,3.5);
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_pb","h_pb","hPFrag11B","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_pbx","h_pbx","hPFrag11BX","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_pby","h_pby","hPFrag11BY","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_100psSmearing_Shifted","my_output_Abs_WF_10Mio_100psSmearing","PhysicsHist_26_4_2025_NewTof400","h_pbz","h_pbz","hPFrag11BZ","Sim_AbsWF_100psSmearing_shifted","Sim_AbsWF_100psSmearing_original","Exp_26_4_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_plots_double_Abs_WF_10Mio_1st(){
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","vertex_z","vertex_z","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",0,-610.,-540);

    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p1x","p1x","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p1y","p1y","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p1z","p1z","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","P1","P1","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p2x","p2x","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p2y","p2y","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p2z","p2z","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","P2","P2","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p_miss_x","p_miss_x","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p_miss_y","p_miss_y","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","p_miss_z","p_miss_z","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","P_miss","P_miss","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","M_miss_square","M_miss_square","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0,0.3,1.6);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","E_miss","E_miss","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",0,-0.5,0.5);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","M_miss_square_mintuCut","M_miss_square_mintuCut","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0,0.3,1.6);

    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_fly_path_left","h_fly_path_left","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",0,220,300);    
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_fly_path_right","h_fly_path_right","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",0,220,300);    
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_fly_time_left","h_fly_time_left","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_fly_time_right","h_fly_time_right","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","opening_theta","opening_theta","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",0,55.,75.);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","theta1","theta1","hThetaLeft","Sim_AbsWF_thetaCut","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","theta2","theta2","hThetaRight","Sim_AbsWF_thetaCut","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","opening_phi","opening_phi","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",0,-1,-1);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","phi1","phi1","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",0,-60,60);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","phi2","phi2","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_Mandelstam_t","h_Mandelstam_t","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Mandelstam variable t","t (GeV^2/c^2)","Counts",35,0,"4_Mandelstam_t",0,1,6);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_Mandelstam_u","h_Mandelstam_u","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u",0,1,6);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_Mandelstam_u_t","h_Mandelstam_u_t","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u",0,1.5,6);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u",0,1,3.5);
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","scattering_angle","scattering_angle","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_pb","h_pb","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_pbx","h_pbx","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_pby","h_pby","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    plots_double("my_output_Abs_WF_10Mio_1stSegment","my_output_Abs_WF_10Mio_thetaCut","h_pbz","h_pbz","Sim_AbsWF_1st_Segment","Sim_AbsWF_thetaCut","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_2QE(){
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_right","h_fly_time_right","hFlightTimeRight_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_2QE","PhysicsHist_7_4_2025_TimeShift_50ps","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_2*QEcut","Exp_07_04_2025_50ps_shift","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_WF_10Mio_theta_accp_cut(){
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z",-610.,-540);

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square",0.3,1.6);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Missing Energy","E_{miss} (GeV/c)","Counts",10,0,"2_E_miss",-0.5,0.5);
    // triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","M_miss_square_mintuCut","M_miss_square_mintuCut","hMMiss2_11B_QE_MinTU_Under18","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Missing Mass Square with min(t,u)<1.8","M^{2}_{miss} (GeV^2/c^2)","Counts",12,0,"2_M_miss_square_minTU18",0.3,1.6);

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_left","h_fly_path_left","hFlightPathLeft_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Flight path length for the left proton","Length (cm)","Counts",-1,0,"3_flight_path1",220,300);    
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_right","h_fly_path_right","hFlightPathRight_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Flight path length for the right proton","Length (cm)","Counts",-1,0,"3_flight_path2",220,300);    
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_left","h_fly_time_left","hFlightTimeLeft_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Flight time for the left proton","Time (ns)","Counts",-1,0,"3_flight_time1");    
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_fly_path_right","h_fly_time_right","hFlightTimeRight_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Flight time for the right proton","Time (ns)","Counts",-1,0,"3_flight_time2");    

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",55.,75.);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Proton Opening #phi","#phi (degree)","Counts",5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1",-60,60);
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",10,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",35,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",30,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",30,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_QE","my_output_Abs_WF_10Mio_theta_accp_cut","PhysicsHist_7_4_2025_TimeShift_50ps","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio_-30ps_offset","Sim_Abs_WF_10Mio_ThetaCut","Exp_07_04_2025_50ps_shift","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",30,0,"6_pbz");

}

void compare_triple_Abs_CarlosWF(){
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",50,80);
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    // triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_Abs_WF_10Mio","my_output_Abs_CarlosWF","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio","Sim_Abs_CarlosWF","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_Abs_CarlosWF_noQE(){
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta",50,80);
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","theta1","theta1","hThetaLeft","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    // triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","theta2","theta2","hThetaRight","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_Abs_WF_10Mio_noQE","my_output_Abs_CarlosWF_noQE","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_WF_10Mio_noQE","Sim_Abs_CarlosWF_noQE","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_Abs_CarlosWF_noSmearing(){
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","theta1","theta1","hThetaLeft","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    // triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","theta2","theta2","hThetaRight","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_Abs_CarlosWF_all","my_output_Abs_CarlosWF_noSmearing","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_CarlosWF_-30ps_offset","Sim_Abs_CarlosWF_noSmearing","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_Abs_CarlosWF_noQE_noSmearing(){
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p1x","p1x","hPLX_Lab","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p1y","p1y","hPLY_Lab","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p1z","p1z","hPLZ_Lab","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","P1","P1","hPL_Lab","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p2x","p2x","hPRX_Lab","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p2y","p2y","hPRY_Lab","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p2z","p2z","hPRZ_Lab","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","P2","P2","hPR_Lab","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_x","p_miss_x","hPmissX_Proton","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_y","p_miss_y","hPmissY_Proton","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","P_miss","P_miss","hPmiss_Proton","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","E_miss","E_miss","hEmiss_11B_QE","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","theta1","theta1","hThetaLeft","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","#theta for Left Proton","#theta_{1}","Counts",-1,0,"3_theta1");
    // triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","theta2","theta2","hThetaRight","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","#theta for Right Proton","#theta_{2}","Counts",-1,0,"3_theta2");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","phi1","phi1","hPhiLeft","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","phi2","phi2","hPhiRight","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","scattering_angle","scattering_angle","hComOpening_11B_QE","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Center of Mass Scattering Angle","Opening Angle (degree)","Counts",17,0,"4_Com_Angle");

    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_pb","h_pb","hPFrag11B","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_pbx","h_pbx","hPFrag11BX","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_pby","h_pby","hPFrag11BY","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_Abs_CarlosWF_noQE_all","my_output_Abs_CarlosWF_noQE_noSmearing","PhysicsHist_16_2_2025_weighted","h_pbz","h_pbz","hPFrag11BZ","Sim_Abs_CarlosWF_noQE_-30ps_offset","Sim_Abs_CarlosWF_noQE_noSmearing","Exp_16_02_2025","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_v1p2_50Mio_noAbs(){
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p1x","p1x","hPLX_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p1y","p1y","hPLY_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p1z","p1z","hPLZ_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","P1","P1","hPL_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p2x","p2x","hPRX_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p2y","p2y","hPRY_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p2z","p2z","hPRZ_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","P2","P2","hPR_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p_miss_x","p_miss_x","hPmissX_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p_miss_y","p_miss_y","hPmissY_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","E_miss","E_miss","hEmiss_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","phi1","phi1","hPhiLeft","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","phi2","phi2","hPhiRight","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_v1p2_50Mio_noAbs_NoPfragShift(){
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p1x","p1x","hPLX_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p1y","p1y","hPLY_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p1z","p1z","hPLZ_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","P1","P1","hPL_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p2x","p2x","hPRX_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p2y","p2y","hPRY_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p2z","p2z","hPRZ_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","P2","P2","hPR_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p_miss_x","p_miss_x","hPmissX_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p_miss_y","p_miss_y","hPmissY_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","E_miss","E_miss","hEmiss_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","phi1","phi1","hPhiLeft","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","phi2","phi2","hPhiRight","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_pb","h_pb","hPFrag11B","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_pbx","h_pbx","hPFrag11BX","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_pby","h_pby","hPFrag11BY","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_13_12_2024_NoPfragShift","h_pbz","h_pbz","hPFrag11BZ","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_NoPfragShift","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_v1p2_50Mio_noAbs_TasVertexXY(){
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p1x","p1x","hPLX_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p1y","p1y","hPLY_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p1z","p1z","hPLZ_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","P1","P1","hPL_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p2x","p2x","hPRX_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p2y","p2y","hPRY_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p2z","p2z","hPRZ_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","P2","P2","hPR_Lab","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p_miss_x","p_miss_x","hPmissX_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p_miss_y","p_miss_y","hPmissY_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","P_miss","P_miss","hPmiss_Proton","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","E_miss","E_miss","hEmiss_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","phi1","phi1","hPhiLeft","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","phi2","phi2","hPhiRight","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_pb","h_pb","hPFrag11B","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_pbx","h_pbx","hPFrag11BX","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_pby","h_pby","hPFrag11BY","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output_v1p2_50Mio","my_output_v1p2_50Mio_noAbs","PhysicsHist_27_12_2024_TasVertexXY","h_pbz","h_pbz","hPFrag11BZ","Sim_v1p2_50Mio","Sim_v1p2_50Mio_noAbs","Exp_TasVertexXY","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_v1p2_50Mio_noAbs_ExpCompare(){
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hVertexZ_11B_QE","hVertexZ_11B_QE","hVertexZ_11B_QE","Exp_July30","Exp_TasVertexXY","Exp_new","Vertex Z Position","Z (cm)","Counts",-1,0,"0_hVertexZ_11B_QE");

    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPLX_Lab","hPLX_Lab","hPLX_Lab","Exp_July30","Exp_TasVertexXY","Exp_new","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPLY_Lab","hPLY_Lab","hPLY_Lab","Exp_July30","Exp_TasVertexXY","Exp_new","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPLZ_Lab","hPLZ_Lab","hPLZ_Lab","Exp_July30","Exp_TasVertexXY","Exp_new","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPL_Lab","hPL_Lab","hPL_Lab","Exp_July30","Exp_TasVertexXY","Exp_new","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPRX_Lab","hPRX_Lab","hPRX_Lab","Exp_July30","Exp_TasVertexXY","Exp_new","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPRY_Lab","hPRY_Lab","hPRY_Lab","Exp_July30","Exp_TasVertexXY","Exp_new","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPRZ_Lab","hPRZ_Lab","hPRZ_Lab","Exp_July30","Exp_TasVertexXY","Exp_new","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPR_Lab","hPR_Lab","hPR_Lab","Exp_July30","Exp_TasVertexXY","Exp_new","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPmissX_Proton","hPmissX_Proton","hPmissX_Proton","Exp_July30","Exp_TasVertexXY","Exp_new","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_hPmiss_Proton_x");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPmissY_Proton","hPmissY_Proton","hPmissY_Proton","Exp_July30","Exp_TasVertexXY","Exp_new","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_hPmissY_Proton");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPmissZ_Proton","hPmissZ_Proton","hPmissZ_Proton","Exp_July30","Exp_TasVertexXY","Exp_new","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_hPmissZ_Proton");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPmiss_Proton","hPmiss_Proton","hPmiss_Proton","Exp_July30","Exp_TasVertexXY","Exp_new","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hMMiss2_11B_QE","hMMiss2_11B_QE","hMMiss2_11B_QE","Exp_July30","Exp_TasVertexXY","Exp_new","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_hMMiss2_11B_QE",0.5,1.92);
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hEmiss_11B_QE","hEmiss_11B_QE","hEmiss_11B_QE","Exp_July30","Exp_TasVertexXY","Exp_new","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hEmiss_11B_CutTheta_MM","hEmiss_11B_CutTheta_MM","hEmiss_11B_CutTheta_MM","Exp_July30","Exp_TasVertexXY","Exp_new","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hOpeningTheta_11B_QE","hOpeningTheta_11B_QE","hOpeningTheta_11B_QE","Exp_July30","Exp_TasVertexXY","Exp_new","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_hOpeningTheta_11B_QE");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hOpeningPhi_11B_QE","hOpeningPhi_11B_QE","hOpeningPhi_11B_QE","Exp_July30","Exp_TasVertexXY","Exp_new","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1);
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPhiLeft","hPhiLeft","hPhiLeft","Exp_July30","Exp_TasVertexXY","Exp_new","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPhiRight","hPhiRight","hPhiRight","Exp_July30","Exp_TasVertexXY","Exp_new","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hMandelstamT_QE_MM","hMandelstamT_QE_MM","hMandelstamT_QE_MM","Exp_July30","Exp_TasVertexXY","Exp_new","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hMandelstamU_QE_MM","hMandelstamU_QE_MM","hMandelstamU_QE_MM","Exp_July30","Exp_TasVertexXY","Exp_new","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hMandelstamMaxTU_QE_MM","hMandelstamMaxTU_QE_MM","hMandelstamMaxTU_QE_MM","Exp_July30","Exp_TasVertexXY","Exp_new","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hMandelstamMinTU_QE_MM","hMandelstamMinTU_QE_MM","hMandelstamMinTU_QE_MM","Exp_July30","Exp_TasVertexXY","Exp_new","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hCosGamma3D_11B_QE","hCosGamma3D_11B_QE","hCosGamma3D_11B_QE","Exp_July30","Exp_TasVertexXY","Exp_new","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hCosGamma_11B_QE","hCosGamma_11B_QE","hCosGamma_11B_QE","Exp_July30","Exp_TasVertexXY","Exp_new","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPFrag11B","hPFrag11B","hPFrag11B","Exp_July30","Exp_TasVertexXY","Exp_new","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPFrag11BX","hPFrag11BX","hPFrag11BX","Exp_July30","Exp_TasVertexXY","Exp_new","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPFrag11BY","hPFrag11BY","hPFrag11BY","Exp_July30","Exp_TasVertexXY","Exp_new","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("PhysicsHist_July30","PhysicsHist_27_12_2024_TasVertexXY","PhysicsHist","hPFrag11BZ","hPFrag11BZ","hPFrag11BZ","Exp_July30","Exp_TasVertexXY","Exp_new","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void plot_delta_test(){
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","vertex_z","vertex_z","Vertex Z Position","Z (cm)","Counts","0_vertex_z");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p1x","p1x","Left Proton Momentum X","P_{x} (GeV/c)","Counts","1_p1x");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p1y","p1y","Left Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p1y");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p1z","p1z","Left Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p1z");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","P1","P1","Left Proton Momentum","P (GeV/c)","Counts","1_p1");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p2x","p2x","Right Proton Momentum X","P_{x} (GeV/c)","Counts","1_p2x");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p2y","p2y","Right Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p2y");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p2z","p2z","Right Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p2z");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","P2","P2","Right Proton Momentum","P (GeV/c)","Counts","1_p2");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","beta_left","beta_left","#beta for Left Proton","#beta_{1}","Counts","1_beta_left");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","beta_right","beta_right","#beta for Right Proton","#beta_{2}","Counts","1_beta_right");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p_miss_x","p_miss_x","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts","2_p_miss_x");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p_miss_y","p_miss_y","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts","2_p_miss_y");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","p_miss_z","p_miss_z","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts","2_p_miss_z");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","P_miss","P_miss","Missing Momentum","Pmiss (GeV/c)","Counts","2_p_miss",0,-1,-1,1.2);
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","M_miss_square","M_miss_square","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts","2_M_miss_square");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","E_miss","E_miss","Missing Energy","E_{miss} (GeV/c)","Counts","2_E_miss");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","opening_theta","opening_theta","Proton Opening #theta","#theta (degree)","Counts","3_opening_theta");
    // overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","opening_phi","opening_phi","Proton Opening #phi","#phi (degree)","Counts","3_opening_phi");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","phi1","phi1","#phi for Left Proton","#phi_{1}","Counts","3_phi1");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","phi2","phi2","#phi for Right Proton","#phi_{2}","Counts","3_phi2");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","theta1","theta1","#theta for Left Proton","#theta_{1}","Counts","3_theta1");
    overlay_delta("my_output_delta_test_frag_highstat_100_nonQE","my_output_delta_test_frag_highstat_100_QE","my_output_delta_test_QEfromDelta","theta2","theta2","#theta for Right Proton","#theta_{2}","Counts","3_theta2");

    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","vertex_z","vertex_z","Vertex Z Position","Z (cm)","Counts","0_vertex_z");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p1x","p1x","Left Proton Momentum X","P_{x} (GeV/c)","Counts","1_p1x");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p1y","p1y","Left Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p1y");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p1z","p1z","Left Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p1z");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","P1","P1","Left Proton Momentum","P (GeV/c)","Counts","1_p1");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p2x","p2x","Right Proton Momentum X","P_{x} (GeV/c)","Counts","1_p2x");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p2y","p2y","Right Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p2y");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p2z","p2z","Right Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p2z");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","P2","P2","Right Proton Momentum","P (GeV/c)","Counts","1_p2");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","beta_left","beta_left","#beta for Left Proton","#beta_{1}","Counts","1_beta_left");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","beta_right","beta_right","#beta for Right Proton","#beta_{2}","Counts","1_beta_right");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p_miss_x","p_miss_x","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts","2_p_miss_x");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p_miss_y","p_miss_y","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts","2_p_miss_y");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","p_miss_z","p_miss_z","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts","2_p_miss_z");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","P_miss","P_miss","Missing Momentum","Pmiss (GeV/c)","Counts","2_p_miss",0,-1,-1,1.2);
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","M_miss_square","M_miss_square","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts","2_M_miss_square");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","E_miss","E_miss","Missing Energy","E_{miss} (GeV/c)","Counts","2_E_miss");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","opening_theta","opening_theta","Proton Opening #theta","#theta (degree)","Counts","3_opening_theta");
    // // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","opening_phi","opening_phi","Proton Opening #phi","#phi (degree)","Counts","3_opening_phi");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","phi1","phi1","#phi for Left Proton","#phi_{1}","Counts","3_phi1");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","phi2","phi2","#phi for Right Proton","#phi_{2}","Counts","3_phi2");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","theta1","theta1","#theta for Left Proton","#theta_{1}","Counts","3_theta1");
    // overlay_delta("my_output_delta_test_frag_highstat_170_nonQE","my_output_delta_test_frag_highstat_170_QE","my_output_delta_test_QEfromDelta","theta2","theta2","#theta for Right Proton","#theta_{2}","Counts","3_theta2");

    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","vertex_z","vertex_z","Vertex Z Position","Z (cm)","Counts","0_vertex_z");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p1x","p1x","Left Proton Momentum X","P_{x} (GeV/c)","Counts","1_p1x");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p1y","p1y","Left Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p1y");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p1z","p1z","Left Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p1z");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","P1","P1","Left Proton Momentum","P (GeV/c)","Counts","1_p1");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p2x","p2x","Right Proton Momentum X","P_{x} (GeV/c)","Counts","1_p2x");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p2y","p2y","Right Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p2y");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p2z","p2z","Right Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p2z");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","P2","P2","Right Proton Momentum","P (GeV/c)","Counts","1_p2");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","beta_left","beta_left","#beta for Left Proton","#beta_{1}","Counts","1_beta_left");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","beta_right","beta_right","#beta for Right Proton","#beta_{2}","Counts","1_beta_right");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p_miss_x","p_miss_x","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts","2_p_miss_x");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p_miss_y","p_miss_y","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts","2_p_miss_y");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","p_miss_z","p_miss_z","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts","2_p_miss_z");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","P_miss","P_miss","Missing Momentum","Pmiss (GeV/c)","Counts","2_p_miss",0,-1,-1,1.2);
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","M_miss_square","M_miss_square","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts","2_M_miss_square");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","E_miss","E_miss","Missing Energy","E_{miss} (GeV/c)","Counts","2_E_miss");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","opening_theta","opening_theta","Proton Opening #theta","#theta (degree)","Counts","3_opening_theta");
    // // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","opening_phi","opening_phi","Proton Opening #phi","#phi (degree)","Counts","3_opening_phi");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","phi1","phi1","#phi for Left Proton","#phi_{1}","Counts","3_phi1");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","phi2","phi2","#phi for Right Proton","#phi_{2}","Counts","3_phi2");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","theta1","theta1","#theta for Left Proton","#theta_{1}","Counts","3_theta1");
    // overlay_delta("my_output_delta_test_frag_highstat_1","my_output_delta_test_frag_highstat_2","my_output_delta_test_QEfromDelta","theta2","theta2","#theta for Right Proton","#theta_{2}","Counts","3_theta2");

    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","vertex_z","vertex_z","Vertex Z Position","Z (cm)","Counts","0_vertex_z");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p1x","p1x","Left Proton Momentum X","P_{x} (GeV/c)","Counts","1_p1x");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p1y","p1y","Left Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p1y");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p1z","p1z","Left Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p1z");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","P1","P1","Left Proton Momentum","P (GeV/c)","Counts","1_p1");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p2x","p2x","Right Proton Momentum X","P_{x} (GeV/c)","Counts","1_p2x");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p2y","p2y","Right Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p2y");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p2z","p2z","Right Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p2z");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","P2","P2","Right Proton Momentum","P (GeV/c)","Counts","1_p2");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","beta_left","beta_left","#beta for Left Proton","#beta_{1}","Counts","1_beta_left");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","beta_right","beta_right","#beta for Right Proton","#beta_{2}","Counts","1_beta_right");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p_miss_x","p_miss_x","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts","2_p_miss_x");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p_miss_y","p_miss_y","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts","2_p_miss_y");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","p_miss_z","p_miss_z","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts","2_p_miss_z");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","P_miss","P_miss","Missing Momentum","Pmiss (GeV/c)","Counts","2_p_miss",0,-1,-1,1.2);
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","M_miss_square","M_miss_square","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts","2_M_miss_square");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","E_miss","E_miss","Missing Energy","E_{miss} (GeV/c)","Counts","2_E_miss");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","opening_theta","opening_theta","Proton Opening #theta","#theta (degree)","Counts","3_opening_theta");
    // // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","opening_phi","opening_phi","Proton Opening #phi","#phi (degree)","Counts","3_opening_phi");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","phi1","phi1","#phi for Left Proton","#phi_{1}","Counts","3_phi1");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","phi2","phi2","#phi for Right Proton","#phi_{2}","Counts","3_phi2");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","theta1","theta1","#theta for Left Proton","#theta_{1}","Counts","3_theta1");
    // overlay_delta("my_output_delta_test_frag_highstat_QEcut_delta","my_output_delta_test_frag_highstat_QEcut_QE","my_output_delta_test_QEfromDelta","theta2","theta2","#theta for Right Proton","#theta_{2}","Counts","3_theta2");

    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","vertex_z","vertex_z","Vertex Z Position","Z (cm)","Counts","0_vertex_z");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p1x","p1x","Left Proton Momentum X","P_{x} (GeV/c)","Counts","1_p1x");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p1y","p1y","Left Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p1y");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p1z","p1z","Left Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p1z");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","P1","P1","Left Proton Momentum","P (GeV/c)","Counts","1_p1");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p2x","p2x","Right Proton Momentum X","P_{x} (GeV/c)","Counts","1_p2x");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p2y","p2y","Right Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p2y");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p2z","p2z","Right Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p2z");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","P2","P2","Right Proton Momentum","P (GeV/c)","Counts","1_p2");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","beta_left","beta_left","#beta for Left Proton","#beta_{1}","Counts","1_beta_left");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","beta_right","beta_right","#beta for Right Proton","#beta_{2}","Counts","1_beta_right");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p_miss_x","p_miss_x","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts","2_p_miss_x");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p_miss_y","p_miss_y","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts","2_p_miss_y");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","p_miss_z","p_miss_z","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts","2_p_miss_z");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","P_miss","P_miss","Missing Momentum","Pmiss (GeV/c)","Counts","2_p_miss",0,-1,-1,1.2);
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","M_miss_square","M_miss_square","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts","2_M_miss_square");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","E_miss","E_miss","Missing Energy","E_{miss} (GeV/c)","Counts","2_E_miss");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","opening_theta","opening_theta","Proton Opening #theta","#theta (degree)","Counts","3_opening_theta");
    // // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","opening_phi","opening_phi","Proton Opening #phi","#phi (degree)","Counts","3_opening_phi");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","phi1","phi1","#phi for Left Proton","#phi_{1}","Counts","3_phi1");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","phi2","phi2","#phi for Right Proton","#phi_{2}","Counts","3_phi2");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","theta1","theta1","#theta for Left Proton","#theta_{1}","Counts","3_theta1");
    // overlay_delta("my_output_delta_test_frag_highstat_delta","my_output_delta_test_frag_highstat_QE","my_output_delta_test_QEfromDelta","theta2","theta2","#theta for Right Proton","#theta_{2}","Counts","3_theta2");

    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","vertex_z","vertex_z","Vertex Z Position","Z (cm)","Counts","0_vertex_z");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p1x","p1x","Left Proton Momentum X","P_{x} (GeV/c)","Counts","1_p1x");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p1y","p1y","Left Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p1y");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p1z","p1z","Left Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p1z");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","P1","P1","Left Proton Momentum","P (GeV/c)","Counts","1_p1");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p2x","p2x","Right Proton Momentum X","P_{x} (GeV/c)","Counts","1_p2x");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p2y","p2y","Right Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p2y");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p2z","p2z","Right Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p2z");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","P2","P2","Right Proton Momentum","P (GeV/c)","Counts","1_p2");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","beta_left","beta_left","#beta for Left Proton","#beta_{1}","Counts","1_beta_left");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","beta_right","beta_right","#beta for Right Proton","#beta_{2}","Counts","1_beta_right");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p_miss_x","p_miss_x","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts","2_p_miss_x");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p_miss_y","p_miss_y","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts","2_p_miss_y");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","p_miss_z","p_miss_z","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts","2_p_miss_z");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","P_miss","P_miss","Missing Momentum","Pmiss (GeV/c)","Counts","2_p_miss");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","M_miss_square","M_miss_square","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts","2_M_miss_square");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","E_miss","E_miss","Missing Energy","E_{miss} (GeV/c)","Counts","2_E_miss");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","opening_theta","opening_theta","Proton Opening #theta","#theta (degree)","Counts","3_opening_theta");
    // // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","opening_phi","opening_phi","Proton Opening #phi","#phi (degree)","Counts","3_opening_phi");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","phi1","phi1","#phi for Left Proton","#phi_{1}","Counts","3_phi1");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","phi2","phi2","#phi for Right Proton","#phi_{2}","Counts","3_phi2");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","theta1","theta1","#theta for Left Proton","#theta_{1}","Counts","3_theta1");
    // overlay_delta("my_output_delta_test_frag_delta","my_output_delta_test_frag_QE","my_output_delta_test_QEfromDelta","theta2","theta2","#theta for Right Proton","#theta_{2}","Counts","3_theta2");

    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","vertex_z","vertex_z","Vertex Z Position","Z (cm)","Counts","0_vertex_z");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p1x","p1x","Left Proton Momentum X","P_{x} (GeV/c)","Counts","1_p1x");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p1y","p1y","Left Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p1y");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p1z","p1z","Left Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p1z");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","P1","P1","Left Proton Momentum","P (GeV/c)","Counts","1_p1");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p2x","p2x","Right Proton Momentum X","P_{x} (GeV/c)","Counts","1_p2x");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p2y","p2y","Right Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p2y");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p2z","p2z","Right Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p2z");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","P2","P2","Right Proton Momentum","P (GeV/c)","Counts","1_p2");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p_miss_x","p_miss_x","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts","2_p_miss_x");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p_miss_y","p_miss_y","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts","2_p_miss_y");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","p_miss_z","p_miss_z","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts","2_p_miss_z");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","P_miss","P_miss","Missing Momentum","Pmiss (GeV/c)","Counts","2_p_miss");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","M_miss_square","M_miss_square","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts","2_M_miss_square");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","E_miss","E_miss","Missing Energy","E_{miss} (GeV/c)","Counts","2_E_miss");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","opening_theta","opening_theta","Proton Opening #theta","#theta (degree)","Counts","3_opening_theta");
    // // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","opening_phi","opening_phi","Proton Opening #phi","#phi (degree)","Counts","3_opening_phi");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","phi1","phi1","#phi for Left Proton","#phi_{1}","Counts","3_phi1");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","phi2","phi2","#phi for Right Proton","#phi_{2}","Counts","3_phi2");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","theta1","theta1","#theta for Left Proton","#theta_{1}","Counts","3_theta1");
    // overlay_delta("my_output_delta_test_NonQE","my_output_delta_test_QEpure","my_output_delta_test_QEfromDelta","theta2","theta2","#theta for Right Proton","#theta_{2}","Counts","3_theta2");



    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","vertex_z","vertex_z","Vertex Z Position","Z (cm)","Counts","0_vertex_z");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p1x","p1x","Left Proton Momentum X","P_{x} (GeV/c)","Counts","1_p1x");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p1y","p1y","Left Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p1y");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p1z","p1z","Left Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p1z");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","P1","P1","Left Proton Momentum","P (GeV/c)","Counts","1_p1");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p2x","p2x","Right Proton Momentum X","P_{x} (GeV/c)","Counts","1_p2x");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p2y","p2y","Right Proton Momentum Y","P_{y} (GeV/c)","Counts","1_p2y");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p2z","p2z","Right Proton Momentum Z","P_{z} (GeV/c)","Counts","1_p2z");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","P2","P2","Right Proton Momentum","P (GeV/c)","Counts","1_p2");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p_miss_x","p_miss_x","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts","2_p_miss_x");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p_miss_y","p_miss_y","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts","2_p_miss_y");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","p_miss_z","p_miss_z","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts","2_p_miss_z");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","P_miss","P_miss","Missing Momentum","Pmiss (GeV/c)","Counts","2_p_miss");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","M_miss_square","M_miss_square","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts","2_M_miss_square");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","E_miss","E_miss","Missing Energy","E_{miss} (GeV/c)","Counts","2_E_miss");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","opening_theta","opening_theta","Proton Opening #theta","#theta (degree)","Counts","3_opening_theta");
    // // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","opening_phi","opening_phi","Proton Opening #phi","#phi (degree)","Counts","3_opening_phi");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","phi1","phi1","#phi for Left Proton","#phi_{1}","Counts","3_phi1");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","phi2","phi2","#phi for Right Proton","#phi_{2}","Counts","3_phi2");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","theta1","theta1","#theta for Left Proton","#theta_{1}","Counts","3_theta1");
    // overlay_delta("my_output_delta_test_NoSmearing_NonQE","my_output_delta_test_NoSmearing_QEpure","my_output_delta_test_NoSmearing_QEfromDelta","theta2","theta2","#theta for Right Proton","#theta_{2}","Counts","3_theta2");

    
    /*
    triple("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_old","Sim_alexei","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_old","Sim_alexei","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_old","Sim_alexei","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_old","Sim_alexei","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output","my_output_alexei","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_old","Sim_alexei","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output","my_output_alexei","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_old","Sim_alexei","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output","my_output_alexei","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_alexei","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output","my_output_alexei","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_alexei","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output","my_output_alexei","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_alexei","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output","my_output_alexei","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_alexei","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");
    */
}

void compare_triple_new(){
    triple_new("my_output","my_output_alexei","PhysicsHist","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_old","Sim_alexei","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple_new("my_output","my_output_alexei","PhysicsHist","p1x","p1x","hPLX_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple_new("my_output","my_output_alexei","PhysicsHist","p1y","p1y","hPLY_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple_new("my_output","my_output_alexei","PhysicsHist","p1z","p1z","hPLZ_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple_new("my_output","my_output_alexei","PhysicsHist","P1","P1","hPL_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple_new("my_output","my_output_alexei","PhysicsHist","p2x","p2x","hPRX_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple_new("my_output","my_output_alexei","PhysicsHist","p2y","p2y","hPRY_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple_new("my_output","my_output_alexei","PhysicsHist","p2z","p2z","hPRZ_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple_new("my_output","my_output_alexei","PhysicsHist","P2","P2","hPR_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple_new("my_output","my_output_alexei","PhysicsHist","p_miss_x","p_miss_x","hPmissX_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple_new("my_output","my_output_alexei","PhysicsHist","p_miss_y","p_miss_y","hPmissY_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple_new("my_output","my_output_alexei","PhysicsHist","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple_new("my_output","my_output_alexei","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple_new("my_output","my_output_alexei","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple_new("my_output","my_output_alexei","PhysicsHist","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_old","Sim_alexei","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",8,0,"2_M_miss_square",0,1.5);
    triple_new("my_output","my_output_alexei","PhysicsHist","E_miss","E_miss","hEmiss_11B_QE","Sim_old","Sim_alexei","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple_new("my_output","my_output_alexei","PhysicsHist","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_old","Sim_alexei","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple_new("my_output","my_output_alexei","PhysicsHist","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_old","Sim_alexei","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple_new("my_output","my_output_alexei","PhysicsHist","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_old","Sim_alexei","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1,5492);
    triple_new("my_output","my_output_alexei","PhysicsHist","phi1","phi1","hPhiLeft","Sim_old","Sim_alexei","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple_new("my_output","my_output_alexei","PhysicsHist","phi2","phi2","hPhiRight","Sim_old","Sim_alexei","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple_new("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_old","Sim_alexei","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple_new("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_old","Sim_alexei","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple_new("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_old","Sim_alexei","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple_new("my_output","my_output_alexei","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_old","Sim_alexei","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple_new("my_output","my_output_alexei","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_old","Sim_alexei","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple_new("my_output","my_output_alexei","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_old","Sim_alexei","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple_new("my_output","my_output_alexei","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_alexei","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple_new("my_output","my_output_alexei","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_alexei","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple_new("my_output","my_output_alexei","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_alexei","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple_new("my_output","my_output_alexei","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_alexei","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");


    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_old","Sim_alexei_new","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p1x","p1x","hPLX_Lab","Sim_old","Sim_alexei_new","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p1y","p1y","hPLY_Lab","Sim_old","Sim_alexei_new","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p1z","p1z","hPLZ_Lab","Sim_old","Sim_alexei_new","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","P1","P1","hPL_Lab","Sim_old","Sim_alexei_new","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p2x","p2x","hPRX_Lab","Sim_old","Sim_alexei_new","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p2y","p2y","hPRY_Lab","Sim_old","Sim_alexei_new","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p2z","p2z","hPRZ_Lab","Sim_old","Sim_alexei_new","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","P2","P2","hPR_Lab","Sim_old","Sim_alexei_new","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p_miss_x","p_miss_x","hPmissX_Proton","Sim_old","Sim_alexei_new","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p_miss_y","p_miss_y","hPmissY_Proton","Sim_old","Sim_alexei_new","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_old","Sim_alexei_new","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei_new","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei_new","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_old","Sim_alexei_new","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","E_miss","E_miss","hEmiss_11B_QE","Sim_old","Sim_alexei_new","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_old","Sim_alexei_new","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_old","Sim_alexei_new","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_old","Sim_alexei_new","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1,5492);
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","phi1","phi1","hPhiLeft","Sim_old","Sim_alexei_new","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","phi2","phi2","hPhiRight","Sim_old","Sim_alexei_new","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_old","Sim_alexei_new","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_old","Sim_alexei_new","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_old","Sim_alexei_new","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_old","Sim_alexei_new","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_old","Sim_alexei_new","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_old","Sim_alexei_new","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_alexei_new","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_alexei_new","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_alexei_new","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    // triple("my_output","my_output_alexei_xsKammerud_abs","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_alexei_new","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_v1p2_abs(){
    triple("my_output","my_output_v1p2_abs","PhysicsHist","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_old","Sim_v1p2_abs","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output","my_output_v1p2_abs","PhysicsHist","p1x","p1x","hPLX_Lab","Sim_old","Sim_v1p2_abs","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","p1y","p1y","hPLY_Lab","Sim_old","Sim_v1p2_abs","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","p1z","p1z","hPLZ_Lab","Sim_old","Sim_v1p2_abs","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","P1","P1","hPL_Lab","Sim_old","Sim_v1p2_abs","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","p2x","p2x","hPRX_Lab","Sim_old","Sim_v1p2_abs","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","p2y","p2y","hPRY_Lab","Sim_old","Sim_v1p2_abs","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","p2z","p2z","hPRZ_Lab","Sim_old","Sim_v1p2_abs","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","P2","P2","hPR_Lab","Sim_old","Sim_v1p2_abs","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output","my_output_v1p2_abs","PhysicsHist","p_miss_x","p_miss_x","hPmissX_Proton","Sim_old","Sim_v1p2_abs","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","p_miss_y","p_miss_y","hPmissY_Proton","Sim_old","Sim_v1p2_abs","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_old","Sim_v1p2_abs","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output","my_output_v1p2_abs","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_v1p2_abs","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output","my_output_v1p2_abs","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_v1p2_abs","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_old","Sim_v1p2_abs","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);
    triple("my_output","my_output_v1p2_abs","PhysicsHist","E_miss","E_miss","hEmiss_11B_QE","Sim_old","Sim_v1p2_abs","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("my_output","my_output_v1p2_abs","PhysicsHist","E_miss_with_tail","E_miss_with_tail","hEmiss_11B_CutTheta_MM","Sim_old","Sim_v1p2_abs","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",8,0,"2_E_miss_wit_tail",-1,1);


    triple("my_output","my_output_v1p2_abs","PhysicsHist","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_old","Sim_v1p2_abs","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_old","Sim_v1p2_abs","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1,5492);
    triple("my_output","my_output_v1p2_abs","PhysicsHist","phi1","phi1","hPhiLeft","Sim_old","Sim_v1p2_abs","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","phi2","phi2","hPhiRight","Sim_old","Sim_v1p2_abs","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_old","Sim_v1p2_abs","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_old","Sim_v1p2_abs","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_old","Sim_v1p2_abs","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_old","Sim_v1p2_abs","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma3D_11B_QE","Sim_old","Sim_v1p2_abs","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",5,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_old","Sim_v1p2_abs","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_v1p2_abs","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_v1p2_abs","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_v1p2_abs","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output","my_output_v1p2_abs","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_v1p2_abs","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_r0(){
    triple("my_output","my_output_alexei_r0","PhysicsHist","vertex_z","vertex_z","hVertexZ_11B_QE","Sim_old","Sim_alexei_r0","Exp","Vertex Z Position","Z (cm)","Counts",-1,0,"0_vertex_z");

    triple("my_output","my_output_alexei_r0","PhysicsHist","p1x","p1x","hPLX_Lab","Sim_old","Sim_alexei_r0","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple("my_output","my_output_alexei_r0","PhysicsHist","p1y","p1y","hPLY_Lab","Sim_old","Sim_alexei_r0","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple("my_output","my_output_alexei_r0","PhysicsHist","p1z","p1z","hPLZ_Lab","Sim_old","Sim_alexei_r0","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple("my_output","my_output_alexei_r0","PhysicsHist","P1","P1","hPL_Lab","Sim_old","Sim_alexei_r0","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple("my_output","my_output_alexei_r0","PhysicsHist","p2x","p2x","hPRX_Lab","Sim_old","Sim_alexei_r0","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple("my_output","my_output_alexei_r0","PhysicsHist","p2y","p2y","hPRY_Lab","Sim_old","Sim_alexei_r0","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple("my_output","my_output_alexei_r0","PhysicsHist","p2z","p2z","hPRZ_Lab","Sim_old","Sim_alexei_r0","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple("my_output","my_output_alexei_r0","PhysicsHist","P2","P2","hPR_Lab","Sim_old","Sim_alexei_r0","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple("my_output","my_output_alexei_r0","PhysicsHist","p_miss_x","p_miss_x","hPmissX_Proton","Sim_old","Sim_alexei_r0","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple("my_output","my_output_alexei_r0","PhysicsHist","p_miss_y","p_miss_y","hPmissY_Proton","Sim_old","Sim_alexei_r0","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple("my_output","my_output_alexei_r0","PhysicsHist","p_miss_z","p_miss_z","hPmissZ_Proton","Sim_old","Sim_alexei_r0","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output","my_output_alexei_r0","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei_r0","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple("my_output","my_output_alexei_r0","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei_r0","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple("my_output","my_output_alexei_r0","PhysicsHist","E_miss","E_miss","hEmiss_11B_QE","Sim_old","Sim_alexei_r0","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple("my_output","my_output_alexei_r0","PhysicsHist","M_miss_square","M_miss_square","hMMiss2_11B_QE","Sim_old","Sim_alexei_r0","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);

    triple("my_output","my_output_alexei_r0","PhysicsHist","opening_theta","opening_theta","hOpeningTheta_11B_QE","Sim_old","Sim_alexei_r0","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple("my_output","my_output_alexei_r0","PhysicsHist","opening_phi","opening_phi","hOpeningPhi_11B_QE","Sim_old","Sim_alexei_r0","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1,5492);
    triple("my_output","my_output_alexei_r0","PhysicsHist","phi1","phi1","hPhiLeft","Sim_old","Sim_alexei_r0","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple("my_output","my_output_alexei_r0","PhysicsHist","phi2","phi2","hPhiRight","Sim_old","Sim_alexei_r0","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple("my_output","my_output_alexei_r0","PhysicsHist","h_Mandelstam_t","h_Mandelstam_t","hMandelstamT_QE_MM","Sim_old","Sim_alexei_r0","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple("my_output","my_output_alexei_r0","PhysicsHist","h_Mandelstam_u","h_Mandelstam_u","hMandelstamU_QE_MM","Sim_old","Sim_alexei_r0","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple("my_output","my_output_alexei_r0","PhysicsHist","h_Mandelstam_u_t","h_Mandelstam_u_t","hMandelstamMaxTU_QE_MM","Sim_old","Sim_alexei_r0","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple("my_output","my_output_alexei_r0","PhysicsHist","h_Mandelstam_u_t_min","h_Mandelstam_u_t_min","hMandelstamMinTU_QE_MM","Sim_old","Sim_alexei_r0","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

    triple("my_output","my_output_alexei_r0","PhysicsHist","h_Angle_Pmiss_PFrag_cos","h_Angle_Pmiss_PFrag_cos","hCosGamma_11B_QE","Sim_old","Sim_alexei_r0","Exp","Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos");
    triple("my_output","my_output_alexei_r0","PhysicsHist","h_Angle_Pmiss_PFrag_cos2D","h_Angle_Pmiss_PFrag_cos2D","hCosGamma_11B_QE","Sim_old","Sim_alexei_r0","Exp","2D Opening Angle Between P_{miss} and P_{Frag}","Angle (degree)","Counts",-1,0,"5_Angle_Pmiss_PFrag_cos_2D");

    triple("my_output","my_output_alexei_r0","PhysicsHist","h_pb","h_pb","hPFrag11B","Sim_old","Sim_alexei_r0","Exp","P_{Frag} in 12C rest frame","P_{Frag} (GeV/c)","Counts",20,0,"6_pb");
    triple("my_output","my_output_alexei_r0","PhysicsHist","h_pbx","h_pbx","hPFrag11BX","Sim_old","Sim_alexei_r0","Exp","Pfrag_{X} in 12C rest frame","Pfrag_{X} (GeV/c)","Counts",10,0,"6_pbx");
    triple("my_output","my_output_alexei_r0","PhysicsHist","h_pby","h_pby","hPFrag11BY","Sim_old","Sim_alexei_r0","Exp","Pfrag_{Y} in 12C rest frame","Pfrag_{Y} (GeV/c)","Counts",10,0,"6_pby");
    triple("my_output","my_output_alexei_r0","PhysicsHist","h_pbz","h_pbz","hPFrag11BZ","Sim_old","Sim_alexei_r0","Exp","Pfrag_{Z} in 12C rest frame","Pfrag_{Z} (GeV/c)","Counts",-1,0,"6_pbz");

}

void compare_triple_generator(){
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p1x_1","p1x_1","hPLX_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p1x");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p1y_1","p1y_1","hPLY_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p1y");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p1z_1","p1z_1","hPLZ_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p1z");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","P1_1","P1_1","hPL_Lab","Sim_old","Sim_alexei","Exp","Left Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p1");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p2x_1","p2x_1","hPRX_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum X","P_{x} (GeV/c)","Counts",-1,0,"1_p2x");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p2y_1","p2y_1","hPRY_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum Y","P_{y} (GeV/c)","Counts",-1,0,"1_p2y");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p2z_1","p2z_1","hPRZ_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum Z","P_{z} (GeV/c)","Counts",-1,0,"1_p2z");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","P2_1","P2_1","hPR_Lab","Sim_old","Sim_alexei","Exp","Right Proton Momentum","P (GeV/c)","Counts",-1,0,"1_p2");
    
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p_miss_x_1","p_miss_x_1","hPmissX_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum X","Pmiss_{x} (GeV/c)","Counts",-1,0,"2_p_miss_x");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p_miss_y_1","p_miss_y_1","hPmissY_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum Y","Pmiss_{y} (GeV/c)","Counts",-1,0,"2_p_miss_y");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","p_miss_z_1","p_miss_z_1","hPmissZ_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum Z","Pmiss_{z} (GeV/c)","Counts",-1,0,"2_p_miss_z");
    // triple("my_output_generator","my_output_generator_alexei","PhysicsHist","P_miss","P_miss","hPmiss_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss",0.4,0.8);
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","P_miss_1","P_miss_1","hPmiss_Proton","Sim_old","Sim_alexei","Exp","Missing Momentum","Pmiss (GeV/c)","Counts",-1,0,"2_pmiss");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","E_miss_1","E_miss_1","hEmiss_11B_QE","Sim_old","Sim_alexei","Exp","Missing Energy","E_{miss} (GeV/c)","Counts",5,0,"2_E_miss",-1,1);
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","M_miss_square_1","M_miss_square_1","hMMiss2_11B_QE","Sim_old","Sim_alexei","Exp","Missing Mass Square","M^{2}_{miss} (GeV^2/c^2)","Counts",6,0,"2_M_miss_square",0.5,1.92);

    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","opening_theta_1","opening_theta_1","hOpeningTheta_11B_QE","Sim_old","Sim_alexei","Exp","Proton Opening #theta","#theta (degree)","Counts",-1,0,"3_opening_theta");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","opening_phi_1","opening_phi_1","hOpeningPhi_11B_QE","Sim_old","Sim_alexei","Exp","Proton Opening #phi","#phi (degree)","Counts",3.5,0,"3_opening_phi",-1,-1,5492);
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","phi1_1","phi1_1","hPhiLeft","Sim_old","Sim_alexei","Exp","#phi for Left Proton","#phi_{1}","Counts",-1,0,"3_phi1");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","phi2_1","phi2_1","hPhiRight","Sim_old","Sim_alexei","Exp","#phi for Right Proton","#phi_{2}","Counts",-1,0,"3_phi2");

    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","h_Mandelstam_t_1","h_Mandelstam_t_1","hMandelstamT_QE_MM","Sim_old","Sim_alexei","Exp","Mandelstam variable t","t (GeV^2/c^2)","Counts",10,0,"4_Mandelstam_t");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","h_Mandelstam_u_1","h_Mandelstam_u_1","hMandelstamU_QE_MM","Sim_old","Sim_alexei","Exp","Mandelstam variable u","u (GeV^2/c^2)","Counts",-1,0,"4_Mandelstam_u");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","h_Mandelstam_u_t_1","h_Mandelstam_u_t_1","hMandelstamMaxTU_QE_MM","Sim_old","Sim_alexei","Exp","Max{ |t| , |u| }","Max{ |t| , |u| }","Counts",-1,0,"4_Max_Mandelstam_t_u");
    triple_generator("my_output_generator","my_output_generator_alexei","PhysicsHist","h_Mandelstam_u_t_min_1","h_Mandelstam_u_t_min_1","hMandelstamMinTU_QE_MM","Sim_old","Sim_alexei","Exp","Min{ |t| , |u| }","Min{ |t| , |u| }","Counts",-1,0,"4_Min_Mandelstam_t_u");

}

void frag(){
    // overlay_other("my_output_src_wo", "my_output_src", "h_pb", "h_pb", "w/o accp cut", "with accp cut", "Pfrag", "Pfrag (GeV)", "Counts", -1., 0, "29_pb", -1, -1, 65000);
    // overlay_other("my_output_src_wo", "my_output_src", "h_pbx", "h_pbx", "w/o accp cut", "with accp cut", "Pfrag_{x}", "Pfrag_{x} (GeV)", "Counts", -1., 0, "29_pbx", -1, -1, 65000);
    // overlay_other("my_output_src_wo", "my_output_src", "h_pby", "h_pby", "w/o accp cut", "with accp cut", "Pfrag_{y}", "Pfrag_{y} (GeV)", "Counts", -1., 0, "29_pby", -1, -1, 65000);
    // overlay_other("my_output_src_wo", "my_output_src", "h_pbz", "h_pbz", "w/o accp cut", "with accp cut", "Pfrag_{z}", "Pfrag_{z} (GeV)", "Counts", -1., 0, "29_pbz", -1, -1, 65000);

    overlay_other("my_output_src_wo", "my_output_src", "Pfrag", "Pfrag", "w/o accp cut", "with accp cut", "Pfrag (proton) in 12C frame", "Pfrag (GeV)", "Counts", 18., 0, "29_pb", -1, -1, 30000);
    overlay_other("my_output_src_wo", "my_output_src", "Pfrag_x", "Pfrag_x", "w/o accp cut", "with accp cut", "Pfrag_{x} (proton) in 12C frame", "Pfrag_{x} (GeV)", "Counts", 30., 0, "29_pbx", -1, -1, 30000);
    overlay_other("my_output_src_wo", "my_output_src", "Pfrag_y", "Pfrag_y", "w/o accp cut", "with accp cut", "Pfrag_{y} (proton) in 12C frame", "Pfrag_{y} (GeV)", "Counts", 30., 0, "29_pby", -1, -1, 30000);
    overlay_other("my_output_src_wo", "my_output_src", "Pfrag_z", "Pfrag_z", "w/o accp cut", "with accp cut", "Pfrag_{z} (proton) in 12C frame", "Pfrag_{z} (GeV)", "Counts", 12., 0, "29_pbz", -1, -1, 30000);
}

void make_plot(){
    // overlay("my_output", "PhysicsHist", "p_miss_x", "hPmissX_Proton", "Pmiss_{x}", "Pmiss_{x} (GeV/c)", "Counts", 11., 1, "test");
    // single("PhysicsHist", "hPmissX_Proton", "Pmiss_{x}", "Pmiss_{x} (GeV/c)", "Counts", "test_single");

    // - fragment ID P/Z vs Z with some p2p condition
    // single("PresentationHistograms", "hBC5PoQ_QE_Mdf", "Fragment Identification", "Z_{eff}", "P/Z (Gev/c)", 1, "1_fragment_ID");

    // - QE selection in opening angle vs Emiss
    // single("PhysicsHist", "???", "QE Selection", "E_{miss} (GeV/c)", "#theta_{p1} + #theta_{p2} (deg)", 1, "2_QE_selection");
    
    // - 1D pp opening angle w/ and w/o 11B [+sim]
    // 3 opening_theta opening_phi
    overlay("my_output", "PresentationHistograms", "opening_theta", "hOpeningTheta_11B", "Proton Opening Angle", "#theta_{L} + #theta_{R} (deg)", "Counts", 5., 0, "3_opening_theta", 20, 80, 5492); // 7500
    // overlay("my_output", "PhysicsHist", "opening_theta", "hOpeningTheta_11B_QE", "Opening Angle", "#theta_{1} + #theta_{2} (deg)", "Counts", 8., 1, "3_opening_theta", 50, 80);
    // overlay("my_output", "PhysicsHist", "opening_phi", "hOpeningPhi_11B_QE", "Opening Angle", "#phi_{1} + #phi_{2} (deg)", "Counts", 3., 1, "3_opening_phi");

    // - proton-proton 2D angular correlation w/ 11B
    // 4

    // - 1D Mmiss w/ and w/o 11B and QE [+sim]
    // 5 
    overlay("my_output", "PresentationHistograms", "M_miss_square", "hMMiss2_11B", "Missing Mass Square", "Mmiss^{2} (GeV^{2}/c^{4})", "Counts", 8., 0, "5_Mmiss_square", -1.5, 1.5, 5492);

    // - 1D pmiss, pmissX, pmissZ for QE events [+sim]
    // 6 
    overlay("my_output", "PresentationHistograms", "P_miss", "hPmiss_Proton", "Missing Momentum", "Pmiss (GeV/c)", "Counts", 14., 0, "6_Pmiss", -1., -1.);
    overlay("my_output", "PresentationHistograms", "p_miss_x", "hPmissX_Proton", "Missing Momentum X Projection", "Pmiss_{x} (GeV/c)", "Counts", 14., 0, "6_Pmiss_x", -1., -1.);
    overlay("my_output", "PresentationHistograms", "p_miss_z", "hPmissZ_Proton", "Missing Momentum Z Projection", "Pmiss_{z} (GeV/c)", "Counts", 10., 0, "6_Pmiss_z", -1., -1.);

    // - 1D 11B pmiss for QE [+sim]
    // 7 P_miss_frag_with_accp
    overlay("my_output", "PresentationHistograms", "P_miss_frag_with_accp", "hPFrag11B_QE", "Pmiss reconstructed from Pfrag", "Pmiss (GeV/c)", "Counts", 17, 0, "7_Pmiss_from_frag", -1., -1.);

    // - cos() of fragment-pmiss opening angle [+sim]
    // 8 
    overlay("my_output", "PresentationHistograms", "h_Angle_Pmiss_PFrag_cos", "hCosGamma_11B_QE", "Fragment-Pmiss Opening Angle", "cos(#gamma)", "Counts", 4.5, 0, "8_cos_fragment_pmiss", -1., -1.);

    // - max(t,u) for QE [+sim]
    // 9 h_Mandelstam_u_t
    overlay("my_output", "PresentationHistograms", "h_Mandelstam_u_t", "hMandelstamMaxTU_QE_MM_Weight", "Maximum in |t| and |u|", "Max{|t|,|u|} (GeV^2/c^2)", "Counts", 8, 0, "9_max_t_u", -1., -1., 5700);

    // ------------------my_output_src-----------------

    // - cos(pmiss,prec) opening angle for 10B SRC [+sim]
    // 10 h_Angle_Pmiss_Pn_cos
    overlay("my_output_src", "PresentationHistograms", "h_Angle_Pmiss_Pn_cos", "hCosThetaRel_10B", "cos(pmiss,prec) Opening Angle for ^{10}B SRC", "cos(pmiss,prec)", "Counts", 1.2, 0, "10_cos_pmiss_prec", -1., -1.);

    // - cos(p10B,prel) opening angle for 10B SRC [+sim]
    // 11 h_Angle_Pfrag_Prel_cos
    overlay("my_output_src", "PresentationHistograms", "h_Angle_Pfrag_Prel_cos", "hCosThetaCM_10B", "cos(p10B,prel) opening angle for ^{10}B SRC", "cos(pmiss,prel)", "Counts", 3, 0, "11_cos_pmiss_prel", -1., -1.);

    // - Mmiss_excl. for 10B SRC [+sim]
    // 12 h_Mmiss_excl
    overlay("my_output_src", "PresentationHistograms", "h_Mmiss_excl", "hMMiss2Exclusive_10B_cutSRC", "Exclusive Missing Mass Square for ^{10}B SRC", "Mmiss^{2} (GeV^{2}/c^{4})", "Counts", 2, 0, "12_Mmiss_square_10B_SRC", -1., -1.);

}
  
void Fitting(){
    // Fit("my_output","p_miss_x","","","",1,"pmiss_x_old",-0.6,0.6);
    // Fit("my_output","p_miss_y","","","",1,"pmiss_y_old",-0.6,0.6);

    // Fit("my_output_alexei","p_miss_x","","","",1,"pmiss_x_alexei",-0.6,0.6);
    // Fit("my_output_alexei","p_miss_y","","","",1,"pmiss_y_alexei",-0.6,0.6);

    // Fit("PhysicsHist","hPmissX_Proton","","","",1,"pmiss_x_exp",-0.6,0.6);
    // Fit("PhysicsHist","hPmissY_Proton","","","",1,"pmiss_y_exp",-0.6,0.6);

    // Fit("PhysicsHist","hPFrag11BZ","","","",1,"hPFrag11BZ",-0.4,0.4);
    // Fit("my_output","h_pbz","","","",1,"h_pbz",-0.4,0.4);
    // Fit("my_output_alexei","h_pbz","","","",1,"h_pbz_alexei",-0.4,0.4);

    Fit("Vertex","hVertexX","","","",1,"vertex_x",-2,3);
    Fit("Vertex","hVertexY","","","",1,"vertex_y",-2,2);

}

void plot_2D(){
    make_2D_plot("QE_Simulation","sim","P_miss_x",100,-1,1,"Pfrag_x",100,-1,1,"Pmiss_{x} vs. Pfrag_{x}","Pmiss_{x} (GeV)", "Pfrag_{x} (GeV)",0,0,"pmissx_pfragx");
    make_2D_plot("QE_Simulation","sim","P_miss_y",100,-1,1,"Pfrag_y",100,-1,1,"Pmiss_{y} vs. Pfrag_{y}","Pmiss_{y} (GeV)", "Pfrag_{y} (GeV)",0,0,"pmissy_pfragy");
    make_2D_plot("QE_Simulation","sim","P_miss_z",100,-1,1,"Pfrag_z",100,-1,1,"Pmiss_{z} vs. Pfrag_{z}","Pmiss_{z} (GeV)", "Pfrag_{z} (GeV)",0,0,"pmissz_pfragz");

    make_2D_plot("QE_Simulation_alexei","sim","P_miss_x",100,-1,1,"Pfrag_x",100,-1,1,"Pmiss_{x} vs. Pfrag_{x}","Pmiss_{x} (GeV)", "Pfrag_{x} (GeV)",1,0,"pmissx_pfragx_alexei");
    make_2D_plot("QE_Simulation_alexei","sim","P_miss_y",100,-1,1,"Pfrag_y",100,-1,1,"Pmiss_{y} vs. Pfrag_{y}","Pmiss_{y} (GeV)", "Pfrag_{y} (GeV)",1,0,"pmissy_pfragy_alexei");
    make_2D_plot("QE_Simulation_alexei","sim","P_miss_z",100,-1,1,"Pfrag_z",100,-1,1,"Pmiss_{z} vs. Pfrag_{z}","Pmiss_{z} (GeV)", "Pfrag_{z} (GeV)",1,0,"pmissz_pfragz_alexei");

    make_2D_plot("QE_Simulation","sim","E_miss",100,-0.5,0.5,"opening_theta",100,55,75,"Emiss vs. opening #theta","Emiss (GeV)", "opening #theta (degree)",0,0,"Emiss_opening_theta");
    make_2D_plot("QE_Simulation_alexei","sim","E_miss",100,-0.5,0.5,"opening_theta",100,55,75,"Emiss vs. opening #theta","Emiss (GeV)", "opening #theta (degree)",1,0,"Emiss_opening_theta_alexei");
}


void overlay(TString my_input_name, TString exp_input, TString my_plot, TString goran_plot, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.){
    TFile* my_input = TFile::Open("../Sim0/" + my_input_name + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + exp_input + ".root");

    TString Output_Name = "./plots/" + pdf_name + ".pdf";
    TString Output_Name_C = "./plots/" + pdf_name + ".C";

    Int_t QE_Flag = 0;
    TH1F* my_hist = (TH1F*)my_input->Get(my_plot);
    TH1F* goran_hist = (TH1F*)goran_input->Get(goran_plot);
    TH1F* goran_hist_QE = new TH1F();
    if(goran_plot=="hMMiss2_11B"){
        goran_hist_QE = (TH1F*)goran_input->Get("hMMiss2_11B_QE");
        QE_Flag = 1;
    }

    Double_t NormFactor = (goran_hist->GetEntries())*1.;
    if(NormF>0.) NormFactor = NormF;

    goran_hist->SetTitle(title);
    // goran_hist->SetTitleFont(32);
    // goran_hist->SetTitleSize(0.06);
    goran_hist->SetXTitle(x_title);
    goran_hist->GetXaxis()->CenterTitle(1);
    goran_hist->GetXaxis()->SetTitleFont(32);
    goran_hist->GetXaxis()->SetTitleSize(0.06);
    goran_hist->GetXaxis()->SetTitleOffset(0.7);
    goran_hist->SetYTitle(y_title);
    goran_hist->GetYaxis()->CenterTitle(1);
    goran_hist->GetYaxis()->SetTitleFont(32);
    goran_hist->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    if(Stat_box==0) goran_hist->SetStats(0);
    if(x_min*x_max<0.9 || x_min*x_max>1.1) goran_hist->GetXaxis()->SetRangeUser(x_min, x_max);
    goran_hist->SetLineColor(6);
    goran_hist->Draw("E");
    // goran_hist->Fit("gaus","","SAME",-0.4,0.4);
    if(Y_range>0) goran_hist->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    goran_hist_QE->SetLineColor(9); // 4
    goran_hist_QE->Draw("SameE");

    my_hist->SetLineColor(1);
    my_hist->Draw("SameHIST");
    my_hist->SetNormFactor(NormFactor);

    TLegend *l_hist = new TLegend(0.1,0.8,0.3,0.9,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(my_hist,"Simulation","l");
    if(QE_Flag==0) l_hist->AddEntry(goran_hist,"Experiment","lep");
    else{
        l_hist->AddEntry(goran_hist,"Experiment","lep");
        l_hist->AddEntry(goran_hist_QE,"Experiment QE","lep");
    }
    // l_hist->Draw();

    c_hist->SaveAs(Output_Name);
    c_hist->SaveAs(Output_Name_C);
}

void overlay_delta(TString my_input_name, TString exp_input, TString exp_input_2, TString my_plot, TString goran_plot, TString title, TString x_title, TString y_title, TString pdf_name, Int_t Stat_box = 0, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.){
    TFile* my_input = TFile::Open("../Sim0/" + my_input_name + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + exp_input + ".root");
    TFile* goran_input_2 = TFile::Open("../Sim0/" + exp_input_2 + ".root");

    TString Output_Name = "./plots_delta/" + pdf_name + ".pdf";
    TString Output_Name_C = "./plots_delta/" + pdf_name + ".C";

    TH1F* my_hist = (TH1F*)my_input->Get(my_plot);
    TH1F* goran_hist = (TH1F*)goran_input->Get(goran_plot);
    TH1F* goran_hist_2 = (TH1F*)goran_input_2->Get(goran_plot);

    TH1F* h_sum = (TH1F*)my_hist->Clone("h_sum");
    h_sum->Add(goran_hist);
    // h_sum->SetTitle(title);
    // // h_sum->SetTitleFont(32);
    // // h_sum->SetTitleSize(0.06);
    // h_sum->SetXTitle(x_title);
    // h_sum->GetXaxis()->CenterTitle(1);
    // h_sum->GetXaxis()->SetTitleFont(32);
    // h_sum->GetXaxis()->SetTitleSize(0.06);
    // h_sum->GetXaxis()->SetTitleOffset(0.7);
    // h_sum->SetYTitle(y_title);
    // h_sum->GetYaxis()->CenterTitle(1);
    // h_sum->GetYaxis()->SetTitleFont(32);
    // h_sum->GetYaxis()->SetTitleSize(0.04);    

    goran_hist->SetTitle(title);
    // goran_hist->SetTitleFont(32);
    // goran_hist->SetTitleSize(0.06);
    goran_hist->SetXTitle(x_title);
    goran_hist->GetXaxis()->CenterTitle(1);
    goran_hist->GetXaxis()->SetTitleFont(32);
    goran_hist->GetXaxis()->SetTitleSize(0.06);
    goran_hist->GetXaxis()->SetTitleOffset(0.7);
    goran_hist->SetYTitle(y_title);
    goran_hist->GetYaxis()->CenterTitle(1);
    goran_hist->GetYaxis()->SetTitleFont(32);
    goran_hist->GetYaxis()->SetTitleSize(0.04);

    // Double_t y_max = goran_hist->GetMaximum();
    Double_t y_max = h_sum->GetMaximum();
    if(NormF>0) goran_hist->GetYaxis()->SetRangeUser(0,y_max*NormF);
    else goran_hist->GetYaxis()->SetRangeUser(0,y_max*1.2);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    if(Stat_box==0) goran_hist->SetStats(0);
    if(x_min*x_max<0.9 || x_min*x_max>1.1){
        goran_hist->GetXaxis()->SetRangeUser(x_min, x_max);
        h_sum->GetXaxis()->SetRangeUser(x_min, x_max);
    }
    goran_hist->SetLineColor(1);
    goran_hist->Draw("HIST");
    // goran_hist->Fit("gaus","","SAME",-0.4,0.4);

    my_hist->SetLineColor(6);
    my_hist->Draw("SameHIST");

    h_sum->SetLineColor(2);
    h_sum->Draw("SameHIST");

    // goran_hist_2->SetLineColor(2);
    // goran_hist_2->Draw("SameHIST");

    TLegend *l_hist = new TLegend(0.1,0.8,0.3,0.9,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(h_sum,"Total","l");
    l_hist->AddEntry(my_hist,"Non-QE","l");
    l_hist->AddEntry(goran_hist,"Pure-QE","l");
    // l_hist->AddEntry(goran_hist_2,"Delta-QE","l");
    l_hist->Draw();

    c_hist->SaveAs(Output_Name);
    // c_hist->SaveAs(Output_Name_C);
}

void single(TString input_name, TString my_plot, TString title, TString x_title, TString y_title, Int_t Stat_box, TString pdf_name){
    TFile* input = TFile::Open("../Sim0/" + input_name + ".root");

    TString Output_Name = "./plots/" + pdf_name + ".pdf";

    TH1F* hist = (TH1F*)input->Get(my_plot);

    hist->SetTitle(title);
    // hist->SetTitleFont(32);
    // goran_hist->SetTitleSize(0.06);
    hist->SetXTitle(x_title);
    hist->GetXaxis()->CenterTitle(1);
    hist->GetXaxis()->SetTitleFont(32);
    hist->GetXaxis()->SetTitleSize(0.06);
    hist->GetXaxis()->SetTitleOffset(0.7);
    hist->SetYTitle(y_title);
    hist->GetYaxis()->CenterTitle(1);
    hist->GetYaxis()->SetTitleFont(32);
    hist->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    hist->SetLineColor(6);
    hist->Draw();

    c_hist->SaveAs(Output_Name);
}

void overlay_other(TString input1, TString input2, TString plot1, TString plot2, TString legend1, TString legend2, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.){
    TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + input2 + ".root");

    TString Output_Name = "./plots_other/" + pdf_name + ".pdf";
    TString Output_Name_C = "./plots_other/" + pdf_name + ".C";

    Int_t QE_Flag = 0;
    TH1F* hist1 = (TH1F*)my_input->Get(plot1);
    TH1F* hist2 = (TH1F*)goran_input->Get(plot2);
    TH1F* hist2_QE = new TH1F();
    if(input2=="hMMiss2_11B"){
        hist2_QE = (TH1F*)goran_input->Get("hMMiss2_11B_QE");
        QE_Flag = 1;
    }

    Double_t NormFactor = (hist2->GetEntries())*1.;
    if(NormF>0.) NormFactor = NormF;

    hist2->SetTitle(title);
    // hist2->SetTitleFont(32);
    // hist2->SetTitleSize(0.06);
    hist2->SetXTitle(x_title);
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle(y_title);
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    if(Stat_box==0) hist2->SetStats(0);
    if(x_min*x_max<0.9 || x_min*x_max>1.1) hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    hist2->SetLineColor(6);
    hist2->Draw("HIST");
    // hist2->Fit("gaus","","SAME",-0.4,0.4);
    if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    hist2_QE->SetLineColor(9); // 4
    hist2_QE->Draw("SameE");

    hist1->SetLineColor(1);
    hist1->Draw("SameHIST");
    hist1->SetNormFactor(NormFactor);

    TLegend *l_hist = new TLegend(0.7,0.8,0.89,0.9,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,legend1,"l");
    if(QE_Flag==0) l_hist->AddEntry(hist2,legend2,"l");
    else{
        l_hist->AddEntry(hist2,legend2,"lep");
        l_hist->AddEntry(hist2_QE,"Experiment QE","lep");
    }
    l_hist->Draw();

    c_hist->SaveAs(Output_Name);
    // c_hist->SaveAs(Output_Name_C);
}

void plots_double(TString input1, TString input2, TString plot1, TString plot2, TString legend1, TString legend2, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Int_t Remove_title_legend = 0, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1., TString folder = "plots_double"){
    TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + input2 + ".root");

    TString Output_Name = "./" + folder + "/" + pdf_name + ".pdf";
    // TString Output_Name = "./" + folder + "/" + pdf_name + ".png";
    // TString Output_Name_C = "./" + folder + "/" + pdf_name + ".C";

    Int_t QE_Flag = 0;
    TH1F* hist1 = (TH1F*)my_input->Get(plot1);
    TH1F* hist2 = (TH1F*)goran_input->Get(plot2);

    Double_t NormFactor = (hist2->GetEntries())*1.;
    if(NormF>0.) NormFactor = NormF;
    cout<<NormFactor<<endl;

    if(Remove_title_legend==0) hist2->SetTitle(title);
    // hist2->SetTitleFont(32);
    // hist2->SetTitleSize(0.06);
    if(Remove_title_legend==0) hist2->SetXTitle(x_title);
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    if(Remove_title_legend==0) hist2->SetYTitle(y_title);
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    if(Stat_box==0) hist2->SetStats(0);
    if(x_min*x_max<0.9 || x_min*x_max>1.1) hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    hist2->SetLineColor(6);
    // hist2->Draw("E");
    hist2->Draw("HIST");
    // hist2->Fit("gaus","","SAME",-0.4,0.4);
    // if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    if(Remove_title_legend==1){
        hist1->SetTitle("");
        hist2->SetTitle("");
    //     hist1->SetXTitle("");
    //     hist2->SetXTitle("");
    }
    hist1->SetLineColor(1);
    // hist1->Draw("SameHIST");
    hist1->Draw("SameHIST");
    // hist1->SetNormFactor(NormFactor);

    TLegend *l_hist = new TLegend(0.7,0.8,0.89,0.9,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,legend1,"l");
    l_hist->AddEntry(hist2,legend2,"l");
    // l_hist->AddEntry(hist2,legend2,"lep");
    if(Remove_title_legend==0) l_hist->Draw();

    c_hist->SaveAs(Output_Name);
}

void triple(TString input1, TString input2, TString input3, TString plot1, TString plot2, TString plot3, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1., TString folder = "plots_triple"){
    TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
    TFile* my_input_new = TFile::Open("../Sim0/" + input2 + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + input3 + ".root");

    TString Output_Name = "./" + folder + "/" + pdf_name + ".pdf";
    // TString Output_Name = "./" + folder + "/" + pdf_name + ".png";
    TString Output_Name_C = "./" + folder + "/" + pdf_name + ".C";

    Int_t QE_Flag = 0;
    TH1F* hist1_;TH1F* hist1_new_;TH1F* hist2_;
    TH1F* hist1;TH1F* hist1_new;TH1F* hist2;
    if(plot1=="P1"||plot1=="P2"||plot1=="p1x"||plot1=="p1y"||plot1=="p1z"||plot1=="p2x"||plot1=="p2y"||plot1=="p2z"||plot1=="p_miss_x"||plot1=="p_miss_y"||plot1=="p_miss_z"||plot1=="P_miss"||plot1=="h_pb"||plot1=="h_pbx"||plot1=="h_pby"||plot1=="h_pbz"){
        hist1_ = (TH1F*)my_input->Get(plot1);
        hist1_new_ = (TH1F*)my_input_new->Get(plot2);
        hist2_ = (TH1F*)goran_input->Get(plot3);

        hist1 = (TH1F*)hist1_->Rebin(2, "hist1_rebinned");
        hist1_new = (TH1F*)hist1_new_->Rebin(2, "hist1_new_rebinned");
        hist2 = (TH1F*)hist2_->Rebin(2, "hist2_rebinned");
    }
    else{
        hist1 = (TH1F*)my_input->Get(plot1);
        hist1_new = (TH1F*)my_input_new->Get(plot2);
        hist2 = (TH1F*)goran_input->Get(plot3);
    }
    // TH1F* hist1 = (TH1F*)my_input->Get(plot1);
    // TH1F* hist1_new = (TH1F*)my_input_new->Get(plot2);
    // TH1F* hist2 = (TH1F*)goran_input->Get(plot3);

    // TH1F* hist1_ = (TH1F*)hist1->Rebin(2, "hist1_rebinned");

    TH1F* hist2_QE = new TH1F();
    if(input2=="hMMiss2_11B"){
        hist2_QE = (TH1F*)goran_input->Get("hMMiss2_11B_QE");
        QE_Flag = 1;
    }

    // Double_t NormFactor = (hist2->GetEntries())*1.;
    Double_t NormFactor = hist2->Integral();
    if(NormF>0.) NormFactor = NormF;
    // cout<<NormFactor<<endl;
    cout<<hist1->GetSumOfWeights()<<endl;

    hist2->SetTitle(title);
    // hist2->SetTitleFont(32);
    // hist2->SetTitleSize(0.06);
    hist2->SetXTitle(x_title);
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle(y_title);
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    if(Stat_box==0) hist2->SetStats(0);
    if(x_min<x_max){
        cout<<x_min<<"\t"<<x_max<<endl;
        hist2->GetXaxis()->SetRangeUser(x_min, x_max);
        hist1->GetXaxis()->SetRangeUser(x_min, x_max);
        hist1_new->GetXaxis()->SetRangeUser(x_min, x_max);
    }
    // hist2->SetLineColor(6);
    hist2->SetLineColor(1);
    hist2->SetLineWidth(2);
    hist2->Draw("E");
    // hist2->Fit("gaus","","SAME",-0.4,0.4);
    if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    hist2_QE->SetLineColor(9); // 4
    // hist2_QE->Draw("SameE");

    // hist1->SetLineColor(1);
    hist1->SetLineColor(2);
    // hist1->Draw("SameE");
    // if(plot1=="P_miss") cout<<hist1->GetBinContent(10)<<"\t"<<hist1->GetBinError(10)<<endl;
    hist1->Draw("SameHIST");
    hist1->SetNormFactor(NormFactor);
    // if(plot1=="P_miss") cout<<hist1->GetBinContent(10)<<"\t"<<hist1->GetBinError(10)<<endl;

    // TH1F *clonedHist = (TH1F*)hist1->Clone("clonedHist");
    // clonedHist->Reset();
    // clonedHist->Add(hist1,((hist2->Integral()*1.)/(hist1->Integral()*1.)));
    
    // TF1 *polyFunc = new TF1("polyFunc", "pol7");
    // clonedHist->Fit(polyFunc);
    // polyFunc->SetLineColor(2);
    // polyFunc->SetLineWidth(1);
    // polyFunc->Draw("SAME");

    // TGraph *graph = new TGraph();
    // for (int i = 1; i <= hist1->GetNbinsX(); i++) {
    //     graph->SetPoint(i-1, hist1->GetBinCenter(i), (hist1->GetBinContent(i))*((hist2->Integral()*1.)/(hist1->Integral()*1.)));
    // }
    // TGraphSmooth *smooth = new TGraphSmooth();
    // TGraph *smoothGraph = smooth->SmoothKern(graph, "box", 0.1);
    // smoothGraph->SetLineColor(2);
    // smoothGraph->SetLineWidth(1);
    // smoothGraph->Draw("SAME");

    // hist1_new->SetLineColor(4);
    // // hist1_new->Draw("SameE");
    // hist1_new->Draw("SameHIST");
    // hist1_new->SetNormFactor(NormFactor);

    TLegend *l_hist = new TLegend(0.65,0.8,0.89,0.89,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,legend1,"l");
    // l_hist->AddEntry(hist1_new,legend2,"l");
    if(QE_Flag==0) l_hist->AddEntry(hist2,legend3,"lep");
    else{
        l_hist->AddEntry(hist2,legend3,"lep");
        l_hist->AddEntry(hist2_QE,"Experiment QE","lep");
    }
    l_hist->Draw();

    c_hist->SaveAs(Output_Name);
}

// void triple(TString input1, TString input2, TString input3, TString plot1, TString plot2, TString plot3, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1., TString folder = "plots_triple"){
//     TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
//     TFile* my_input_new = TFile::Open("../Sim0/" + input2 + ".root");
//     TFile* goran_input = TFile::Open("../Sim0/" + input3 + ".root");

//     TString Output_Name = "./" + folder + "/" + pdf_name + ".pdf";
//     TString Output_Name_C = "./" + folder + "/" + pdf_name + ".C";

//     Int_t QE_Flag = 0;
//     TH1F* hist1_;TH1F* hist1_new_;TH1F* hist2_;
//     TH1F* hist1;TH1F* hist1_new;TH1F* hist2;
//     if(plot1=="P1"||plot1=="P2"||plot1=="p1x"||plot1=="p1y"||plot1=="p1z"||plot1=="p2x"||plot1=="p2y"||plot1=="p2z"||plot1=="p_miss_x"||plot1=="p_miss_y"||plot1=="p_miss_z"||plot1=="P_miss"||plot1=="h_pb"||plot1=="h_pbx"||plot1=="h_pby"||plot1=="h_pbz"){
//         hist1_ = (TH1F*)my_input->Get(plot1);
//         hist1_new_ = (TH1F*)my_input_new->Get(plot2);
//         hist2_ = (TH1F*)goran_input->Get(plot3);

//         hist1 = (TH1F*)hist1_->Rebin(2, "hist1_rebinned");
//         hist1_new = (TH1F*)hist1_new_->Rebin(2, "hist1_new_rebinned");
//         hist2 = (TH1F*)hist2_->Rebin(2, "hist2_rebinned");
//     }
//     else{
//         hist1 = (TH1F*)my_input->Get(plot1);
//         hist1_new = (TH1F*)my_input_new->Get(plot2);
//         hist2 = (TH1F*)goran_input->Get(plot3);
//     }
//     // TH1F* hist1 = (TH1F*)my_input->Get(plot1);
//     // TH1F* hist1_new = (TH1F*)my_input_new->Get(plot2);
//     // TH1F* hist2 = (TH1F*)goran_input->Get(plot3);

//     // TH1F* hist1_ = (TH1F*)hist1->Rebin(2, "hist1_rebinned");

//     TH1F* hist2_QE = new TH1F();
//     if(input2=="hMMiss2_11B"){
//         hist2_QE = (TH1F*)goran_input->Get("hMMiss2_11B_QE");
//         QE_Flag = 1;
//     }

//     // Double_t NormFactor = (hist2->GetEntries())*1.;
//     Double_t NormFactor = hist2->Integral();
//     if(NormF>0.) NormFactor = NormF;
//     // cout<<NormFactor<<endl;
//     cout<<hist1->GetSumOfWeights()<<endl;

//     hist2->SetTitle(title);
//     // hist2->SetTitleFont(32);
//     // hist2->SetTitleSize(0.06);
//     hist2->SetXTitle(x_title);
//     hist2->GetXaxis()->CenterTitle(1);
//     hist2->GetXaxis()->SetTitleFont(32);
//     hist2->GetXaxis()->SetTitleSize(0.06);
//     hist2->GetXaxis()->SetTitleOffset(0.7);
//     hist2->SetYTitle(y_title);
//     hist2->GetYaxis()->CenterTitle(1);
//     hist2->GetYaxis()->SetTitleFont(32);
//     hist2->GetYaxis()->SetTitleSize(0.04);

//     TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
//     // c_hist->SetLogy(1);
//     if(Stat_box==0) hist2->SetStats(0);
//     if(x_min<x_max){
//         cout<<x_min<<"\t"<<x_max<<endl;
//         hist2->GetXaxis()->SetRangeUser(x_min, x_max);
//         hist1->GetXaxis()->SetRangeUser(x_min, x_max);
//         hist1_new->GetXaxis()->SetRangeUser(x_min, x_max);
//     }
//     // hist2->SetLineColor(6);
//     hist2->SetLineColor(1);
//     hist2->SetLineWidth(2);
//     hist2->Draw("E");
//     // hist2->Fit("gaus","","SAME",-0.4,0.4);
//     if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

//     hist2_QE->SetLineColor(9); // 4
//     // hist2_QE->Draw("SameE");

//     // hist1->SetLineColor(1);
//     hist1->SetLineColor(2);
//     // hist1->Draw("SameE");
//     // if(plot1=="P_miss") cout<<hist1->GetBinContent(10)<<"\t"<<hist1->GetBinError(10)<<endl;
//     hist1->Draw("SameHIST");
//     hist1->SetNormFactor(NormFactor);
//     // if(plot1=="P_miss") cout<<hist1->GetBinContent(10)<<"\t"<<hist1->GetBinError(10)<<endl;

//     hist1_new->SetLineColor(4);
//     // hist1_new->Draw("SameE");
//     hist1_new->Draw("SameHIST");
//     hist1_new->SetNormFactor(NormFactor);

//     TLegend *l_hist = new TLegend(0.65,0.8,0.89,0.89,Form(""));
//     l_hist->SetFillColor(0);
//     l_hist->SetBorderSize(1);
//     l_hist->SetTextSize(0.03);
//     l_hist->SetTextFont(32);
//     l_hist->AddEntry(hist1,legend1,"l");
//     l_hist->AddEntry(hist1_new,legend2,"l");
//     if(QE_Flag==0) l_hist->AddEntry(hist2,legend3,"lep");
//     else{
//         l_hist->AddEntry(hist2,legend3,"lep");
//         l_hist->AddEntry(hist2_QE,"Experiment QE","lep");
//     }
//     l_hist->Draw();

//     c_hist->SaveAs(Output_Name);
// }

void quadruple(TString input0, TString input1, TString input2, TString input3, TString plot0, TString plot1, TString plot2, TString plot3, TString legend0, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1., TString folder = "quadruple"){
    TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
    TFile* my_input_new = TFile::Open("../Sim0/" + input2 + ".root");
    TFile* my_input_0 = TFile::Open("../Sim0/" + input0 + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + input3 + ".root");

    TString Output_Name = "./" + folder + "/" + pdf_name + ".pdf";
    TString Output_Name_C = "./" + folder + "/" + pdf_name + ".C";

    Int_t QE_Flag = 0;
    TH1F* hist0 = (TH1F*)my_input_0->Get(plot0);
    TH1F* hist1 = (TH1F*)my_input->Get(plot1);
    TH1F* hist1_new = (TH1F*)my_input_new->Get(plot2);
    TH1F* hist2 = (TH1F*)goran_input->Get(plot3);
    TH1F* hist2_QE = new TH1F();
    if(input2=="hMMiss2_11B"){
        hist2_QE = (TH1F*)goran_input->Get("hMMiss2_11B_QE");
        QE_Flag = 1;
    }

    // Double_t NormFactor = (hist2->GetEntries())*1.;
    Double_t NormFactor = hist2->Integral();
    if(NormF>0.) NormFactor = NormF;
    cout<<NormFactor<<endl;

    hist2->SetTitle(title);
    // hist2->SetTitleFont(32);
    // hist2->SetTitleSize(0.06);
    hist2->SetXTitle(x_title);
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle(y_title);
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    if(Stat_box==0) hist2->SetStats(0);
    if(x_min<x_max){
        cout<<x_min<<"\t"<<x_max<<endl;
        hist2->GetXaxis()->SetRangeUser(x_min, x_max);
        hist1->GetXaxis()->SetRangeUser(x_min, x_max);
        hist1_new->GetXaxis()->SetRangeUser(x_min, x_max);
    }
    hist2->SetLineColor(6);
    hist2->Draw("E");
    // hist2->Fit("gaus","","SAME",-0.4,0.4);
    if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    hist2_QE->SetLineColor(9); // 4
    hist2_QE->Draw("SameE");

    hist0->SetLineColor(9);
    // hist1->Draw("SameHIST");
    hist0->Draw("SameHIST");
    hist0->SetNormFactor(NormFactor);

    hist1->SetLineColor(1);
    // hist1->Draw("SameHIST");
    hist1->Draw("SameHIST");
    hist1->SetNormFactor(NormFactor);

    hist1_new->SetLineColor(2);
    hist1_new->Draw("SameHIST");
    hist1_new->SetNormFactor(NormFactor);

    TLegend *l_hist = new TLegend(0.65,0.7,0.89,0.89,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist0,legend0,"l");
    l_hist->AddEntry(hist1,legend1,"l");
    l_hist->AddEntry(hist1_new,legend2,"l");
    if(QE_Flag==0) l_hist->AddEntry(hist2,legend3,"lep");
    else{
        l_hist->AddEntry(hist2,legend3,"lep");
        l_hist->AddEntry(hist2_QE,"Experiment QE","lep");
    }
    l_hist->Draw();

    c_hist->SaveAs(Output_Name);
}

void triple_new(TString input1, TString input2, TString input3, TString plot1, TString plot2, TString plot3, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.){
    TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
    TFile* my_input_new = TFile::Open("../Sim0/" + input2 + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + input3 + ".root");

    TFile* my_input_new2 = TFile::Open("../Sim0/" + input2 + "_xsKammerud_abs.root");

    TString Output_Name = "./plots_triple/" + pdf_name + ".pdf";
    TString Output_Name_C = "./plots_triple/" + pdf_name + ".C";

    Int_t QE_Flag = 0;
    TH1F* hist1 = (TH1F*)my_input->Get(plot1);
    TH1F* hist1_new = (TH1F*)my_input_new->Get(plot2);
    TH1F* hist1_new2 = (TH1F*)my_input_new2->Get(plot2);
    TH1F* hist2 = (TH1F*)goran_input->Get(plot3);
    TH1F* hist2_QE = new TH1F();
    if(input2=="hMMiss2_11B"){
        hist2_QE = (TH1F*)goran_input->Get("hMMiss2_11B_QE");
        QE_Flag = 1;
    }

    Double_t NormFactor = (hist2->GetEntries())*1.;
    if(NormF>0.) NormFactor = NormF;

    hist2->SetTitle(title);
    // hist2->SetTitleFont(32);
    // hist2->SetTitleSize(0.06);
    hist2->SetXTitle(x_title);
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle(y_title);
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    if(Stat_box==0) hist2->SetStats(0);
    if(x_min*x_max<0.9 || x_min*x_max>1.1) hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    hist2->SetLineColor(6);
    hist2->Draw("E");
    // hist2->Fit("gaus","","SAME",-0.4,0.4);
    if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    hist2_QE->SetLineColor(9); // 4
    hist2_QE->Draw("SameE");

    hist1->SetLineColor(1);
    hist1->Draw("SameHIST");
    hist1->SetNormFactor(NormFactor);

    hist1_new->SetLineColor(2);
    hist1_new->Draw("SameHIST");
    hist1_new->SetNormFactor(NormFactor);

    hist1_new2->SetLineColor(4);
    hist1_new2->Draw("SameHIST");
    hist1_new2->SetNormFactor(NormFactor); 

    TLegend *l_hist = new TLegend(0.7,0.7,0.89,0.9,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,legend1,"l");
    l_hist->AddEntry(hist1_new,legend2,"l");
    l_hist->AddEntry(hist1_new2,legend2+"_new","l");
    if(QE_Flag==0) l_hist->AddEntry(hist2,legend3,"lep");
    else{
        l_hist->AddEntry(hist2,legend3,"lep");
        l_hist->AddEntry(hist2_QE,"Experiment QE","lep");
    }
    l_hist->Draw();

    c_hist->SaveAs(Output_Name);
}

void triple_generator(TString input1, TString input2, TString input3, TString plot1, TString plot2, TString plot3, TString legend1, TString legend2, TString legend3, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.){
    TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
    TFile* my_input_new = TFile::Open("../Sim0/" + input2 + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + input3 + ".root");

    TString Output_Name = "./plots_triple_generator/" + pdf_name + ".pdf";
    TString Output_Name_C = "./plots_triple_generator/" + pdf_name + ".C";

    Int_t QE_Flag = 0;
    TH1F* hist1 = (TH1F*)my_input->Get(plot1);
    TH1F* hist1_new = (TH1F*)my_input_new->Get(plot2);
    TH1F* hist2 = (TH1F*)goran_input->Get(plot3);
    TH1F* hist2_QE = new TH1F();
    if(input2=="hMMiss2_11B"){
        hist2_QE = (TH1F*)goran_input->Get("hMMiss2_11B_QE");
        QE_Flag = 1;
    }

    Double_t NormFactor = (hist2->GetEntries())*1.;
    if(NormF>0.) NormFactor = NormF;

    hist2->SetTitle(title);
    // hist2->SetTitleFont(32);
    // hist2->SetTitleSize(0.06);
    hist2->SetXTitle(x_title);
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle(y_title);
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    if(Stat_box==0) hist2->SetStats(0);
    if(x_min*x_max<0.9 || x_min*x_max>1.1) hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    hist2->SetLineColor(6);
    hist2->Draw("E");
    // hist2->Fit("gaus","","SAME",-0.4,0.4);
    if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    hist2_QE->SetLineColor(9); // 4
    hist2_QE->Draw("SameE");

    hist1->SetLineColor(1);
    hist1->Draw("SameHIST");
    hist1->SetNormFactor(NormFactor);

    hist1_new->SetLineColor(2);
    hist1_new->Draw("SameHIST");
    hist1_new->SetNormFactor(NormFactor);

    TLegend *l_hist = new TLegend(0.7,0.8,0.89,0.9,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,legend1,"l");
    l_hist->AddEntry(hist1_new,legend2,"l");
    if(QE_Flag==0) l_hist->AddEntry(hist2,legend3,"lep");
    else{
        l_hist->AddEntry(hist2,legend3,"lep");
        l_hist->AddEntry(hist2_QE,"Experiment QE","lep");
    }
    l_hist->Draw();

    c_hist->SaveAs(Output_Name);
}

void Fit(TString input_name, TString my_plot, TString title, TString x_title, TString y_title, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1.){
    TFile* input = TFile::Open("../Sim0/" + input_name + ".root");

    TString Output_Name = "./Fitting_plots/" + pdf_name + ".pdf";

    TH1F* hist = (TH1F*)input->Get(my_plot);

    hist->SetTitle(title);
    // hist->SetTitleFont(32);
    // goran_hist->SetTitleSize(0.06);
    hist->SetXTitle(x_title);
    hist->GetXaxis()->CenterTitle(1);
    hist->GetXaxis()->SetTitleFont(32);
    hist->GetXaxis()->SetTitleSize(0.06);
    hist->GetXaxis()->SetTitleOffset(0.7);
    hist->SetYTitle(y_title);
    hist->GetYaxis()->CenterTitle(1);
    hist->GetYaxis()->SetTitleFont(32);
    hist->GetYaxis()->SetTitleSize(0.04);

    hist->Fit("gaus","","SAME",x_min,x_max);

    gStyle->SetOptFit(11);
    gStyle->SetOptStat(11);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    if(Stat_box==0) hist->SetStats(0);
    hist->SetLineColor(6);
    hist->Draw();

    c_hist->SaveAs(Output_Name);
}

void cal_chi2(TString input1, TString input2, TString plot1, TString plot2, TString legend1, TString legend2, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.){

    TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + input2 + ".root");

    TString Output_Name = "./plots_chi2/" + pdf_name + ".pdf";
    TString Output_Name_C = "./plots_chi2/" + pdf_name + ".C";

    TH1F* hist1 = (TH1F*)my_input->Get(plot1);
    TH1F* hist2 = (TH1F*)goran_input->Get(plot2);

    Double_t NormFactor = (hist2->GetEntries())*1.;
    if(NormF>0.) NormFactor = NormF;

    hist2->SetTitle(title);
    // hist2->SetTitleFont(32);
    // hist2->SetTitleSize(0.06);
    hist2->SetXTitle(x_title);
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle(y_title);
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    if(Stat_box==0) hist2->SetStats(0);
    // if(x_min*x_max<0.9 || x_min*x_max>1.1) hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    hist2->SetLineColor(6);
    hist2->Draw("E");
    // hist2->Fit("gaus","","SAME",-0.4,0.4);
    if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    Double_t entriesH1 = hist1->GetEntries();
    Double_t entriesH2 = hist2->GetEntries();
    // Double_t entriesH1 = hist1->GetSumOfWeights();
    // Double_t entriesH2 = hist2->GetSumOfWeights();

    // -------------------------------------------------------
    cout<<"Using bins from 10 to 28 for my hist and 48 to 66 for Goran's hist"<<endl;
    entriesH1 = 0.;
    // entriesH2 = 0.;
    for (int bin = 10; bin <= 28; ++bin) {
        entriesH1 += hist1->GetBinContent(bin);
    }
    entriesH2 = entriesH2 - 62 - 309 - 136;
    // for (int bin = 48; bin <= 66; ++bin) {
    //     entriesH2 += hist2->Get
    // }
    // -------------------------------------------------------

    cout<<entriesH1<<"\t"<<entriesH2<<endl;

    Double_t normFactor = entriesH2 / entriesH1;
    cout<<normFactor<<endl;
    hist1->Scale(normFactor);

    if(x_min*x_max<0.9 || x_min*x_max>1.1){
        hist1->GetXaxis()->SetRangeUser(x_min, x_max);
        hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    }

    int ndf = 19;
    if(plot1=="E_miss_with_tail") ndf = 31;
    if(plot1=="P_miss") ndf = 59;
    if(plot1=="M_miss_square") ndf = 28;
    std::cout << "NDF: " << ndf << std::endl;

    Double_t chi2 = hist1->Chi2Test(hist2, "UWCHI2");
    // if(plot1=="vertex_z_breakup"){
    //     hist2->SetBins(40,-603,-547);
    // }
    std::cout << "Chi2 value: " << chi2 << std::endl;

    hist1->SetLineColor(1);
    hist1->Draw("SameHIST");
    // hist1->SetNormFactor(NormFactor);

    // Double_t chi2 = h1->Chi2Test(h2, "UWCHI2");

    TLegend *l_hist = new TLegend(0.15,0.8,0.29,0.9,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,legend1,"l");
    l_hist->AddEntry(hist2,legend2,"lep");
    l_hist->Draw();

    TLatex latex;
    latex.SetNDC();
    latex.SetTextSize(0.04);
    latex.DrawLatex(0.15, 0.7, Form("#chi^{2} = %.3f", chi2));
    latex.DrawLatex(0.15, 0.65, Form("NDF = %d", ndf));

    c_hist->SaveAs(Output_Name);
}

void cal_chi2_alexei(TString input1, TString input2, TString plot1, TString plot2, TString legend1, TString legend2, TString title, TString x_title, TString y_title, Double_t Y_range, Int_t Stat_box, TString pdf_name, Double_t x_min = -1., Double_t x_max = -1., Double_t NormF = -1.){

    TFile* my_input = TFile::Open("../Sim0/" + input1 + ".root");
    TFile* goran_input = TFile::Open("../Sim0/" + input2 + ".root");

    TString Output_Name = "./plots_chi2_alexei/" + pdf_name + ".pdf";
    TString Output_Name_C = "./plots_chi2_alexei/" + pdf_name + ".C";

    TH1F* hist1 = (TH1F*)my_input->Get(plot1);
    TH1F* hist2 = (TH1F*)goran_input->Get(plot2);

    Double_t NormFactor = (hist2->GetEntries())*1.;
    if(NormF>0.) NormFactor = NormF;

    hist2->SetTitle(title);
    // hist2->SetTitleFont(32);
    // hist2->SetTitleSize(0.06);
    hist2->SetXTitle(x_title);
    hist2->GetXaxis()->CenterTitle(1);
    hist2->GetXaxis()->SetTitleFont(32);
    hist2->GetXaxis()->SetTitleSize(0.06);
    hist2->GetXaxis()->SetTitleOffset(0.7);
    hist2->SetYTitle(y_title);
    hist2->GetYaxis()->CenterTitle(1);
    hist2->GetYaxis()->SetTitleFont(32);
    hist2->GetYaxis()->SetTitleSize(0.04);

    TCanvas *c_hist = new TCanvas("c_hist","c_hist",1200,800);
    // c_hist->SetLogy(1);
    if(Stat_box==0) hist2->SetStats(0);
    // if(x_min*x_max<0.9 || x_min*x_max>1.1) hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    hist2->SetLineColor(6);
    hist2->Draw("E");
    // hist2->Fit("gaus","","SAME",-0.4,0.4);
    if(Y_range>0) hist2->GetYaxis()->SetRangeUser(0,NormFactor/Y_range);

    // Double_t entriesH1 = hist1->GetEntries();
    // Double_t entriesH2 = hist2->GetEntries();
    Double_t entriesH1 = hist1->GetSumOfWeights();
    Double_t entriesH2 = hist2->GetSumOfWeights();
    Double_t normFactor = entriesH2 / entriesH1;
    cout<<normFactor<<endl;
    hist1->Scale(normFactor);

    if(x_min*x_max<0.9 || x_min*x_max>1.1){
        hist1->GetXaxis()->SetRangeUser(x_min, x_max);
        hist2->GetXaxis()->SetRangeUser(x_min, x_max);
    }

    int ndf = 0;
    if(plot1=="E_miss_with_tail") ndf = 31;
    if(plot1=="P_miss") ndf = 59;
    if(plot1=="M_miss_square") ndf = 28;
    std::cout << "NDF: " << ndf << std::endl;

    Double_t chi2 = hist1->Chi2Test(hist2, "UWCHI2");
    std::cout << "Chi2 value: " << chi2 << std::endl;

    hist1->SetLineColor(1);
    hist1->Draw("SameHIST");
    // hist1->SetNormFactor(NormFactor);

    // Double_t chi2 = h1->Chi2Test(h2, "UWCHI2");

    TLegend *l_hist = new TLegend(0.7,0.8,0.89,0.9,Form(""));
    l_hist->SetFillColor(0);
    l_hist->SetBorderSize(1);
    l_hist->SetTextSize(0.03);
    l_hist->SetTextFont(32);
    l_hist->AddEntry(hist1,legend1,"l");
    l_hist->AddEntry(hist2,legend2,"lep");
    l_hist->Draw();

    TLatex latex;
    latex.SetNDC();
    latex.SetTextSize(0.04);
    latex.DrawLatex(0.7, 0.7, Form("#chi^{2} = %.3f", chi2));
    latex.DrawLatex(0.7, 0.65, Form("NDF = %d", ndf));

    c_hist->SaveAs(Output_Name);
}

void make_2D_plot(TString inputfile, TString Tree_name, TString variable_x, Int_t Nx, Double_t x_min, Double_t x_max, TString variable_y, Int_t Ny, Double_t y_min, Double_t y_max, TString title, TString x_title, TString y_title, Int_t weight_Flag, Int_t Stat_box, TString pdf_name){
    TString Input_Name = "../Sim0/" + inputfile + ".root";
    TString Output_Name = "./2D_plots/" + pdf_name + ".pdf";

    TChain ch(Tree_name);
    ch.Add(Input_Name);
    Double_t var_x, var_y, weight;

    ch.SetBranchAddress(variable_x,&var_x);
    ch.SetBranchAddress(variable_y,&var_y);
    if(weight_Flag==1) ch.SetBranchAddress("weight",&weight);

    TH2F* h2 = new TH2F("h2",title,Nx,x_min,x_max,Ny,y_min,y_max);
    h2->SetXTitle(x_title);
    h2->GetXaxis()->CenterTitle(1);
    h2->GetXaxis()->SetTitleFont(32);
    h2->GetXaxis()->SetTitleSize(0.06);
    h2->GetXaxis()->SetTitleOffset(0.7);
    h2->SetYTitle(y_title);
    h2->GetYaxis()->CenterTitle(1);
    h2->GetYaxis()->SetTitleFont(32);
    h2->GetYaxis()->SetTitleSize(0.04);

    Long64_t nentries = ch.GetEntries();
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        ch.GetEntry(jentry);
        if(weight_Flag==1) h2->Fill(var_x,var_y,weight);
        else h2->Fill(var_x,var_y);
    }

    TCanvas* c = new TCanvas("c","c",1200,1000);
    c->SetRightMargin(0.15); 
    c->SetLeftMargin(0.15);
    c->SetBottomMargin(0.15);
    c->SetTopMargin(0.15);
    if(Stat_box==0) h2->SetStats(0);
    h2->Draw("COLZ");
    c->SaveAs(Output_Name);
}

