{
TH1 *h[9],*ht,*hw[9], *htww, *htwz,*htzz,*neventstop[4], *htop[4];

TFile *f1 = TFile::Open("CR_D/WJetsToLNu_HT-0To70.root");
f1->GetObject("NMuon1Tau1Combinations/Events",hw[0]);
TFile *f2 = TFile::Open("CR_D/WJetsToLNu_HT-70To100.root");
f2->GetObject("NMuon1Tau1Combinations/Events",hw[1]);
TFile *f3 = TFile::Open("CR_D/WJetsToLNu_HT-100To200.root");
f3->GetObject("NMuon1Tau1Combinations/Events",hw[2]);
TFile *f4 = TFile::Open("CR_D/WJetsToLNu_HT-200To400.root");
f4->GetObject("NMuon1Tau1Combinations/Events",hw[3]);
TFile *f5 = TFile::Open("CR_D/WJetsToLNu_HT-400To600.root");
f5->GetObject("NMuon1Tau1Combinations/Events",hw[4]);
TFile *f6 = TFile::Open("CR_D/WJetsToLNu_HT-600To800.root");
f6->GetObject("NMuon1Tau1Combinations/Events",hw[5]);
TFile *f7 = TFile::Open("CR_D/WJetsToLNu_HT-800To1200.root");
f7->GetObject("NMuon1Tau1Combinations/Events",hw[6]);
TFile *f8 = TFile::Open("CR_D/WJetsToLNu_HT-1200To2500.root");
f8->GetObject("NMuon1Tau1Combinations/Events",hw[7]);
TFile *f9 = TFile::Open("CR_D/WJetsToLNu_HT-2500ToInf.root");
f9->GetObject("NMuon1Tau1Combinations/Events",hw[8]);

TFile *f10 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-0To70.root");
f10->GetObject("NMuon1Tau1Combinations/Events",h[0]);

TFile *f11 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-70To100.root");
f11->GetObject("NMuon1Tau1Combinations/Events",h[1]);
TFile *f12 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-100To200.root");
f12->GetObject("NMuon1Tau1Combinations/Events",h[2]);
TFile *f14 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-200To400.root");
f14->GetObject("NMuon1Tau1Combinations/Events",h[3]);
TFile *f15 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-400To600.root");
f15->GetObject("NMuon1Tau1Combinations/Events",h[4]);
TFile *f16 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-600To800.root");
f16->GetObject("NMuon1Tau1Combinations/Events",h[5]);
TFile *f17 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-800To1200.root");
f17->GetObject("NMuon1Tau1Combinations/Events",h[6]);
TFile *f18 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-1200To2500.root");
f18->GetObject("NMuon1Tau1Combinations/Events",h[7]);
TFile *f19 = TFile::Open("CR_D/DYJetsToLL_M-50_HT-2500ToInf.root");
f19->GetObject("NMuon1Tau1Combinations/Events",h[8]);

TFile *f13 = TFile::Open("CR_D/TT.root");

f13->GetObject("NMuon1Tau1Combinations/Events",ht);

TFile *f20 = TFile::Open("CR_D/WW.root");

f20->GetObject("NMuon1Tau1Combinations/Events",htww);

TFile *f21 = TFile::Open("CR_D/ZZ.root");

f21->GetObject("NMuon1Tau1Combinations/Events",htzz);

TFile *f22 = TFile::Open("CR_D/WZ.root");

f22->GetObject("NMuon1Tau1Combinations/Events",htwz);

//top

TFile *f33 = TFile::Open("CR_D/ST_t-channel_antitop_4f_inclusiveDecays.root");
f33->GetObject("NMuon1Tau1Combinations/Events",htop[0]);
//f33->GetObject("NMuon1Tau1Combinations/Events",neventstop[0]);

TFile *f34 = TFile::Open("CR_D/ST_t-channel_top_4f_inclusiveDecays.root");
f34->GetObject("NMuon1Tau1Combinations/Events",htop[1]);
//f34->GetObject("NMuon1Tau1Combinations/Events",neventstop[1]);

TFile *f35 = TFile::Open("CR_D/ST_tW_antitop_5f_inclusiveDecays.root");
f35->GetObject("NMuon1Tau1Combinations/Events",htop[2]);
//f35->GetObject("NMuon1Tau1Combinations/Events",neventstop[2]);

TFile *f36 = TFile::Open("CR_D/ST_tW_top_5f_inclusiveDecays.root");
f36->GetObject("NMuon1Tau1Combinations/Events",htop[3]);
//f36->GetObject("NMuon1Tau1Combinations/Events",neventstop[3]);

Double_t facDY[9];
Double_t facWjets[9];
Double_t dy[9]={4895,175.3,147.4,40.99,5.678,1.363,0.6759,0.116,0.002592};
Double_t facTOP[4];

Int_t sigma =  35870;
Double_t csecDY = 1.17781;

Double_t csecTOP[4] = { 80.95,136.02 ,35.6, 35.6};
Double_t csecWjet = 1.21378;
Double_t wjets[9] = {50690, 1319 ,1345,359.7,48.91,12.05,5.501,1.329,0.03216};
Double_t skiWj[9] = {0.933982, 0.995100 ,0.994145 , 0.992909 , 0.992174, 0.991120, 0.989019, 0.983060,0.972836};
Double_t skiDY[9] = {0.924044 ,0.9915,0.991187,0.989170,0.988470 ,0.986784 ,0.986784 ,0.978527 ,0.969364};

Double_t sumDY = 0;
Double_t sumWJets = 0;
Double_t sumTop = 0;

for ( int i = 0; i < 9 ; i++)
{
Double_t facDY[i] =((skiDY[i]*sigma*csecDY*dy[i])/((h[i]->GetBinContent(1))));
h[i]->Scale(facDY[i]);
Double_t vertexDY= h[i]->GetBinContent(2);

sumDY +=vertexDY;
}
cout<<"sumDY= "<<sumDY<<endl;

for (int j = 0; j < 9; j++)
{
Double_t facWjets[j] =((skiWj[j]*sigma*csecWjet*wjets[j])/((hw[j]->GetBinContent(1))));
hw[j]->Scale(facWjets[j]);
Double_t vertexWJ= hw[j]->GetBinContent(2);

sumWJets +=vertexWJ;
}
cout<<"sumWJ= "<<sumWJets<<endl;

for (int l=0; l< 4; l++)
{

facTOP[l] =((sigma*csecTOP[l])/((htop[l]->GetBinContent(1))));
htop[l]->Scale(facTOP[l]);
Double_t vertexTop = htop[l]-> GetBinContent(2);
sumTop += vertexTop;
}
cout<<"sumTop = "<<sumTop<<endl;


Double_t facTT,facWW,facZZ,facWZ;
Double_t csecttbar = 831.76;
Double_t csecWW = 63.21;
Double_t csecZZ = 10.32 ;
Double_t csecWZ = 22.82;
facTT = ((sigma*csecttbar)/(ht->GetBinContent(1)));
facWW = ((0.994260*sigma*csecWW )/((htww->GetBinContent(1))));
facZZ = ((0.994700*sigma*csecZZ )/((htzz->GetBinContent(1))));
facWZ = ((0.994260*sigma*csecWZ)/((htwz->GetBinContent(1))));
ht->Scale(facTT);
htww->Scale(facWW);
htzz->Scale(facZZ);
htwz->Scale(facWZ);

Double_t vertexTT= ht->GetBinContent(2);
Double_t vertexWW= htww->GetBinContent(2);
Double_t vertexZZ= htzz->GetBinContent(2);
Double_t vertexWZ= htwz->GetBinContent(2);

cout<<"vertexTT= "<<vertexTT<<endl;
cout<<"vertexWW= "<<vertexWW<<endl;
cout<<"vertexZZ= "<<vertexZZ<<endl;
cout<<"vertexWZ= "<<vertexWZ<<endl;

}
