#pragma once
#include <string>
using namespace std;

class Student {
private:
    string name;
    int grade;

public:
    Student();
    Student(string n, int g);
    string getName() const;
    int getGrade() const;
    void display() const;
};
