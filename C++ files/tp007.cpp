#include <iostream>

int main() {
    int i, n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cout << i << "    "; 
    }

    std::cout << std::endl; 
    return 0;
}