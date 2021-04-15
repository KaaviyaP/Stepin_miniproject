
#include "unity.h"
#include "timer_calculator.h"

/* Modify these two lines according to the project */
#include "timer_calculator.h"
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_resistor4(void);
void test_resistor5(void);
void test_capacitor(void);
void test_pulse4(void);
void test_pulse5(void);


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
  RUN_TEST(test_resistor4);
  RUN_TEST(test_resistor5);
  RUN_TEST(test_capacitor);
  RUN_TEST(test_pulse4);
  RUN_TEST(test_pulse5);




  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_resistor4(void) {
  TEST_ASSERT_EQUAL(1000, resistor4('N','B','R','O'));
  TEST_ASSERT_EQUAL(5000, resistor4('G','B','R','R'));
}

void test_resistor5(void) {
  TEST_ASSERT_EQUAL(400000, resistor5('Y','B','B','O','R'));
  TEST_ASSERT_EQUAL(500000, resistor5('G','B','B','O','R'));
}

void test_capacitor(void) {
  TEST_ASSERT_EQUAL(200, capacitor(201));
  TEST_ASSERT_EQUAL(520, capacitor(521));
}

void test_pulse4(void) {
  TEST_ASSERT_EQUAL(2.2,pulse4('N','B','R','R',205) );
  TEST_ASSERT_EQUAL(4.4,pulse4('R','B','R','O',205) );
}

void test_pulse5(void) {
  TEST_ASSERT_EQUAL(2.2,pulse5('N','B','B','N','G',205) );
  TEST_ASSERT_EQUAL(92.4,pulse5('V','R','B','N','O',126) );
}

