#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    int attendance[100];
    cout << "Enter attendance for " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> attendance[i];
    }
    int sum = 0, highest = attendance[0], lowest = attendance[0], zeroCount = 0;
    for (int i = 0; i < n; i++) {
        sum += attendance[i];
        if (attendance[i] > highest) highest = attendance[i];
        if (attendance[i] < lowest) lowest = attendance[i];
        if (attendance[i] == 0) zeroCount++;
    }
    float average = (float)sum / n;
    int mode = attendance[0], maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (attendance[i] == attendance[j]) count++;
        if (count > maxCount) { maxCount = count; mode = attendance[i]; }
    }
    cout << "\nAverage Attendance = " << average;
    cout << "\nHighest Attendance = " << highest;
    cout << "\nLowest Attendance = " << lowest;
    cout << "\nStudents with Zero Attendance = " << zeroCount;
    if (maxCount > 1) cout << "\nMode = " << mode;
    else cout << "\nNo Mode";
    cout << "\nTime: Average O(n), Highest/Lowest O(n), Zero Count O(n), Mode O(n^2)";
    cout << "\nSpace: O(1)";
    return 0;
}