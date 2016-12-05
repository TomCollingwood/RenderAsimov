#!/bin/bash
cd ~/Documents/GitHubStuff/RenderAsimov/

git add Makefile README.md
#C Files
git add RISpec/book.c RISpec/pages.c RISpec/label.c RISpec/position.c
#Shader Files
git add shaders/doDisplace.sl shaders/randomDisk.osl shaders/randomDiskpaper.osl shaders/texture.osl shaders/doDisplace.slo
#RIB file
git add RIB/main.rib 
#Scripts
git add scripts/*
#Textures
git add textures/labelTexture.tx textures/labelTextureSquare.psd textures/publisherTexture.tx textures/publisherTextureSquare.psd


