#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP

#include "gtest/gtest.h"
#include "mult.hpp"

TEST(MultTest, MultEvaluateIntTimesInt){
   Op* op1 = new Op(4);
   Op* op2 = new Op(5);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 20);
}

TEST(MultTest, MultStringifyDoubleTimesInt){
  Op* op1 = new Op(9.5);
  Op* op2 = new Op(3);
  std::string result = "9.5 * 3";
  Mult* test = new Mult (op1, op2);
  EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultEvaluateZero){
  Op* op1 = new Op(0.0);
  Op* op2 = new Op(2);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultEvaluateTwoNegNums){
  Op* op1 = new Op(-6);
  Op* op2 = new Op(-5);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), 30);
}

TEST(MultTest, MultEvaluateNegIntTimesPosDouble){
  Op* op1 = new Op(-2);
  Op* op2 = new Op(4.5);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), -9);
}

TEST(MultTest, MultStringifyNegIntAndNegDouble){
  Op* op1 = new Op(-20);
  Op* op2 = new Op(-5.5);
  Mult* test = new Mult(op1, op2);
  std::string result = "-20 * -5.5";
 EXPECT_EQ(test->stringify(), result);
}

#endif
