#!/bin/bash
cd ~/Documents/GitHubStuff/RenderAsimov/

#C Files
cd RISpec
git add book.c pages.c label.c 
#Make files (Makefile contains book parameters)
git add Makefilebook Makefilelabel Makefilepages Makefile.sh
#Shader Files
cd ../shaders
git add doDisplace.sl randomDisk.osl randomDiskpaper.osl texture.osl doDisplace.slo
#RIB file
cd ../RIB
git add main.rib 
#Scripts
cd ..
git add scripts/*
#Textures
cd textures
git add labelTexture.tx labelTextureSquare.psd
#Readme
cd ..
git add README.md


