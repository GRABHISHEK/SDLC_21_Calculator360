#include "electricalcalc.h"
#include "unity.h"
/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

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

int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
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

  /* Close the Unity Test Framework */
  return UNITY_END();
}
