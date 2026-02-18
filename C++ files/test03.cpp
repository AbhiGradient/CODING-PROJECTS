#include <iostream>
#include <cstdlib>  // For system("cls") to clear screen (optional)

int main() {
    // Declare the variables
    int a, b, c, d, sum;

    // Ask for input and read values
    std::cout << "Enter first value: ";
    std::cin >> a;

    std::cout << "Enter second value: ";
    std::cin >> b;

    std::cout << "Enter third value: ";
    std::cin >> c;

    std::cout << "Enter fourth value: ";
    std::cin >> d;

    // Calculate the sum
    sum = a + b + c + d;

    // Output the final result
    std::cout << "Final output: " << sum << std::endl;

    // Optional: Clear screen (works for Windows, use system("clear") for Linux/macOS)
    system("cls"); // For Windows, clears the screen
    // system("clear"); // Uncomment this line for Linux/macOS

    // Wait for user input before exiting (like getch() in old code)
    std::cin.get(); // Pauses until the user presses Enter

    return 0;
}
