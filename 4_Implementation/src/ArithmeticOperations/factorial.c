#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t factorial(single_inputs *si){
    float number_1=si->input_3;
    
    if(number_1<=0){
	si->output_2=0;
        return FAILURE;
    }
    si->output_2=1;
    while(number_1>0){
        si->output_2=si->output_2 * number_1;
        number_1--;
    }
    return SUCCESS;
    
}
