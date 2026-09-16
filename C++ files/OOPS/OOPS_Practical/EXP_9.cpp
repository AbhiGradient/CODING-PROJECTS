#include <iostream>
using namespace std;

template <class T>
void sort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

template <class T>
void display(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main()
{
    int a[5];

    cout << "Enter 5 integer elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    sort(a, 5);

    cout << "Sorted elements are: ";
    display(a, 5);

    return 0;
}