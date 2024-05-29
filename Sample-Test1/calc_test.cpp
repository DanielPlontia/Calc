
#include "pch.h"
#include "../Project5/calc.cpp"

TEST(CalcTest, TestDivide) {
  EXPECT_EQ(2, getDivide(4, 2));
}