#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "TFile.h"
#include "TTree.h"

void datToroot(TString file_name) {
    TString inputFile_name = file_name + ".dat";

    std::ifstream inputFile(inputFile_name);
    if (!inputFile.is_open()) {
        std::cerr << "Can't open the file!" << std::endl;
        return 1;
    }

    TString output_name = file_name + ".root";
    TFile* rootFile = new TFile(output_name, "RECREATE");
    TTree* tree = new TTree("T", "T");

    Double_t weight;
    Double_t p3[3];
    Double_t p4[3];
    Double_t pAm1[3];

    tree->Branch("weight", &weight, "weight/D");
    tree->Branch("p3", p3, "p3[3]/D");
    tree->Branch("p4", p4, "p4[3]/D");
    tree->Branch("pAm1", pAm1, "pAm1[3]/D");

    std::string line;
    while (std::getline(inputFile, line)) {
        if (line.find("#Ev") != std::string::npos) {

            std::getline(inputFile, line);
            sscanf(line.c_str(), "W %le", &weight);

            std::getline(inputFile, line);
            sscanf(line.c_str(), "P3 %le %le %le", &p3[0], &p3[1], &p3[2]);

            std::getline(inputFile, line);
            sscanf(line.c_str(), "P4 %le %le %le", &p4[0], &p4[1], &p4[2]);

            std::getline(inputFile, line);
            sscanf(line.c_str(), "Am1 %le %le %le", &pAm1[0], &pAm1[1], &pAm1[2]);

            // cout<<weight<<"\t"<<p3[0]<<"\t"<<p3[1]<<"\t"<<p3[2]<<endl;
            // break;

            tree->Fill();
        }
    }

    tree->Write();
    rootFile->Close();

    inputFile.close();
}    