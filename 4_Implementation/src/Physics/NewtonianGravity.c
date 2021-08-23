#include <stdio.h>
#include "physicscalc.h"

void force()
{
    float G;
    G = 6.67 / 1e11;
    float F,m1,m2,r;
    scanf("%f %f %f",&m1,&m2,&r);
    F = (G * m1 * m2) / (r * r);
    float value = (int)(F * 100 + .5);
    printf("%f",(float)value / 100);
}
