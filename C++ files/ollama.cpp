#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The greatest number is: " << max(max(a, b), c) << endl;
    return 0;
}