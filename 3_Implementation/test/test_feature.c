#include "unity.h"
#include <feature.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME    

/* Prototypes for all the test functions */
void test_add(void);
void test_list(void);
void test_edit(void);
void test_delete1(void);
void test_search(void);
void test_login(void);



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
  RUN_TEST(test_add);
  RUN_TEST(test_list);
  RUN_TEST(test_edit);
  RUN_TEST(test_delete1);
  RUN_TEST(test_search);
  RUN_TEST(test_login);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(1000, add(3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(500, book_add(1));
}
