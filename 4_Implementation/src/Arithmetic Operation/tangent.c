#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t tangent(trignometric_inputs *ti){
    if((int)(ti->input_4 /90)%2 == 1){
	ti->output_3=2;
	return UNDEFINED;
    }	
    float pi=3.14159;
    ti->output_3=tan((ti->input_4 *pi)/180);
    return SUCCESS;

}