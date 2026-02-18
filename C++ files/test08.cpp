#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    if (a == b)
        std::cout << "TRUE" << std::endl;
    else
        std::cout << "FALSE, check your knowledge" << std::endl;

    std::cin.get(); // Flush newline
    std::cin.get(); // Pause like getch()

    return 0;
}
