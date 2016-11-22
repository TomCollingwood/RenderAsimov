#include <ri.h>

int main(int argc, char *argv[])
{

	float thickness=0.5;
	float length = 3; 

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
		RiPatchMesh("bicubic",7,"nonperiodic",4,"nonperiodic","P",toppages,RI_NULL); 

		RiPatch("bilinear","P",topflat,RI_NULL);
		RiPatch("bilinear","P",botflat,RI_NULL);
		RiPatch("bilinear","P",midflat,RI_NULL);

RiEnd();
return 0;
}