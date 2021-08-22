#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"
double principal(double si,double ra,double ti)
{
	double PR=0;
	PR=(100*si)/(ra*ti);
	return PR;
}