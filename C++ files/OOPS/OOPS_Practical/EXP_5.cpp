#include <iostream>
using namespace std;

class STUDENT
{
    string name;
    int marks[5];
    int total;
    int maximum;

public:
    void assign()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }

        maximum = 500;
    }

    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }
    }

    void display()
    {
        cout << "\nStudent Name = " << name << endl;
        cout << "Marks = ";

        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << endl;
        cout << "Total Marks = " << total << endl;
        cout << "Maximum Marks = " << maximum << endl;
        cout << "Average Marks = " << (float)total / 5 << endl;
    }
};

int main()
{
    STUDENT s;

    s.assign();
    s.calculate();
    s.display();

    return 0;
}