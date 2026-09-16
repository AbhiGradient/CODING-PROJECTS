#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number()
    {
        value = 0;
    }

    Number(int v)
    {
        value = v;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }

    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    Number operator+(Number n)
    {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);
    Number n3;

    cout << "Function Overloading" << endl;
    cout << "Sum of 2 numbers = " << n3.add(10, 20) << endl;
    cout << "Sum of 3 numbers = " << n3.add(10, 20, 30) << endl;

    cout << "\nOperator Overloading" << endl;
    n3 = n1 + n2;
    n3.display();

    return 0;
}