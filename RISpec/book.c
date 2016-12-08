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
	float lipdepth =atof(argv[4]);
	float height =atof(argv[5]); 
	float ridgedep1=atof(argv[6]);
	float ridgedep2=atof(argv[7]);
	float spinedepth=atof(argv[8]);


	//some checks
	if(thickness<0.4) thickness=0.4;

	float r_0=lipdepth;
		float r_1=0.05;

	RtPoint cover[136]={
	//------------Z0--------------

		//----FOLD-----
		{length-0.3,	-thickness+r_0,		0},
		{length-0.2,	-thickness+r_0,		0},
		{length-0.1,	-thickness+r_0,		0},

		//----SMLRIDGE---
		{length,		-thickness+r_0,		0},
		{length+r_1,	-thickness+r_0,		0},
		{length+r_1,	-thickness,		0},

		//----COVER2-----
		{length,		-thickness,		0},
		{length-0.1,	-thickness,		0},
		{length-0.2,	-thickness,		0}, 

		//----COVER1-----
		{0.7,	-thickness,	0},
		{0.6,	-thickness,	0},
		{0.5,	-thickness,	0},

		//----RIDGE------
		{0.14, 	-thickness, 	0}, 
		{0.1,	-thickness+ridgedep1,	0},
		{0.05,	-thickness+ridgedep2,	0},

		//----SPINE---------
		{0,		-thickness,  	0},		
		{-spinedepth, 	-thickness+spinecurve,	0},	
		{-spinedepth, 	-spinecurve, 	0},	
		{0, 	0,		0},	
		
		//----RIDGE------
		{0.05, 	-ridgedep2, 	0}, 
		{0.1,	-ridgedep1,	0},		
		{0.14,	0,		0},
		//----COVER1-----
		{0.5,		0,		0},
		{0.6,		0,		0},
		{0.7,		0,		0},
		//----COVER2-----
		{length-0.2,	0,		0},
		{length-0.1,	0,		0},
		{length,		0,		0}, 
		//----SMLRIDGE---
		{length+0.01,	-lipdepth/3.,	0}, 
		{length+0.02,	-(lipdepth/3.)*2,	0}, 
		{length,		-lipdepth,	0}, 
		//----FOLD-----
		{length-0.1,	-lipdepth,	0},
		{length-0.2,	-lipdepth,	0},
		{length-0.3,	-lipdepth,	0},
	
	//------------Z1--------------
		//----FOLD-----
		{length-0.3,	-thickness+r_0,		height/3.},
		{length-0.2,	-thickness+r_0,		height/3.},
		{length-0.1,	-thickness+r_0,		height/3.},

		//----SMLRIDGE---
		{length,		-thickness+r_0,		height/3.},
		{length+r_1,	-thickness+r_0,		height/3.},
		{length+r_1,	-thickness,		height/3.},

		//----COVER2-----
		{length,		-thickness,		height/3.},
		{length-0.1,	-thickness,		height/3.},
		{length-0.2,	-thickness,		height/3.}, 

		//----COVER1-----
		{0.7,	-thickness,	height/3.},
		{0.6,	-thickness,	height/3.},
		{0.5,	-thickness,	height/3.},

		//----RIDGE------
		{0.14, 	-thickness, 	height/3.}, 
		{0.1,	-thickness+ridgedep1,	height/3.},
		{0.05,	-thickness+ridgedep2,	height/3.},

		//----SPINE---------
		{0,		-thickness,  	height/3.},		
		{-spinedepth, 	-thickness+spinecurve,	height/3.},	
		{-spinedepth, 	-spinecurve, 	height/3.},	
		{0, 	0,		height/3.},	
		
		//----RIDGE------
		{0.05, 	-ridgedep2, 	height/3.}, 
		{0.1,	-ridgedep1,	height/3.},		
		{0.14,	0,		height/3.},
		//----COVER1-----
		{0.5,		0,		height/3.},
		{0.6,		0,		height/3.},
		{0.7,		0,		height/3.},
		//----COVER2-----
		{length-0.2,	0,		height/3.},
		{length-0.1,	0,		height/3.},
		{length,		0,		height/3.}, 
		//----SMLRIDGE---
		{length+0.01,	-lipdepth/3.,	height/3.}, 
		{length+0.02,	-(lipdepth/3.)*2,	height/3.}, 
		{length,		-lipdepth,	height/3.}, 
		//----FOLD-----
		{length-0.1,	-lipdepth,	height/3.},
		{length-0.2,	-lipdepth,	height/3.},
		{length-0.3,	-lipdepth,	height/3.},

	//------------Z2--------------
		//----FOLD-----
		{length-0.3,	-thickness+r_0,		2*(height/3.)},
		{length-0.2,	-thickness+r_0,		2*(height/3.)},
		{length-0.1,	-thickness+r_0,		2*(height/3.)},

		//----SMLRIDGE---
		{length,		-thickness+r_0,		2*(height/3.)},
		{length+r_1,	-thickness+r_0,		2*(height/3.)},
		{length+r_1,	-thickness,		2*(height/3.)},

		//----COVER2-----
		{length,		-thickness,		2*(height/3.)},
		{length-0.1,	-thickness,		2*(height/3.)},
		{length-0.2,	-thickness,		2*(height/3.)}, 

		//----COVER1-----
		{0.7,	-thickness,	2*(height/3.)},
		{0.6,	-thickness,	2*(height/3.)},
		{0.5,	-thickness,	2*(height/3.)},

		//----RIDGE------
		{0.14, 	-thickness, 	2*(height/3.)}, 
		{0.1,	-thickness+ridgedep1,	2*(height/3.)},
		{0.05,	-thickness+ridgedep2,	2*(height/3.)},

		//----SPINE---------
		{0,		-thickness,  	2*(height/3.)},		
		{-spinedepth, 	-thickness+spinecurve,	2*(height/3.)},	
		{-spinedepth, 	-spinecurve, 	2*(height/3.)},	
		{0, 	0,		2*(height/3.)},	
		
		//----RIDGE------
		{0.05, 	-0.02, 	2*(height/3.)}, 
		{0.1,	-0.05,	2*(height/3.)},		
		{0.14,	0,		2*(height/3.)},
		//----COVER1-----
		{0.5,		0,		2*(height/3.)},
		{0.6,		0,		2*(height/3.)},
		{0.7,		0,		2*(height/3.)},
		//----COVER2-----
		{length-0.2,	0,		2*(height/3.)},
		{length-0.1,	0,		2*(height/3.)},
		{length,		0,		2*(height/3.)}, 
		//----SMLRIDGE---
		{length+0.01,	-lipdepth/3.,	2*(height/3.)}, 
		{length+0.02,	-(lipdepth/3.)*2,	2*(height/3.)}, 
		{length,		-lipdepth,	2*(height/3.)}, 
		//----FOLD-----
		{length-0.1,	-lipdepth,	2*(height/3.)},
		{length-0.2,	-lipdepth,	2*(height/3.)},
		{length-0.3,	-lipdepth,	2*(height/3.)},

	//------------Z3--------------
		//----FOLD-----
		{length-0.3,	-thickness+r_0,		height},
		{length-0.2,	-thickness+r_0,		height},
		{length-0.1,	-thickness+r_0,		height},

		//----SMLRIDGE---
		{length,		-thickness+r_0,		height},
		{length+r_1,	-thickness+r_0,		height},
		{length+r_1,	-thickness,		height},

		//----COVER2-----
		{length,		-thickness,		height},
		{length-0.1,	-thickness,		height},
		{length-0.2,	-thickness,		height}, 

		//----COVER1-----
		{0.7,	-thickness,	3*(height/3.)},
		{0.6,	-thickness,	3*(height/3.)},
		{0.5,	-thickness,	3*(height/3.)},

		//----RIDGE------
		{0.14, 	-thickness, 	3*(height/3.)}, 
		{0.1,	-thickness+ridgedep1,	3*(height/3.)},
		{0.05,	-thickness+ridgedep2,	3*(height/3.)},

		//----SPINE---------
		{0,		-thickness,  	3*(height/3.)},		
		{-spinedepth, 	-thickness+spinecurve,	3*(height/3.)},	
		{-spinedepth, 	-spinecurve, 	3*(height/3.)},	
		{0, 	0,		3*(height/3.)},	
		
		//----RIDGE------
		{0.05, 	-0.02, 	3*(height/3.)}, 
		{0.1,	-0.05,	3*(height/3.)},		
		{0.14,	0,		3*(height/3.)},
		//----COVER1-----
		{0.5,		0,		3*(height/3.)},
		{0.6,		0,		3*(height/3.)},
		{0.7,		0,		3*(height/3.)},
		//----COVER2-----
		{length-0.2,	0,		3*(height/3.)},
		{length-0.1,	0,		3*(height/3.)},
		{length,		0,		3*(height/3.)},  
		//----SMLRIDGE--- 
		{length+0.01,	-lipdepth/3.,	3*(height/3.)}, 
		{length+0.02,	-(lipdepth/3.)*2,	3*(height/3.)}, 
		{length,		-lipdepth,	3*(height/3.)}, 
		//----FOLD-----
		{length-0.1,	-lipdepth,	3*(height/3.)},
		{length-0.2,	-lipdepth,	3*(height/3.)},
		{length-0.3,	-lipdepth,	3*(height/3.)},	};

		float r_3 = r_1/3;
		
	RtPoint toplip[112]={
		//-------------Z0-----------------------
		{length+r_1,		-thickness,		0},
		{length+r_3/3,		-thickness,		0},
		{length+r_3/3,		-thickness,		0},
		//----COVER2-----
		{length+r_3/3,		-thickness,		0},
		{length-0.1,	-thickness,		0},
		{length-0.2,	-thickness,		0}, 

		//----COVER1-----
		{0.7,	-thickness,	0},
		{0.6,	-thickness,	0},
		{0.5,	-thickness,	0},

		//----RIDGE------
		{0.14, 	-thickness, 	0}, 
		{0.1,	-thickness+ridgedep1,	0},
		{0.05,	-thickness+ridgedep2,	0},

		//----SPINE---------
		{0,		-thickness,  	0},		
		{-spinedepth, 	-thickness+spinecurve,	0},	
		{-spinedepth, 	-spinecurve, 	0},	
		{0, 	0,		0},	
		//----RIDGE------
		{0.05, 	-0.02, 	0}, 
		{0.1,	-0.05,	0},		
		{0.14,	0,		0},
		//----COVER1-----
		{0.5,		0,		0},  // 
		{0.6,		0,		0},
		{0.7,		0,		0},
		//----COVER2-----
		{length-0.2,	0,		0},
		{length-0.1,	0,		0},
		{length+r_3/3,		0,		0}, 

		{length+r_3/3,		0,		0}, 
		{length+r_3/3,		0,		0}, 
		{length+r_1,		0,		0}, 

		//-------------Z1-----------------------
		{length+r_3,		-thickness,		0},
		{length+r_3,		-thickness,		0},
		{length+r_3,		-thickness,		-r_1},
		//----COVER2-----
		{length+r_3,		-thickness,		-r_1},
		{length-0.1,	-thickness,		-r_1},
		{length-0.2,	-thickness,		-r_1}, 

		//----COVER1-----
		{0.7,	-thickness,	-r_1},
		{0.6,	-thickness,	-r_1},
		{0.5,	-thickness,	-r_1},

		//----RIDGE------
		{0.14, 	-thickness, 	-r_1}, 
		{0.1,	-thickness+ridgedep1,	-r_1},
		{0.05,	-thickness+ridgedep2,	-r_1},

		//----SPINE---------
		{0,		-thickness,  	-r_1},		
		{-spinedepth, 	-thickness+spinecurve,	-r_1},	
		{-spinedepth, 	-spinecurve, 	-r_1},	
		{0, 	0,		-r_1},	
		//----RIDGE------
		{0.05, 	-0.02, 	-r_1}, 
		{0.1,	-0.05,	-r_1},		
		{0.14,	0,		-r_1},
		//----COVER1-----
		{0.5,		0,		-r_1},
		{0.6,		0,		-r_1},
		{0.7,		0,		-r_1},
		//----COVER2-----
		{length-0.2,	0,		-r_1},
		{length-0.1,	0,		-r_1},
		{length+r_3,		0,		-r_1}, 

		{length+r_3,		0,		-r_1}, 
		{length+r_3,		0,		0}, 
		{length+r_3,		0,		0}, 

		//-------------Z2-----------------------
		{length+r_3,		-thickness+r_0,		0},
		{length+r_3,		-thickness+r_0,		0},
		{length+r_3,		-thickness+r_0,		-r_1},
		//----COVER2-----
		{length+r_3,		-thickness+r_0,		-r_1},
		{length-0.1,	-thickness+r_0,		-r_1},
		{length-0.2,	-thickness+r_0,		-r_1}, 

		//----COVER1-----
		{0.7,	-thickness+r_0,	-r_1},
		{0.6,	-thickness+r_0,	-r_1},
		{0.5,	-thickness+r_0,	-r_1},

		//----RIDGE------
		{0.14, 	-thickness+r_0, 	-r_1}, 
		{0.1,	-thickness+r_0+0.05,	-r_1},
		{0.05,	-thickness+r_0+0.02,	-r_1},

		//----SPINE---------
		{0,		-thickness+r_0,  	-r_1},		
		{-spinedepth+r_0, 	-thickness+spinecurve,	-r_1},	
		{-spinedepth+r_0, 	-spinecurve, 	-r_1},	
		{0, 	-r_0,		-r_1},	
		//----RIDGE------
		{0.05, 	-0.02-r_0, 	-r_1}, 
		{0.1,	-0.05-r_0,	-r_1},		
		{0.14,	0-r_0,		-r_1},
		//----COVER1-----
		{0.5,		0-r_0,	-r_1},
		{0.6,		0-r_0,	-r_1},
		{0.7,		0-r_0,	-r_1},
		//----COVER2-----
		{length-0.2,	0-r_0,	-r_1},
		{length-0.1,	0-r_0,	-r_1},
		{length+r_3,		0-r_0,	-r_1},

		{length+r_3,		0-r_0,	-r_1}, 
		{length+r_3,		0-r_0,	0}, 
		{length+r_3,		0-r_0,	0},  

		//-------------Z3-----------------------
		{length+r_1,		-thickness+r_0,		0.05},
		{length+r_3/3,		-thickness+r_0,		0.05},
		{length+r_3/3,		-thickness+r_0,		0.05},
		//----COVER2-----
		{length+r_3/3,		-thickness+r_0,		0.05},
		{length-0.1,	-thickness+r_0,		0.05},
		{length-0.2,	-thickness+r_0,		0.05}, 

		//----COVER1-----
		{0.7,	-thickness+r_0,	0.05},
		{0.6,	-thickness+r_0,	0.05},
		{0.5,	-thickness+r_0,	0.05},

		//----RIDGE------
		{0.14, 	-thickness+r_0, 	0.05}, 
		{0.1,	-thickness+r_0+0.05,	0.05},
		{0.05,	-thickness+r_0+0.02,	0.05},

		//----SPINE---------
		{0,		-thickness+r_0,  	0.05},		
		{-spinedepth+r_0, 	-thickness+spinecurve,	0.05},	
		{-spinedepth+r_0, 	-spinecurve, 	0.05},	
		{0, 	-r_0,		0.05},	
		//----RIDGE------
		{0.05, 	-0.02-r_0, 	0.05}, 
		{0.1,	-0.05-r_0,	0.05},		
		{0.14,	0-r_0,		0.05},
		//----COVER1-----
		{0.5,		0-r_0,		0.05},
		{0.6,		0-r_0,		0.05},
		{0.7,		0-r_0,		0.05},
		//----COVER2-----
		{length-0.2,	0-r_0,		0.05},
		{length-0.1,	0-r_0,		0.05},
		{length+r_3/3,	0-r_0,		0.05},

		{length+r_3/3,	0-r_0,		0.05},
		{length+r_3/3,	0-r_0,		0.05},
		{length+r_1,	0-r_0,		0.05}
	};

	RiBegin(RI_NULL);		
		RiPatchMesh("bicubic",34,"nonperiodic",4,"nonperiodic","P",cover,RI_NULL);	
		RiPatchMesh("bicubic",28,"nonperiodic",4,"nonperiodic","P",toplip,RI_NULL);	
	RiEnd();
	return 0;
}
