#include <stdio.h>
#include <stdlib.h>
#include "physicscalc.h"
float Newtons(float mass, float acceleration)
{
    force=mass*acceleration;
    printf("\n\t the force acting on a bode = %d",force);
    return force;
}
