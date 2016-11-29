#!/bin/bash
#A script that compiles all needed to render book

cd ~/Documents/GitHubStuff/RenderAsimov/

./RISpec/Makefile.sh

cd shaders
if test texture.osl -nt tex.oso
then
    oslc texture.osl 
    touch texture.osl
    touch tex.oso
fi
if test randomDisk.osl -nt randomDisk.oso
then
    oslc randomDisk.osl
    touch randomDisk.osl
    touch randomDisk.oso
fi

if test randomDiskpaper.osl -nt randomDiskpaper.oso
then
    oslc randomDiskpaper.osl
    touch randomDiskpaper.osl
    touch randomDiskpaper.oso
fi
cd ..

platform='unknown'
unamestr=`uname`
if [[ "$unamestr" == 'Linux' ]]; then
   platform='linux'
elif [[ "$unamestr" == 'Darwin' ]]; then
   platform='apple'
fi

if [[ $platform == 'linux' ]]; then
   render RIB/main.rib
elif [[ $platform == 'apple' ]]; then
    #open -a 'it'
    #prman -d it RIB/main.rib
    render RIB/main.rib
fi