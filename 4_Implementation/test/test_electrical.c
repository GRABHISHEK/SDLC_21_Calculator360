#include "electricalcalc.h"
#include "unity.h"
/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}


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
  RUN_TEST(testohmV);
  RUN_TEST(testohmI);
  RUN_TEST(testohmR);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
