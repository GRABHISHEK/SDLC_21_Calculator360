#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double lossp(double L,double cp)
{
	double LP=0;
	LP=(L*100)/cp;
	return LP;
}