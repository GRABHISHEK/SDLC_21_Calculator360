#include "calculator.h"
#include <stdio.h>
#include <math.h>
error_t power(arithmetic_inputs *ai){
    ai->output=pow((ai->input_1),(ai->input_2));
    return SUCCESS;
}
