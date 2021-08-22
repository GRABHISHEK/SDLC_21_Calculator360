#include "unity.h"
#include "calculator.h"
#include <math.h>
#define PROJECT_NAME "Math Calculator"
static arthimetic_inputs a_i={0,0,0};
static single_inputs s_i={0,0};
static trignometric_inputs t_i={0,0};
static other_inputs o_i={0,0,0};

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_power(void);
void test_squareroot(void);
void test_logarithm(void);
void test_factorial(void);
void test_sine(void);
void test_cosine(void);
void test_tangent(void);
void test_cotangent(void);
void test_secant(void);
void test_cosecant(void);
void test_mod(void);
void test_permutation(void);
void test_combination(void);
void test_natural_numbers(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
int main(){
  UNITY_BEGIN();
    RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_power);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_logarithm);
  RUN_TEST(test_factorial);
  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_tangent);
  RUN_TEST(test_cotangent);
  RUN_TEST(test_secant);
  RUN_TEST(test_cosecant);
  RUN_TEST(test_mod);
  RUN_TEST(test_permutation);
  RUN_TEST(test_combination);
  RUN_TEST(test_natural_numbers);
  return UNITY_END();
}

void test_add(void) {
    a_i.input_1=20;
    a_i.input_2=10;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a_i));
    TEST_ASSERT_EQUAL(30,a_i.output);  

    a_i.input_1=2*3+5;
    a_i.input_2=8/2-1;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a_i));
    TEST_ASSERT_EQUAL(14,a_i.output);

    a_i.input_1=9223372036854775807;
    a_i.input_2=-2;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a_i));
    TEST_ASSERT_EQUAL((9223372036854775805),a_i.output);
}

void test_subtract(void) {
    a_i.input_1=20;
    a_i.input_2=10;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a_i));
    TEST_ASSERT_EQUAL(10,a_i.output); 

    a_i.input_1=20/2+1;
    a_i.input_2=10*1;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a_i));
    TEST_ASSERT_EQUAL(1,a_i.output); 

    a_i.input_1=9223372036854775807;
    a_i.input_2=2;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a_i));
    TEST_ASSERT_EQUAL(9223372036854775805,a_i.output); 
}

void test_multiply(void) {
    a_i.input_1=20;
    a_i.input_2=10;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a_i));
    TEST_ASSERT_EQUAL(200,a_i.output); 

    a_i.input_1=2+6/2;
    a_i.input_2=0;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a_i));
    TEST_ASSERT_EQUAL(0,a_i.output); 

    a_i.input_1=999999;
    a_i.input_2=123456;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a_i));
    TEST_ASSERT_EQUAL(123455876544,a_i.output); 
}

void test_divide(void) {
    a_i.input_1=20;
    a_i.input_2=10;
    TEST_ASSERT_EQUAL(SUCCESS, division(&a_i));
    TEST_ASSERT_EQUAL(2,a_i.output); 

/* we are making output as '0' when input_2 is '0' */
    a_i.input_1=20;
    a_i.input_2=0;
    TEST_ASSERT_EQUAL(ERROR_DIVISION_BY_ZERO, division(&a_i));
    TEST_ASSERT_EQUAL(0,a_i.output); 

    a_i.input_1=9223372036854775806;
    a_i.input_2=2;
    TEST_ASSERT_EQUAL(SUCCESS, division(&a_i));
    TEST_ASSERT_EQUAL(4611686018427387903,a_i.output); 

    
}
void test_power(void){
    a_i.input_1=2;
    a_i.input_2=3;
    TEST_ASSERT_EQUAL(SUCCESS, power(&a_i));
    TEST_ASSERT_EQUAL(8,a_i.output); 

    a_i.input_1=2*2+5*23;
    a_i.input_2=2;
    TEST_ASSERT_EQUAL(SUCCESS, power(&a_i));
    TEST_ASSERT_EQUAL(14161,a_i.output);
}

void test_mod(void)
{
  a_i.input_1=4;
  a_i.input_2=2;
  TEST_ASSERT_EQUAL(SUCCESS, mod(&a_i));
  TEST_ASSERT_EQUAL(0,a_i.output);

  a_i.input_1=570;
  a_i.input_2=7;
  TEST_ASSERT_EQUAL(SUCCESS, mod(&a_i));
  TEST_ASSERT_EQUAL(3,a_i.output);
  a_i.input_1=97543854;
  a_i.input_2=254;
  TEST_ASSERT_EQUAL(SUCCESS, mod(&a_i));
  TEST_ASSERT_EQUAL(234,a_i.output);
  
}
void test_squareroot(void){
    s_i.input_3=9;
    TEST_ASSERT_EQUAL(SUCCESS,square_root(&s_i));
    TEST_ASSERT_EQUAL(3,s_i.output_2); 

    s_i.input_3=9223372036854775805;
    TEST_ASSERT_EQUAL(SUCCESS,square_root(&s_i));
    TEST_ASSERT_EQUAL(3037000448,s_i.output_2);
}
void test_logarithm(void){
    s_i.input_3=10;
    TEST_ASSERT_EQUAL(SUCCESS,logarithm(&s_i));
    TEST_ASSERT_EQUAL(1,s_i.output_2); 

/* we are making output as '0' when input is lessthan '0' */
    s_i.input_3=-10;
    TEST_ASSERT_EQUAL(UNDEFINED,logarithm(&s_i));
    TEST_ASSERT_EQUAL(0,s_i.output_2);

    s_i.input_3=100000000000000000;
    TEST_ASSERT_EQUAL(SUCCESS,logarithm(&s_i));
    TEST_ASSERT_EQUAL(17,s_i.output_2);
}
void test_factorial(void){
    s_i.input_3=4;
    TEST_ASSERT_EQUAL(SUCCESS,factorial(&s_i));
    TEST_ASSERT_EQUAL(24,s_i.output_2); 

/* we are making output as '0' when input is lessthan or equla to '0' */
    s_i.input_3=-1;
    TEST_ASSERT_EQUAL(FAILURE,factorial(&s_i));
    TEST_ASSERT_EQUAL(0,s_i.output_2); 

}
void test_sine(void){
    t_i.input_4=90;
    TEST_ASSERT_EQUAL(SUCCESS,sine(&t_i));
    TEST_ASSERT_EQUAL(1,t_i.output_3); 
}
void test_cosine(void){
    t_i.input_4=0;
    TEST_ASSERT_EQUAL(SUCCESS,cosine(&t_i));
    TEST_ASSERT_EQUAL(1,t_i.output_3); 
}
void test_tangent(void){
    t_i.input_4=45;
    TEST_ASSERT_EQUAL(SUCCESS,tangent(&t_i));
    TEST_ASSERT_EQUAL(0.999999,t_i.output_3); 

    t_i.input_4=90;
    TEST_ASSERT_EQUAL(UNDEFINED,tangent(&t_i));
    TEST_ASSERT_EQUAL(2,t_i.output_3); 
}
void test_cotangent(void){
    t_i.input_4=45;
    TEST_ASSERT_EQUAL(SUCCESS,cotangent(&t_i));
    TEST_ASSERT_EQUAL(1.000001,t_i.output_3); 

    t_i.input_4=90;
    TEST_ASSERT_EQUAL(SUCCESS,cotangent(&t_i));
    TEST_ASSERT_EQUAL(0,t_i.output_3); 
}
void test_secant(void){
    t_i.input_4=0;
    TEST_ASSERT_EQUAL(SUCCESS,secant(&t_i));
    TEST_ASSERT_EQUAL(1,t_i.output_3); 

    t_i.input_4=90;
    TEST_ASSERT_EQUAL(UNDEFINED,secant(&t_i));
    TEST_ASSERT_EQUAL(2,t_i.output_3);
}
void test_cosecant(void){
    t_i.input_4=90;
    TEST_ASSERT_EQUAL(SUCCESS,sine(&t_i));
    TEST_ASSERT_EQUAL(1,t_i.output_3); 

    t_i.input_4=180;
    TEST_ASSERT_EQUAL(UNDEFINED,cosecant(&t_i));
    TEST_ASSERT_EQUAL(2,t_i.output_3);
}

void test_permutation(void)
{
  
    o_i.input_5=6;
    o_i.input_6=5;
    TEST_ASSERT_EQUAL(SUCCESS, permutationr(&o_i));
    TEST_ASSERT_EQUAL(720,o_i.output_4); 

    o_i.input_5=120;
    o_i.input_6=6;
    TEST_ASSERT_EQUAL(SUCCESS, permutation(&o_i));
    TEST_ASSERT_EQUAL(2629976731200,o_i.output_4);

    o_i.input_5=5;
    o_i.input_6=6;
    TEST_ASSERT_EQUAL(FAILURE, permutation(&o_i));
    TEST_ASSERT_EQUAL(0,o_i.output_4); 
}

void test_combination(void)
{
    o_i.input_5=6;
    o_i.input_6=5;
    TEST_ASSERT_EQUAL(SUCCESS, combination(&o_i));
    TEST_ASSERT_EQUAL(6,o_i.output_4); 

    o_i.input_5=120;
    o_i.input_6=6;
    TEST_ASSERT_EQUAL(SUCCESS, combination(&o_i));
    TEST_ASSERT_EQUAL(3652745460,o_i.output_4);

    o_i.input_5=5;
    o_i.input_6=6;
    TEST_ASSERT_EQUAL(FAILURE, combination(&o_i));
    TEST_ASSERT_EQUAL(0,o_i.output_4); 
 
}

void test_natural_numbers(void)
{

    o_i.input_5=90;
    TEST_ASSERT_EQUAL(SUCCESS, natural_numbers(&o_i));
    TEST_ASSERT_EQUAL(4095,o_i.output_4); 

    o_i.input_5=740;
    TEST_ASSERT_EQUAL(SUCCESS, natural_numbers(&o_i));
    TEST_ASSERT_EQUAL(274170,o_i.output_4);

    o_i.input_5= -60;
    TEST_ASSERT_EQUAL(FAILURE, natural_numbers(&o_i));
    TEST_ASSERT_EQUAL(0,o_i.output_4); 
}
