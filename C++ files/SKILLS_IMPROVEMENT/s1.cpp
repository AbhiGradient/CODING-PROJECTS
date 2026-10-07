#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    float gpa;

    // void input(string n,int r,float g){
    //     name = n;
    //     roll = r;
    //     gpa = g;
    // } 
    
    void input(string n, int r, float g){
        cout << "------------------------------------------------------\n";
        cout << "Enter name of student: ";
        cin >> n;
        name = n;

        cout << "Enter student roll no.: ";
        cin >> r;
        roll = r;

        cout << "Enter student cgpa: ";
        cin >> g;
        gpa = g;
    }

    void display(Student n){
        cout << "------------------------------------------------------\n";
        cout << "Student details: \n";
        cout << "Name: " << n.name << "\t "<< "roll no.:" << n.roll << "\t" << "cgpa:" << n.gpa;
    }
 
};

int main (){
    cout << "hello world\n";

    Student s;
    s.input(s.name, s.roll, s.gpa);
    s.display(s);


    return 0;
} 