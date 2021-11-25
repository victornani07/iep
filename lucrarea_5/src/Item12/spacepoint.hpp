#ifndef SPACEPOINT_H
#define SPACEPOINT_H

#include <iostream>
#include "planepoint.hpp"

using namespace std;

class SpacePoint : public PlanePoint {
    private:
        int z;
    
    public:
        SpacePoint();
        SpacePoint(int x, int y, int z);
        SpacePoint(const SpacePoint& spacePoint);
        SpacePoint& operator=(const SpacePoint& spacePoint);
        int getZ();
        void setZ(int z);
};

#endif 