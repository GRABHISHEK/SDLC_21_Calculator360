#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double spgain(double GP,double cp)
{
	double spg=0;
	spg=((100+GP)/100)*cp;
	return spg;
}