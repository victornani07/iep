#include <iostream>
#include "complex.hpp"
#include "operation.hpp"
#include <math.h>

using namespace std;

Operation::Operation(Complex* complexNumber) {
    this->complexNumber = complexNumber;
}

Operation& Operation::operator=(const Operation& operation) {
    if (this == &operation) {
        cout << "Self assignment" << endl;
        return *this;
    }

    Complex* prevComplexNumber = complexNumber;
    delete prevComplexNumber;
    complexNumber = new Complex(*operation.complexNumber);

    return *this;
}

double Operation::getModulus() {
    double reSquared = (*complexNumber).getReal() * (*complexNumber).getReal();
    double imSquared = (*complexNumber).getImaginary() * (*complexNumber).getImaginary();
    double sum = reSquared + imSquared;

    return sqrt(sum);
}

Complex* Operation::getComplexNumber() {
    return this->complexNumber;
}

Operation::~Operation() {
    cout << "Operation class destructor has been called." << endl;
    delete complexNumber;
}
