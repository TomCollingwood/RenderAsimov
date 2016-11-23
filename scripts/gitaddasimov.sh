#!/bin/bash
cd ~/Documents/GitHubStuff/RenderAsimov/

#C Files
git add book.c pages.c label.c 
#Shader Files
git add doDisplace.sl randomDisk.osl randomDiskpaper.osl texture.osl
#RIB file
git add main.rib 
#Make files (Makefile contains book parameters)
git add Makefilebook Makefilelabel Makefilepages Makefile.sh
#Scripts
git add scripts/*
#Readme
git add README.md


