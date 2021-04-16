
#include "unity.h"
#include "timer_calculator.h"


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

/* Test function to check resistor4 */ 
void test_resistor4(void) {
  TEST_ASSERT_EQUAL(1000, resistor4('N','B','R','O'));
  TEST_ASSERT_EQUAL(5000, resistor4('G','B','R','R'));
  TEST_ASSERT_EQUAL(8000000, resistor4('A','B','G','R'));
  TEST_ASSERT_EQUAL(-1, resistor4('H','W','V','N'));
  TEST_ASSERT_EQUAL(34000000, resistor4('O','Y','E','N'));
  
}

/* Test function to check resistor5 */ 
void test_resistor5(void) {
  TEST_ASSERT_EQUAL(400000, resistor5('Y','B','B','O','R'));
  TEST_ASSERT_EQUAL(500000, resistor5('G','B','B','O','R'));
  TEST_ASSERT_EQUAL(-1, resistor5('E','A','W','H','N'));
}

/* Test function to check capaitor */ 
void test_capacitor(void) {
  TEST_ASSERT_EQUAL(200, capacitor(201));
  TEST_ASSERT_EQUAL(520, capacitor(521));
  TEST_ASSERT_EQUAL(47, capacitor(47));
  TEST_ASSERT_EQUAL(-1, capacitor(1435));


}

/* Test function to check pulse4 */ 
void test_pulse4(void) {
  TEST_ASSERT_EQUAL(2.2,pulse4('N','B','R','R',205) );
  TEST_ASSERT_EQUAL(4.4,pulse4('R','B','R','O',205) );

}

/* Test function to check pulse5 */ 
void test_pulse5(void) {
  TEST_ASSERT_EQUAL(2.2,pulse5('N','B','B','N','G',205) );
  TEST_ASSERT_EQUAL(92.4,pulse5('V','R','B','N','O',126) );
}

