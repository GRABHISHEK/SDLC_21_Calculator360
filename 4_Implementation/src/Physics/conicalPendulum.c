#include<stdio.h>
#include <math.h>
#include "physicscalc.h"
void conicalPendulum() {
 double g=2;
 double L=4;
  double teta=30;
  double up=sqrt((L*cos(teta))/g);
 double T=2*3.14*up;
 printf("Conical Pendulum %.2lf\n",T);
}
