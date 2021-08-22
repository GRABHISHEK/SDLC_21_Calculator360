/**
 * @file test.c
 * @author Abhishek G R
 * @brief 
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Electronics.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
/**
 * @brief test functions 
 * 
 */
#include "Electronics.h"
#include "unity.h"
#include "unity_internals.h"

void setUp(){}
void tearDown(){}

/**
 * @brief main function of test.c 
 * 
 */
void cosine_transform(){
  TEST_ASSERT_EQUAL_INT(1, cosinetransform(111,123));
  TEST_ASSERT_EQUAL_INT(0, cosinetransform(-777,123));

}
void sine_transform(){
  TEST_ASSERT_EQUAL_INT(1, sinetransform(9837));
  TEST_ASSERT_EQUAL_INT(0, sinetransform(0));

}
void Hadmard_transform(){
  TEST_ASSERT_EQUAL_INT(1, Hadmardtransform(9837));
  TEST_ASSERT_EQUAL_INT(0, Hadmardtransform(4545));
  
}
void  Discrete_Fourier_Transform(){
  TEST_ASSERT_EQUAL_INT(1, DiscreteFourierTransform(9837,99));
  TEST_ASSERT_EQUAL_INT(0, DiscreteFourierTransform(-8080,23));

}
void Runlength_encoding_compression(){
  TEST_ASSERT_EQUAL_INT(1, RunlengthEncodingCompression(111,123));
  TEST_ASSERT_EQUAL_INT(0, RunlengthEncodingCompression(000,69));

}
int main()
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  RUN_TEST(cosine_transform);
  RUN_TEST(sine_transform);
  RUN_TEST(Hadmard_transform);
  RUN_TEST(Discrete_Fourier_Transform);
  RUN_TEST(Runlength_encoding_compression);

  
  return UNITY_END();
}