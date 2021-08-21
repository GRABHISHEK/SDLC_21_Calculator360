#include<stdio.h>
#include "electricalcalc.h"

float EBbill()
{
    printf("\n** Electricity Bill Calculator **");
    printf("\n Enter the number of Units consumed : ");
    float units;
    scanf("%f",&units);
    printf("%0.2f",EBbillcalc(units));
}
float EBbillcalc(float units)
{
    float bill;
    if(units<=50 && units>=0)
	{
		bill=units*3.50;
	}
	else if(units<=100 && units>50)
	{
		bill=50*3.50+(units-50)*4;
	}
	else if(units<=250 && units>100)
	{
		bill=50*3.50+100*4+(units-150)*5.20;
	}

	else if(units>250)
	{
		bill=50*3.50+100*4+100*5.20+(units-250)*6.50;
	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return bill;
}