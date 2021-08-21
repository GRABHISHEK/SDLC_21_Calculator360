#include<stdio.h>
#include<math.h>
#include "electricalcalc.h"

pfstruct pfcalc(pfstruct input)
{

    input.AP = (input.V*input.I)/1000;
    input.RP = sqrt((input.AP*input.AP)- (input.P*input.P));
    input.PF = 1000*input.P/(input.V*input.I);
    if(input.PF<1)
    return input;
    else
    {
        printf("\nPF > 1  *The power factor can get values in the range from 0 to 1");
        input.PF = 0; 
        input.AP = 0;
        input.RP = 0;
        return input;
    }
}

float powerfactor()
{
    pfstruct input,output;
    printf("\n--POWER FACTOR - SINGLE PHASE--\n");
    printf("Real Power in kilowatts : ");
    scanf("%f",&input.P);
    printf("Current in amps         : ");
    scanf("%f",&input.I);
    printf("Voltage in volts        : ");
    scanf("%f",&input.V);
    output = pfcalc(input);
    printf("\n Power Factor   : %0.2f",output.PF);
    printf("\n Apparent Power : %0.2fkVA",output.AP);
    printf("\n Reactive Power : %0.2fkVAR",output.RP);
}