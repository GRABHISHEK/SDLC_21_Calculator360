#include <stdio.h>
#include "physicscalc.h"

void reduceMass()
{
  float m1,m2,rm; // variable declaration.

    printf("Enter the value of m1 and then m2");
    scanf("%f %f ",&m1,&m2); // input statement which take the value.
    rm=(m1*m2)/(m1+m2); // reduced mass
    printf("%f",rm);
}