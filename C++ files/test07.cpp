#include <iostream>
#include <string>

struct Person {
    std::string name;
    float salary;
};

int main() {
    Person e1;

    std::cout << "Enter the details of the employee:\n";
    std::cout << "Enter name = ";
    std::getline(std::cin, e1.name);
    std::cout << "Enter salary = ";
    std::cin >> e1.salary;

    std::cin.get(); // Flush leftover newline
    std::cin.get(); // Pause
    return 0;
}
