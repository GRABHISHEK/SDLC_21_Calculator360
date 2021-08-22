#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"
double time(double si,double pr,double ra)
{
	double TI=0;
	TI=(100*si)/(pr*ra);
	return TI;
}