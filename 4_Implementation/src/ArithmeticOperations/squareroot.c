#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t square_root(single_inputs *si){
    si->output_2=sqrt(si->input_3);
    return SUCCESS;
}