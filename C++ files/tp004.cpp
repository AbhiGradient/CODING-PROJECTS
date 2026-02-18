#include<iostream>
int main(){
     int i ,n;
     long fact=1;

     std::cout << "enter the number: ";
     std::cin >> n;

     for(i=1; i<=n; i++){
           fact = fact * i;


     } std::cout << fact  << std::endl;


    return 0;
}