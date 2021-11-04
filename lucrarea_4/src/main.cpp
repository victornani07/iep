#include <iostream>
#include "student.hpp"
#include "university.hpp"

using namespace std;

int main() {
    Student student1("Harry", "Potter", 22, "harry.potter@hogwarts.edu");
    Student student2("Hermione", "Granger", 21, "hermione.granger@hogwarts.edu");
    Student student3("Ron", "Weasley", 22, "ron.weasley@hogwarts.edu");

    cout << endl;

    University university("Oxford University", 10);

    cout << endl;

    university.addStudent(student1);
    university.addStudent(student2);
    university.addStudent(student3);

    university.displayStudents();
}