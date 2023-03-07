# I2TheTerascale
Here you will find the [code](https://github.com/theofil/I2TheTerascale/tree/main/code) & [documentation](https://github.com/theofil/I2TheTerascale/raw/main/docs/main.pdf) from the [Introduction to the Terascale](https://indico.desy.de/event/33888/) tutorial given at DESY. 

The bulk of the exercises will be based on ROOT and C++. Having it installed in your local computer has the advantage of keeping the software ready to be used for other purposes, after the schools ends.

Should  time allows, we might see also examples of how to do similar things using columnar-style of analysis with python and jupiter notebooks, without using ROOT/C++.

## Before the tutorial 

It is **highly recommended** to:
* Install [ROOT](https://root.cern.ch "ROOT") in your laptop, over Linux/Unix OS if possible.
* Read as much as you can from the most recent version of the [documentation](https://github.com/theofil/I2TheTerascale/raw/main/docs/main.pdf).

If your laptop is Windows-only, you might find useful also to look the  [ROOT_Windows_InstallationFromSource.pdf](https://github.com/theofil/I2TheTerascale/blob/main/docs/ROOT_Windows_InstallationFromSource.pdf) in case you have hard time following the official instructions of [https://root.cern/install/](https://root.cern/install/).

Once you finished with installing ROOT, try to run `makePlot.C` or the `simple.C` ROOT macros. In linux, you can simply c&p the following commands:

    wget https://github.com/theofil/I2TheTerascale/archive/refs/heads/main.zip
    unzip main.zip 
    cd I2TheTerascale-main/code/C/
    root makePlot.C 

If `makePlot.C` doesn't work as expected, please try instead the command `root simple.C`

In Windows you will need to download the [code](https://github.com/theofil/I2TheTerascale/archive/refs/heads/main.zip), unzip it and then go to the command line, cd to the folder you have unzipped the `main.zip` and execute `simple.C` or `makePlot.C` in the command line.

## Tutorial's Links 
* In case asked, open the poll using [this link](https://docs.google.com/forms/d/e/1FAIpQLSd3YB2VIpUht9CX7__UtSyVrzCRYc4_j4TDPriOjXb4qwPbuQ/viewform?usp=pp_url&entry.1665379118=A)
* [Zoom](https://cern.zoom.us/j/66278363052?pwd=WEx6aU9DcnBtck5DQnA1c2l5NTdoQT09)
* Physical location of the ROOT files [http://theofil.web.cern.ch/theofil/cmsod/files](http://theofil.web.cern.ch/theofil/cmsod/files)

## SSH connections
### Linux/MacOSX
First connect to one of the  naf-schoolXX.desy.de

`ssh -X school07@naf-school03.desy` 

or with `-Y` for MacOSX.

Then open a second ssh connection to 

`ssh naf-school01` 

with numbering `naf-school[01-06]`

### Windows
First install [putty](https://www.putty.org) and [xming](https://sourceforge.net/projects/xming/)

Then connect to one of the naf servers, e.g., `school07@naf-school03.desy` 

Then open a second ssh connection to 

`ssh naf-school01` 

with numbering `naf-school[01-06]`

### Web based sshh
Use one of these links:

* https://naf-school01.desy.de:3389/
* https://naf-school02.desy.de:3389/
* https://naf-school03.desy.de:3389/
* https://naf-school04.desy.de:3389/
* https://naf-school05.desy.de:3389/
* https://naf-school06.desy.de:3389/

in your web browser, launch a new `xfce` session 


