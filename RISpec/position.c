/* translate.c */

#include <ri.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    float _x=atof(argv[1]);
    float _y=atof(argv[2]);
    float _z=atof(argv[3]);
    float _rotatex=atof(argv[4]);
    float _rotatey=atof(argv[5]);

    RiBegin(RI_NULL);

        RiTranslate(_x,_y,_z);
        RiRotate(_rotatex,1,0,0);
        RiRotate(_rotatey,0,1,0);
        RiScale(4,4,4);

    RiEnd();
	return 0;

}