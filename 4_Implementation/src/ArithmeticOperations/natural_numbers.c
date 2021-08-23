#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t natural_numbers(other_inputs *oi){
    int number_1=1;
    
    if(number_1 < 0)
    {
        return FAILURE;
    }

    while(number_1<=oi->input_5){
        si->output_4=si->output_5 + number_1;
        number_1++;
    }
    return SUCCESS;
    
}
