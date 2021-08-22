#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double loss(double sp,double cp)
{
	double L=0;
	L=cp-sp;
	return L;
}