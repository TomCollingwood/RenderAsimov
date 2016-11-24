/*}, min.c - a minimal C program to use RenderMan */

#include <ri.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	// PARAMETERS
	float length = atof(argv[1]);
	float thickness = atof(argv[2]);
	float spinecurve = atof(argv[3]);
	float ridgedepth =atof(argv[4]);
	float height =atof(argv[5]);

	//some checks
	if(thickness<0.4) thickness=0.4;

	RtPoint label[40]={
		{0.14, 	-thickness, 	height/3}, 
		{0.1,	-thickness+0.05,	height/3},
		{0.05,	-thickness+0.02,	height/3},

		{0,		-thickness,  	height/3},		
		{-0.1, 	-thickness+spinecurve,	height/3},	
		{-0.1, 	-spinecurve, 	height/3},	
		{0, 	0,		height/3},

		{0.05, 	-0.02, 	height/3}, 
		{0.1,	-0.05,	height/3},		
		{0.14,	0,		height/3},	

		{0.14, 	-thickness, (height/3+0.1)}, 
		{0.1,	-thickness+0.05,	(height/3+0.1)},
		{0.05,	-thickness+0.02,	(height/3+0.1)},

		{0,		-thickness,  	(height/3+0.1)},		
		{-0.1, 	-thickness+spinecurve,	(height/3+0.1)},	
		{-0.1, 	-spinecurve, 	(height/3+0.1)},	
		{0, 	0,		(height/3+0.1)},

		{0.05, 	-0.02, 	(height/3+0.1)}, 
		{0.1,	-0.05,	(height/3+0.1)},		
		{0.14,	0,		(height/3+0.1)},

		{0.14, 	-thickness, (height/3+0.2)}, 
		{0.1,	-thickness+0.05,	(height/3+0.2)},
		{0.05,	-thickness+0.02,	(height/3+0.2)},

		{0,		-thickness,  	(height/3+0.2)},		
		{-0.1, 	-thickness+spinecurve,	(height/3+0.2)},	
		{-0.1, 	-spinecurve, 	(height/3+0.2)},	
		{0, 	0,		(height/3+0.2)},

		{0.05, 	-0.02, 	(height/3+0.2)}, 
		{0.1,	-0.05,	(height/3+0.2)},		
		{0.14,	0,		(height/3+0.2)},

				{0.14, 	-thickness, (height/3+0.3)}, 
		{0.1,	-thickness+0.05,	(height/3+0.3)},
		{0.05,	-thickness+0.02,	(height/3+0.3)},

		{0,		-thickness,  	(height/3+0.3)},		
		{-0.1, 	-thickness+spinecurve,	(height/3+0.3)},	
		{-0.1, 	-spinecurve, 	(height/3+0.3)},	
		{0, 	0,		(height/3+0.3)},

		{0.05, 	-0.02, 	(height/3+0.3)}, 
		{0.1,	-0.05,	(height/3+0.3)},		
		{0.14,	0,		(height/3+0.3)}
	};

	RiBegin(RI_NULL);		
		RiPatchMesh("bicubic",10,"nonperiodic",4,"nonperiodic","P",label,RI_NULL);
	RiEnd();
	return 0;
}
