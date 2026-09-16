#include <iostream>
#include <string>
using namespace std;

class Teacher {
      //properties/ attributes

private : 
    double salary; 

public:
    string name;
    string dept;
    string subject;


  /*  //non parameterized constructor
    Teacher(){
        dept = "AIDS";
    }
        */
Teacher(string n, string d, string s, double sal) {
    name = n;
    dept = d;
    subject = s;
    salary = sal;
}

    //methods / functions written inside the class/  member functions

    void changedept(string new_dept){
        dept = new_dept;
    }
    
//setter function to play with the priVATE VALUES
    void setsalary(double s){
        salary = s;
    }
//getter function to get with the priVATE VALUES
    double getsalary(){
        return salary;
    }

void info(){
    cout << "name: " <<name << endl;
    cout << "Subject: "<< subject << endl;
}

};




int main(){
    // cout << "Hello world" ;

    //Teacher t1;
    // Teacher t2;
    // Teacher t3;
    // Teacher t4;
    // Teacher t5;

  /*  t1.name = "Abhishek";
    t1.subject = "AIDS";
    // t1.dept  = "AIDS";
    t1.setsalary(70000);
    cout << t1.getsalary() << endl;

    
    cout << t1.name <<  endl;
    cout << t1.dept <<  endl;
    */

    Teacher t1 ("Abhishek", "CS","c++", 7000);
    t1.info();

    return 0;
}