#!/bin/bash
#A script that compiles all needed to render book

cd ~/Documents/RenderAsimov/

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
prman -d it main.rib
