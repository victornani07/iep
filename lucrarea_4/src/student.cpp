#include "student.hpp"
#include <iostream>

using namespace std;

Student::Student(string firstName, string lastName, int age, string email) {
    this->age = new int;
    
    if(this->age == nullptr) 
        cout << "The memory was not properly allocated." << endl;
    
    this->firstName = firstName;
    this->lastName = lastName;
    *this->age = age;
    this->email = email;
    cout << "The student " << this->firstName << " " << this->lastName << ", " << *this->age << ", " << this->email << " was created." << endl;
}


Student::Student(const Student& student) {
    cout << "Copy constructor has been called." << endl;
    age = new int;
    firstName = student.firstName;
    lastName = student.lastName;
    *age = *student.age;
    email = student.email;
}

void Student::setAge(int age) {
    *this->age = age;
}

void Student::displayInformation() {
    cout << firstName << " " << lastName << ", " << *age << ", " << email << "." << endl;
}

Student::~Student() {
    cout << "The destructor of \"Student\" has been called." << endl;
    
    if(this->age != nullptr)
        delete age;
}
