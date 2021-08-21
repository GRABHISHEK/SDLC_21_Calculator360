#include "electricalcalc.h"

void batteryruntime(int *batterycapacity, int *loadinwatts)
{
    printf("Enter battery capacity (mAh): ");
    scanf("%d", batterycapacity);
    printf("Enter load (watts): ");
    scanf("%d", loadinwatts);
}

void batterylife(int *batterycapacity, float *consumptioninmA)
{
    printf("Enter battery capacity (mAh): ");
    scanf("%d", batterycapacity);
    printf("Enter consumption (mA): ");
    scanf("%f", consumptioninmA);
}

float batteryruntimecalc(int *batterycapacity, int *loadinwatts)
{
    if (batterycapacity == NULL || loadinwatts == NULL)
        return NULL_ERROR;
    return (10 * (*batterycapacity)) / (*loadinwatts);
}

float batterylifecalc(int *batterycapacity, float *consumptioninmA)
{
    if (batterycapacity == NULL || consumptioninmA == NULL)
        return NULL_ERROR;
    return (*batterycapacity) / (*consumptioninmA);
}
