/**
 * @file fun.h
 * @author Abhishek G R (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-22
 * 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * @file Electronics.h
 * @author Defining pi as 3.14 
 * @brief 
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define pi 3.142857
#include <math.h>
#include <string.h>

/**
 * @brief transform 
 * 
 * @return  int
 */
int Electronicsfun();
/**
 * @brief input matrix to find hadmard transform
 * 
 * @param avar 
 * @return int 
 */
int Hadmardtransform(int avar);
/**
 * @brief To detrermine run length compression
 * 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int RunlengthEncodingCompression(int a , int b);
/**
 * @brief To detrermine Sine transform compression
 * 
 * @param atomicity 
 * @return int 
 */
int sinetransform(int atomicity);
/**
 * @brief To detrermine fourier transform compression
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int DiscreteFourierTransform(int a , int b);
/**
 * @brief To detrermine cosine transform compression
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int cosinetransform(int a , int b);

/**
 * @brief return matrix values of DCT
 * 
 */
void fun1();
/**
 * @brief return matrix values of DST
 * 
 */
void fun2();
/**
 * @brief return matrix values of Hadmard
 * 
 */
void fun3();
/**
 * @brief return matrix values of run length code.
 * 
 */
void fun4();
/**
 * @brief return matrix values of fourier transform
 * 
 */
void fun5();
