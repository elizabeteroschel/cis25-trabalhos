#include "GradeBook.h"
#include <iostream>
#include <fstream>
using namespace std;

GradeBook::GradeBook() {
    size = 4; // número fixo para simplificar
    students = new Student[size];
}

GradeBook::~GradeBook() {
    delete[] students;
}

void GradeBook::loadData() {
    ifstream file("students.txt");
    string name;
    int grade;

    for (int i = 0; i < size && file >> name >> grade; i++) {
        students[i] = Student(name, grade);
    }

    file.close();
}

void GradeBook::showAll() const {
    for (int i = 0; i < size; i++) {
        students[i].display();
    }
}

int GradeBook::search(string name) const {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (students[mid].getName() == name) return mid;
        else if (students[mid].getName() < name) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
