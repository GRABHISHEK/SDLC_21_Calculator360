#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double sploss(double LP,double cp)
{
	double spl=0;
	spl=((100-LP)/100)*cp;
	return spl;
}