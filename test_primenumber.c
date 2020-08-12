#include "unity.h"
#include "primenumber.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_primenumber(void)
{
  TEST_ASSERT_EQUAL(0, primenumber(6));
  TEST_ASSERT_EQUAL(1, primenumber(3));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_primenumber);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
