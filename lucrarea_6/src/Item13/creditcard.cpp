#include <iostream>
#include "creditcard.hpp"

using namespace std;

CreditCard* CreditCard::instance = nullptr;

CreditCard::CreditCard(string number, string owner) {
    this->number = number;
    this->owner = owner;
}

CreditCard* CreditCard::getInstance(string number, string owner) {
    if (instance == nullptr)
        instance = new CreditCard(number, owner);
    else
        cout << "An instance of CreditCard already exists." << endl;
    
    return instance;
}

string CreditCard::getNumber() {
    return number;
}

string CreditCard::getOwner() {
    return owner;
}