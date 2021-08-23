#include <stdio.h>
#include "physicscalc.h"

void friction()
{
    int k;
    float F,N,sf; // variable declaration.


    printf("Enter the value of F and then N");
    scanf("%f %f ",&F,&N); // input statement which take the value.
    sf=F/N; // static friction
    printf("%f",sf);
}
