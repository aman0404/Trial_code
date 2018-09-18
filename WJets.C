int WJets()
{
using namespace std;
TH1 *h[9],*hdy[9],*h10,*ht,*hww,*hzz,*hwz,*nevents1[9],*nevents2[9],*nevents3,*nevents4,*nevents5,*nevents6;
TCanvas *c1= new TCanvas("c1","stacked hists",0,0,600,600);
 c1->Range(0,0,1,1);

TFile *f1 = TFile::Open("CR_A_new/WJetsToLNu_HT-0To70.root");
f1->GetObject("NMuon1Tau1Combinations/Met",h[0]);
f1->GetObject("NMuon1Tau1Combinations/Events",nevents1[0]);

TFile *f2 = TFile::Open("CR_A_new/WJetsToLNu_HT-70To100.root");
f2->GetObject("NMuon1Tau1Combinations/Met",h[1]);
f2->GetObject("NMuon1Tau1Combinations/Events",nevents1[1]);

TFile *f3 = TFile::Open("CR_A_new/WJetsToLNu_HT-100To200.root");
f3->GetObject("NMuon1Tau1Combinations/Met",h[2]);
f3->GetObject("NMuon1Tau1Combinations/Events",nevents1[2]);

TFile *f4 = TFile::Open("CR_A_new/WJetsToLNu_HT-200To400.root");
f4->GetObject("NMuon1Tau1Combinations/Met",h[3]);
f4->GetObject("NMuon1Tau1Combinations/Events",nevents1[3]);

TFile *f5 = TFile::Open("CR_A_new/WJetsToLNu_HT-400To600.root");
f5->GetObject("NMuon1Tau1Combinations/Met",h[4]);
f5->GetObject("NMuon1Tau1Combinations/Events",nevents1[4]);

TFile *f6 = TFile::Open("CR_A_new/WJetsToLNu_HT-600To800.root");
f6->GetObject("NMuon1Tau1Combinations/Met",h[5]);
f6->GetObject("NMuon1Tau1Combinations/Events",nevents1[5]);

TFile *f7 = TFile::Open("CR_A_new/WJetsToLNu_HT-800To1200.root");
f7->GetObject("NMuon1Tau1Combinations/Met",h[6]);
f7->GetObject("NMuon1Tau1Combinations/Events",nevents1[6]);

TFile *f8 = TFile::Open("CR_A_new/WJetsToLNu_HT-1200To2500.root");
f8->GetObject("NMuon1Tau1Combinations/Met",h[7]);
f8->GetObject("NMuon1Tau1Combinations/Events",nevents1[7]);

TFile *f9 = TFile::Open("CR_A_new/WJetsToLNu_HT-2500ToInf.root");
f9->GetObject("NMuon1Tau1Combinations/Met",h[8]);
f9->GetObject("NMuon1Tau1Combinations/Events",nevents1[8]);

TFile *f10 = TFile::Open("CR_B_new/allData.root");
f10->GetObject("NMuon1Tau1Combinations/Met",h10);

TFile *f11 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-0To70.root");
f11->GetObject("NMuon1Tau1Combinations/Met",hdy[0]);
f11->GetObject("NMuon1Tau1Combinations/Events",nevents2[0]);

TFile *f12 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-70To100.root");
f12->GetObject("NMuon1Tau1Combinations/Met",hdy[1]);
f12->GetObject("NMuon1Tau1Combinations/Events",nevents2[1]);

TFile *f13 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-100To200.root");
f13->GetObject("NMuon1Tau1Combinations/Met",hdy[2]);
f13->GetObject("NMuon1Tau1Combinations/Events",nevents2[2]);

TFile *f14 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-200To400.root");
f14->GetObject("NMuon1Tau1Combinations/Met",hdy[3]);
f14->GetObject("NMuon1Tau1Combinations/Events",nevents2[3]);

TFile *f15 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-400To600.root");
f15->GetObject("NMuon1Tau1Combinations/Met",hdy[4]);
f15->GetObject("NMuon1Tau1Combinations/Events",nevents2[4]);

TFile *f16 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-600To800.root");
f16->GetObject("NMuon1Tau1Combinations/Met",hdy[5]);
f16->GetObject("NMuon1Tau1Combinations/Events",nevents2[5]);

TFile *f17 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-800To1200.root");
f17->GetObject("NMuon1Tau1Combinations/Met",hdy[6]);
f17->GetObject("NMuon1Tau1Combinations/Events",nevents2[6]);

TFile *f18 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-1200To2500.root");
f18->GetObject("NMuon1Tau1Combinations/Met",hdy[7]);
f18->GetObject("NMuon1Tau1Combinations/Events",nevents2[7]);

TFile *f19 = TFile::Open("CR_B_new/DYJetsToLL_M-50_HT-2500ToInf.root");
f19->GetObject("NMuon1Tau1Combinations/Met",hdy[8]);
f19->GetObject("NMuon1Tau1Combinations/Events",nevents2[8]);

TFile *f20 = TFile::Open("CR_B_new/TT.root");
f20->GetObject("NMuon1Tau1Combinations/Met",ht);
f20->GetObject("NMuon1Tau1Combinations/Events",nevents3);

TFile *f21 = TFile::Open("CR_B_new/WW.root");
f21->GetObject("NMuon1Tau1Combinations/Met",hww);
f21->GetObject("NMuon1Tau1Combinations/Events",nevents4);

TFile *f22 = TFile::Open("CR_B_new/ZZ.root");
f22->GetObject("NMuon1Tau1Combinations/Met",hzz);
f22->GetObject("NMuon1Tau1Combinations/Events",nevents5);

TFile *f23 = TFile::Open("CR_B_new/WZ.root");
f23->GetObject("NMuon1Tau1Combinations/Met",hwz);
f23->GetObject("NMuon1Tau1Combinations/Events",nevents6);

Double_t facDY[9];
Double_t facWjet[9];
Double_t facTT;
Double_t facWW;
Double_t facZZ;
Double_t facWZ;

Int_t lumi = 35870;
Double_t csecDY = 1.17781;
Double_t csecWjet = 1.21378;
Double_t csecttbar = 831.76;
Double_t csecWW = 63.21;
Double_t csecZZ = 10.32 ;
Double_t csecWZ = 22.82;
Double_t wjets[9] = {50690, 1319 ,1345,359.7,48.91,12.05,5.501,1.329,0.03216};
Double_t dy[9]={4895,175.3,147.4,40.99,5.678,1.363,0.6759,0.116,0.002592};
Double_t skiDY[9] = {0.924044 ,0.9915,0.991187,0.989170,0.988470 ,0.986784 ,0.986784 ,0.978527 ,0.969364};


for ( int i = 0; i <9 ; i++)
{
  facDY[i] =((skiDY[i]*lumi*csecDY*dy[i])/((nevents2[i]->GetBinContent(1))));

hdy[i]->Scale(facDY[i]);
} 
for (i=1; i<9; i++)
{
hdy[0]->Add(hdy[i]);
}
Double_t skiWj[9] = {0.933982, 0.995100 ,0.994145 , 0.992909 , 0.992174, 0.991120, 0.989019, 0.983060,0.972836};
for ( int j = 0; j < 9 ; j++)
{
  facWjet[j] =((skiWj[j]*lumi*csecWjet*wjets[j])/((nevents1[j]->GetBinContent(1))));

h[j]->Scale(facWjet[j]);

} 
for ( int j=1; j<9; j++)
{
h[0]->Add(h[j]);
}

facTT = ((lumi*csecttbar)/(nevents3->GetBinContent(1)));
ht->Scale(facTT);
 facWW = ((0.994260*lumi*csecWW )/((nevents4->GetBinContent(1))));
 facZZ = ((0.994700*lumi*csecZZ )/((nevents5->GetBinContent(1))));
 facWZ = ((0.994260*lumi*csecWZ)/((nevents6->GetBinContent(1))));
hww->Scale(facWW);
hzz->Scale(facZZ);
hwz->Scale(facWZ);

/*for(int k=0; k<9; k++)
{
h10->Add(hdy[k],-1);
}*/
h10->Add(hdy[0],-1);
h10->Add(ht,-1);
h10->Add(hww,-1);
h10->Add(hzz,-1);
h10->Add(hwz,-1);
h10->Scale(1.38);
h10->Rebin(20);
h[0]->Rebin(20);
//h10->Sumw2();
h[0]->Sumw2();
TPad *pad1 = new TPad("pad1", "pad1", 0.01, 0.01, 0.99, 0.30);
   pad1->Draw();
   pad1->cd();
   pad1->SetBottomMargin(0.2); // Upper and lower plot are joined
	pad1->SetTopMargin(0.001);
   pad1->SetGridx();         // Vertical grid
TH1F *h3 = (TH1F*)h10->Clone("h3");
TH1F *h4 = (TH1F*)h[0]->Clone("h4");
h3->GetYaxis()->SetTitle("#frac{Data-#sumnon-WJ MC}{WJets}");
h3->GetXaxis()->SetTitle("M(#mu,#tau_{h}) (GeV)");//M(#mu,#tau_{h}) (GeV)"); E_{T}^{miss} (GeV)
h3->GetXaxis()->SetRangeUser(30,400);
h3->GetYaxis()->SetRangeUser(0,2);
h3->GetYaxis()->SetTitleSize(0.08);
h3->GetXaxis()->SetTitleSize(0.08);
h3->GetYaxis()->SetTitleOffset(0.5);
h3->GetYaxis()->CenterTitle();
h3->SetMarkerStyle(kFullCircle);
h3->GetYaxis()->SetLabelSize(0.07);
h3->GetXaxis()->SetLabelSize(0.08);
h3->SetTitle(" ");
h3->Divide(h4);
h3->SetStats(kFALSE);
h3->Draw("ep");

TLine *line = new TLine(30, 1,400, 1);
line->SetLineColor(kRed);
line->Draw();
c1->cd();
TPad *pad2 = new TPad("pad2", "pad2", 0.01, 0.33, 0.99, 0.99);
   pad2->Draw();
   pad2->cd();
   pad2->SetBottomMargin(0.005); // Upper and lower plot are joined
   pad2->SetGridx();         // Vertical grid

h10->SetStats(kFALSE);
h10->SetFillColor(kCyan);
h10->Draw("hist");
h[0]->Draw("ep,same");
h10->SetTitle("");	//m_{T}(#tau)+ #slash{E}_{T}
h10->GetYaxis()->SetTitle("#Events");
//h10->Setlogy();
h[0]->SetMarkerStyle(kFullCircle);
h[0]->SetMarkerColor(1);
h[0]->SetMarkerSize(1);
h10->GetXaxis()->SetRangeUser(30,400);
TLegend *legend=new TLegend(0.60,0.74,0.88,0.84);
legend->SetTextSize(0);
legend->AddEntry(h10,"Data-Non. WJets MC : Region B* SF","f");
legend->AddEntry(h[0],"WJets MC : Region A","lp");
legend->SetTextSize(0.05);
legend->Draw();
//c1->SaveAs("Met.eps");
c1->SaveAs("Met.png");
//c1->SaveAs("AfterSFComp/Met.jpeg");
}
