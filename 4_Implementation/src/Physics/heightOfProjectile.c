#include<stdio.h>
#include <math.h>
void heightOfProjectile() {
double v=5;
double teta=70;
double g=9;
double sine=sin(teta);
double V=v*v;
double Si=sine*sine;
double up=V*Si;
double G=2*g;
double h=up/G;
printf(" %.2lf\n",h);
}