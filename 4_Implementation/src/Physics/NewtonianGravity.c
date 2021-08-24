#include <stdio.h>
#include "physicscalc.h"

float force(float m1, float m2, float r)
{
    float G,F;
    G = 6.67 / 1e11;
    F = (G * m1 * m2) / (r * r);
    float value = (int)(F * 100 + .5);
    value = (float)value/100;
    return value;
}
