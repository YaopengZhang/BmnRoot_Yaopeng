void chi2_TOF_smearing_new(){
    const int NofSteps = 11;
    double smearing[NofSteps] = {100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    double chi2_pmiss[NofSteps] = {346.44, 331.51, 266.33, 223.23, 216.91, 182.29, 182.85, 125.79, 167.06, 151.91, 151.71};
    double chi2_emiss[NofSteps] = {513.95, 337.96, 220.50, 177.91, 139.95, 130.12, 166.21, 231.19, 315.85, 396.36, 562.41};
    double chi2_mmiss2[NofSteps] ={334.28, 335.88, 332.28, 321.47, 316.13, 316.50, 320.76, 314.85, 311.44, 312.99, 323.24};

    TCanvas* c_pmiss = new TCanvas("c_pmiss", "c_pmiss", 1200, 800);
    TGraph *g_pmiss = new TGraph(NofSteps, smearing, chi2_pmiss);
    g_pmiss->SetTitle("Pmiss #chi^{2} vs. TOF Smearing;TOF Smearing #sigma (ps);Pmiss #chi^{2}");
    g_pmiss->SetMarkerStyle(20);
    g_pmiss->Draw("AP");
    
    TF1 *fitFunc_pmiss = new TF1("fitFunc_pmiss", "pol2", 100, 200);
    g_pmiss->Fit(fitFunc_pmiss);
    double p0 = fitFunc_pmiss->GetParameter(0);
    double p1 = fitFunc_pmiss->GetParameter(1);
    double p2 = fitFunc_pmiss->GetParameter(2);
    double x_min, y_min, delta, x1, x2;
    x_min = -p1 / (2 * p2);
    y_min = fitFunc_pmiss->Eval(x_min);
    delta = p1*p1 - 4*p2*(p0 - y_min - 1);
    x1 = (-p1 + sqrt(delta)) / (2 * p2);
    x2 = (-p1 - sqrt(delta)) / (2 * p2);
    TLatex latex_pmiss;
    latex_pmiss.SetNDC();
    latex_pmiss.SetTextSize(0.04);
    latex_pmiss.DrawLatex(0.45, 0.85, Form("#chi^{2}_{Pmiss} = %.2f + %.2f #sigma + %.2f #sigma^{2}", p0, p1, p2));
    latex_pmiss.DrawLatex(0.45, 0.78, Form("Min(#chi^{2}_{Pmiss}) = %.2f",y_min));
    latex_pmiss.DrawLatex(0.45, 0.71, Form("#sigma_{min} = %.2f ps",x_min));
    latex_pmiss.DrawLatex(0.45, 0.55, "#sigma values for Min(#chi^{2}_{Pmiss}) + 1 :");
    latex_pmiss.DrawLatex(0.45, 0.48, Form("#sigma_{1} = %.2f, #sigma_{2} = %.2f",x2,x1));
    c_pmiss->SaveAs("chi2_TOF/chi2_Pmiss.pdf");

    TCanvas* c_emiss = new TCanvas("c_emiss", "c_emiss", 1200, 800);
    TGraph *g_emiss = new TGraph(NofSteps, smearing, chi2_emiss);
    g_emiss->SetTitle("Emiss #chi^{2} vs. TOF Smearing;TOF Smearing #sigma (ps);Emiss #chi^{2}");
    g_emiss->SetMarkerStyle(20);
    g_emiss->Draw("AP");
    
    TF1 *fitFunc_emiss = new TF1("fitFunc_emiss", "pol2", 100, 200);
    g_emiss->Fit(fitFunc_emiss);
    p0 = fitFunc_emiss->GetParameter(0);
    p1 = fitFunc_emiss->GetParameter(1);
    p2 = fitFunc_emiss->GetParameter(2);
    x_min = -p1 / (2 * p2);
    y_min = fitFunc_emiss->Eval(x_min);
    delta = p1*p1 - 4*p2*(p0 - y_min - 1);
    x1 = (-p1 + sqrt(delta)) / (2 * p2);
    x2 = (-p1 - sqrt(delta)) / (2 * p2);
    TLatex latex_emiss;
    latex_emiss.SetNDC();
    latex_emiss.SetTextSize(0.04);
    latex_emiss.DrawLatex(0.35, 0.85, Form("#chi^{2}_{emiss} = %.2f + %.2f #sigma + %.2f #sigma^{2}", p0, p1, p2));
    latex_emiss.DrawLatex(0.35, 0.78, Form("Min(#chi^{2}_{emiss}) = %.2f",y_min));
    latex_emiss.DrawLatex(0.35, 0.71, Form("#sigma_{min} = %.2f ps",x_min));
    latex_pmiss.DrawLatex(0.35, 0.55, "#sigma values for Min(#chi^{2}_{emiss}) + 1 :");
    latex_pmiss.DrawLatex(0.35, 0.48, Form("#sigma_{1} = %.2f, #sigma_{2} = %.2f",x2,x1));
    c_emiss->SaveAs("chi2_TOF/chi2_Emiss.pdf");

    TCanvas* c_mmiss2 = new TCanvas("c_mmiss2", "c_mmiss2", 1200, 800);
    TGraph *g_mmiss2 = new TGraph(NofSteps, smearing, chi2_mmiss2);
    g_mmiss2->SetTitle("Mmiss^{2} #chi^{2} vs. TOF Smearing;TOF Smearing #sigma (ps);Mmiss^{2} #chi^{2}");
    g_mmiss2->SetMarkerStyle(20);
    g_mmiss2->Draw("AP");
    
    TF1 *fitFunc_mmiss2 = new TF1("fitFunc_mmiss2", "pol2", 100, 200);
    g_mmiss2->Fit(fitFunc_mmiss2);
    p0 = fitFunc_mmiss2->GetParameter(0);
    p1 = fitFunc_mmiss2->GetParameter(1);
    p2 = fitFunc_mmiss2->GetParameter(2);
    x_min = -p1 / (2 * p2);
    y_min = fitFunc_mmiss2->Eval(x_min);
    delta = p1*p1 - 4*p2*(p0 - y_min - 1);
    x1 = (-p1 + sqrt(delta)) / (2 * p2);
    x2 = (-p1 - sqrt(delta)) / (2 * p2);
    TLatex latex_mmiss2;
    latex_mmiss2.SetNDC();
    latex_mmiss2.SetTextSize(0.04);
    latex_mmiss2.DrawLatex(0.45, 0.85, Form("#chi^{2}_{Mmiss} = %.2f + %.2f #sigma + %.2f #sigma^{2}", p0, p1, p2));
    latex_mmiss2.DrawLatex(0.45, 0.78, Form("Min(#chi^{2}_{Mmiss}) = %.2f",y_min));
    latex_mmiss2.DrawLatex(0.45, 0.71, Form("#sigma_{min} = %.2f ps",x_min));
    latex_pmiss.DrawLatex(0.45, 0.55, "#sigma values for Min(#chi^{2}_{Mmiss}) + 1 :");
    latex_pmiss.DrawLatex(0.45, 0.48, Form("#sigma_{1} = %.2f, #sigma_{2} = %.2f",x2,x1));
    c_mmiss2->SaveAs("chi2_TOF/chi2_Mmiss2.pdf");

}