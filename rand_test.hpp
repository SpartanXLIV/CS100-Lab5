#ifndef __RAND__TEST_HPP__
#define __RAND__TEST_HPP__

#include "gtest/gtest.h"
#include "rand.hpp"
#include <string>
#include <stdlib.h>



TEST(RandTest, RandEvalutateLessThan101){
    Rand* test = new Rand();
    EXPECT_LT(test->evaluate(), 101);
}

TEST(RandTest, RandEvaluateGreaterThanNegOne){
     Rand* test = new Rand();
     EXPECT_GT(test->evaluate(), -1);
}

TEST(RandTest, RandEvauateLTAndGTCheck){
    Rand* test = new Rand();
    EXPECT_TRUE(test->evaluate() >= 0 && test->evaluate() < 100);
}



#endif
