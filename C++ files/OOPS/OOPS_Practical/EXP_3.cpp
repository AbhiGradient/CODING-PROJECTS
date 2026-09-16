#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int age;

public:
    void getData()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void displayData()
    {
        cout << "\nStudent Information" << endl;
        cout << "Roll Number = " << rollNo << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.displayData();

    return 0;
}