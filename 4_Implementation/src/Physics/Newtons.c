#include <stdio.h>
#include <stdlib.h>
int main()
{
    int force,mass,acceleration;
    printf("\n\t enter the mass of a body = ");
    scanf("%d",&mass);
    printf("\n\t enter the acceleration of a body = ");
    scanf("%d",&acceleration);
    force=mass*acceleration;
    printf("\n\t the force acting on a bode = %d",force);
    return 0;
}