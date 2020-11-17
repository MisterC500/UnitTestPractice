/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_pal)
{
  Practice obj;
  bool actual = obj.isPalindrome("aba");
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_descending)
{
  Practice obj;
  int first = 200;
  int second = 50;
  int third = 100;
  obj.sortDescending(first, second,third);
  ASSERT_GE(first,second);
  ASSERT_GE(second, third);
}

TEST(PracticeTest, is_desc)
{
  Practice obj;
  int first = 0;
  int second = 2;
  int third = 0;
  bool actual = obj.sortDescending(first, second,third);
  ASSERT_TRUE(actual);
}

