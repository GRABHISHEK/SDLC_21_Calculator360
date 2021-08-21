#ifndef __ELECTRICALCALC_H__
#define __ELECTRICALCALC_H__

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef enum error_t
{
    SUCCESS,
    NULL_ERROR,
} error_t;

typedef struct delta
{
    int ra;
    int rb;
    int rc;
} deltaval;

typedef struct star
{
    int r1;
    int r2;
    int r3;
} starval;

// Function declaration
// Declarations for OHMS LAW
// structure for ohms law variables V,I,R (Volatge, Current, resistance)
typedef struct
{
    float V, I, R;
} ohmparameter;

//Declarations for POWER FACTOR
typedef struct pfstruct
{
    float P, V, I, AP, RP, PF;
} pfstruct;
float powerfactor();

int electricalcalc();

void stardeltaconversion(starval *svinput);

void deltastarconversion(deltaval *dvinput);

int startodeltaconversion(starval *svinput, deltaval *dvoutput);

int deltatostarconversion(deltaval *dvinput, starval *svoutput);

void kwtoamps1p(float *realpower, float *powerfactor, int *rmsvoltage);

void kwtoamps3p(float *realpower, float *powerfactor, int *llrmsvoltage);

float kwtoamps1pconversion(float *realpower, float *powerfactor, int *rmsvoltage);

float kwtoamps3pconversion(float *realpower, float *powerfactor, int *llrmsvoltage);

void batteryruntime(int *batterycapacity, int *loadinwatts);

float batteryruntimecalc(int *batterycapacity, int *loadinwatts);

void batterylife(int *batterycapacity, float *consumptioninmA);

float batterylifecalc(int *batterycapacity, float *consumptioninmA);

void singlephase(float *voltage, float *current, float *powerfactor);

float sprealpower(float *voltage, float *current, float *powerfactor);

void threephase(float *voltage, float *current, float *powerfactor);

float tprealpower(float *voltage, float *current, float *powerfactor);

//Declarations for Ohm's law
float ohmslaw();
float ohmV(float I, float R);
float ohmI(float V, float R);
float ohmR(float V, float I);

// Declarations for VOLTAGE DIVIDER
float voltagedivideroperation(float Vin, float R1, float R2);
float voltagedivider();

//Declarations for EB Bill calculator
float EBbillcalc(float units);
float EBbill();

#endif