#include  <iostream>

using namespace std;

int main()
{
   class student{
    public:
        string name;
        int age;
        int roll_no;  

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Roll No: "<<roll_no<<endl;
        }
   }

   cout << "Enter the number of students: " << endl;
   int n;
    cin >> n;
    cout << "Enter the details of students: " << endl;
    student s[n];
    cout << "Enter the name, age and roll number of each student: " << endl;
    for(int i=0; i<n; i++){
        cin >> s[i].name >> s[i].age >> s[i].roll_no;
    }
    cout << "The details of the students are: " << endl;
    for(int i=0; i<n; i++){
        s[i].display();
    }





     return 0;
}