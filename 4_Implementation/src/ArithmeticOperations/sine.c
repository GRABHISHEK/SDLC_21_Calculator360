  
#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t sine(trignometric_inputs *ti){
    float pi=3.14159;
    ti->output_3=sin((ti->input_4 *pi)/180);
    return SUCCESS;

}