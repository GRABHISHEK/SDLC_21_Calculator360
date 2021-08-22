#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double simpleinterest(double pr,double ra,double ti)
{
	double SI=0;
	SI=(pr*ra*ti)/100;
	return SI;
}