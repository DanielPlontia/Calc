#include "pch.h"

TEST(TestCaseName, Minus) {
	int ans = getMinus(2,1);
	EXPECT_EQ(ans, 1);
}