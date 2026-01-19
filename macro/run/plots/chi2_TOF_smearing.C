void chi2_TOF_smearing(){
    const int NofSteps = 11;
    double smearing[NofSteps] = {100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    double chi2_pmiss[NofSteps] = {72.3, 77.5, 66.5, 68.2, 66.6, 78.7, 82.5, 112.6, 118.8, 141.8, 166.6};
    double chi2_emiss[NofSteps] = {628.2, 441.4, 302.8, 195.2, 127.5, 90.5, 71.6, 66.3, 101.1, 157.6, 252.8};
    double chi2_mmiss2[NofSteps] ={403.8, 389.0, 379.3, 374.1, 373.2, 359.6, 358.0, 356.8, 354.7, 355.4, 359.4};

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
    latex_pmiss.DrawLatex(0.15, 0.85, Form("#chi^{2}_{pmiss} = %.2f + %.2f #sigma + %.2f #sigma^{2}", p0, p1, p2));
    latex_pmiss.DrawLatex(0.15, 0.78, Form("Min(#chi^{2}_{pmiss}) = %.2f",y_min));
    latex_pmiss.DrawLatex(0.15, 0.71, Form("#sigma_{min} = %.2f ps",x_min));
    latex_pmiss.DrawLatex(0.15, 0.55, "#sigma values for Min(#chi^{2}_{pmiss}) + 1 :");
    latex_pmiss.DrawLatex(0.15, 0.48, Form("#sigma_{1} = %.2f, #sigma_{2} = %.2f",x2,x1));
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
    latex_emiss.DrawLatex(0.45, 0.85, Form("#chi^{2}_{emiss} = %.2f + %.2f #sigma + %.2f #sigma^{2}", p0, p1, p2));
    latex_emiss.DrawLatex(0.45, 0.78, Form("Min(#chi^{2}_{emiss}) = %.2f",y_min));
    latex_emiss.DrawLatex(0.45, 0.71, Form("#sigma_{min} = %.2f ps",x_min));
    latex_pmiss.DrawLatex(0.45, 0.55, "#sigma values for Min(#chi^{2}_{emiss}) + 1 :");
    latex_pmiss.DrawLatex(0.45, 0.48, Form("#sigma_{1} = %.2f, #sigma_{2} = %.2f",x2,x1));
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