#include "pch.h"
#include "../Project5/calc.cpp"

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

TEST(CalcTest, JegobTest) {
	int expected = 100;
	int input = 10;
	int actual = getZegop(input);
    EXPECT_EQ(actual, expected);
}