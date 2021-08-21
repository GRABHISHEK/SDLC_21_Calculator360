#include<stdio.h>
#include "electricalcalc.h"
#include "ohmslaw.c"
#include "voltagedivider.c"
#include "powerfactor.c"
#include "EBbill.c"

int electricalcalc()
{
    printf("\n1. Ohm's law \n2. Voltage divider\n3. Power factor\n4. Electricity Bill Calculator");
    int choice;
    printf("\nEnter your choice : ");
    scanf("%d",&choice) ;
    switch (choice)
    {
    case 1: 
    ohmslaw();
    break;
    case 2:
    voltagedivider();
    break;
    case 3:
    powerfactor();
    break;
    case 4:
    EBbill();
    break;
    default:
        printf("\nWrong option");
        electricalcalc();
    }
}