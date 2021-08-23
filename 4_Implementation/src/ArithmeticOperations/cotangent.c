#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t cotangent(trignometric_inputs *ti){
    float pi=3.14159;
    
    if(!sin((ti->input_4 * pi)/180)){
	ti->output_3=2;
	return UNDEFINED;
    }

    ti->output_3=cos((ti->input_4 *pi)/180)/sin((ti->input_4 *pi)/180);
    return SUCCESS;
}