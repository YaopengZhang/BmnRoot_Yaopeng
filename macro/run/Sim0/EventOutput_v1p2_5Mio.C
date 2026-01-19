#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct EventData {
    double W;
    vector<double> P3;
    vector<double> P4;
    vector<double> Am1;
};

void EventOutput_v1p2_5Mio() {
    ifstream infile("EventOutput_v1p2_5Mio.dat");

    if (!infile.is_open()) {
        cerr << "Can't open the data file!" << endl;
        return 1;
    }

    string line;
    int eventCount = 0;
    vector<EventData> events;

    while (getline(infile, line)) {
        if (line.find("#Ev") != string::npos) {
            eventCount++;
            EventData event;

            getline(infile, line);
            stringstream ss(line);
            ss >> line >> event.W;

            getline(infile, line);
            ss.clear();
            ss.str(line);
            string temp;
            ss >> temp;
            double x, y, z;
            ss >> x >> y >> z;
            event.P3 = {x, y, z};

            getline(infile, line);
            ss.clear();
            ss.str(line);
            ss >> temp; 
            ss >> x >> y >> z;
            event.P4 = {x, y, z};

            getline(infile, line);
            ss.clear();
            ss.str(line);
            ss >> temp; 
            ss >> x >> y >> z;
            event.Am1 = {x, y, z};

            events.push_back(event);
        }
    }

    infile.close();

    cout<<eventCount<<endl;

    Int_t Multiplicity = 2, PDG_code = 2212; // 2212 proton; 2112 neutron
    Double_t vertex_x, vertex_y, vertex_z; // cm
    Double_t Weight;

    TFile *f = new TFile("./vertex_v1p2_5Mio.root","RECREATE"); // "UPDATE"
    TTree *tree_vertex = new TTree("vertex","data");
    tree_vertex->Branch("vertex_x",&vertex_x,"vertex_x/D");
    tree_vertex->Branch("vertex_y",&vertex_y,"vertex_y/D");
    tree_vertex->Branch("vertex_z",&vertex_z,"vertex_z/D");
    tree_vertex->Branch("Weight",&Weight,"Weight/D");

    ofstream OUT("Generator_input_v1p2_5Mio.txt"); // Generate the input file for FairAsciiGenerator

    // cout << fixed << setprecision(6);
    for (int i = 0; i < eventCount; ++i) {
        // cout << "#Ev " << i + 1 << " 数据：" << endl;
        // cout << "W = " << events[i].W * 1e10<< endl;
        // cout << "P3 = (" << events[i].P3[0] << ", " << events[i].P3[1] << ", " << events[i].P3[2] << ")" << endl;
        // cout << "P4 = (" << events[i].P4[0] << ", " << events[i].P4[1] << ", " << events[i].P4[2] << ")" << endl;
        // cout << "Am1 = (" << events[i].Am1[0] << ", " << events[i].Am1[1] << ", " << events[i].Am1[2] << ")" << endl;
        
        vertex_x = gRandom->Gaus(0.812529,1.34449);        // cm
        vertex_y = gRandom->Gaus(0.0909585,0.848839);      // cm
        vertex_z = gRandom->Uniform(-576.2-15,-576.2+15);  // cm
        Weight = events[i].W;

        //-------------------------------Generator_input.txt-----------------------------------
        OUT<<Multiplicity<<"\t"<<i<<"\t"<<vertex_x<<"\t"<<vertex_y<<"\t"<<vertex_z<<"\n";
        OUT<<PDG_code<<"\t"<<events[i].P3[0]<<"\t"<<events[i].P3[1]<<"\t"<<events[i].P3[2]<<"\n";
        OUT<<PDG_code<<"\t"<<events[i].P4[0]<<"\t"<<events[i].P4[1]<<"\t"<<events[i].P4[2]<<"\n";
        //-------------------------------Generator_input.txt-----------------------------------

        tree_vertex->Fill();
    }
    OUT.close();
    
    f->cd();
    tree_vertex->Write();
    f->Close();
}