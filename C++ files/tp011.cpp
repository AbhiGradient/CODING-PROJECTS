#include <iostream>
using namespace std;
int main()
{
    int i, n;
    char ch;
  cout << "enter the character: ";
  cin >> ch;

  if(ch>='a' && ch<='z'){
      cout <<  "the entered character is a lowercase char";
  } else
  if(ch>='A' && ch<='Z') {
     cout <<  "the entered character is a uppercase char";
   }   else
  if(ch>='0' && ch<='9') {
     cout <<  "the entered character is a digit";
   }   else
   {
     cout <<  "the entered character is a special char";
   }
     return 0;
}




// #include <stdio.h>
// int main ()
// {
//   char ch;

//      printf("enter the character: ");
//  scanf("%c", &ch);

//   if(ch>='a' && ch<='z'){
//       printf("the entered character is a lowercase char");
//   } else
//   if(ch>='A' && ch<='Z') {
//      printf("the entered character is a uppercase char");
//    }   else
//   if(ch>='0' && ch<='9') {
//      printf("the entered character is digit");
//    }   else
//    {
//      printf("the entered character is a special char");
//    }
    
// return 0;
// }
