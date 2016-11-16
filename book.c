/* min.c - a minimal C program to use RenderMan */

#include <ri.h>

int main(int argc, char *argv[])
{
	RtPoint square[4]={{10,-2.1,10},{-10,-2.1,10},{10,-2.1,-10},{-10,-2.1,-10}};
	RiBegin(RI_NULL);		
		RiPatch("bilinear","P",square,RI_NULL);
	RiEnd();
	return 0;
}
