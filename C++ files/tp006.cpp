#include <iostream>
int main(){
    int number, original_number, last_digit, reversed_number=0;

    std::cout << "Enter the number";
    std::cin >> number;

    original_number = number;

    while (number>0){
        last_digit = number %10;
        reversed_number = reversed_number * 10 + last_digit;
        number = number / 10;

    }

    if (original_number == reversed_number) {
        std::cout << "the number is palindrome!!! " << std::endl;
    } else {
        std::cout << "the number is not palindrome " << std::endl;
    }





    return 0;
}