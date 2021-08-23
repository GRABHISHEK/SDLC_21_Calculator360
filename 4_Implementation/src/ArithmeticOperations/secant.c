#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t secant(trignometric_inputs *ti){
    float pi=3.14159;
    if((int)(ti->input_4 /90)%2 == 1){
	ti->output_3=2;
	return UNDEFINED;
    }
    ti->output_3=1/cos((ti->input_4* pi)/180);
    return SUCCESS;

}