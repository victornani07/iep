#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
    private:
        string firstName;
        string lastName;
        int* age;
        string email;

    public:
        Student(string firstName, string lastName, int age, string email);
        Student(const Student& student);
        Student& operator = (const Student&) = delete;
        void displayInformation();
        void setAge(int age);
        ~Student();
};

#endif