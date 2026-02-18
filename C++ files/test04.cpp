#include <iostream>

int main() {
    int a = 10;
    char b = 'u';
    float c = 5.36f;
    double d = 4.69;

    std::cout << "Size of a (" << a << ") is = " << sizeof(a) << " Bytes" << std::endl;
    std::cout << "Size of b (" << b << ") is = " << sizeof(b) << " Bytes" << std::endl;
    std::cout << "Size of c (" << c << ") is = " << sizeof(c) << " Bytes" << std::endl;
    std::cout << "Size of d (" << d << ") is = " << sizeof(d) << " Bytes" << std::endl;

    return 0;
}
