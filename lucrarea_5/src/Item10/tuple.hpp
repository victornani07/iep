#ifndef TUPLE_H
#define TUPLE_H

#include <iostream>

using namespace std;

class Tuple {
    private:
        int a;
        int b;
    
    public:
        Tuple() = default;
        Tuple(int a, int b);
        Tuple& operator= (const Tuple&);
        int getA();
        int getB();
};

#endif