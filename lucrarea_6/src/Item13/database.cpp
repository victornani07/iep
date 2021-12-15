#include "database.hpp"
#include <iostream>

using namespace std;

Database::Database(string name, string type) {
    cout << "The constructor of \"Database\" class has been called.\n" << endl;
    this->name = name;
    this->type = type;
}

string Database::getName() {
    return name;
}

string Database::getType() {
    return type;
}

void Database::setName(string name) {
    this->name = name;
}

void Database::setType(string type) {
    this->type = type;
}

Database::~Database() {
    cout << "The destructor of \"Database\" class has been called.\n" << endl;
}