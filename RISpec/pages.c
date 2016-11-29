#include <ri.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

	float thickness=atof(argv[1]);
	float length =atof(argv[2]);
	float height = atof(argv[3]);
	float ridgedep1 = atof(argv[4]);
	float ridgedep2 = atof(argv[5]);
	float pagecurve = 0.14; 


  	RtPoint toppages[40]=
{
	// TWO PATCHES
	{0,		0,		0.1},			// SO THIS is first ridge top.
	{0.05,	-ridgedep2,	0.1},
	{0.1,	-ridgedep1,	0.1},
	{0.14,	0,		0.1},   // 1st is the right/left,  2nd is the height, 3rd value is depth.

	{0.5,	0,		0.1},   // THIS IS second part of ridge 
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
	{0.7,	-thickness,	0.1},
};

  	RtPoint botpages[40]=
{
	// TWO PATCHES
	{0,		0,		length-0.1},			// SO THIS is first ridge top.
	{0.05,	-ridgedep2,	length-0.1},
	{0.1,	-ridgedep1,	length-0.1},
	{0.14,	0,		length-0.1},   // 1st is the right/left,  2nd is the height, 3rd value is depth.

	{0.5,	0,		length-0.1},   // THIS IS second part of ridge 
	{0.6,	0,		length-0.1},
	{0.7,	0,		length-0.1},


	{0,		-0.2,	length-0.1},
	{0.05,	-0.22,	length-0.1},
	{0.1,	-0.25,	length-0.1},
	{0.14,	-0.2,	length-0.1},

	{0.5,	-0.2,	length-0.1},
	{0.6,	-0.2,	length-0.1},
	{0.7,	-0.2,	length-0.1},

	{0,		-0.3,	length-0.1},
	{0.05,	-0.28,	length-0.1},
	{0.1,	-0.25,	length-0.1},
	{0.14,	-0.3,	length-0.1},

	{0.5,	-0.3,	length-0.1},
	{0.6,	-0.3,	length-0.1},
	{0.7,	-0.3,	length-0.1},

	{0,		-thickness,	length-0.1},
	{0.05,	-thickness+0.02,	length-0.1},
	{0.1,	-thickness+0.05,	length-0.1},
	{0.14,	-thickness,	length-0.1},

	{0.5,	-thickness,	length-0.1},
	{0.6,	-thickness,	length-0.1},
	{0.7,	-thickness,	length-0.1},
};

	RtPoint curvepage[16]=
	{
		{length-0.3,0,0.1},
		{length-0.2,0,0.1},
		{length-0.1,0,0.1},
		{length,0,0.1},

		{length-0.3,-thickness/3,0.1},
		{length-0.2,-thickness/3,0.1},
		{length-pagecurve,-thickness/3,0.1},
		{length-0.12,-thickness/3,0.1},

		{length-0.3,-(thickness/3)*2,0.1},
		{length-0.2,-(thickness/3)*2,0.1},
		{length-pagecurve,-(thickness/3)*2,0.1},
		{length-0.12,-(thickness/3)*2,0.1},

		{length-0.3,-(thickness/3)*3,0.1},
		{length-0.2,-(thickness/3)*3,0.1},
		{length-0.1,-(thickness/3)*3,0.1},
		{length,-(thickness/3)*3,0.1}
	};

	RtPoint midpages[16]= // 1st is the right/left,  2nd is the height, 3rd value is depth.
	{
			{length-0.1,0,0.1},
			{length-0.1,0,height/3},
			{length-0.1,0,(height/3)*2}, 
			{length-0.1,0,height-0.1},

			{length-pagecurve,-thickness/3,0.1},
			{length-pagecurve,-thickness/3,height/3},
			{length-pagecurve,-thickness/3,(height/3)*2},
			{length-pagecurve,-thickness/3,height-0.1},

			{length-pagecurve,-2*(thickness/3),0.1},
			{length-pagecurve,-2*(thickness/3),height/3},
			{length-pagecurve,-2*(thickness/3),(height/3)*2},
			{length-pagecurve,-2*(thickness/3),height-0.1},

			{length-0.1,-thickness,0.1},
			{length-0.1,-thickness,height/3},
			{length-0.1,-thickness,(height/3)*2},
			{length-0.1,-thickness,height-0.1}
	};



RtPoint topflat[4]=
{
 	{0.6,		0,			0.1}, 
 	{length-0.2,0,			0.1},
 	{0.6,		-thickness,	0.1},
 	{length-0.2,-thickness,	0.1}
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

		RtColor pagecolor = {0.84706,0.82745,0.81569};
		RiBxdf("PxrLMDiffuse","diffuseOnlyMaterial","color frontColor",pagecolor,"color backColor",pagecolor,RI_NULL);

		RiPatchMesh("bicubic",7,"nonperiodic",4,"nonperiodic","P",toppages,RI_NULL); 

		
		RiBasis(RiBezierBasis, RI_BEZIERSTEP, RiBezierBasis, RI_BEZIERSTEP);
		RiPatch("bicubic","P",curvepage,RI_NULL); 
		RiPatch("bicubic","P",midpages,RI_NULL);
		//RiPatch("bilinear","P",topflat,RI_NULL);



		
		//RiPatch("bilinear","P",botflat,RI_NULL);
		//RiPatch("bilinear","P",botflat,RI_NULL);
		//RiPatch("bilinear","P",midflat,RI_NULL);

RiEnd();
return 0;
}