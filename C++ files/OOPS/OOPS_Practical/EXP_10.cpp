#include <iostream>
using namespace std;

int main()
{
    int a, b, result;

    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }

        result = a / b;
        cout << "Result = " << result << endl;
    }
    catch (int)
    {
        cout << "Exception: Division by zero is not allowed" << endl;
    }

    cout << "Program executed successfully";

    return 0;
}