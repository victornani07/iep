#ifndef PLANEPOINT_H
#define PLANEPOINT_H

#include <iostream>

using namespace std;

class PlanePoint {
    protected:
        int x;
        int y;

    public:
        PlanePoint();
        PlanePoint(int x, int y);
        PlanePoint(const PlanePoint& planePoint);
        PlanePoint& operator=(const PlanePoint& planePoint);
        int getX();
        int getY();
        void setX(int x);
        void setY(int y);
};

#endif