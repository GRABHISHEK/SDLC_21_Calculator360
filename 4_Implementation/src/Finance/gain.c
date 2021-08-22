#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double gain(double sp,double cp)
{
	double G=0;
	G=sp-cp;
	return G;	
}