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

TEST(Calc, sumsumTest_Normal) {
    Calc* calc = new Calc();
    EXPECT_EQ(3, calc->getSumSum(1, 1, 1));
}

TEST(Calc, sumsumTest_Negative) {
    Calc* calc = new Calc();
    EXPECT_EQ(-3, calc->getSumSum(-1, -1, -1));
}

TEST(Calc, sumsumTest_complex) {
    Calc* calc = new Calc();
    EXPECT_EQ(-2, calc->getSumSum(-1, 2, -3));
}

TEST(Calc, sumsumTest_zeroSum) {
    Calc* calc = new Calc();
    EXPECT_EQ(0, calc->getSumSum(-1, 2, -1));
}