{
// Initialize random seed
TRandom3 randGen(0);

// Define histogram
TH1F *histo = new TH1F("histo", "Poisson Distribution;Counts;Events", 20, 0, 20);

// Fill histogram with 1000 Poisson-distributed random numbers (mean = 9)
for (int i = 0; i < 1000; i++) {
    histo->Fill(randGen.Poisson(9));
}

// Print mean and standard deviation

cout << "Mean: "    << histo->GetMean()   << endl;
cout << "Std Dev: " << histo->GetStdDev() << endl;
bin = 8;
cout << histo->GetBinContent(bin) << " events have " << histo->GetBinLowEdge(bin)  << " counts " << endl;

// Plot histogram
TCanvas *canvas = new TCanvas("canvas", "Poisson Histogram", 800, 600);
histo->Draw();
canvas->SaveAs("poisson_histogram.png"); // Save as an image (optional)

}
