#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float gpa;

    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        roll = r;
        // gpa = g;
    }

    Student(){    //default constructor

    }

    Student (string n, int r, float g){  //multiple constructors are possible
        name = n;
        roll = r;
        gpa = g;  // the constructors will get chaged and used as per the inputs
    }

    // Display function
    void display() {
        cout << "------------------------------------------------------\n";
        cout << "Student details: \n";
        cout << "Name: " << name << "\t"
             << "Roll no.: " << roll << "\t"
             << "CGPA: " << gpa << endl;
        cout << "------------------------------------------------------\n";
    }
};

int main() {
   
    Student s1("Abhishek", 52);  // parameterized constructor 
s1.gpa = 10;  // cgpa is assiigned seperately using = operator
    s1.display();

    Student s2;    //default constructor
    s2.name = "sarth";
    s2.roll = 17;
    s2.gpa = 8.5;

    s2.display();

    Student s3("soham", 9, 8.9599);  // parameterized constructor 
//all 3 values are passed and the 2nd constructor is  used now
    s3.display();

    return 0;
}
