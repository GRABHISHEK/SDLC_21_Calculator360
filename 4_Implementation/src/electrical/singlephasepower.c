#include "electricalcalc.h"

void singlephase(float *voltage, float *current, float *powerfactor)
{
    printf("Enter the voltage: ");
    scanf("%f", voltage);
    printf("Enter the current: ");
    scanf("%f", current);
    printf("Enter the powerfactor: ");
    scanf("%f", powerfactor);
}

float sprealpower(float *voltage, float *current, float *powerfactor)
{
    if (voltage == NULL || current == NULL || powerfactor == NULL)
        return NULL_ERROR;
    return ((*voltage) * (*current) * (*powerfactor)) / 1000;
}
