#!/bin/bash

#parameters that all c files use
declare length=3
thickness=0.5
spinecurve=0.1
ridgedepth=0.03
height=3

# Down the rabbit hole we go...

make length=${length} thickness=${thickness} spinecurve=${spinecurve} ridgedepth=${ridgedepth} height=${height} -f Makefilepages
make length=${length} thickness=${thickness} spinecurve=${spinecurve} ridgedepth=${ridgedepth} height=${height} -f  Makefilebook
make length=${length} thickness=${thickness} spinecurve=${spinecurve} ridgedepth=${ridgedepth} height=${height} -f  Makefilelabel

#                         ((`\
#                      ___ \\ '--._
#                   .'`   `'    o  )
#                  /    \   '. __.'
#                 _|    /_  \ \_\_
#                {_\______\-'\__\_\