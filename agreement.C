{

TCanvas *c1 = new TCanvas("c1", "stacked hists",61,24,1305,744);
   c1->Range(-31.19002,-0.07272727,281.4299,0.6525253);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTopMargin(0.0724234);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);


TH2 *hloose,*htight, *hloosebkg, *htightbkg;
TFile *f1 = TFile::Open("14Sept/looseIso_2D/Data.root");
f1->GetObject("NRecoTau1/FirstLeadingJetPtVsFirstLeadingJetEta",hloose);
//TFile *f2 = TFile::Open("14Sept/tightIso_2D/allMC.root");
//f2->GetObject("NRecoTau1/FirstLeadingTau1Pt",htight);

TFile *f3 = TFile::Open("14Sept/looseIso_2D/allMC.root");
f3->GetObject("NRecoTau1/FirstLeadingJetPtVsFirstLeadingJetEta",hloosebkg);
//TFile *f4 = TFile::Open("14Sept/tightIso_2D/bkg.root");
//f4->GetObject("NRecoTau1/FirstLeadingTau1Pt",htightbkg);

//TH1F *h1 = (TH1F*)htight->Clone("h1");
TH2F *h2 = (TH2F*)hloose->Clone("h2");
//TH1F *h3 = (TH1F*)hloose->Clone("h3");
//TH1F *h3 = (TH1F*)htightbkg->Clone("h3");
TH2F *h4 = (TH2F*)hloosebkg->Clone("h4");

//h1->Rebin(10);
//h2->Rebin(2);

//h3->Rebin(10);
//h4->Rebin(2);

//h2->Add(h4,-1);

h2->Divide(h4);
h2->SetStats(kFALSE);

h2->Draw();
h2->SetMarkerStyle(22);
//h2->GetXaxis()->SetRangeUser(-2.5,2.5);
h2->GetYaxis()->SetRangeUser(-2.5,2.5);
h2->SetMarkerSize(1.4);
h2->SetTitle("");
h2->GetXaxis()->SetTitle("#tau_{h} #eta");
h2->GetYaxis()->SetTitle("#frac{Data}{MC}");
  h2->SetLineWidth(2);
   h2->SetLineColor(kBlack);


/*TPaveText *pt = new TPaveText(0.2624712,0.8927577,0.7336915,0.954039,"blNDC");
   pt->SetName(" ");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Leading #tau_{h} P_{T}");
   pt->Draw();*/


TLatex *   tex = new TLatex(-2.142556,1.851902,"CMS");
   tex->SetTextAlign(20);
   //tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
TLatex *   tex1 = new TLatex(-1.992901,1.737462,"#it{#bf{work in progress}}");
   tex1->SetTextAlign(20);
   tex1->SetTextSize(0.02898551);

   tex1->SetLineWidth(2);
   tex1->Draw();

c1->SaveAs("plots/JetEta_agree_loose_2D_14Sept.root");
c1->SaveAs("plots/JetEta_agree_loose_2D_14Sept.png");


}



