#include "pch.h"
#include "../Project5/calc.cpp"

TEST(Calc, GopTest_Normal) {
    Calc *calc = new Calc();
    EXPECT_EQ(4, calc->getGop(1, 4));
}