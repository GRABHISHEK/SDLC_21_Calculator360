#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t natural_numbers(other_inputs *oi){
    int number_1=1;
    
    if(oi->input_5<0)
    {
        return FAILURE;
    }

    while(number_1<=oi->input_5){
        oi->output_4=oi->output_4 + number_1;
        number_1++;
    }
    return SUCCESS;
    
}
