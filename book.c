/*}, min.c - a minimal C program to use RenderMan */

#include <ri.h>

int main(int argc, char *argv[])
{
	// PARAMETERS
	float length = 3;
	float thickness = 0.5;
	float spinecurve = 0.1;
	float ridgedepth = 0.03;
	float height =3.;

	//some checks
	if(thickness<0.4) thickness=0.4;

	RtPoint cover[136]={
	//------------Z0--------------
		//----FOLD-----
		{length-0.3,	-thickness+0.03,		0},
		{length-0.2,	-thickness+0.03,		0},
		{length-0.1,	-thickness+0.03,		0},

		//----SMLRIDGE---
		{length,		-thickness+0.03,		0},
		{length+0.02,	-thickness+0.02,		0},
		{length+0.01,	-thickness+0.01,		0},

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
		{0.1,	-thickness+0.05,	0},
		{0.05,	-thickness+0.02,	0},

		//----SPINE---------
		{0,		-thickness,  	0},		
		{-0.1, 	-thickness+spinecurve,	0},	
		{-0.1, 	-spinecurve, 	0},	
		{0, 	0,		0},	
		
		//----RIDGE------
		{0.05, 	-0.02, 	0}, 
		{0.1,	-0.05,	0},		
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
		{length+0.01,	-ridgedepth/3.,	0}, 
		{length+0.02,	-(ridgedepth/3.)*2,	0}, 
		{length,		-ridgedepth,	0}, 
		//----FOLD-----
		{length-0.1,	-ridgedepth,	0},
		{length-0.2,	-ridgedepth,	0},
		{length-0.3,	-ridgedepth,	0},
	
	//------------Z1--------------
		//----FOLD-----
		{length-0.3,	-thickness+0.03,	height/3.},
		{length-0.2,	-thickness+0.03,	height/3.},
		{length-0.1,	-thickness+0.03,	height/3.},

		//----SMLRIDGE---
		{length,		-thickness+0.03,	height/3.},
		{length+0.02,	-thickness+0.02,	height/3.},
		{length+0.01,	-thickness+0.01,	height/3.},

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
		{0.1,	-thickness+0.05,	height/3.},
		{0.05,	-thickness+0.02,	height/3.},

		//----SPINE---------
		{0,		-thickness,  	height/3.},		
		{-0.1, 	-thickness+spinecurve,	height/3.},	
		{-0.1, 	-spinecurve, 	height/3.},	
		{0, 	0,		height/3.},	
		
		//----RIDGE------
		{0.05, 	-0.02, 	height/3.}, 
		{0.1,	-0.05,	height/3.},		
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
		{length+0.01,	-ridgedepth/3.,	height/3.}, 
		{length+0.02,	-(ridgedepth/3.)*2,	height/3.}, 
		{length,		-ridgedepth,	height/3.}, 
		//----FOLD-----
		{length-0.1,	-ridgedepth,	height/3.},
		{length-0.2,	-ridgedepth,	height/3.},
		{length-0.3,	-ridgedepth,	height/3.},

	//------------Z2--------------
		//----FOLD-----
		{length-0.3,	-thickness+0.03,	2*(height/3.)},
		{length-0.2,	-thickness+0.03,	2*(height/3.)},
		{length-0.1,	-thickness+0.03,	2*(height/3.)},

		//----SMLRIDGE---
		{length,		-thickness+0.03,	2*(height/3.)},
		{length+0.02,	-thickness+0.02,	2*(height/3.)},
		{length+0.01,	-thickness+0.01,	2*(height/3.)},

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
		{0.1,	-thickness+0.05,	2*(height/3.)},
		{0.05,	-thickness+0.02,	2*(height/3.)},

		//----SPINE---------
		{0,		-thickness,  	2*(height/3.)},		
		{-0.1, 	-thickness+spinecurve,	2*(height/3.)},	
		{-0.1, 	-spinecurve, 	2*(height/3.)},	
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
		{length+0.01,	-ridgedepth/3.,	2*(height/3.)}, 
		{length+0.02,	-(ridgedepth/3.)*2,	2*(height/3.)}, 
		{length,		-ridgedepth,	2*(height/3.)}, 
		//----FOLD-----
		{length-0.1,	-ridgedepth,	2*(height/3.)},
		{length-0.2,	-ridgedepth,	2*(height/3.)},
		{length-0.3,	-ridgedepth,	2*(height/3.)},

	//------------Z3--------------
			//----FOLD-----
		{length-0.3,	-thickness+0.03,	3*(height/3.)},
		{length-0.2,	-thickness+0.03,	3*(height/3.)},
		{length-0.1,	-thickness+0.03,	3*(height/3.)},

		//----SMLRIDGE---
		{length,		-thickness+0.03,	3*(height/3.)},
		{length+0.02,	-thickness+0.02,	3*(height/3.)},
		{length+0.01,	-thickness+0.01,	3*(height/3.)},

		//----COVER2-----
		{length,		-thickness,		3*(height/3.)},
		{length-0.1,	-thickness,		3*(height/3.)},
		{length-0.2,	-thickness,		3*(height/3.)}, 

		//----COVER1-----
		{0.7,	-thickness,	3*(height/3.)},
		{0.6,	-thickness,	3*(height/3.)},
		{0.5,	-thickness,	3*(height/3.)},

		//----RIDGE------
		{0.14, 	-thickness, 	3*(height/3.)}, 
		{0.1,	-thickness+0.05,	3*(height/3.)},
		{0.05,	-thickness+0.02,	3*(height/3.)},

		//----SPINE---------
		{0,		-thickness,  	3*(height/3.)},		
		{-0.1, 	-thickness+spinecurve,	3*(height/3.)},	
		{-0.1, 	-spinecurve, 	3*(height/3.)},	
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
		{length+0.01,	-ridgedepth/3.,	3*(height/3.)}, 
		{length+0.02,	-(ridgedepth/3.)*2,	3*(height/3.)}, 
		{length,		-ridgedepth,	3*(height/3.)}, 
		//----FOLD-----
		{length-0.1,	-ridgedepth,	3*(height/3.)},
		{length-0.2,	-ridgedepth,	3*(height/3.)},
		{length-0.3,	-ridgedepth,	3*(height/3.)},	};



	RtPoint toppages[28]=
{
	{0,		0,		0.1},
	{0.05,	-0.02,	0.1},
	{0.1,	-0.05,	0.1},
	{0.14,	0,		0.1},

	{0.5,	0,		0.1},
	{0.6,	0,		0.1},
	{0.7,	0,		0.1},

	{0,		-0.2,	0.1},
	{0.05,	-0.22,	0.1},
	{0.1,	-0.25,	0.1},
	{0.14,	-0.2,	0.1},

	{0.5,	-0.2,	0.1},
	{0.6,	-0.2,	0.1},
	{0.7,	-0.2,	0.1},
	
	{0,		-0.3,	0.1},
	{0.05,	-0.28,	0.1},
	{0.1,	-0.25,	0.1},
	{0.14,	-0.3,	0.1},

	{0.5,	-0.3,	0.1},
	{0.6,	-0.3,	0.1},
	{0.7,	-0.3,	0.1},

	{0,		-thickness,	0.1},
	{0.05,	-thickness+0.02,	0.1},
	{0.1,	-thickness+0.05,	0.1},
	{0.14,	-thickness,	0.1},

	{0.5,	-thickness,	0.1},
	{0.6,	-thickness,	0.1},
	{0.7,	-thickness,	0.1}
};

RtPoint topflat[4]=
{
 	{0.6,		0,			0.1},
 	{length-0.1,0,			0.1},
 	{0.6,		-thickness,	0.1},
 	{length-0.1,-thickness,	0.1}
};


RtPoint botflat[4]=
{
	{0.14,		0,		2.9},
	{length-0.1,0,		2.9},
	{0.14,		-thickness,	2.9},
	{length-0.1,-thickness,	2.9}
};


RtPoint midflat[4]=
{
	{length-0.1,	0,			0.1},
	{length-0.1,	0,			2.9},
	{length-0.1,	-thickness, 0.1},
	{length-0.1,	-thickness, 2.9}
};
	
	RiBegin(RI_NULL);		
		RiPatchMesh("bicubic",34,"nonperiodic",4,"nonperiodic","P",cover,RI_NULL);
		RtColor pagecolor = {0.84706,0.82745,0.81569};

		RiBxdf("PxrLMDiffuse","diffuseOnlyMaterial","color frontColor",pagecolor,"color backColor",pagecolor,RI_NULL);

		RiPatchMesh("bicubic",7,"nonperiodic",4,"nonperiodic","P",toppages,RI_NULL); 

		RiPatch("bilinear","P",topflat,RI_NULL);
		RiPatch("bilinear","P",botflat,RI_NULL);
		RiPatch("bilinear","P",midflat,RI_NULL);
		
	RiEnd();
	return 0;
}
