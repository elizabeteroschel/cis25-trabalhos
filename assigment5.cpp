#include <iostream>
using namespace std;

struct Student { 
 int id; 
 string name; 
 double gpa; 
}; 
 
int main() { 
 // Declare an array of Student structs 
 Student students[3]; 
 // Initialize the elements of the array 
 students[0].id = 101;
students[0].name = "Michael";
students[0].gpa = 3.8;

students[1].id = 102;
students[1].name = "Lakisha";
students[1].gpa = 3.5;

students[2].id = 103;
students[2].name = "Charlie";
students[2].gpa = 3.9;


 // Access and print data from the array of structs 
 for (int i = 0; i < 3; ++i) { 
 cout << "Student ID: " << students[i].id  
<< ", Name: " << students[i].name  
<< ", GPA: " << students[i].gpa << std::endl; 
 } 
 
 return 0; 
} 
