#include<stdio.h>
#include <math.h>
#include "physicscalc.h"
void simplePendulum() {
double g=2;
double L=4;
double low=L/g;
double root=sqrt(low);
double T=2*3.14*root;
printf(" %.2lf\n",T);
}
