#include <iostream>
int main(){
    int i, n;
    int a=0, b=1, c;

    std::cout << "enter the value of n:  " ;
    std::cin >> n;

    std::cout << "Fibonacci series: " ;

    for (i=1; i<=n; i++){
        std::cout << a << "    ";

        c = a + b;
        a = b;
        b = c;
    }
   





    return 0;
}