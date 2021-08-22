#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double cpgain(double GP,double sp)
{
	double cp=0;
	cp=(100/(100+GP))*sp;
	return cp;
}