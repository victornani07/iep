#include <iostream>
#include "src/Item10/tuple.hpp"
#include "src/Item11/complex.hpp"
#include "src/Item11/operation.hpp"
#include "src/Item12/planepoint.hpp"
#include "src/Item12/spacepoint.hpp"


using namespace std;

int main(void) {
    /* Item10
    Tuple tuple1;
    Tuple tuple2;
    Tuple tuple3(1, 2);

    (tuple1 = tuple2) = tuple3;

    cout << "Tuple 1: " << tuple1.getA() << " " << tuple1.getB() << endl;
    cout << "Tuple 2: " << tuple2.getA() << " " << tuple2.getB() << endl;
    cout << "Tuple 3: " << tuple3.getA() << " " << tuple3.getB() << endl;
   */

    /* Item11
    Operation operation1(new Complex(3, 4));
    Operation operation2(new Complex(6, 8));
    Operation* operation3 = &operation1;

    cout << operation1.getModulus() << endl;
    cout << operation3->getModulus() << endl;
    *operation3 = operation1;
    cout << operation3->getModulus() << endl;
    cout << operation1.getModulus() << endl << endl;

    *operation3 = operation2;
    cout << operation3->getModulus() << endl;
    */

    /* Item 12
    PlanePoint planePoint1(4, 5);
    PlanePoint planePoint2(planePoint1);
    PlanePoint planePoint3;
    planePoint3 = planePoint2;

    cout << endl;
    cout << planePoint1.getX() << " " << planePoint1.getY() << endl;
    cout << planePoint2.getX() << " " << planePoint2.getY() << endl;
    cout << planePoint3.getX() << " " << planePoint3.getY() << endl << endl;

    SpacePoint spacePoint1(1, 2, 3);
    SpacePoint spacePoint2(spacePoint1);
    SpacePoint spacePoint3;
    spacePoint3 = spacePoint1;

    cout << spacePoint1.getX() << " " << spacePoint1.getY() << " " << spacePoint1.getZ() << " " << endl;
    cout << spacePoint2.getX() << " " << spacePoint2.getY() << " " << spacePoint2.getZ() << " " << endl;
    cout << spacePoint3.getX() << " " << spacePoint3.getY() << " " << spacePoint3.getZ() << " " << endl << endl;

    spacePoint3 = spacePoint3;
    */
}