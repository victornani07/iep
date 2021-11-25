#include <iostream>
#include "complex.hpp"

using namespace std;

Complex::Complex() : real(0), imaginary(0) {}

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

double Complex::getReal() {
    return real;
}

double Complex::getImaginary() {
    return imaginary;
}

void Complex::setReal(double real) {
    this->real = real;
}

void Complex::setImaginary(double imaginary) {
    this->imaginary = imaginary;
}