#!/bin/bash
#A script that opens all render files 

platform='unknown'
unamestr=`uname`
if [[ "$unamestr" == 'Linux' ]]; then
   platform='linux'
elif [[ "$unamestr" == 'Darwin' ]]; then
   platform='apple'
fi

if [[ $platform == 'linux' ]]; then
  cd ~/Documents/RenderAsimov/
  /opt/code/bin/code -r RIB/main.rib
  /opt/code/bin/code -r shaders/texture.osl
  /opt/code/bin/code -r shaders/randomDisk.osl
  /opt/code/bin/code -r RISpec/book.c
  /opt/code/bin/code -r RISpec/label.c
  /opt/code/bin/code -r RISpec/pages.c

elif [[ $platform == 'apple' ]]; then
  cd ~/Documents/GitHubStuff/RenderAsimov/
  open RIB/main.rib
  open shaders/texture.osl
  open shaders/randomDisk.osl
  open RISpec/book.c
  open RISpec/label.c
  open RISpec/pages.c
  open /Applications/Pixar/RenderManStudio-20.11-maya2015/bin/it.app
fi



