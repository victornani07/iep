#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <vector>
#include "student.hpp"

using namespace std;

class University {
    private:
        string name;
        int maxStudentsNumber;
        int studentsSoFar;
        vector<Student> students;
    
    public:
        University(string name, int maxStudentsNumber);
        University(const University& university) = delete;
        void addStudent(const Student& student);
        ~University();
        University& operator = (const University&) = delete;
        void displayStudents();
};

#endif
