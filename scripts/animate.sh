#!/bin/bash

cd ~/Documents/GitHubStuff/RenderAsimov/RISpec

declare x=0.0
y=0.0
z=0.0
rotatex=0.0
rotatey=0.0

for i in {1..24}
do
    cd ~/Documents/GitHubStuff/RenderAsimov/RISpec
    y=$(python -c "print $y-0.1")
    touch position.c
    make _x=${x} _y=${y} _z=${z} _rotatex=${rotatex} _rotatey=${rotatey} -f Makefileposition
    cd ~/Documents/GitHubStuff/RenderAsimov/scripts 
    ./ragain.sh
done