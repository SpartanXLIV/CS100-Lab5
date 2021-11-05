#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include <string>

using namespace std; 

TEST(DivTest, DivEvaluateIntByInt) {
	Op* op1 = new Op(10);
	Op* op2 = new Op(5);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), 2);
}
TEST(DivTest, DivEvaluateZero) {
	Op* op1 = new Op(0);
	Op* op2 = new Op(5);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), 0);
}


TEST(DivTest, DivEvaluateDivideByZero){  //HOW DO YOU DIVIDE BY ZERO??
	Op* op1 = new Op(1);
	Op* op2 = new Op(0);
	Div* test = new Div(op1, op2);
	EXPECT_NE(test->evaluate(), 1);
}

TEST(DivTest, DivEvaluateSmallByBig) {
	Op* op1 = new Op(-5);
	Op* op2 = new Op(-10);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), 0.5);
}

TEST(DivTest, DivStringifyNegbyPos) {
	Op* op1 = new Op(-1);
	Op* op2 = new Op(10);
	string result = "-1 / 10";
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}

TEST(DivTest, DivStringifyDivideByZero) {
	Op* op1 = new Op(1);
	Op* op2 = new Op(0);
	string result = "1 / 0";
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}

#endif
