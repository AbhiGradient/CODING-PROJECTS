#include <iostream>

int main() {
    int i, n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            std::cout << "    " << i;
        }
    }

   
    return 0;
}
