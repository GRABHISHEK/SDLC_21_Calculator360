#include <stdio.h>
#include "physicscalc.h"

float force()
{
    float G;
    G = 6.67 / 1e11;
    float F,m1,m2,r;
    printf("Enter the values of m1, m2 and r");
    scanf("%f %f %f",&m1,&m2,&r);
    F = (G * m1 * m2) / (r * r);
    float value = (int)(F * 100 + .5);
    value = (float)value/100;
    printf("%f",value);
    return value;
}
