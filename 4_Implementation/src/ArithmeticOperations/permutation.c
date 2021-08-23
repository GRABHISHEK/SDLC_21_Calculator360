#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

error_t permutation(other_inputs *oi)
{
    if(oi->input_5 <= oi->input_6)
    {
       
        return FAILURE;
    }
    else
    {
        oi->output_4=factorial(oi->input_5)/factorial(oi->input_5 - oi->input_6);
        return SUCCESS;
    }
}



    
