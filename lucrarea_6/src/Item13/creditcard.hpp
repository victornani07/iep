#ifndef CREDITCARD_HPP
#define CREDITCARD_HPP

#include <iostream>

using namespace std;

class CreditCard {
    private:
        string number;
        string owner;
        static CreditCard* instance;

        CreditCard(string number, string owner);

    public:
        CreditCard(const CreditCard& creditCard) = delete;
        CreditCard() = delete;
        CreditCard& operator=(const CreditCard&) = delete;
        static CreditCard* getInstance(string number, string owner);
        string getNumber();
        string getOwner();
};

#endif