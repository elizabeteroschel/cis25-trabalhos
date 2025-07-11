#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
    name = "Unknown";
    grade = 0;
}

Student::Student(string n, int g) {
    name = n;
    grade = g;
}

string Student::getName() const {
    return name;
}

int Student::getGrade() const {
    return grade;
}

void Student::display() const {
    cout << "Name: " << name << ", Grade: " << grade << endl;
}
