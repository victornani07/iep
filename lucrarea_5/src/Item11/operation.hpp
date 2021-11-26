#ifndef OPERATION_H
#define OPERATION_H

#include "complex.hpp"
#include <iostream>

using namespace std;

class Operation {
    private:
        Complex *complexNumber;

    public:
        Operation() = default;
        Operation(Complex* complexNumber);
        Operation& operator= (const Operation&);  
        Complex* getComplexNumber();
        double getModulus();  
        ~Operation();
};

#endif
