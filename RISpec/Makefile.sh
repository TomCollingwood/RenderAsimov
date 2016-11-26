#!/bin/bash

cd ~/Documents/GitHubStuff/RenderAsimov/RISpec

#parameters that all c files use
declare length=3
thickness=0.5
spinecurve=0.03
lipdepth=0.03
height=3
ridgedep1=0.05
ridgedep2=0.02

# Down the rabbit hole we go...
make length=${length} thickness=${thickness} spinecurve=${spinecurve} lipdepth=${lipdepth} height=${height} ridgedep1=${ridgedep1} ridgedep2=${ridgedep2} -f Makefilepages
make length=${length} thickness=${thickness} spinecurve=${spinecurve} lipdepth=${lipdepth} height=${height} ridgedep1=${ridgedep1} ridgedep2=${ridgedep2} -f  Makefilebook
#make length=${length} thickness=${thickness} spinecurve=${spinecurve} lipdepth=${lipdepth} height=${height} -f  Makefilelabel

#                         ((`\
#                      ___ \\ '--._
#                   .'`   `'    o  )
#                  /    \   '. __.'
#                 _|    /_  \ \_\_
#                {_\______\-'\__\_\