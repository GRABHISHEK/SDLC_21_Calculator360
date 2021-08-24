#include "unity.h"
#include "calculator.h"
#include "electricalcalc.h"
#include "Electronics.h"
#include "physicscalc.h"
#include "unity_internals.h"
#include "../inc/Electronics.h"
#include "fin.h"
#include "../inc/fin.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include <math.h>
#include<stdlib.h>

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

void test_sine(void);
void test_cosine(void);
void test_tangent(void);
void test_cotangent(void);
void test_secant(void);
void test_cosecant(void);
void test_mod(void);
void test_factorial(void) ;
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
void testEBbill(void);
void testvoltdivider(void);
void testPF(void);
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
void Discrete_Fourier_Transform(void);
void Runlength_encoding_compression(void);
void test_NewtonianGravity(void);//
/*void test_Newtons(void);//
void test_amTorque(void);
void test_circularMotion(void);
void test_displacement_velocity(void);
void test_friction(void);
void test_light(void);
void test_mfi(void);
void test_moi(void);
void test_reducedMass(void);
void test_sound(void);
void test_work_energy(void);
void test_heightOfProjectile(void);
void test_conicalPendulum(void);
void test_simplePendulum(void);
void test_lenslaw(void);
void test_Newtons(void);  //
  void test_sound(void);    //
  void test_light(void);  */  //
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

  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_tangent);
  RUN_TEST(test_cotangent);
  RUN_TEST(test_secant);
  RUN_TEST(test_cosecant);
  RUN_TEST(test_mod);
  RUN_TEST(test_factorial);
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
  RUN_TEST(testEBbill);
  RUN_TEST(testvoltdivider);
  RUN_TEST(testPF);
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
  RUN_TEST(test_NewtonianGravity);//
  /*RUN_TEST(test_Newtons);//
  RUN_TEST(test_amTorque);
  RUN_TEST(test_circularMotion);
  RUN_TEST(test_displacement_velocity);
  RUN_TEST(test_friction);
  RUN_TEST(test_light);
  RUN_TEST(test_mfi);
  RUN_TEST(test_moi);
  RUN_TEST(test_reducedMass);
  RUN_TEST(test_sound);
  RUN_TEST(test_work_energy);
  RUN_TEST(test_heightOfProjectile);
  RUN_TEST(test_conicalPendulum);
  RUN_TEST(test_simplePendulum);
  RUN_TEST(test_lenslaw);
  RUN_TEST(test_Newtons);
  RUN_TEST(test_light);
  RUN_TEST(test_sound);*/
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

void test_factorial(void) {
  long long input_5 = 4;
  TEST_ASSERT_EQUAL(SUCCESS, factorial(input_5 ,& o_i));
  TEST_ASSERT_EQUAL(24, o_i.output_4);

  /* we are making output as '0' when input is lessthan or equla to '0' */
  long long number1 = -1;
  TEST_ASSERT_EQUAL(FAILURE, factorial(number1 ,& o_i));
  TEST_ASSERT_EQUAL(0, o_i.output_4);
}


void test_natural_numbers(void)
{

    o_i.input_5=90;
    TEST_ASSERT_EQUAL(SUCCESS, natural_numbers(&o_i));
    TEST_ASSERT_EQUAL(4095,o_i.output_4); 
    o_i.output_4=0;
    o_i.input_5=740;
    TEST_ASSERT_EQUAL(SUCCESS, natural_numbers(&o_i));
    TEST_ASSERT_EQUAL(274170,o_i.output_4);
    o_i.input_5= -60;
    
    TEST_ASSERT_EQUAL(FAILURE, natural_numbers(&o_i));
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
  TEST_ASSERT_EQUAL_FLOAT(2.333333, ohmI(V, R));
  TEST_ASSERT_NOT_EQUAL(3.7, ohmI(V, R));
}
void testohmR(void)
{
  float I = 6.5, V = 2.1;
  TEST_ASSERT_EQUAL_FLOAT(3.095238, ohmI(I, V));
  TEST_ASSERT_NOT_EQUAL(4.2, ohmI(I, V));
}
void testEBbill(void)
{
  float unit1 = 145.6, unit2 = 55;
    TEST_ASSERT_EQUAL(552.12,EBbillcalc(&unit1));
    TEST_ASSERT_EQUAL(195.00,EBbillcalc(&unit2));
}

void testvoltdivider(void)
{
  float Vin1=2.5, R1 = 0.5, R2 = 0.8; 
  float Vin2=120, R3 = 20, R4 = 32; 
    TEST_ASSERT_EQUAL(1.54,voltagedivideroperation(&Vin1,&R1,&R2));
    TEST_ASSERT_EQUAL(73.85,voltagedivideroperation(&Vin2,&R3,&R4));
}

void testPF(void)   
{
    pfstruct input1;
    input1.P = 2;
    input1.I = 10;
    input1.V = 230;
    pfstruct output1 = pfcalc(input1);
    input1.PF =0.87;
    input1.AP =2.30;
    input1.RP =1.14;
    TEST_ASSERT_EQUAL(output1.PF,input1.PF);
    TEST_ASSERT_EQUAL(output1.AP,input1.AP);
    TEST_ASSERT_EQUAL(output1.RP,input1.RP);
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
}
void test_loss(void)
{
    TEST_ASSERT_EQUAL(38.000000,loss(12,50));
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
}
void test_premium(void)
{
    TEST_ASSERT_EQUAL(56.000000,premium(156,100));
}
void test_discount(void)
{
    TEST_ASSERT_EQUAL(16.000000,discount(69,85));
}
void test_no_of_shares(void)
{
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
void test_NewtonianGravity(void){
   TEST_ASSERT_EQUAL(0.010000, force(5000000,20000,30));
   TEST_ASSERT_EQUAL(0.060000, force(2500000,460000,-35));
} 
/*void test_amTorque(void){
   TEST_ASSERT_EQUAL(2000, AmTorque(2,100,20));
   TEST_ASSERT_EQUAL(250, AmTorque(1,25,10));
}
void test_circularMotion(void){
  TEST_ASSERT_EQUAL(225.0000000, circularMotion(20,30,4,2));
  TEST_ASSERT_EQUAL(13333.333008, circularMotion(48,-50,9,1));
}
void test_displacement_velocity(void){
  TEST_ASSERT_EQUAL(13000.000000, dispVelocity(20,1,40,25));
  TEST_ASSERT_EQUAL(3164.000000, dispVelocity(14,2,63,50));
}
void test_friction(void){
  TEST_ASSERT_EQUAL(1.724138, friction(50,29));
  TEST_ASSERT_EQUAL(600.000000, friction(1500,2.5));
}
void test_mfi(void){
  TEST_ASSERT_EQUAL(600.000000, mofoim(20,1,30));
  TEST_ASSERT_EQUAL(520.000000, mofoim(65,3,26,18));
}
void test_moi(void){
  TEST_ASSERT_EQUAL(75.000000, moi(25,5,2,6));
  TEST_ASSERT_EQUAL(414.000000, moi(92,3,1));
}
void test_reducedMass(void){
  TEST_ASSERT_EQUAL(5.000000, reduceMass(10,10));
  TEST_ASSERT_EQUAL(87.660973, reduceMass(283,127));
}
void test_work_energy(void){
  TEST_ASSERT_EQUAL(16660.000000 35972.000000, workEnergypower(34,2,50,46));
  TEST_ASSERT_EQUAL(774.000000, workEnergypower(62,1,86,9));
  TEST_ASSERT_EQUAL(8.333333, workEnergypower(135,3,20,48));
}
  void test_lenslaw(void){
    TEST_ASSERT_EQUAL(1/6, lenslaw(6,3));
    TEST_ASSERT_EQUAL(1/7, lenslaw(7,4));
  }
    void test_Newtons(void){
    TEST_ASSERT_EQUAL(10, Newtons(2,5));
    TEST_ASSERT_EQUAL(10, Newtons(2,5));
     }
void test_light(void){
TEST_ASSERT_EQUAL(0.24, light(0.2,1.2));
TEST_ASSERT_EQUAL(0.24, light(0.2,1.2));
                  }
 void test_sound(void){
 TEST_ASSERT_EQUAL(12, sound(6,0.5));
  TEST_ASSERT_EQUAL(12, sound(6,0.5));
 }*/
  


