#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include <string>	  //included for the string tests

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {	//given
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero){		//test is 0 can be taken
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpStringifyZero){		//test if string of zero can be taken
    Op* test = new Op(0);
    std::string zero = "0";
    EXPECT_EQ(test->stringify(), zero);
}

TEST(OpTest, OpStringifyDoubleEightPtTwo) { 	//test id doubles can be taken
    Op* test = new Op(8.2);
    std::string eightPtTwo = "8.2";
    EXPECT_EQ(test->stringify(), eightPtTwo);
}

TEST(OpTest, OpEvaluateNegEight){	//test is negatives can be taken
    Op* test = new Op(-8);
    EXPECT_EQ(test->evaluate(), -8);
}

#endif //__OP_TEST_HPP__
