#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double gainp(double G,double cp)
{
	double GP=0;
	GP=(G*100)/cp;
	return GP;
}