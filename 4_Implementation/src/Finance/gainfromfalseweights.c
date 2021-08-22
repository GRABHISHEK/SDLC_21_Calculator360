#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double gainfw(double ev,double tv)
{
	double GP=0;
	GP=(ev/(tv-ev))*100;
	return GP;
}