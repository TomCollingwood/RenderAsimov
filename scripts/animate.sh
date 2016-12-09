#!/bin/bash
cd ~/Documents/GitHubStuff/RenderAsimov/
declare rotatez=0
rotatex=0
rotatey=0

for i in {1..90}
do
    rotatez=$(python -c "print $rotatez-1")
    touch RISpec/position.c
    make rotatex=${rotatex} rotatey=${rotatey} rotatez=${rotatez} -f Makefileposition
    prman -d it RIB/main.rib
    # render RIB/main.rib
    if [ "$step" -lt 10 ]
    then
    mv pointlight.tiff book0${step}.tiff
    else
    mv pointlight.tiff book${step}.tiff
    fi
    step=$(($step + 1))
    echo "###########################  Made frame ${step} / 90  #####################"
done

ffmpeg -framerate 24 -i book%02d.tiff -c:v libx264 -r 30 -pix_fmt yuv420p out.mp4