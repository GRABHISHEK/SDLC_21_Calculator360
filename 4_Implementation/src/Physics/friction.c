#include <stdio.h>
#include "physicscalc.h"

void friction()
{
    int k;
    float F,N,sf; // variable declaration.
    float g=9.8; // in m/s^2

    printf("Enter the value of F and then N");
    scanf("%f %f ",&F,&N); // input statement which take the value.
    sf=F/N; // static friction
    printf("%f",sf);
}
