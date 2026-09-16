#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "1. Division by zero" << endl;
    cout << "2. Negative number" << endl;
    cout << "3. Invalid choice" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    try
    {
        if (choice == 1)
        {
            throw 10;
        }
        else if (choice == 2)
        {
            throw 10.5f;
        }
        else if (choice == 3)
        {
            throw 'A';
        }
        else
        {
            cout << "No exception occurred" << endl;
        }
    }
    catch (int)
    {
        cout << "Exception caught: Division by zero" << endl;
    }
    catch (float)
    {
        cout << "Exception caught: Negative number is not allowed" << endl;
    }
    catch (char)
    {
        cout << "Exception caught: Invalid choice" << endl;
    }

    cout << "Program executed successfully";

    return 0;
}