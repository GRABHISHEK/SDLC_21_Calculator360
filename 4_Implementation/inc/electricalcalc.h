/**
 * @file electricalcalc.h
 * @author Athul Thomas and Barathvignesh JK
 * @brief 
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ELECTRICALCALC_H__
#define __ELECTRICALCALC_H__

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * @brief Defining PI as 3.14
 * 
 */
#define PI 3.14

/**
 * @brief Error enum variables for unit testing
 * 
 */
typedef enum errort
{
    NULL_ERROR,
} errort;

/**
 * @brief Resistance variables for delta configuration
 * 
 */
typedef struct delta
{
    int ra;
    int rb;
    int rc;
} deltaval;

/**
 * @brief Resistance variables for star configuration
 * 
 */
typedef struct star
{
    int r1;
    int r2;
    int r3;
} starval;

/**
 * @brief Parameters for Ohms Law
 * 
 */

typedef struct
{
    float V, I, R;
} ohmparameter;

/**
 * @brief Inputing parameters for Ohmslaw 
 * 
 * @return float 
 */
float ohmslaw();

/**
 * @brief Inputing the I and R to find V
 * 
 * @param I 
 * @param R 
 */
float ohmV(float I, float R);

/**
 * @brief Inputing the V and R to find I
 * 
 * @param V 
 * @param R 
 */
float ohmI(float V, float R);

/**
 * @brief Inputing the V and I to find R
 * 
 * @param V 
 * @param I 
 */
float ohmR(float V, float I);

/**
 * @brief Inputing the variable to find Power factor
 * @param P
 * @param V
 * @param I
 * @param AP
 * @param RP
 * @param PF
 */
typedef struct pfstruct
{
    float P, V, I, AP, RP, PF;
} pfstruct;

/**
 * @brief Findinf Power Factor
 * 
 * @return float 
 */
float powerfactor();

/**
 * @brief Electrical Calculator Page
 * 
 * @return int 
 */
int electricalcalc();

/**
 * @brief Inputing the star configuration data
 * 
 * @param svinput 
 */
void stardeltaconversion(starval *svinput);

/**
 * @brief Inputing the delta configuration data
 * 
 * @param dvinput 
 */
void deltastarconversion(deltaval *dvinput);

/**
 * @brief Converting from star configuration to delta configuration in electric system
 * 
 * @param svinput 
 * @param dvoutput 
 * @return int 
 */
int startodeltaconversion(starval *svinput, deltaval *dvoutput);

/**
 * @brief Converting from delta configuration to star configuration in electric system
 * 
 * @param dvinput 
 * @param svoutput 
 * @return int 
 */
int deltatostarconversion(deltaval *dvinput, starval *svoutput);

/**
 * @brief Inputing the KW data for single phase
 * 
 * @param realpower 
 * @param powerfactor 
 * @param rmsvoltage 
 */
void kwtoamps1p(float *realpower, float *powerfactor, int *rmsvoltage);

/**
 * @brief Inputing the KW data for three phase
 * 
 * @param realpower 
 * @param powerfactor 
 * @param llrmsvoltage 
 */
void kwtoamps3p(float *realpower, float *powerfactor, int *llrmsvoltage);

/**
 * @brief Converting KW to amperes in single phase
 * 
 * @param realpower 
 * @param powerfactor 
 * @param rmsvoltage 
 * @return float 
 */
float kwtoamps1pconversion(float *realpower, float *powerfactor, int *rmsvoltage);

/**
 * @brief  Converting KW to amperes in three phase
 * 
 * @param realpower 
 * @param powerfactor 
 * @param llrmsvoltage 
 * @return float 
 */
float kwtoamps3pconversion(float *realpower, float *powerfactor, int *llrmsvoltage);

/**
 * @brief Inputing battery capacity and load of the appliance in watts
 * 
 * @param batterycapacity 
 * @param loadinwatts 
 */
void batteryruntime(int *batterycapacity, int *loadinwatts);

/**
 * @brief Finding the battery run time per full charge
 * 
 * @param batterycapacity 
 * @param loadinwatts 
 * @return float 
 */
float batteryruntimecalc(int *batterycapacity, int *loadinwatts);

/**
 * @brief Inputing battery capacity and consuption in milliamperes
 * 
 * @param batterycapacity 
 * @param consumptioninmA 
 */
void batterylife(int *batterycapacity, float *consumptioninmA);

/**
 * @brief Finding the battery life time with consumption
 * 
 * @param batterycapacity 
 * @param consumptioninmA 
 * @return float 
 */
float batterylifecalc(int *batterycapacity, float *consumptioninmA);

/**
 * @brief Inputing data for single phase real power calculation
 * 
 * @param voltage 
 * @param current 
 * @param powerfactor 
 */
void singlephase(float *voltage, float *current, float *powerfactor);

/**
 * @brief Finding the single phase real/true power
 * 
 * @param voltage 
 * @param current 
 * @param powerfactor 
 * @return float 
 */
float sprealpower(float *voltage, float *current, float *powerfactor);

/**
 * @brief Inputing data for three phase real power calculation
 * 
 * @param voltage 
 * @param current 
 * @param powerfactor 
 */
void threephase(float *voltage, float *current, float *powerfactor);

/**
 * @brief Finding the three phase real/true power
 * 
 * @param voltage 
 * @param current 
 * @param powerfactor 
 * @return float 
 */
float tprealpower(float *voltage, float *current, float *powerfactor);


/**
 * @brief Finding Output voltage for Voltage divider
 * 
 * @param Vin 
 * @param R1 
 * @param R2 
 * @return float 
 */
float voltagedivideroperation(float *Vin, float *R1, float *R2);

/**
 * @brief Parameters for Voltage Divider
 * 
 * @return float 
 */
float voltagedivider();

/**
 * @brief Finding Electricity bill using number of units
 * 
 * @param units 
 * @return float 
 */
float EBbillcalc(float *units);

/**
 * @brief Inputing Unit varaible into EBbillcalc
 * 
 * @return float 
 */
float EBbill();

#endif