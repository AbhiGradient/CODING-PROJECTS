#include <iostream>
using namespace std;

class Student
{
    int rollNo;

public:
    Student()
    {
        rollNo = 0;
        cout << "Default constructor called" << endl;
    }

    Student(int r)
    {
        rollNo = r;
        cout << "Parameterized constructor called" << endl;
    }

    Student(Student &s)
    {
        rollNo = s.rollNo;
        cout << "Copy constructor called" << endl;
    }

    void display()
    {
        cout << "Roll Number = " << rollNo << endl;
    }

    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    Student s2(101);
    s2.display();

    Student s3(s2);
    s3.display();

    return 0;
}