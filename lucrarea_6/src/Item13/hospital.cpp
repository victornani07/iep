#include <iostream>
#include "hospital.hpp"

using namespace std;

Hospital::Hospital(string name, int capacity) {
    cout << "The constructor of \"Hospital\" class has been called.\n" << endl;
    this->name = name;
    this->capacity = capacity;
}

string Hospital::getName() {
    return name;
}

int Hospital::getCapacity() {
    return capacity;
}

Hospital::~Hospital() {
    cout << "The destructor of \"Rectangle\" class has been called.\n" << endl;
}