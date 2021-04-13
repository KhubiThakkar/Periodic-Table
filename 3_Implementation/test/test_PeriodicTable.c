#include "unity.h"
#include "elements.h"

/* Modify these two lines according to the project */
// #include "elements.h"
// #define PROJECT_NAME    "Periodic Table"

char name1[]="hydrogen";
char name2[]="Hydrogen";
char name3[]="Iron";
char name4[]="iron";
char atnm1[]="15";
char atnm2[]="pp";
char atnm3[]="12.2";
char atnm4[]="8";
char sy1[]="He";
char sy2[]="ff";
char sy3[]="Fe";
char sy4[]="fe";

/* Write all the test functions */ 
void test_name(void) {
  FILE *ptr = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byName(ptr,name1));
  FILE *ptr1 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, byName(ptr1,name2));
  FILE *ptr2 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, byName(ptr2,name3));
  FILE *ptr3 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byName(ptr3,name4));  
}
void test_symb(void)  {  
  FILE *ptr = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, bySym(ptr,sy1));
  FILE *ptr1 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, bySym(ptr1,sy3));
  FILE *ptr2 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, bySym(ptr2,sy4));
  FILE *ptr3 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, bySym(ptr3,sy2));

}
void test_atnum(void)  {
  FILE *ptr = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byAtNum(ptr,atnm2));
  FILE *ptr1 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byAtNum(ptr1,atnm3));
  FILE *ptr2 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, byAtNum(ptr2,atnm1));
  FILE *ptr3 = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, byAtNum(ptr3,atnm4));
}


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
  RUN_TEST(test_name);
  RUN_TEST(test_symb);
  RUN_TEST(test_atnum);

  /* Close the Unity Test Framework */
  return UNITY_END();
}


