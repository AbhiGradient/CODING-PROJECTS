#include <iostream>
int main(){
    int i, n, sum=0;
    std::cout << "enter the value of n:  " ;
    std::cin >> n;

    for (i=1; i<=n; i++){
        if(i%2 !=0){
            sum = sum + i;

        } 
    }

    std::cout << sum << std::endl;






    return 0;
}