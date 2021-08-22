#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double cploss(double LP,double sp)
{
	double cp=0;
	cp=(100/(100-LP))*sp;
	return cp;
}