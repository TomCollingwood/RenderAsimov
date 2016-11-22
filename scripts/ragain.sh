#!/bin/bash
#A script that compiles all needed to render book

cd ~/Documents/GitHubStuff/RenderAsimov/

if test texture.osl -nt tex.oso
then
    oslc texture.osl
    touch texture.osl
    touch text
fi
if test book.c -nt book.rib
then
    make
    touch book.c
    touch book.rib
fi

platform='unknown'
unamestr=`uname`
if [[ "$unamestr" == 'Linux' ]]; then
   platform='linux'
elif [[ "$unamestr" == 'Darwin' ]]; then
   platform='apple'
fi

if [[ $platform == 'linux' ]]; then
   render main.rib
elif [[ $platform == 'apple' ]]; then
   prman -d it main.rib
fi



