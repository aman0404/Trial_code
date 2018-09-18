#include <iostream>
#include "TFile.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TH1.h"
#include "THStack.h"
#include "TMath.h"
#include "TROOT.h"
#include "TAttMarker.h"

using namespace std;
int WJets()
{
  TH1 *h[9], *nevents1[9],*hw[9],*nevents2[9], *ht,*nevents3,*hww,*nevents4,*hzz,*nevents5,*hwz,*nevents6 ,*hqcd[9], *neventsqcd[9],*neventstop[4], *htop[4] ;
TCanvas *c1= new TCanvas("c1","stacked hists",0,0,600,600);
 c1->Range(0,0,1,1);

/*TFile *f1 = TFile::Open("DYJetsToLL_M-50_HT-0To70.root");
f1->GetObject("NMuon1Tau1Combinations/Dphi1",h[0]);
f1->GetObject("NMuon1Tau1Combinations/Events",nevents1[0]);


TFile *f2 = TFile::Open("DYJetsToLL_M-50_HT-70To100.root");
f2->GetObject("NMuon1Tau1Combinations/Dphi1",h[1]);
f2->GetObject("NMuon1Tau1Combinations/Events",nevents1[1]);
TFile *f3 = TFile::Open("DYJetsToLL_M-50_HT-100To200.root");
f3->GetObject("NMuon1Tau1Combinations/Dphi1",h[2]);
f3->GetObject("NMuon1Tau1Combinations/Events",nevents1[2]);
TFile *f4 = TFile::Open("DYJetsToLL_M-50_HT-200To400.root");
f4->GetObject("NMuon1Tau1Combinations/Dphi1",h[3]);
f4->GetObject("NMuon1Tau1Combinations/Events",nevents1[3]);
TFile *f5 = TFile::Open("DYJetsToLL_M-50_HT-400To600.root");
f5->GetObject("NMuon1Tau1Combinations/Dphi1",h[4]);
f5->GetObject("NMuon1Tau1Combinations/Events",nevents1[4]);
TFile *f6 = TFile::Open("DYJetsToLL_M-50_HT-600To800.root");
f6->GetObject("NMuon1Tau1Combinations/Dphi1",h[5]);
f6->GetObject("NMuon1Tau1Combinations/Events",nevents1[5]);
TFile *f7 = TFile::Open("DYJetsToLL_M-50_HT-800To1200.root");
f7->GetObject("NMuon1Tau1Combinations/Dphi1",h[6]);
f7->GetObject("NMuon1Tau1Combinations/Events",nevents1[6]);
TFile *f8 = TFile::Open("DYJetsToLL_M-50_HT-1200To2500.root");
f8->GetObject("NMuon1Tau1Combinations/Dphi1",h[7]);
f8->GetObject("NMuon1Tau1Combinations/Events",nevents1[7]);
TFile *f9 = TFile::Open("DYJetsToLL_M-50_HT-2500ToInf.root");
f9->GetObject("NMuon1Tau1Combinations/Dphi1",h[8]);
f9->GetObject("NMuon1Tau1Combinations/Events",nevents1[8]);
TFile *f11 = TFile::Open("TT.root");
f11->GetObject("NMuon1Tau1Combinations/Dphi1",ht);
f11->GetObject("NMuon1Tau1Combinations/Events",nevents3);
TFile *f12 = TFile::Open("WW.root");
f12->GetObject("NMuon1Tau1Combinations/Dphi1",hww);
f12->GetObject("NMuon1Tau1Combinations/Events",nevents4);
TFile *f13 = TFile::Open("WZ.root");
f13->GetObject("NMuon1Tau1Combinations/Dphi1",hwz);
f13->GetObject("NMuon1Tau1Combinations/Events",nevents6);

TFile *f14 = TFile::Open("ZZ.root");
f14->GetObject("NMuon1Tau1Combinations/Dphi1",hzz);
f14->GetObject("NMuon1Tau1Combinations/Events",nevents5);
*/

TFile *f15 = TFile::Open("WJetsToLNu_HT-0To70.root");
f15->GetObject("NMuon1Tau1Combinations/Dphi1",hw[0]);
f15->GetObject("NMuon1Tau1Combinations/Events",nevents2[0]);
TFile *f16 = TFile::Open("WJetsToLNu_HT-70To100.root");
f16->GetObject("NMuon1Tau1Combinations/Dphi1",hw[1]);
f16->GetObject("NMuon1Tau1Combinations/Events",nevents2[1]);
TFile *f17 = TFile::Open("WJetsToLNu_HT-100To200.root");
f17->GetObject("NMuon1Tau1Combinations/Dphi1",hw[2]);
f17->GetObject("NMuon1Tau1Combinations/Events",nevents2[2]);
TFile *f18 = TFile::Open("WJetsToLNu_HT-200To400.root");
f18->GetObject("NMuon1Tau1Combinations/Dphi1",hw[3]);
f18->GetObject("NMuon1Tau1Combinations/Events",nevents2[3]);

TFile *f19 = TFile::Open("WJetsToLNu_HT-400To600.root");
f19->GetObject("NMuon1Tau1Combinations/Dphi1",hw[4]);
f19->GetObject("NMuon1Tau1Combinations/Events",nevents2[4]);
TFile *f20 = TFile::Open("WJetsToLNu_HT-600To800.root");
f20->GetObject("NMuon1Tau1Combinations/Dphi1",hw[5]);
f20->GetObject("NMuon1Tau1Combinations/Events",nevents2[5]);
TFile *f21 = TFile::Open("WJetsToLNu_HT-800To1200.root");
f21->GetObject("NMuon1Tau1Combinations/Dphi1",hw[6]);
f21->GetObject("NMuon1Tau1Combinations/Events",nevents2[6]);
TFile *f22 = TFile::Open("WJetsToLNu_HT-1200To2500.root");
f22->GetObject("NMuon1Tau1Combinations/Dphi1",hw[7]);
f22->GetObject("NMuon1Tau1Combinations/Events",nevents2[7]);
TFile *f23 = TFile::Open("WJetsToLNu_HT-2500ToInf.root");
f23->GetObject("NMuon1Tau1Combinations/Dphi1",hw[8]);
f23->GetObject("NMuon1Tau1Combinations/Events",nevents2[8]);
//QCD
/*
TFile *f24 = TFile::Open("QCD_HT50to100.root");
f24->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[0]);
f24->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[0]);

TFile *f25 = TFile::Open("QCD_HT100to200.root");
f25->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[1]);
f25->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[1]);

TFile *f26 = TFile::Open("QCD_HT200to300.root");
f26->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[2]);
f26->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[2]);

TFile *f27 = TFile::Open("QCD_HT300to500.root");
f27->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[3]);
f27->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[3]);

TFile *f28 = TFile::Open("QCD_HT500to700.root");
f28->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[4]);
f28->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[4]);

TFile *f29 = TFile::Open("QCD_HT700to1000.root");
f29->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[5]);
f29->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[5]);

TFile *f30 = TFile::Open("QCD_HT1000to1500.root");
f30->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[6]);
f30->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[6]);

TFile *f31 = TFile::Open("QCD_HT1500to2000.root");
f31->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[7]);
f31->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[7]);

TFile *f32 = TFile::Open("QCD_HT2000toInf.root");
f32->GetObject("NMuon1Tau1Combinations/Dphi1",hqcd[8]);
f32->GetObject("NMuon1Tau1Combinations/Events",neventsqcd[8]);


//top

TFile *f33 = TFile::Open("ST_t-channel_antitop_4f_inclusiveDecays.root");
f33->GetObject("NMuon1Tau1Combinations/Dphi1",htop[0]);
f33->GetObject("NMuon1Tau1Combinations/Events",neventstop[0]);

TFile *f34 = TFile::Open("ST_t-channel_top_4f_inclusiveDecays.root");
f34->GetObject("NMuon1Tau1Combinations/Dphi1",htop[1]);
f34->GetObject("NMuon1Tau1Combinations/Events",neventstop[1]);

TFile *f35 = TFile::Open("ST_tW_antitop_5f_inclusiveDecays.root");
f35->GetObject("NMuon1Tau1Combinations/Dphi1",htop[2]);
f35->GetObject("NMuon1Tau1Combinations/Events",neventstop[2]);

TFile *f36 = TFile::Open("ST_tW_top_5f_inclusiveDecays.root");
f36->GetObject("NMuon1Tau1Combinations/Dphi1",htop[3]);
f36->GetObject("NMuon1Tau1Combinations/Events",neventstop[3]);
*/
TFile *f10 = TFile::Open("allData.root");

TH1 *h10; f10->GetObject("NMuon1Tau1Combinations/Dphi1",h10);

Double_t facDY[9];
Double_t facWjet[9];
Double_t facTT;
Double_t facWW;
Double_t facZZ;
Double_t facWZ;
Double_t facQCD[9];
Double_t facTOP[4];

Int_t lumi =  35870;
Double_t csecDY = 1.17781;
Double_t csecWjet = 1.21378;
Double_t csecttbar = 831.76;
Double_t csecWW = 63.21;
Double_t csecZZ = 10.32 ;
Double_t csecWZ = 22.82;

Double_t csecTOP[4] = { 80.95,136.02 ,35.6, 35.6};
Double_t csecQCD[9] = {246700000, 27990000, 1712000, 347700, 32100, 6831, 1207, 119.9, 25.24};
Double_t skiQCD[9] = {1,1, 0.996522 , 0.996032 , 0.995628 , 0.994388 , 0.990903 , 0.984614 , 0.978152};

Double_t wjets[9] = {50690, 1319 ,1345,359.7,48.91,12.05,5.501,1.329,0.03216};
Double_t dy[9]={4895,175.3,147.4,40.99,5.678,1.363,0.6759,0.116,0.002592};
Double_t skiDY[9] = {0.924044 ,0.9915,0.991187,0.989170,0.988470 ,0.986784 ,0.986784 ,0.978527 ,0.969364}; //skimming eff.
/*for ( int i = 0; i <9 ; i++)
{
  facDY[i] =((skiDY[i]*lumi*csecDY*dy[i])/((nevents1[i]->GetBinContent(1))));

h[i]->Scale(facDY[i]);
} */
Double_t skiWj[9] = {0.933982, 0.995100 ,0.994145 , 0.992909 , 0.992174, 0.991120, 0.989019, 0.983060,0.972836};
for ( int j = 0; j < 9 ; j++)
{
  facWjet[j] =((skiWj[j]*lumi*csecWjet*wjets[j])/((nevents2[j]->GetBinContent(1))));

hw[j]->Scale(facWjet[j]);
} 
for ( int j=1; j<9; j++)
{
hw[0]->Add(hw[j]);
}

hw[0]->Draw();

/*
for ( int k = 0; k < 9 ; k++)
{
  facQCD[k] =((skiQCD[k]*lumi*csecQCD[k])/((neventsqcd[k]->GetBinContent(1))));

hqcd[k]->Scale(facQCD[k]);
} 

for (int l=0; l< 4; l++)
{

facTOP[l] =((lumi*csecTOP[l])/((neventstop[l]->GetBinContent(1))));
htop[l]->Scale(facTOP[l]);

}


facTT = ((lumi*csecttbar)/(nevents3->GetBinContent(1)));
ht->Scale(facTT);
 facWW = ((0.994260*lumi*csecWW )/((nevents4->GetBinContent(1))));
 facZZ = ((0.994700*lumi*csecZZ )/((nevents5->GetBinContent(1))));
 facWZ = ((0.994260*lumi*csecWZ)/((nevents6->GetBinContent(1))));
hww->Scale(facWW);
hzz->Scale(facZZ);
hwz->Scale(facWZ);
  */
/*   
THStack *hs = new THStack("hs","");
h[0]->SetFillColor(kRed);
h[0]->SetLineColor(kRed);
h[1]->SetFillColor(kRed);
h[2]->SetFillColor(kRed);
h[3]->SetFillColor(kRed);
h[4]->SetFillColor(kRed);
h[5]->SetFillColor(kRed);
h[6]->SetFillColor(kRed);
h[7]->SetFillColor(kRed);
h[8]->SetFillColor(kRed);
h[1]->SetLineColor(kRed);
h[2]->SetLineColor(kRed);
h[3]->SetLineColor(kRed);
h[4]->SetLineColor(kRed);
h[5]->SetLineColor(kRed);
h[6]->SetLineColor(kRed);
h[7]->SetLineColor(kRed);
h[8]->SetLineColor(kRed);

hw[0]->SetFillColor(kGreen);
hw[0]->SetLineColor(kGreen);
hw[1]->SetFillColor(kGreen);
hw[2]->SetFillColor(kGreen);
hw[3]->SetFillColor(kGreen);
hw[4]->SetFillColor(kGreen);
hw[5]->SetFillColor(kGreen);
hw[6]->SetFillColor(kGreen);
hw[7]->SetFillColor(kGreen);
hw[8]->SetFillColor(kGreen);
hw[1]->SetLineColor(kGreen);
hw[2]->SetLineColor(kGreen);
hw[3]->SetLineColor(kGreen);
hw[4]->SetLineColor(kGreen);
hw[5]->SetLineColor(kGreen);
hw[6]->SetLineColor(kGreen);
hw[7]->SetLineColor(kGreen);
hw[8]->SetLineColor(kGreen);

ht->SetFillColor(kYellow);
hww->SetFillColor(kCyan);
hzz->SetFillColor(kBlue);
hwz->SetFillColor(kOrange+7);

hqcd[0]->SetFillColor(kGray);
hqcd[1]->SetFillColor(kGray);
hqcd[2]->SetFillColor(kGray);
hqcd[3]->SetFillColor(kGray);
hqcd[4]->SetFillColor(kGray);
hqcd[5]->SetFillColor(kGray);
hqcd[6]->SetFillColor(kGray);
hqcd[7]->SetFillColor(kGray);
hqcd[8]->SetFillColor(kGray);

htop[0]->SetFillColor(kMagenta);
htop[1]->SetFillColor(kMagenta);
htop[2]->SetFillColor(kMagenta);
htop[3]->SetFillColor(kMagenta);


h[0]->Rebin(2);
h[1]->Rebin(2);
h[2]->Rebin(2);
h[3]->Rebin(2);
h[4]->Rebin(2);
h[5]->Rebin(2);
h[6]->Rebin(2);
h[7]->Rebin(2);
h[8]->Rebin(2);
hw[0]->Rebin(2);
hw[1]->Rebin(2);
hw[2]->Rebin(2);
hw[3]->Rebin(2);
hw[4]->Rebin(2);
hw[5]->Rebin(2);
hw[6]->Rebin(2);
hw[7]->Rebin(2);
hw[8]->Rebin(2);

hqcd[0]->Rebin(2);
hqcd[1]->Rebin(2);
hqcd[2]->Rebin(2);
hqcd[3]->Rebin(2);
hqcd[4]->Rebin(2);
hqcd[5]->Rebin(2);
hqcd[6]->Rebin(2);
hqcd[7]->Rebin(2);
hqcd[8]->Rebin(2);

htop[0]->Rebin(2);
htop[1]->Rebin(2);
htop[2]->Rebin(2);
htop[3]->Rebin(2);

ht->Rebin(2);
hww->Rebin(2);
hwz->Rebin(2);
hzz->Rebin(2);
h10->Rebin(2);

h10->SetMarkerStyle(kFullCircle);
h10->SetMarkerColor(1);
h10->SetMarkerSize(1);

hs->Add(hwz);
hs->Add(hzz);
hs->Add(hww);
hs->Add(ht);
hs->Add(h[0]);
hs->Add(h[1]);
hs->Add(h[2]);
hs->Add(h[3]);
hs->Add(h[4]);
hs->Add(h[5]);
hs->Add(h[6]);
hs->Add(h[7]);
hs->Add(h[8]);
hs->Add(hw[0]);
hs->Add(hw[1]);
hs->Add(hw[2]);
hs->Add(hw[3]);
hs->Add(hw[4]);
hs->Add(hw[5]);
hs->Add(hw[6]);
hs->Add(hw[7]);
hs->Add(hw[8]);

hs->Add(hqcd[0]);
hs->Add(hqcd[1]);
hs->Add(hqcd[2]);
hs->Add(hqcd[3]);
hs->Add(hqcd[4]);
hs->Add(hqcd[5]);
hs->Add(hqcd[6]);
hs->Add(hqcd[7]);
hs->Add(hqcd[8]);
hs->Add(htop[0]);
hs->Add(htop[1]);
hs->Add(htop[2]);
hs->Add(htop[3]);



    TPad *pad1 = new TPad("pad1", "pad1", 0.01, 0.01, 0.99, 0.30);
   pad1->Draw();
   pad1->cd();
   pad1->SetBottomMargin(0.2); // Upper and lower plot are joined
   pad1->SetTopMargin(0.001);
   pad1->SetGridx();         // Vertical grid
   pad1->SetTitle(" ");
TH1F *hist1 = (TH1F*)h[0]->Clone("hist1");
TH1F *hist2 = (TH1F*)h[1]->Clone("hist2");
TH1F *hist3 = (TH1F*)h[2]->Clone("hist3");
TH1F *hist4 = (TH1F*)h[3]->Clone("hist4");
TH1F *hist5 = (TH1F*)h[4]->Clone("hist5");
TH1F *hist6 = (TH1F*)h[5]->Clone("hist6");
TH1F *hist7 = (TH1F*)h[6]->Clone("hist7");
TH1F *hist8 = (TH1F*)h[7]->Clone("hist8");
TH1F *hist9 = (TH1F*)h[8]->Clone("hist9");
TH1F *hist10 = (TH1F*)hw[0]->Clone("hist10");
TH1F *hist11 = (TH1F*)hw[1]->Clone("hist11");
TH1F *hist12 = (TH1F*)hw[2]->Clone("hist12");
TH1F *hist13 = (TH1F*)hw[3]->Clone("hist13");
TH1F *hist14 = (TH1F*)hw[4]->Clone("hist14");
TH1F *hist15 = (TH1F*)hw[5]->Clone("hist15");
TH1F *hist16 = (TH1F*)hw[6]->Clone("hist16");
TH1F *hist17 = (TH1F*)hw[7]->Clone("hist17");
TH1F *hist18 = (TH1F*)hw[8]->Clone("hist18");
TH1F *hist19 = (TH1F*)hw[8]->Clone("hist19");
TH1F *hist20 = (TH1F*)ht->Clone("hist20");
TH1F *hist21 = (TH1F*)hww->Clone("hist21");
TH1F *hist22 = (TH1F*)hwz->Clone("hist22");
TH1F *hist23 = (TH1F*)hzz->Clone("hist23");

TH1F *hist24 = (TH1F*)hqcd[0]->Clone("hist24");
TH1F *hist25 = (TH1F*)hqcd[1]->Clone("hist25");
TH1F *hist26 = (TH1F*)hqcd[2]->Clone("hist26");
TH1F *hist27 = (TH1F*)hqcd[3]->Clone("hist27");
TH1F *hist28 = (TH1F*)hqcd[4]->Clone("hist28");
TH1F *hist29 = (TH1F*)hqcd[5]->Clone("hist29");
TH1F *hist30 = (TH1F*)hqcd[6]->Clone("hist30");
TH1F *hist31 = (TH1F*)hqcd[7]->Clone("hist31");
TH1F *hist32 = (TH1F*)hqcd[8]->Clone("hist32");

TH1F *hist33 = (TH1F*)htop[0]->Clone("hist33");
TH1F *hist34 = (TH1F*)htop[1]->Clone("hist34");
TH1F *hist35 = (TH1F*)htop[2]->Clone("hist35");
TH1F *hist36 = (TH1F*)htop[3]->Clone("hist36");

hist2->Add(hist1);
hist3->Add(hist2);
hist4->Add(hist3);
hist5->Add(hist4);
hist6->Add(hist5);
hist7->Add(hist6);
hist8->Add(hist7);
hist9->Add(hist8);
hist10->Add(hist9);
hist11->Add(hist10);
hist12->Add(hist11);
hist13->Add(hist12);
hist14->Add(hist13);
hist15->Add(hist14);
hist16->Add(hist15);
hist17->Add(hist16);
hist18->Add(hist17);
hist19->Add(hist18);
hist20->Add(hist19);
hist21->Add(hist20);
hist22->Add(hist21);
hist23->Add(hist22);

//qcd

hist24->Add(hist23);
hist25->Add(hist24);
hist26->Add(hist25);
hist27->Add(hist26);
hist28->Add(hist27);
hist29->Add(hist28);
hist30->Add(hist29);
hist31->Add(hist30);
hist32->Add(hist31);

//top
hist33->Add(hist32);//Add(hist23)
hist34->Add(hist33);
hist35->Add(hist34);
hist36->Add(hist35);



// Define the ratio plot
TH1F *h3 = (TH1F*)h10->Clone("h3");
h3->Sumw2();
//hist36->Scale(0.99);
h3->Divide(hist36); //hist23
h3->SetStats(kFALSE);
h3->Draw("ep");
h3->GetXaxis()->SetRangeUser(-4,4); 
h3->GetYaxis()->SetRangeUser(0,2); 
h3->GetYaxis()->SetTitle("Data/#sumMC");
h3->GetYaxis()->SetTitleSize(0.08);
h3->GetYaxis()->SetTitleOffset(0.4);
h3->GetYaxis()->CenterTitle();
h3->GetXaxis()->SetLabelSize(0.08);
h3->GetYaxis()->SetLabelSize(0.07);
h3->GetXaxis()->SetTitle("#Delta#phi_{1}(j_{1},E_{T}^{miss})"); //m_{T}(#mu, #slash{E}_{T}) [GeV/c^{2}] #slash{E}_{T}^{miss}
h3->GetXaxis()->SetTitleSize(0.08);
h3->SetTitle(" ");
//h3->GetXaxis()->SetTitleOffset(0.6);

TLine *line = new TLine(-4, 1,4, 1);
line->SetLineColor(kRed);
line->Draw();
c1->cd();
TPad *pad2 = new TPad("pad2", "pad2", 0.01, 0.33, 0.99, 0.99);
   pad2->Draw();
   pad2->cd();
   pad2->SetBottomMargin(0.0001); // Upper and lower plot are joined
   pad2->SetGridx();         // Vertical grid

hs->Draw("hist");
h10->Draw("ep,same");
hs->GetXaxis()->SetRangeUser(-4,4);
hs->GetYaxis()->SetTitle("No. of events");
hs->GetYaxis()->SetTitleSize(0.04);
hs->GetYaxis()->SetTitleOffset(0.8);
pad2->SetLogy();
 TLegend *legend=new TLegend(0.75,0.34,0.85,0.64);
	//legend->SetHeader("NMuon1Tau1Combinations");
        legend->SetTextSize(0);
	legend->AddEntry(h10,"Data","lp");
        legend->AddEntry(ht,"ttbar","f");
        legend->AddEntry(hww,"WW","f");
        legend->AddEntry(hw[0],"WJets","f");
        legend->AddEntry(h[0],"DYJets","f");
        legend->AddEntry(hzz,"ZZ","f");
        legend->AddEntry(hwz,"WZ","f");
	legend->SetFillColor(kCyan-10);
        
//	legend->AddEntry(hqcd[0],"QCD","f");
	legend->AddEntry(htop[0],"Single top","f");
        legend->Draw();
	*/
c1->SaveAs("Dphi1_beforeVBF.png");
c1->SaveAs("Dphi1_beforeVBF.root");
}

