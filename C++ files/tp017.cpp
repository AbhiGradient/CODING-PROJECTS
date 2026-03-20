#include <iostream>
using namespace std;

void swap(int * pa, int * pb){
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(){
    int a, b;
    cout << "Enter your no.: " ;
    cin >> a >> b;

    cout << swap(a, b);
    return 0;
}
