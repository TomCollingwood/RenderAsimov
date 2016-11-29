/* translate.c */

#include <ri.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    float length=atof(argv[1]);
    float thickness=atof(argv[2]); 
    float height=atof(argv[3]);
    float _rotatex=atof(argv[4]);
    float _rotatey=atof(argv[5]); 
    float _rotatez=atof(argv[6]);  

    RiBegin(RI_NULL);
        RiTranslate(length/2.,-thickness/2.,height/2.);
        RiRotate(_rotatex,1,0,0);
        RiRotate(_rotatey,0,1,0);
        RiRotate(_rotatez,0,0,1); 
        RiTranslate(-length/2.,thickness/2.,-height/2.);
    RiEnd();
	return 0;

}