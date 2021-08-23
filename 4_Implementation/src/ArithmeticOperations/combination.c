#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

error_t combination(other_inputs *oi)
{
    if(oi->input_5 <= oi->input_6)
    {
       
        return FAILURE;
    }
    else
    {
        oi->output_4=fact(oi->input_5)/(fact(oi->input_5 - oi->input_6) * fact(oi->input_6));
        return SUCCESS;
    }
}


