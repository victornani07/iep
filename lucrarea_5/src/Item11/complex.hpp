#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex {
    private:
        double real;
        double imaginary;

    public:
        Complex();
        Complex(double real, double imaginary);
        double getReal();
        double getImaginary();
        void setReal(double real);
        void setImaginary(double imaginary);
};

#endif