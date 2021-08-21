#include<stdlib.h>
#include<stdio.h>

#ifndef __ELECTRICALCALC_H__
#define __ELECTRICALCALC_H__

// Function declaration
// Declarations for OHMS LAW
// structure for ohms law variables V,I,R (Volatge, Current, resistance)
typedef struct 
{
    float V,I,R;
}ohmparameter;

float ohmslaw();
float ohmV(float I, float R);
float ohmI(float V, float R);
float ohmR(float V, float I);

// Declarations for VOLTAGE DIVIDER
float voltagedivideroperation(float Vin, float R1, float R2);
float voltagedivider();

//Declarations for POWER FACTOR 
typedef struct pfstruct
{
    float P,V,I,AP,RP,PF;
}pfstruct;
float powerfactor();

//Declarations for EB Bill calculator
float EBbillcalc(float units);
float EBbill();

#endif