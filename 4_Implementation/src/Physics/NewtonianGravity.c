#include <stdio.h>
#include "physicscalc.h"

float force(float m1, float m2, float r)
{
    float G;
    G = 6.67 / 1e11;
    F = (G * m1 * m2) / (r * r);
    float value = (int)(F * 100 + .5);
    value = (float)value/100;
    printf("%f",value);
    return value;
}
