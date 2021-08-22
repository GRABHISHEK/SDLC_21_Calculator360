#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t cosine(trignometric_inputs *ti){
    float pi=3.14159;
    ti->output_3=cos((ti->input_4 *pi)/180);
    return SUCCESS;
}