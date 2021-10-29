#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return ""; }
};
class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
}
class SixOpMock : public Base {
    public:
    SixOpMock() {}
    
    virtual double evaluate() { return -6.0 }
    virtual string stringify() { return "-6.0"; }
}
class FiveOpMock : public Base {
    public:
    FiveOpMock() {}
    
    virtual double evaluate() { return 1000000.0 }
    virtual string stringify() { return "1000000.0"; }
}
class FourOpMock : public Base {
    public:
    FourOpMock() {}
    
    virtual double evaluate() { return 21 }
    virtual string stringify() { return "21" }
}
#endif //__OP_HPP__
