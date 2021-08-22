#include "unity.h"
#include "calculator.h"
#include "electricalcalc.h"
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
void startodelta(void);
void deltatostar(void);
void KWtoamps1p(void);
void KWtoamps3p(void);
void batteryruntime1(void);
void batterylife1(void);
void sprealpowercalc(void);
void tprealpowercalc(void);
void testohmV(void);
void testohmI(void);
void testohmR(void);

    /* Required by the unity test framework */
    void setUp()
{
}
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
  RUN_TEST(startodelta);
  RUN_TEST(deltatostar);
  RUN_TEST(KWtoamps1p);
  RUN_TEST(KWtoamps3p);
  RUN_TEST(batteryruntime1);
  RUN_TEST(batterylife1);
  RUN_TEST(sprealpowercalc);
  RUN_TEST(tprealpowercalc);
RUN_TEST(testohmV);
  RUN_TEST(testohmI);
  RUN_TEST(testohmR);
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

void startodelta(void)
{
    starval svinput1 = {10, 20, 30};
    deltaval dvoutput1;
    startodeltaconversion(&svinput1, &dvoutput1);
    deltaval dvoutputpositive = {110, 55, 36};
    TEST_ASSERT_EQUAL(dvoutputpositive.ra, dvoutput1.ra);
    TEST_ASSERT_EQUAL(dvoutputpositive.rb, dvoutput1.rb);
    TEST_ASSERT_EQUAL(dvoutputpositive.rc, dvoutput1.rc);
    deltaval dvoutputnegative = {12, 5, 31};
    TEST_ASSERT_NOT_EQUAL(dvoutputnegative.ra, dvoutput1.ra);
    TEST_ASSERT_NOT_EQUAL(dvoutputnegative.rb, dvoutput1.rb);
    TEST_ASSERT_NOT_EQUAL(dvoutputnegative.rc, dvoutput1.rc);
    TEST_ASSERT_EQUAL(NULL_ERROR, startodeltaconversion(NULL, NULL));
}

void deltatostar(void)
{
    deltaval dvinput1 = {10, 20, 30};
    starval svoutput1;
    deltatostarconversion(&dvinput1, &svoutput1);
    starval svoutputpositive = {10, 5, 3};
    TEST_ASSERT_EQUAL(svoutputpositive.r1, svoutput1.r1);
    TEST_ASSERT_EQUAL(svoutputpositive.r2, svoutput1.r2);
    TEST_ASSERT_EQUAL(svoutputpositive.r3, svoutput1.r3);
    starval svoutputnegative = {12, 7, 31};
    TEST_ASSERT_NOT_EQUAL(svoutputnegative.r1, svoutput1.r1);
    TEST_ASSERT_NOT_EQUAL(svoutputnegative.r2, svoutput1.r2);
    TEST_ASSERT_NOT_EQUAL(svoutputnegative.r3, svoutput1.r3);
    TEST_ASSERT_EQUAL(NULL_ERROR, deltatostarconversion(NULL, NULL));
}

void KWtoamps1p(void)
{
    float rp = 0.33, pf = 0.8;
    int rmsvolt = 110;
    TEST_ASSERT_EQUAL(3.750, kwtoamps1pconversion(&rp, &pf, &rmsvolt));
    TEST_ASSERT_NOT_EQUAL(2.165, kwtoamps1pconversion(&rp, &pf, &rmsvolt));
    TEST_ASSERT_EQUAL(NULL_ERROR, kwtoamps1pconversion(NULL, NULL, NULL));
}

void KWtoamps3p(void)
{
    float rp = 0.33, pf = 0.8;
    int llrmsvolt = 110;
    TEST_ASSERT_EQUAL(2.165, kwtoamps3pconversion(&rp, &pf, &llrmsvolt));
    TEST_ASSERT_NOT_EQUAL(3.750, kwtoamps3pconversion(&rp, &pf, &llrmsvolt));
    TEST_ASSERT_EQUAL(NULL_ERROR, kwtoamps3pconversion(NULL, NULL, NULL));
}

void batteryruntime1(void)
{
    int bc = 60, load = 100;
    TEST_ASSERT_EQUAL(6.0, batteryruntimecalc(&bc, &load));
    TEST_ASSERT_NOT_EQUAL(7.7, batteryruntimecalc(&bc, &load));
    TEST_ASSERT_EQUAL(NULL_ERROR, batteryruntimecalc(NULL, NULL));
}

void batterylife1(void)
{
    int bc = 2000;
    float consumption = 260;
    TEST_ASSERT_EQUAL(7.7, batterylifecalc(&bc, &consumption));
    TEST_ASSERT_NOT_EQUAL(6.0, batterylifecalc(&bc, &consumption));
    TEST_ASSERT_EQUAL(NULL_ERROR, batterylifecalc(NULL, NULL));
}

void sprealpowercalc(void)
{
    float volt = 400, current = 70, pf = 0.8;
    TEST_ASSERT_EQUAL_FLOAT(22.4, sprealpower(&volt, &current, &pf));
    TEST_ASSERT_EQUAL(NULL_ERROR, sprealpower(NULL, NULL, NULL));
}

void tprealpowercalc(void)
{
    float volt = 400, current = 70, pf = 0.8;
    TEST_ASSERT_EQUAL_FLOAT(38.79794, tprealpower(&volt, &current, &pf));
    TEST_ASSERT_EQUAL(NULL_ERROR, tprealpower(NULL, NULL, NULL));
}
void testohmV(void)
{
  float I = 2.4, R = 3.2;
  TEST_ASSERT_EQUAL_FLOAT(7.68, ohmV(I, R));
  TEST_ASSERT_NOT_EQUAL(1.9, ohmV(I, R));
}
void testohmI(void)
{
  float V = 5.6, R = 2.4;
  TEST_ASSERT_EQUAL_FLOAT(2.33, ohmI(V, R));
  TEST_ASSERT_NOT_EQUAL(3.7, ohmI(V, R));
}
void testohmR(void)
{
  float I = 6.5, V = 2.1;
  TEST_ASSERT_EQUAL_FLOAT(3.1, ohmI(I, V));
  TEST_ASSERT_NOT_EQUAL(4.2, ohmI(I, V));
}
