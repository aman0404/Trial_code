{

TCanvas *c1 = new TCanvas("c1", "stacked hists",61,24,1305,744);
   c1->Range(-31.19002,-0.07272727,281.4299,0.6525253);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTopMargin(0.0724234);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);


TH1 *hloose,*htight, *hloosebkg, *htightbkg;
TFile *f1 = TFile::Open("14Sept/looseIso_2D/allMC.root");
f1->GetObject("NRecoTau1/FirstLeadingTau1Pt",hloose);
TFile *f2 = TFile::Open("14Sept/tightIso_2D/allMC.root");
f2->GetObject("NRecoTau1/FirstLeadingTau1Pt",htight);

TFile *f3 = TFile::Open("14Sept/looseIso_2D/bkg.root");
f3->GetObject("NRecoTau1/FirstLeadingTau1Pt",hloosebkg);
TFile *f4 = TFile::Open("14Sept/tightIso_2D/bkg.root");
f4->GetObject("NRecoTau1/FirstLeadingTau1Pt",htightbkg);

TH1F *h1 = (TH1F*)htight->Clone("h1");
TH1F *h2 = (TH1F*)hloose->Clone("h2");

TH1F *h3 = (TH1F*)htightbkg->Clone("h3");
TH1F *h4 = (TH1F*)hloosebkg->Clone("h4");

h1->Rebin(10);
h2->Rebin(10);

h3->Rebin(10);
h4->Rebin(10);

h1->Divide(h2);
h1->SetStats(kFALSE);

h1->Draw("ep");
h1->SetMarkerStyle(22);
h1->GetXaxis()->SetRangeUser(0,250);
h1->GetYaxis()->SetRangeUser(0,0.6);
h1->SetMarkerSize(1.4);
h1->SetTitle("");
h1->GetXaxis()->SetTitle("#tau_{h} P_{T} [GeV]");
h1->GetYaxis()->SetTitle("#frac{tight}{loose}");
   h1->SetLineWidth(2);
   h1->SetLineColor(kBlack);


/*TPaveText *pt = new TPaveText(0.2624712,0.8927577,0.7336915,0.954039,"blNDC");
   pt->SetName(" ");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Leading #tau_{h} P_{T}");
   pt->Draw();*/


TLatex *   tex = new TLatex(17.19589,0.5566778,"CMS");
   tex->SetTextAlign(20);
   //tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
TLatex *   tex1 = new TLatex(25.11032,0.5246717,"#it{#bf{work in progress}}");
   tex1->SetTextAlign(20);
   tex1->SetTextSize(0.02898551);

   tex1->SetLineWidth(2);
   tex1->Draw();

c1->SaveAs("plots/JetpT_dataDrivenDY_14Sept.root");
c1->SaveAs("plots/JetpT_dataDrivenDY_14Sept.png");


}



