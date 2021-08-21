#include<stdio.h>
#include "electricalcalc.h"

float voltagedivideroperation(float Vin, float R1, float R2)
{
    if(Vin >0 && R1>0 && R2>0)
    return R2/(R1+R2)*Vin;
    else 
    return 0;
}
float voltagedivider()
{
    float Vin,R1,R2;
    printf("\n--VOLTAGE DIVIDER--\n");
    printf("Enter Vin, R1, R2 to find Vout\n");
    printf("Input Volatge (Vin) in volts: ");
    scanf("%f",&Vin);
    printf("Resistance (R1) in ohms     : ");
    scanf("%f",&R1);
    printf("Resistance (R2) in ohms     : ");
    scanf("%f",&R2);
    printf("Output Volatge (Vo)         :%0.2fV",voltagedivideroperation(Vin,R1,R2));
}