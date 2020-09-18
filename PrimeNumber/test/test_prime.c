#include "unity.h"
#include "prime_number.h"
#include <stdbool.h>
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime_number(void)
{


  TEST_ASSERT_EQUAL(true, prime_number(number));

  TEST_ASSERT_EQUAL(true, prime_number(number));

}
void test_not_prime_number(void)
{


  TEST_ASSERT_EQUAL(false, prime_number(number));

  TEST_ASSERT_EQUAL(false, prime_number(number));

}

int test_main(int num,int number)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  if(num==1)
  RUN_TEST(test_prime_number);
  else
  RUN_TEST(test_not_prime_number);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
