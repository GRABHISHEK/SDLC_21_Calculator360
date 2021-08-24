#include <stdio.h>
#include "physicscalc.h"

float friction(float F, float N)
{
    int k;
    float F,g=9.8; // in m/s^2
    sf=F/N; // static friction
    printf("%f",sf);
    return sf;
}
