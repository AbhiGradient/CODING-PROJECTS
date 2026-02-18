#include <iostream>  // Standard input/output

int main() {
    int marks;

    std::cout << "Enter your marks: ";
    std::cin >> marks;

    if (marks > 250) {
        std::cout << "CONGRATS! YOU ARE PASS" << std::endl;
    } else {
        std::cout << "SORRY, YOU ARE FAILURE! LOSER" << std::endl;
    }

    std::cin.get(); // Wait for Enter (flush input)
    std::cin.get(); // Pause like getch()

    return 0;
}
