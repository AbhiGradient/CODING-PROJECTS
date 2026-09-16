#include <iostream>
using namespace std;

class Person
{
protected:
    char name[30];

public:
    Person()
    {
        cout << "Person constructor called" << endl;
    }

    ~Person()
    {
        cout << "Person destructor called" << endl;
    }
};

class Student : virtual public Person
{
protected:
    int rollNo;

public:
    Student()
    {
        cout << "Student constructor called" << endl;
    }

    void setStudent()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void display()
    {
        cout << "Student Name = " << name << endl;
        cout << "Roll Number = " << rollNo << endl;
    }

    ~Student()
    {
        cout << "Student destructor called" << endl;
    }
};

class Teacher : virtual public Person
{
protected:
    int id;

public:
    Teacher()
    {
        cout << "Teacher constructor called" << endl;
    }

    void setTeacher()
    {
        cout << "Enter teacher name: ";
        cin >> name;

        cout << "Enter teacher ID: ";
        cin >> id;
    }

    void display()
    {
        cout << "Teacher Name = " << name << endl;
        cout << "Teacher ID = " << id << endl;
    }

    ~Teacher()
    {
        cout << "Teacher destructor called" << endl;
    }
};

class Monitor : public Student, public Teacher
{
public:
    Monitor()
    {
        cout << "Monitor constructor called" << endl;
    }

    void setMonitor()
    {
        cout << "Enter monitor name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter teacher ID: ";
        cin >> id;
    }

    void display()
    {
        cout << "\nMonitor Information" << endl;
        cout << "Name = " << name << endl;
        cout << "Roll Number = " << rollNo << endl;
        cout << "Teacher ID = " << id << endl;
    }

    ~Monitor()
    {
        cout << "Monitor destructor called" << endl;
    }
};

class College : public Student
{
public:
    void collegeDisplay()
    {
        cout << "\nCollege Student" << endl;
        cout << "Name = " << name << endl;
        cout << "Roll Number = " << rollNo << endl;
    }
};

class FinalStudent : public College
{
public:
    void finalDisplay()
    {
        cout << "\nMultilevel Inheritance" << endl;
        cout << "Name = " << name << endl;
        cout << "Roll Number = " << rollNo << endl;
    }
};

int main()
{
    cout << "Single Inheritance" << endl;

    Student s;
    s.setStudent();
    s.display();

    cout << "\nMultilevel Inheritance" << endl;

    FinalStudent f;
    f.setStudent();
    f.finalDisplay();

    cout << "\nHierarchical Inheritance" << endl;

    College c;
    c.setStudent();
    c.collegeDisplay();

    cout << "\nMultiple and Hybrid Inheritance" << endl;

    Monitor m;
    m.setMonitor();
    m.display();

    return 0;
}