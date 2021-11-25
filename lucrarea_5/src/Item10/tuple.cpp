#include "tuple.hpp"
#include <iostream>

using namespace std;

Tuple::Tuple(int a, int b) {
    this->a = a;
    this->b = b;
}

Tuple& Tuple::operator=(const Tuple& tuple) {
    a = tuple.a;
    b = tuple.b;

    return *this;
}

int Tuple::getA() {
    return a;
}

int Tuple::getB() {
    return b;
}