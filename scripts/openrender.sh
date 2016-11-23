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
  /opt/code/bin/code -r main.rib
  /opt/code/bin/code -r texture.osl
  /opt/code/bin/code -r book.c
  /opt/code/bin/code -r label.c
  /opt/code/bin/code -r pages.c

elif [[ $platform == 'apple' ]]; then
  cd ~/Documents/GitHubStuff/RenderAsimov/
  open main.rib
  open texture.osl
  open book.c
  open label.c
  open pages.c
  open /Applications/Pixar/RenderManStudio-20.11-maya2015/bin/it.app
fi



