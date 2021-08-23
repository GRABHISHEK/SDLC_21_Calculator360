#include "unity.h"
#include "calculator.h"
#include "electricalcalc.h"
#include "Electronics.h"
#include "unity_internals.h"
#include "../inc/Electronics.h"
#include "fin.h"
#include "../inc/fin.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include <math.h>
#include<stdlib.h>

#define PROJECT_NAME "Math Calculator"
static arithmetic_inputs a_i={0,0,0};
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
void test_simpleinterest(void);
void test_principal(void);
void test_rate(void);
void test_time(void);
void test_gain(void);
void test_loss(void);
void test_gainp(void);
void test_lossp(void);
void test_spgain(void);
void test_sploss(void);
void test_cpgain(void);
void test_cploss(void);
void test_gainfw(void);
void test_premium(void);
void test_discount(void);
void test_no_of_shares(void);
void cosine_transform(void);
void sine_transform(void);
void Hadmard_transform(void);
void  Discrete_Fourier_Transform(void);
void Runlength_encoding_compression(void);

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
    RUN_TEST(test_simpleinterest);
  RUN_TEST(test_principal);
  RUN_TEST(test_rate);
  RUN_TEST(test_time);
  RUN_TEST(test_gain);
  RUN_TEST(test_loss);
  RUN_TEST(test_gainp);
  RUN_TEST(test_lossp);
  RUN_TEST(test_spgain);
  RUN_TEST(test_sploss);
  RUN_TEST(test_cpgain);
  RUN_TEST(test_cploss);
  RUN_TEST(test_gainfw);
  RUN_TEST(test_premium);
  RUN_TEST(test_discount);
  RUN_TEST(test_no_of_shares);
  RUN_TEST(cosine_transform);
  RUN_TEST(sine_transform);
  RUN_TEST(Hadmard_transform);
  RUN_TEST(Discrete_Fourier_Transform);
  RUN_TEST(Runlength_encoding_compression);
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
  

  a_i.input_1=570;
  a_i.input_2=7;
  TEST_ASSERT_EQUAL(SUCCESS, mod(&a_i));
  TEST_ASSERT_EQUAL(3,a_i.output);
  a_i.input_1=97543854;
  a_i.input_2=254;
  TEST_ASSERT_EQUAL(SUCCESS, mod(&a_i));
  TEST_ASSERT_EQUAL(234,a_i.output);
    
  a_i.input_1=4;
  a_i.input_2=0;
  TEST_ASSERT_EQUAL(ERROR_DIVISION_BY_ZERO, mod(&a_i));
  TEST_ASSERT_EQUAL(0,a_i.output);
  
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

void test_simpleinterest(void)
{
  TEST_ASSERT_EQUAL(100.000000, simpleinterest(100,10,10));
  TEST_ASSERT_EQUAL(168.000000, simpleinterest(560,5,6));
}
void test_principal(void)
{
  TEST_ASSERT_EQUAL(166.666667, principal(50,5,6));
  TEST_ASSERT_EQUAL(483.333333, principal(58,3,4));
}
void test_rate(void)
{
  TEST_ASSERT_EQUAL(4000.000000, rate(400,2.5,4));
  TEST_ASSERT_EQUAL(55.913978, rate(520,300,3.1));
}
void test_time(void)
{
    TEST_ASSERT_EQUAL(38.461538,time(250,130,5));
    TEST_ASSERT_EQUAL(68.292683,time(56,41,2));
}
void test_gain(void)
{
    TEST_ASSERT_EQUAL(108.000000,gain(120,12));
    TEST_ASSERT_EQUAL(Invalid,gain(20,50));
}
void test_loss(void)
{
    TEST_ASSERT_EQUAL(38.000000,loss(12,50));
    TEST_ASSERT_EQUAL(Invalid,loss(52,10));
}
void test_gainp(void)
{
    TEST_ASSERT_EQUAL(76.923077,gainp(40,52));
    TEST_ASSERT_EQUAL(28.048780,gainp(23,82));
}
void test_lossp(void)
{
    TEST_ASSERT_EQUAL(247.619048,lossp(52,21));
    TEST_ASSERT_EQUAL(13.483146,lossp(12,89));
}
void test_spgain(void)
{
    TEST_ASSERT_EQUAL(57.200000,spgain(10,52));
    TEST_ASSERT_EQUAL(15.200000,spgain(52,10));
}
void test_sploss(void)
{
    TEST_ASSERT_EQUAL(43.680000,sploss(52,91));
    TEST_ASSERT_EQUAL(6.320000,sploss(21,8));
}
void test_cpgain(void)
{
    TEST_ASSERT_EQUAL(54.716981,cpgain(59,87));
    TEST_ASSERT_EQUAL(47.794118,cpgain(36,65));
}
void test_cploss(void)
{
    TEST_ASSERT_EQUAL(4.761905,cploss(58,2));
    TEST_ASSERT_EQUAL(4.255319,cploss(6,4));
}
void test_gainfw(void)
{
    TEST_ASSERT_EQUAL(4.166667,gainfw(5,125));
    TEST_ASSERT_EQUAL(Invalid,gainfw(56,12));
}
void test_premium(void)
{
    TEST_ASSERT_EQUAL(56.000000,premium(156,100));
    TEST_ASSERT_EQUAL(Invalid,premium(56,59));
}
void test_discount(void)
{
    TEST_ASSERT_EQUAL(16.000000,discount(69,85));
    TEST_ASSERT_EQUAL(Invalid,discount(156,125));
}
void test_no_of_shares(void)
{
    TEST_ASSERT_EQUAL(Invalid,no_of_shares(560,25));
    TEST_ASSERT_EQUAL(100,no_of_shares(500,5));
}

void cosine_transform(void){
  TEST_ASSERT_EQUAL_INT(1, cosinetransform(111,123));
  TEST_ASSERT_EQUAL_INT(0, cosinetransform(-777,123));

}
void sine_transform(void){
  TEST_ASSERT_EQUAL_INT(1, sinetransform(9837));
  TEST_ASSERT_EQUAL_INT(0, sinetransform(0));

}
void Hadmard_transform(void){
  TEST_ASSERT_EQUAL_INT(1, Hadmardtransform(9837));
  TEST_ASSERT_EQUAL_INT(0, Hadmardtransform(4545));
  
}
void  Discrete_Fourier_Transform(void){
  TEST_ASSERT_EQUAL_INT(1, DiscreteFourierTransform(9837,99));
  TEST_ASSERT_EQUAL_INT(0, DiscreteFourierTransform(-8080,23));

}
void Runlength_encoding_compression(void){
  TEST_ASSERT_EQUAL_INT(1, RunlengthEncodingCompression(111,123));
  TEST_ASSERT_EQUAL_INT(0, RunlengthEncodingCompression(000,69));

}

  
  


