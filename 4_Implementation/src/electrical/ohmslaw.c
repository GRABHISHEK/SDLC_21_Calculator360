#include<stdio.h>
#include "electricalcalc.h"
// functions definitions
float ohmslaw()
{
    ohmparameter var;
    printf("\n--OHM'S LAW--\n");
    printf("To find \n 1. Voltage \n 2. Current \n 3. Resistance\n Enter your parameter to find : ");
    int choiceohm;
    scanf("%d",&choiceohm);
    if(choiceohm==1){
        printf("\nEnter Current in Amps : ");
        scanf("%f",&var.I);
        printf("\nEnter Resistance in ohms : ");
        scanf("%f",&var.R);
        if(var.I >0 && var.R>0)
        printf("Voltage : %0.2fV",ohmV(var.I,var.R));
        else 
        return 0;
    }
    else if(choiceohm==2){
        printf("\nEnter Voltage in Volts : ");
        scanf("%f",&var.V);
        printf("\nEnter Resistance in ohms : ");
        scanf("%f",&var.R);
        if(var.V >0 && var.R>0)
        printf("Current : %0.2fA",ohmI(var.V,var.R));
        else 
        return 0;
    }
    else if(choiceohm==3){
        printf("\nEnter Voltage in Volts : ");
        scanf("%f",&var.V);
        printf("\nEnter Current in Amps : ");
        scanf("%f",&var.I);
        if(var.V >0 && var.I>0)
        printf("\nResistance : %0.2fohms",ohmR(var.V,var.I));
        else 
        return 0;
    }
    else
    {
        printf("\nWrong option");
    }
}
// to find voltage V =IR
float ohmV(float I, float R)
{
    return (I*R);
}
// to find current I=V/R
float ohmI(float V,float R)
{
    return (V/R);
}
// to find current R=V/I
float ohmR(float V,float I)
{
    return (V/I);
}