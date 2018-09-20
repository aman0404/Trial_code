{

TCanvas *c1 = new TCanvas("c1", "stacked hists",61,24,1305,744);
   c1->Range(-45.38311,-3.148649,338.6051,3.31982);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
    c1->SetLeftMargin(0.1181888);
   c1->SetTopMargin(0.1267409);

   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);

Double_t binsX[14] = {0,10,20,30,40,50,70,90,110,130,150,170,190,250};
Double_t binsY[5] = {-2.5,-1.5,0.5,1.5,2.5};


TH2 *hloose,*htight;
TFile *f1 = TFile::Open("14Sept/looseIso_2D/DY+Jets.root");
f1->GetObject("NRecoTau1/FirstLeadingTau1PtVsFirstLeadingTau1Eta",hloose);
TFile *f2 = TFile::Open("14Sept/tightIso_2D/DY+Jets.root");
f2->GetObject("NRecoTau1/FirstLeadingTau1PtVsFirstLeadingTau1Eta",htight);


TH2F *h1 = new TH2F("h1","h1",13,binsX,4,binsY);
TH2F *h2 = new TH2F("h2","h2",13,binsX,4,binsY);

//TH2D *h1 = (TH2D*)htight->Clone("h1");
//TH2D *h1 = new TH2D("h1","h1",13,binsX,20,-2.5,2.5);

//TH2D *h2 = (TH2D*)hloose->Clone("h2");
//TH2D *h2 = new TH2D("h2","h2",13,binsX,20,-2.5,2.5);

//TH2F *h1 = (TH2F*)htight->Rebin2D(13,"h1",binsX,4,"h1",binsY);
//TH2F *h1 = (TH2F*)htight->RebinY(4,"h1",binsY);

//TH2F *h2 = (TH2F*)hloose->Rebin2D(13,"h2",binsX,4,"h1",binsY);
//TH2F *h2 = (TH2F*)hloose->RebinY(4,"h2",binsY);



//TH2D *h1 = (TH2D*)htight->Clone("h1");
//TH2D *h2 = (TH2D*)hloose->Clone("h2");

//h1->Rebin2D();  // merges two bins along the xaxis and yaxis in one in hpxpy
//h2->Rebin2D();  // merges two bins along the xaxis and yaxis in one in hpxpy

//TH2 *hnew1 = h1->RebinX(13,"hnew1",binsX); // creates a new histogram hnew
//TH2 *hnew1 = h1->RebinY(5,"hnew"); // creates a new histogram hnew

//h1->RebinX(20);
//h1->RebinY(20);


//h2->RebinX(20);
//h2->RebinY(20);




TAxis *xaxis = htight->GetXaxis();
 TAxis *yaxis = htight->GetYaxis();
 for (int j=1; j<=yaxis->GetNbins();j++) 
{
 for (int i=1; i<=xaxis->GetNbins();i++) 
{
 h1->Fill(xaxis->GetBinCenter(i),yaxis->GetBinCenter(j),htight->GetBinContent(i,j));
 }
 }
TAxis *xaxis = hloose->GetXaxis();
 TAxis *yaxis = hloose->GetYaxis();
 for (int j=1; j<=yaxis->GetNbins();j++) 
{
 for (int i=1; i<=xaxis->GetNbins();i++) 
{
 h2->Fill(xaxis->GetBinCenter(i),yaxis->GetBinCenter(j),hloose->GetBinContent(i,j));
 }
 }




h1->Divide(h2);
h1->SetStats(kFALSE);

h1->Draw("colz text");
gStyle->SetPaintTextFormat("3.2f");

h1->SetMarkerStyle(22);
h1->GetXaxis()->SetRangeUser(0,250);
h1->GetYaxis()->SetRangeUser(-2.5,2.5);
h1->SetMarkerSize(1.4);
h1->SetTitle("");
h1->GetXaxis()->SetTitle("#tau_{h} P_{T} [GeV]");
//h1->GetYaxis()->SetTitle("#frac{tight}{loose}");
h1->GetYaxis()->SetTitle("#tau_{h} #eta");
   h1->SetLineWidth(2);
   h1->SetLineColor(kBlack);






TLatex *   tex = new TLatex(15.90262,2.851225,"CMS");
   tex->SetTextAlign(20);
   //tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
TLatex *   tex1 = new TLatex(26.20987,2.590057,"#it{#bf{work in progress}}");
   tex1->SetTextAlign(20);
   tex1->SetTextSize(0.02898551);

   tex1->SetLineWidth(2);
   tex1->Draw();
c1->SaveAs("plots_new/2D_DY_14Sept.root");
c1->SaveAs("plots_new/2D_DY_14Sept.png");

}



