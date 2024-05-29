#include "pch.h"
#include "../Project5/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Calc, GetSum) {
	int expected = 3;
	int result = getSum(1, 2);
	EXPECT_EQ(expected, result);
}