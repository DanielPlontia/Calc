#include "pch.h"
#include "../Project5/calc.cpp"

TEST(Calc, GopTest_Normal) {
    Calc* calc = new Calc();
    EXPECT_EQ(4, calc->getGop(1, 4));
}

TEST(Calc, GopTest_Zero) {
    Calc* calc = new Calc();
    EXPECT_EQ(4, calc->getGop(1, 4));
}

TEST(Calc, GopTest_Negetive) {
    Calc* calc = new Calc();
    EXPECT_EQ(-4, calc->getGop(-1, 4));
}

TEST(Calc, GopTest_All_Negetive) {
    Calc* calc = new Calc();
    EXPECT_EQ(4, calc->getGop(-1, -4));
}

TEST(CalcTest, TestDivide) {
    Calc* calc = new Calc();
    EXPECT_EQ(2, calc->getDivide(4, 2));
}
TEST(CalcTest, TestDivide_byZero) {
    Calc* calc = new Calc();
    EXPECT_THROW(calc->getDivide(4, 0), std::string);
}