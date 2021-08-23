#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t factorial(other_inputs *si){
    long long number_1=si->input_5;
    
    if(number_1<=0){
	oi->output_4=0;
        return FAILURE;
    }
    oi->output_4=1;
    while(number_1>0){
        si->output_4=si->output_4 * number_1;
        number_1--;
    }
    return SUCCESS;
    
}
