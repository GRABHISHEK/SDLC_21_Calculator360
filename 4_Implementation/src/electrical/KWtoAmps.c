#include "electricalcalc.h"

void kwtoamps1p(float *realpower, float *powerfactor, int *rmsvoltage)
{
    printf("Enter real power (KW): ");
    scanf("%f", realpower);
    printf("Enter powerfactor: ");
    scanf("%f", powerfactor);
    printf("Enter RMS voltage: ");
    scanf("%d", rmsvoltage);
}

void kwtoamps3p(float *realpower, float *powerfactor, int *llrmsvoltage)
{
    printf("Enter real power (KW): ");
    scanf("%f", realpower);
    printf("Enter powerfactor: ");
    scanf("%f", powerfactor);
    printf("Enter line-line rms voltage: ");
    scanf("%d", llrmsvoltage);
}

float kwtoamps1pconversion(float *realpower, float *powerfactor, int *rmsvoltage)
{
    if (realpower == NULL || powerfactor == NULL || rmsvoltage == NULL)
        return NULL_ERROR;

    return (1000 * (*realpower)) / ((*powerfactor) * (*rmsvoltage));
}

float kwtoamps3pconversion(float *realpower, float *powerfactor, int *llrmsvoltage)
{
    if (realpower == NULL || powerfactor == NULL || llrmsvoltage == NULL)
        return NULL_ERROR;

    return (1000 * (*realpower)) / ((sqrt(3)) * ((*powerfactor) * (*llrmsvoltage)));
}
