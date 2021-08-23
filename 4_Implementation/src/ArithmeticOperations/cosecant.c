#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t cosecant(trignometric_inputs *ti){ 
    float pi=3.14159;
    if((int)(ti->input_4 /90)%2 == 0){
	ti->output_3=2;
	return UNDEFINED;
    }
    ti->output_3=1/sin((ti->input_4 *pi)/180);
    return SUCCESS;

}