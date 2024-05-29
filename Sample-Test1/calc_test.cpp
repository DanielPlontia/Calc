#include "pch.h"
#include "../Project5/calc.cpp"

TEST(CalcTest, JegobTest) {
	int expected = 100;
	int input = 10;
	int actual = getZegop(input);
    EXPECT_EQ(actual, expected);
}