#include <iostream>
#include "GradeBook.h"
using namespace std;

int main() {
    GradeBook book;
    book.loadData();

    cout << "--- Students ---\n";
    book.showAll();

    cout << "\nSearch student: ";
    string name;
    cin >> name;

    int index = book.search(name);
    if (index != -1) {
        cout << "Student found!" << endl;
    } else {
        cout << "Not found!" << endl;
    }

    return 0;
}
