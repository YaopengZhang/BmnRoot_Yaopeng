#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <filesystem>
#include <TFile.h>
#include <TTree.h>
#include <TRandom3.h>

namespace fs = std::filesystem;

void delta_test_frag_newXS(){
    // ifstream file("Cp-B11_3.7AGeV_det_100.r12");
    // ifstream file("DCMQGSM_SRC/DCMQGSM_Cp_3.7_AGeV_det-geom_1k/DCMQGSM_Cp_3.7_AGeV_det-geom_1k_1.r12");
    // if (!file.is_open()) {
    //     cerr << "Failed to open the file." << endl;
    //     return;
    // }

    Int_t Multiplicity = 2, PDG_code = 2212; // 2212 proton; 2112 neutron
    Double_t vertex_x, vertex_y, vertex_z; // cm
    Double_t Weight = 1.;

    double p3[3], p4[3], pAm1[3];
    double momenta[3];
    int p3_flag, p4_flag, pAm1_flag;

    TFile *f = new TFile("./vertex_delta_test_frag_newXS.root","RECREATE"); // "UPDATE"
    TTree *tree_vertex = new TTree("vertex","data");
    tree_vertex->Branch("vertex_x",&vertex_x,"vertex_x/D");
    tree_vertex->Branch("vertex_y",&vertex_y,"vertex_y/D");
    tree_vertex->Branch("vertex_z",&vertex_z,"vertex_z/D");
    tree_vertex->Branch("Weight",&Weight,"Weight/D");

    TFile *f_gen = new TFile("./gen_delta_test_frag_newXS.root","RECREATE"); // "UPDATE"
    TTree *tree_gen = new TTree("T","gen");
    tree_gen->Branch("weight",&Weight,"weight/D");
    tree_gen->Branch("p3",p3,"p3[3]/D");
    tree_gen->Branch("p4",p4,"p4[3]/D");
    tree_gen->Branch("pAm1",pAm1,"pAm1[3]/D");

    ofstream OUT("Generator_input_delta_test_frag_newXS.txt"); // Generate the input file for FairAsciiGenerator
    ofstream OUT_delta("Delta_events_delta_test_frag_newXS.txt"); 
    ofstream OUT_delta_11B("Delta_events_delta_test_frag_newXS_11B.txt"); 
    
    int jentry = -1;
    int delta_flag;

    std::string directoryPath = "./DCMQGSM_Cp_3.7_AGeV_qgsm_1k/";
    // std::string directoryPath = "./test/";

    for (const auto& entry : fs::directory_iterator(directoryPath)) {
        if (entry.is_regular_file()) {
            std::string filePath = entry.path().string();
            std::ifstream file(filePath);
            if (!file.is_open()) {
                std::cerr << "Failed to open the file: " << filePath << std::endl;
                continue;
            }
            std::cout << "Processing file: " << filePath << std::endl;

            std::string line;
            while (std::getline(file, line)) {
                std::stringstream ss(line);
                std::vector<double> numbers;
                double value;
                while (ss >> value) {
                    numbers.push_back(value);
                }

            // string line;
            // while (getline(file, line)) {
            //     stringstream ss(line);
            //     vector<double> numbers;
            //     double value;
            //     while (ss >> value) {
            //         numbers.push_back(value);
            //     }

                if (numbers.size() == 5) {
                    // cout << "5" << line << endl;

                    vertex_x = gRandom->Gaus(0.812529,1.34449);        // cm
                    vertex_y = gRandom->Gaus(0.0909585,0.848839);      // cm
                    vertex_z = gRandom->Uniform(-576.2-15,-576.2+15);  // cm

                    Multiplicity = numbers[1];
                    // int jentry = int(numbers[0])-1;
                    jentry += 1;

                    //-------------------------------Generator_input.txt-----------------------------------
                    OUT<<Multiplicity<<"\t"<<jentry<<"\t"<<vertex_x<<"\t"<<vertex_y<<"\t"<<vertex_z<<"\n";
                    //-------------------------------Generator_input.txt-----------------------------------

                    tree_vertex->Fill();

                    if(pAm1_flag==1&&p3_flag==1&&p4_flag==1){
                        tree_gen->Fill();
                    }

                    p3_flag=0;
                    p4_flag=0;
                    pAm1_flag=0;

                } else if (numbers.size() == 11) {
                    // cout << "11" << line << endl;

                    delta_flag = int(numbers[1]);
                    PDG_code = int(numbers[4]);

                    momenta[0] = numbers[5];
                    momenta[1] = numbers[6];
                    momenta[2] = numbers[7];

                    //-------------------------------Generator_input.txt-----------------------------------
                    OUT<<PDG_code<<"\t"<<momenta[0]<<"\t"<<momenta[1]<<"\t"<<momenta[2]<<"\n";
                    //-------------------------------Generator_input.txt-----------------------------------

                    if(delta_flag==1 && PDG_code==2212) OUT_delta<<jentry<<"\t"<<momenta[0]<<"\t"<<momenta[1]<<"\t"<<momenta[2]<<"\n";

                    if(PDG_code==2212 && p3_flag==0){
                        p3[0] = momenta[0];
                        p3[1] = momenta[1];
                        p3[2] = momenta[2];
                        p3_flag=1;
                    }

                    if(PDG_code==2212 && p3_flag!=0){
                        p4[0] = momenta[0];
                        p4[1] = momenta[1];
                        p4[2] = momenta[2];
                        p4_flag=1;
                    }

                    if(PDG_code==1000050110) OUT_delta_11B<<jentry<<"\n";

                    if(PDG_code>10000000){
                        pAm1[0] = momenta[0];
                        pAm1[1] = momenta[1];
                        pAm1[2] = momenta[2];
                        pAm1_flag=1;
                    }

                } else {
                    // cout << "Skipping line: " << line << endl;
                }
            }

            if(pAm1_flag==1&&p3_flag==1&&p4_flag==1){
                tree_gen->Fill();
            }

            file.close();
        }
    }

    OUT.close();
    OUT_delta.close();
    OUT_delta_11B.close();

    f->cd();
    tree_vertex->Write();
    f->Close();

    f_gen->cd();
    tree_gen->Write();
    f_gen->Close();

    
}
