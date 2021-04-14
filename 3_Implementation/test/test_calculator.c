
#include "unity.h"
#include "timer_calculator.h"

/* Modify these two lines according to the project */
#include "timer_calculator.h"
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_resistor(void);
void test_capacitor(void);
void test_pulse(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_resistor);
  RUN_TEST(test_capacitor);
  RUN_TEST(test_pulse);



  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_resistor(void) {
  TEST_ASSERT_EQUAL(1000, resistor(4,'N','B','R'));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(5000, resistor(4,'G','B','R'));
}

void test_capacitor(void) {
  TEST_ASSERT_EQUAL(200, capacitor(201));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(520, capacitor(521));
}

void test_pulse(void) {
  TEST_ASSERT_EQUAL(2.2,pulse(4,'N','B','R',205) );
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4.4,pulse(4,'R','B','R',205) );
}

