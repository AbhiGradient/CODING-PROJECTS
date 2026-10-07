#include <iostream> 
#include <string> 
using namespace std; 
 
class Student 
{ 
private: 
    string name; 
    int rollNumber; 
    float marks; 
 
public: 
    Student() 
    { 
        name = "Unknown"; 
        rollNumber = 0; 
        marks = 0.0; 
        cout << "Default Constructor Called" << endl; 
    } 
 
    Student(string n, int r, float m) 
    { 
        name = n; 
        rollNumber = r; 
        marks = m; 
        cout << "Parameterized Constructor Called" << endl; 
    } 
 
    Student(const Student &s) 
    { 
        name = s.name; 
        rollNumber = s.rollNumber; 
        marks = s.marks; 
        cout << "Copy Constructor Called" << endl; 
 
    } 
 
    void display() 
    { 
        cout << "\nName        : " << name << endl; 
        cout << "Roll Number : " << rollNumber << endl; 
        cout << "Marks       : " << marks << endl; 
    } 
 
    ~Student() 
    { 
        cout << "Destructor Called for " << name << endl; 
    } 
}; 
 
int main() 
{ 
    Student student1; 
 
    Student student2("Abhishek", 101, 101.99); 
 
    Student student3 = student2; 
 
    cout << "\nStudent 1 Details:"; 
    student1.display(); 
 
    cout << "\nStudent 2 Details:"; 
    student2.display(); 
 
    cout << "\nStudent 3 Details:"; 
    student3.display(); 
 
    return 0; 
} 
