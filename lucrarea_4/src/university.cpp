#include "university.hpp"
#include "student.hpp"
#include <iostream>

using namespace std; 

University::University(string name, int maxStudentsNumber) {
    this->name = name;
    this->maxStudentsNumber = maxStudentsNumber;
    studentsSoFar = 0;

    cout << this->name << " can accept a number of students equal to " << this->maxStudentsNumber << ". ";
    cout << "Currently, it has " << this->studentsSoFar << " students." << endl;
}

void University::addStudent(const Student& student) {
    cout << "Adding a student." << endl;
    if (studentsSoFar < maxStudentsNumber) {
        students.push_back(student);
        ++studentsSoFar;
    }
    else
        cout << "Sorry. We have reached the maximum number of students. We can not accept anymore." << endl;

    cout << endl;
}

University::~University() {
    cout << "The destructor of \"University\" class was called." << endl << endl;
}

void University::displayStudents() {
    cout << "Display the information of each student in the university: " << endl;
    for(int i = 0; i < students.size(); ++i)
        students[i].displayInformation();

    cout << endl;
}