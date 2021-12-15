#include <iostream>
#include <mutex>
#include "lock.hpp"

using namespace std;

Lock::Lock(std::mutex* mutex) : mutex(mutex) {
    //   cout << "Locking the access from outside of this data." << endl;
       //     cout << "---------------------------------------------" << endl;
    this->mutex->lock();
}

Lock::~Lock() {
    //    cout << "Unlocking the access from outside of this data." << endl;
         //   cout << "---------------------------------------------" << endl << endl;
    this->mutex->unlock();
}