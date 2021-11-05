#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"
#include <string>

using namespace std; 

TEST(SubTest, SubEvaluateTwoInts) {
	Op* op1 = new Op(10);
	Op* op2 = new Op(5);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), 5);
}

TEST(SubTest, SubEvaluateSmallMinusBig) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(8);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), -6);
}

TEST(SubTest, SubStringifyNegMinusPos) {
	Op* op1 = new Op(-1);
	Op* op2 = new Op(5);
	string result = "-1 - 5";
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}

TEST(SubTest, SubStringifyDoubleMinusDouble) {
	Op* op1 = new Op(-2.5);
	Op* op2 = new Op(-5.5);
	string result = "-2.5 - -5.5";
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}

#endif
