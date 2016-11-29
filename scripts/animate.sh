#!/bin/bash

cd ~/Documents/GitHubStuff/RenderAsimov/RISpec

declare x=0.0
y=0.0
z=0.0
rotatex=0.0
rotatey=0.0
step=0
maxframe=24

for i in {1..90}
do
    cd ~/Documents/GitHubStuff/RenderAsimov/RISpec
    y=$(python -c "print $y-0.1")
    rotatex=$(python -c "print $rotatex-0.3")
    touch position.c
    make _x=${x} _y=${y} _z=${z} _rotatex=${rotatex} _rotatey=${rotatey} -f Makefileposition
    cd ~/Documents/GitHubStuff/RenderAsimov/scripts 
    ./ragain.sh
    cd ~/Documents/GitHubStuff/RenderAsimov
    if [ "$step" -lt 10 ]
    then
    mv pointlight.tiff book0${step}.tiff
    else
    mv pointlight.tiff book${step}.tiff
    fi
    step=$(($step + 1))
    echo "###########################  Made frame ${step} / 24  #####################"
done

ffmpeg -framerate 24 -i book%02d.tiff -c:v libx264 -r 30 -pix_fmt yuv420p out.mp4