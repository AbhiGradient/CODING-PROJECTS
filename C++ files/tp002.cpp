#include <iostream>
int main(){
      int i, n;
      std::cout << "the number of terms= " ;
      std::cin >> n;

      for(i=1; i<=n ; i++) {
        if(i%2 != 0){
          std::cout  << i << "      " << std::endl;
        }
      } std::cout << std::endl;

      

      


  return 0;
}