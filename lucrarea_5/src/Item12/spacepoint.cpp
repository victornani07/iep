#include <iostream>
#include "planepoint.hpp"
#include "spacepoint.hpp"

using namespace std;

SpacePoint::SpacePoint() : PlanePoint(), z(0) {
    cout << "Derived class default constructor has been called." << endl << endl;
}

SpacePoint::SpacePoint(int x, int y, int z) : PlanePoint(x, y), z(z) {
    cout << "Derived class parametrized constructor has been called." << endl << endl;
} 

SpacePoint::SpacePoint(const SpacePoint& spacePoint) : PlanePoint(spacePoint), z(spacePoint.z) {
    cout << "Derived class copy constructor has been called." << endl << endl;
}

SpacePoint& SpacePoint::operator=(const SpacePoint& spacePoint) {
    PlanePoint::operator=(spacePoint);
    z = spacePoint.z;

    cout << "Derived class copy assignment has been called." << endl << endl;

    return *this;
}

int SpacePoint::getZ() {
    return z;
}

void SpacePoint::setZ(int z) {
    this->z = z;
}