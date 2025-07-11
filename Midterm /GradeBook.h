#pragma once
#include "Student.h"

class GradeBook {
private:
    Student* students;  // ponteiro para array de Student
    int size;

public:
    GradeBook();
    ~GradeBook();
    void loadData();
    void showAll() const;
    int search(string name) const;
};
