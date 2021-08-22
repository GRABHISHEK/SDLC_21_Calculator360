#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"
double rate(double si,double pr,double ti)
{
	double RA=0;
	RA=(100*si)/(pr*ti);
	return RA;
}