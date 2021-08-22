#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t add(arthimetic_inputs* ai){
    ai->output=(ai->input_1)+(ai->input_2);
    return SUCCESS;
}