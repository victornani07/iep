#include <iostream>
#include "planepoint.hpp"

using namespace std;

PlanePoint::PlanePoint() : x(0), y(0) {
    cout << "Base class default constructor has been called." << endl;
}

PlanePoint::PlanePoint(int x, int y) {
    cout << "Base class parametrized constructor has been called." << endl;
    this->x = x;
    this->y = y;
}

PlanePoint::PlanePoint(const PlanePoint& planePoint) {
    cout << "Base class copy constructor has been called." << endl;
    x = planePoint.x;
    y = planePoint.y;
}

PlanePoint& PlanePoint::operator=(const PlanePoint& planePoint) {
    cout << "Base class copy assignment has been called." << endl;

    if(this == &planePoint) {
        cout << "Self assignment" << endl;
        return *this;
    }

    x = planePoint.x;
    y = planePoint.y;

    return *this;
}

int PlanePoint::getX() {
    return x;
}

int PlanePoint::getY() {
    return y;
}

void PlanePoint::setX(int x) {
    this->x = x;
}

void PlanePoint::setY(int y) {
    this->y = y;
}