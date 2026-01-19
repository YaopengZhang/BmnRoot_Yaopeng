void chi2_breakup_smearing(){
    // const int NofSteps = 9;
    // double smearing[NofSteps] = {100, 150, 220, 300, 350, 400, 500, 600, 700};
    // double chi2_breakup[NofSteps] = {363.376, 352.870, 346.493, 342.375, 344.483, 344.044, 345.674, 359.122, 370.961};
    // double chi2_breakup[NofSteps] = {23.254, 20.477, 17.237, 15.895, 20.384, 24.120, 32.850, 47.797, 59.850};

    const int NofSteps = 10;
    double smearing[NofSteps] = {100, 150, 220, 260, 300, 350, 400, 500, 600, 700};
    double chi2_breakup[NofSteps] = {23.812, 21.793, 18.029, 17.354, 17.296, 17.603, 18.400, 24.170, 38.258, 56.843};



    TCanvas* c_breakup = new TCanvas("c_breakup", "c_breakup", 1200, 800);
    TGraph *g_breakup = new TGraph(NofSteps, smearing, chi2_breakup);
    g_breakup->SetTitle("Vertex Z #chi^{2} vs. #sigma_{tot};#sigma_{tot} (mb);#chi^{2}");
    g_breakup->SetMarkerStyle(20);
    g_breakup->Draw("AP");
    
    TF1 *fitFunc_breakup = new TF1("fitFunc_breakup", "pol2", 100, 200);
    g_breakup->Fit(fitFunc_breakup);
    double p0 = fitFunc_breakup->GetParameter(0);
    double p1 = fitFunc_breakup->GetParameter(1);
    double p2 = fitFunc_breakup->GetParameter(2);
    double x_min, y_min, delta, x1, x2;
    x_min = -p1 / (2 * p2);
    y_min = fitFunc_breakup->Eval(x_min);
    delta = p1*p1 - 4*p2*(p0 - y_min - 1);
    x1 = (-p1 + sqrt(delta)) / (2 * p2);
    x2 = (-p1 - sqrt(delta)) / (2 * p2);
    TLatex latex_breakup;
    latex_breakup.SetNDC();
    latex_breakup.SetTextSize(0.04);
    latex_breakup.DrawLatex(0.15, 0.85, Form("#chi^{2}_{VertexZ} = %.2f + %.2f #sigma + %.2f #sigma^{2}", p0, p1, p2));
    latex_breakup.DrawLatex(0.15, 0.78, Form("Min(#chi^{2}_{VertexZ}) = %.2f",y_min));
    latex_breakup.DrawLatex(0.15, 0.71, Form("#sigma_{min} = %.2f mb",x_min));
    latex_breakup.DrawLatex(0.15, 0.55, "#sigma values for Min(#chi^{2}_{VertexZ}) + 1 :");
    latex_breakup.DrawLatex(0.15, 0.48, Form("#sigma_{1} = %.2f, #sigma_{2} = %.2f",x2,x1));
    c_breakup->SaveAs("chi2_TOF/chi2_breakup.pdf");

}