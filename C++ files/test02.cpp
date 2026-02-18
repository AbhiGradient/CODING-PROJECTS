#include <iostream>
#include <cstdlib>  // For system("cls")

int main()
{
    // Clear the console screen (for Windows)
    system("cls");

    int a = 50;
    std::cout << ++a << std::endl;

    // Wait for user input (pause the program)
    std::cin.get();

    return 0;
}
