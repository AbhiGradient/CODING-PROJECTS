#include <iostream>
using namespace std;

class Student;

class Result
{
    int marks;

public:
    Result()
    {
        marks = 85;
    }

    friend void displayMarks(Result r);
    friend class Student;
};

class Student
{
    int rollNo;

public:
    Student()
    {
        rollNo = 101;
    }

    void display(Result r)
    {
        cout << "Roll Number = " << rollNo << endl;
        cout << "Marks = " << r.marks << endl;
    }
};

void displayMarks(Result r)
{
    cout << "Marks using friend function = " << r.marks << endl;
}

int main()
{
    Result r;
    Student s;

    displayMarks(r);

    cout << "\nUsing friend class:" << endl;
    s.display(r);

    return 0;
}