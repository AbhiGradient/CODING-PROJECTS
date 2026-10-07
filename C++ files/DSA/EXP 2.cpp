#include <iostream>
using namespace std;

int linearSearch(int patient[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (patient[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int patient[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (patient[mid] == key)
            return mid;
        else if (patient[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int patient[] = {101, 105, 110, 115, 120, 125, 130};
    int n = 7;
    int key;

    cout << "Enter Patient ID to search: ";
    cin >> key;

    int result1 = linearSearch(patient, n, key);
    





if (result1 != -1)
        cout << "Linear Search: Patient ID found at position "
             << result1 + 1 << endl;
    else
        cout << "Linear Search: Patient ID not found." << endl;

    int result2 = binarySearch(patient, n, key);
    if (result2 != -1)
        cout << "Binary Search: Patient ID found at position "
             << result2 + 1 << endl;
    else
        cout << "Binary Search: Patient ID not found." << endl;

    return 0;
}
