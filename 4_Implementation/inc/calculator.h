/**
 * @file calculator.h
 * @author Venu.K, Sushma.B
 * @brief Functions to perform Arthimetic Operations,Single function operations,Trignometric operations,other operations
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include <stdlib.h>
/**
 * @brief Structure for storing Arthimetic functions input and output
 * 
 */
typedef struct arthmetic_inputs{
    long long int input_1,input_2,output;
}arithmetic_inputs;
/**
 * @brief Structure for storing Single functions input and output
 * 
 */
typedef struct single_inputs{
    float input_3,output_2;
}single_inputs;
/**
 * @brief Structure for storing Trignometric functions input and output
 * 
 */
typedef struct trignometric_inputs{
    float input_4,output_3;
    
}trignometric_inputs;
/**
 * @brief Structure for storing Other functions input and output
 * 
 */
typedef struct other_inputs{
  long long int input_5,input_6,output_4;
}other_inputs;

/**
 * @brief Error values for calculator operations
 * 
 */
typedef enum error_t{
    SUCCESS=1,
    FAILURE=0,
    UNDEFINED=-1,
    ERROR_DIVISION_BY_ZERO=-2
}error_t;

/**
 * @brief compute sum of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for functions and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t add(arithmetic_inputs *ai);
/**
 * @brief compute difference of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t subtract(arithmetic_inputs *ai);
/**
 * @brief compute multiplication of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t multiply(arithmetic_inputs *ai);
/**
 * @brief compute division of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t division(arithmetic_inputs *ai);
/**
 * @brief compute power
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t power(arithmetic_inputs *ai);
/**
 * @brief compute mod
 * 
 * @param ai ai pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t mod(arithmetic_inputs *ai);
/**
 * @brief compute  logarithm function
 * 
 * @param si si pointer to other_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t logarithm(single_inputs *si);
/**
 * @brief compute square_root
 * 
 * @param si si pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t square_root(single_inputs *si);
/**
 * @brief compute factorial
 * 
 * @param si si pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t factorial(single_inputs *si);
/**
 * @brief compute sine function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t sine(trignometric_inputs *ti);
/**
 * @brief compute cosine function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t cosine(trignometric_inputs *ti);
/**
 * @brief compute tangent function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t tangent(trignometric_inputs *ti);
/**
 * @brief compute cotangent function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t cotangent(trignometric_inputs *ti);
/**
 * @brief compute secant function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t secant(trignometric_inputs *ti);
/**
 * @brief compute cosecant function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t cosecant(trignometric_inputs *ti);
/**
 * @brief compute permutation function
 * 
 * @param oi oi pointer to other_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t permutation(other_inputs *oi);
/**
 * @brief compute combination function
 * 
 * @param oi oi pointer to other_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t combination (other_inputs *oi);
/**
 * @brief compute natural number function
 * 
 * @param oi oi pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t natural_numbers(other_inputs *oi);

#endif
