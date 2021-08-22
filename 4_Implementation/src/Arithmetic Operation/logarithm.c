#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t logarithm(single_inputs *si){
    if(si->input_3<=0)
    {
        si->output_2=0;
        return UNDEFINED;   
    }
    else{
        si->output_2=log10(si->input_3);
        return SUCCESS;
    }
    
    
}