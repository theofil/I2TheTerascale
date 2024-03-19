# execute this with: python3 -i branching_ratio_pyROOT.py
import ROOT

fp = ROOT.TFile.Open("http://theofil.web.cern.ch/theofil/cmsod/files/ttbar.root")

# wget http://theofil.web.cern.ch/theofil/cmsod/files/ttbar.root
# fp = ROOT.TFile("ttbar.root")

events = fp.Get("events")

tot = events.GetEntries()
sel = events.GetEntries("abs(MCleptonPDGid) == 13")

print('tot %d  sel %d'%(tot, sel))
