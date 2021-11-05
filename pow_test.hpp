#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"
#include <string>

using namespace std; 

TEST(PowTest, PowEvaluateTwoPowTwo) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(2);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 4);
}
TEST(PowTest, PowStringifyTwoPowTwo) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(2);
	string result = "2 ** 2";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluatePowZeroEqualsOne) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(0);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 1);
}
TEST(PowTest, PowStringifyPowZeroEqualsOne) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(0);
	string result = "2 ** 0";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluateZeroBaseReturnsZero) {
	Op* op1 = new Op(0);
	Op* op2 = new Op(7);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 0);
}
TEST(PowTest, PowStringifyZeroBaseReturnsZero) {
	Op* op1 = new Op(0);
	Op* op2 = new Op(7);
	string result = "0 ** 7";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluateNegBaseEvenPower) {
	Op* op1 = new Op(-3);
	Op* op2 = new Op(2);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 9);
}
TEST(PowTest, PowStringifyNegBaseEvenPower) {
	Op* op1 = new Op(-3);
	Op* op2 = new Op(2);
	string result = "-3 ** 2";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluateNegBaseOddPower) {
	Op* op1 = new Op(-2);
	Op* op2 = new Op(3);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), -8);
}
TEST(PowTest, PowStringifyNegBaseOddPower) {
	Op* op1 = new Op(-2);
	Op* op2 = new Op(3);
	string result = "-2 ** 3";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluateNegPow) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(-2);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 0.25);
}
TEST(PowTest, PowStringifyNegPow) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(-2);
	string result = "2 ** -2";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}

#endif
