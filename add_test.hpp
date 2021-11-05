#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "add.hpp"
//#include "mult.hpp" //do some tests with mult

TEST(AddTest, AddEvaluateIntAndDouble){
   Op* op1 = new Op(7);
   Op* op2 = new Op(4.5);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->evaluate(), 11.5);
}

TEST(AddTest, AddStringifyDoubleAndInt){
   Op* op1 = new Op(2.22);
   Op* op2 = new Op(8);
   std::string result = "2.22 + 8";
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->stringify(), result);
}

TEST(AddTest, EvaluateTwoNegNums){
  Op* op1 = new Op(-4.33);		//op can take in a decimal or an int
  Op* op2 = new Op(-1);
  Add* test = new Add(op1, op2);
 EXPECT_EQ(test->evaluate(), -5.33);
}

TEST(AddTest, StringifyTwoNegNums){
  Op* op1 = new Op(-10);
  Op* op2 = new Op(-15.22);
  Add* test = new Add(op1, op2);
  std::string result = "-10 + -15.22";
 EXPECT_EQ(test->stringify(), result);
}

#endif
