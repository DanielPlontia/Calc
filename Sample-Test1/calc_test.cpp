#include "pch.h"

TEST(Calc, Minus) {
	Calc* calc = new Calc();
	int ans = calc->getMinus(2, 1);
	EXPECT_EQ(ans, 1);
}

TEST(Calc, GetSum) {
    Calc* calc = new Calc();
    int expected = 3;
    int result = calc->getSum(1, 2);
    EXPECT_EQ(expected, result);
}

TEST(Calc, GopTest_Normal) {
    Calc *calc = new Calc();
    EXPECT_EQ(4, calc->getGop(1, 4));
}

TEST(Calc, GopTest_Zero) {
    Calc *calc = new Calc();
    EXPECT_EQ(4, calc->getGop(1, 4));
}

TEST(Calc, GopTest_Negetive) {
    Calc *calc = new Calc();
    EXPECT_EQ(-4, calc->getGop(-1, 4));
}

TEST(Calc, GopTest_All_Negetive) {
    Calc *calc = new Calc();
    EXPECT_EQ(4, calc->getGop(-1, -4));
}
