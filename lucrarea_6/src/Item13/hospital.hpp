#ifndef HOSPITAL_HPP
#define HOSPITAL_HPP

#include <iostream>

using namespace std;

class Hospital {
    private:
        string name;
        int capacity;

    public:
        Hospital(string name, int capacity);
        string getName();
        int getCapacity();
        ~Hospital();
};

#endif