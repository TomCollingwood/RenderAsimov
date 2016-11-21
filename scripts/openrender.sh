#!/bin/bash
#A script that opens all render files 

cd ~/Documents/RenderAsimov/

platform='unknown'
unamestr=`uname`
if [[ "$unamestr" == 'Linux' ]]; then
   platform='linux'
elif [[ "$unamestr" == 'Darwin' ]]; then
   platform='apple'
fi

if [[ $platform == 'linux' ]]; then
  /opt/code/bin/code -r main.rib
  /opt/code/bin/code -r book.c
  /opt/code/bin/code -r texture.osl
  #xdg-open /Applications/Pixar/RenderManStudio-20.11-maya2015/bin/it.app
elif [[ $platform == 'apple' ]]; then
  open main.rib
  open book.c
  open texture.osl
  open /Applications/Pixar/RenderManStudio-20.11-maya2015/bin/it.app
fi



