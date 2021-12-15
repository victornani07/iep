#include <iostream>
#include <memory>
#include <mutex>
#include <thread>
#include "src/Item13/hospital.hpp"
#include "src/Item13/database.hpp"
#include "src/Item13/creditcard.hpp"
#include "src/Item14/lock.hpp"

using namespace std;

/*
void processData(std::mutex* mutex, string data) {
    Lock lock(mutex);

    for(int i = 0; i < 3; ++i) 
        cout << i << " ";

    cout << endl;
}
*/

int main(void) {
    /*
    unique_ptr<Hospital> pHospital1(new Hospital("Oncohelp", 1000));
    
    cout << pHospital1->getName() << endl;
    cout << pHospital1->getCapacity() << endl << endl;

    unique_ptr<Hospital> pHospital2;
    pHospital2 = move(pHospital1);

    cout << pHospital2->getName() << endl;
    cout << pHospital2->getCapacity() << endl << endl;

    shared_ptr<Database> pDatabase1(new Database("Patients", "mySQL"));
    
    cout << pDatabase1->getName() << endl;
    cout << pDatabase1->getType() << endl;

    shared_ptr<Database> pDatabase2;
    pDatabase2 = pDatabase1;

    cout << pDatabase2->getName() << endl;
    cout << pDatabase2->getType() << endl << endl;

    pDatabase2->setName("Oncohelp patients");

    cout << pDatabase1->getName() << endl;
    cout << pDatabase1->getType() << endl;
    cout << pDatabase2->getName() << endl;
    cout << pDatabase2->getType() << endl << endl;
    */

    /*
    CreditCard* creditCard1 = CreditCard::getInstance("1000400030002000", "Victor Nani");
    cout << creditCard1->getNumber() << endl;
    cout << creditCard1->getOwner() << endl;

    CreditCard* creditCard2 = CreditCard::getInstance("1000400030002000", "Victor Nani");
    cout << creditCard2->getNumber() << endl;
    cout << creditCard2->getOwner() << endl;
    */

    /*
    std::mutex mtx;
    std::mutex *m = &mtx;

    std::thread th1 (processData, m);
    std::thread th2 (processData, m);

    th1.join();
    th2.join();
    */
}