#include <iostream>
int main(){
    char ch;

    std::cout << "Enter the character: " ;
    std::cin >> ch ;

    if (ch>='A' && ch<='Z'){
        std::cout << "the given character is a UPPERCASE ALPHABET" << std::endl;
    } else
    
    if (ch>='a' && ch<='z'){
        std::cout << "the given character is a lowercase alphabet" << std::endl;
    }  else
    
    if (ch>='0' && ch<='9'){
        std::cout << "the given character is a digit" << std::endl;
    } else{
         std::cout << "the given character is a special character" << std::endl;
    }



    return 0;
}