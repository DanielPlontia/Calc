#include "pch.h"
#include "../Project10/calcl.cpp"

TEST(TestCaseName, Minus) {
	Calc cal;
	int ans = cal.getMinus(2, 1);
	EXPECT_EQ(ans, 1);
}