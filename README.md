# I2TheTerascale
Here you will find the [code](https://github.com/theofil/I2TheTerascale/tree/main/code) & [documentation](https://github.com/theofil/I2TheTerascale/raw/main/docs/main.pdf) from the [Introduction to the Terascale](https://indico.desy.de/event/33888/) tutorial given at DESY. 

The bulk of the exercises will be based on ROOT and C++. Having it installed in your local computer has the advantage of keeping the software ready to be used for other purposes, after the schools ends.

Should  time allows, we might see also examples of how to do similar things using columnar-style of analysis with python and jupiter notebooks, without using ROOT/C++. 

## Before the tutorial 

It is **highly recommended** to:
* Install [ROOT](https://root.cern.ch "ROOT") in your laptop, over Linux/Unix OS if possible.
* Read as much as you can from the most recent version of the [documentation](https://github.com/theofil/I2TheTerascale/raw/main/docs/main.pdf).


If your laptop is Windows-only and you have hard time following the official instructions of [https://root.cern/install/](https://root.cern/install/), please use Google, Youtube, ChatGPT to find solutions to the error messages you are getting to your screen.

Once you finished with installing ROOT, try to run `makePlot.C` or the `simple.C` ROOT macros. 
### Linux
In linux, you can simply c&p the following commands:

    wget https://github.com/theofil/I2TheTerascale/archive/refs/heads/main.zip
    unzip main.zip 
    cd I2TheTerascale-main/code/C/
    root -l makePlot.C 

If `makePlot.C` doesn't work as expected, please try instead the command `root -l simple.C`. The physical location of the ROOT files is here: [http://theofil.web.cern.ch/theofil/cmsod/files](http://theofil.web.cern.ch/theofil/cmsod/files)


### Windows

In Windows you will need to download the [code](https://github.com/theofil/I2TheTerascale/archive/refs/heads/main.zip), unzip it and then go to the command line, cd to the folder you have unzipped the `main.zip` and execute `root -l simple.C` or `root -l makePlot.C` in the command line.

### Windows/Putty/SSH 
In case you don't manage to get ROOT working in your laptop, connect via SSH to a remote server to do the tutorial. For this you will need three things:

 1. [putty](https://www.putty.org) 
 2. [xming](https://sourceforge.net/projects/xming/)
 3. [xming-fonts](https://sourceforge.net/projects/xming/files/Xming-fonts/7.7.0.10/)

Then connect to one of the naf servers, e.g., `school07@naf-school03.desy.de`, with numbering `naf-school[01-06]`. When you launch the SSH connection **make sure you enable the X11 forwarding**.
See detailed instructions [here](docs/SSH_X11_Forwarding_on_Windows_with_Putty.pdf).

### Binder
[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/theofil/I2TheTerascale/main)


### Linux/MacOSX SSH
First connect to one of the  naf-schoolXX.desy.de

`ssh -X school07@naf-school03.desy.de` 

or with `-Y` for MacOSX.

Then open a second ssh connection to 

`ssh naf-school01` 

with numbering `naf-school[01-06]`

## Tutorial's Links 
* In case asked, open the poll using [this link](https://docs.google.com/forms/d/e/1FAIpQLSd3YB2VIpUht9CX7__UtSyVrzCRYc4_j4TDPriOjXb4qwPbuQ/viewform?usp=pp_url&entry.1665379118=A)
* [Zoom](https://cern.zoom.us/j/66658277521?pwd=U0lIOEJrL0VCT2c5THJOcGNkUzZLdz09)



## Projects 
Subscribe to your favorite projects here: 

https://docs.google.com/document/d/1WcybckM5LoAthRPYDDehW_1St4vQu27GjM_xHnXuOjU/edit?usp=sharing
