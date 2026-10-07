#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int age;
    string email;
    string ZPRN;
    char division;

public:
    void getData()
    {
        cout <<"------------------------------------------" << endl;
        cout << "\n \t Enter student details: " << endl;
        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter email: ";
        cin >> email;

        cout << "Enter ZPRN: ";
        cin >> ZPRN;

        cout << "Enter division: ";
        cin >> division;
    }

    void displayData()
    {
        cout <<"------------------------------------------" << endl;
        cout << "\n \t Student Information: " << endl;
        cout << "Roll Number = " << rollNo << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Email = " << email << endl;
        cout << "ZPRN = " << ZPRN << endl;
        cout << "Division = " << division << endl;
        cout <<"------------------------------------------" << endl;
    }
};

int main()
{
    Student abhishek;
    abhishek.getData();
    abhishek.displayData();

    Student sarth;
    sarth.getData();
    sarth.displayData();


    return 0;
}