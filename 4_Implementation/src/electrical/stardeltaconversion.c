#include "electricalcalc.h"

void stardeltaconversion(starval *svinput)
{
    printf("Enter R1: ");
    scanf("%d", &svinput->r1);
    printf("Enter R2: ");
    scanf("%d", &svinput->r2);
    printf("Enter R3: ");
    scanf("%d", &svinput->r3);
}

void deltastarconversion(deltaval *dvinput)
{
    printf("Enter Ra: ");
    scanf("%d", &dvinput->ra);
    printf("Enter Rb: ");
    scanf("%d", &dvinput->rb);
    printf("Enter Rc: ");
    scanf("%d", &dvinput->rc);
}

int startodeltaconversion(starval *svinput, deltaval *dvoutput)
{
    if (svinput == NULL || dvoutput == NULL)
        return NULL_ERROR;

    dvoutput->ra = ((svinput->r1 * svinput->r2) + (svinput->r2 * svinput->r3) + (svinput->r1 * svinput->r3)) / svinput->r1;
    dvoutput->rb = ((svinput->r1 * svinput->r2) + (svinput->r2 * svinput->r3) + (svinput->r1 * svinput->r3)) / svinput->r2;
    dvoutput->rc = ((svinput->r1 * svinput->r2) + (svinput->r2 * svinput->r3) + (svinput->r1 * svinput->r3)) / svinput->r3;
}

int deltatostarconversion(deltaval *dvinput, starval *svoutput)
{
    if (dvinput == NULL || svoutput == NULL)
        return NULL_ERROR;
    svoutput->r1 = (dvinput->rb * dvinput->rc) / (dvinput->ra + dvinput->rb + dvinput->rc);
    svoutput->r2 = (dvinput->rc * dvinput->ra) / (dvinput->ra + dvinput->rb + dvinput->rc);
    svoutput->r3 = (dvinput->rb * dvinput->ra) / (dvinput->ra + dvinput->rb + dvinput->rc);
}
