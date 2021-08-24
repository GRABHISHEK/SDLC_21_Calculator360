#include<stdio.h>
#include "physicscalc.h"
void lenslaw(float u, float f) {
   float U=1/u;
   float F=1/f;
   float V=F-U;
    printf("Lens Law 1/v is %0.6f", V);
    return V;
}
