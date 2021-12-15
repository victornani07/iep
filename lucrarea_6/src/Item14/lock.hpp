#ifndef LOCK_HPP
#define LOCK_HPP

#include <iostream>
#include <mutex>

using namespace std;

class Lock {
    private:
        mutex* mutex;
    
    public:
        Lock(std::mutex* mutex);
        Lock(const Lock& lock) = delete;
        Lock& operator=(const Lock&) = delete;
        ~Lock();

};

#endif