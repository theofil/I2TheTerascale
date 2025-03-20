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

## Installing ROOT

### Pick up the latest stable version
If you have already installed ROOT for other purposes, just use that version during the school.

**(No need to download the latest version.)**

### Linux/Mac laptops
We recommend using Conda/Snap or a package manager available for your system.

[Install via a package manager](https://root.cern/install/#install-via-a-package-manager)

Alternatively, you might try using a pre-compiled binary if all the above methods fail.

[Binary distributions](https://root.cern/releases/release-63404/#binary-distributions)

### Windows laptops
Installing ROOT on Windows can be challenging, as CERN provides only limited (beta) support. Since CERN relies on Scientific Linux for data acquisition, simulation, and reconstruction, it’s best to learn ROOT in a Unix-like environment.

We recommend installing Linux on your Windows laptop (either as a dual boot—at your own risk—or by running Linux in a virtual machine).

#### Virtual machine
Try the instructions prepared by another student who successfully completed the process:

[ROOT Windows 2025 Instructions](https://github.com/theofil/I2TheTerascale/raw/main/docs/ROOT_Windows_2025.pdf)

#### Dual boot (Windows / Linux)
1. First, back up your data.
2. Decide how much disk space to allocate to Linux.
3. Search Google for "dual boot Windows Linux" for guidance.

### Troubleshooting
In case of problems, please use Google, YouTube, ChatGPT, DeepSeek, etc., to find solutions to any error messages you might be getting. 😊

---

## Pre-school Exercise

Assuming that you installed ROOT, open your terminal (command line) and run the following commands:

```bash
wget https://github.com/theofil/I2TheTerascale/archive/refs/heads/main.zip
unzip main.zip 
cd I2TheTerascale-main/code/C/
root -l makePlot.C 
```

If the script runs successfully, you should be able to see this figure.

**Note:** Your ROOT installation must allow external connections (some environments might block this for security reasons).

### Troubleshooting Remote File Access
If you get the following error:

```
Error in <TWebFile::TWebFile>: http://theofil.web.cern.ch:80/theofil/cmsod/files/data.root? does not exist
```

It’s because ROOT requires the `netx` plugin to read remote files. Some ROOT installations might be missing the `netx` plugin. If your ROOT cannot read remote files, download the offline version of the tutorial using the following commands:

```bash
wget https://theofil.web.cern.ch/cmsod/I2TheTerascaleOffline.zip
unzip I2TheTerascaleOffline.zip
cd I2TheTerascaleOffline/I2TheTerascale/code/C
root -l makePlot.C
```

If the above steps don’t work, attempt to resolve the issue yourself. If you’re unable to find a solution, try creating a simple program by copying and pasting the code from `pre-school-exercise.C` into a local file on your computer using a text editor (e.g., nano, vim, emacs, etc.).

Then open your terminal, move to the folder where the file is located:

```bash
cd yourFolder
```

and execute:

```bash
root -l pre-school-exercise.C
```

---



## Putty/SSH 
In case you don't manage to get ROOT working in your laptop, connect via SSH to a remote server to do the tutorial. For this you will need three things:

 1. [putty](https://www.putty.org) 
 2. [xming](https://sourceforge.net/projects/xming/)
 3. [xming-fonts](https://sourceforge.net/projects/xming/files/Xming-fonts/7.7.0.10/)

Then connect to one of the naf servers, e.g., `school07@naf-school03.desy.de`, with numbering `naf-school[01-06]`. When you launch the SSH connection **make sure you enable the X11 forwarding**.
See detailed instructions [here](docs/SSH_X11_Forwarding_on_Windows_with_Putty.pdf).

## Binder
[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/theofil/I2TheTerascale/main)


## Linux/MacOSX SSH
First connect to one of the  naf-schoolXX.desy.de

`ssh -X school07@naf-school03.desy.de` 

or with `-Y` for MacOSX.

Then open a second ssh connection to 

`ssh naf-school01` 

with numbering `naf-school[01-06]`


## Tutorial's Documentation

It’s not required to read all the documentation before coming to school. However, if you’d like to read something on your way to DESY on Sunday, feel free to take a look at this:

[Main Documentation (PDF)](https://github.com/theofil/I2TheTerascale/raw/main/docs/main.pdf)

## Tutorial's Links 
* In case asked, open the poll using [this link]()
* [Zoom](https://cern.zoom.us/j/67301485054?pwd=DLFGPQQa85AmGVrabSqSuE4FpUa3P3.1)

## Projects 
Subscribe to your favorite projects [here](https://docs.google.com/document/d/1eR6FhVAyxgN899ztVJWdtplGr__nc49LxGnIi53dcog/edit?usp=sharing). 
send your slides here: konstantinos.theofilatos@cern.ch

