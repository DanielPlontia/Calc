
#include "pch.h"
#include "../Project5/calc.cpp"

TEST(CalcTest, TestDivide) {
  EXPECT_EQ(2, getDivide(4, 2));
}
TEST(CalcTest, TestDivide_byZero) {
  EXPECT_THROW(getDivide(4, 0), std::string);
}