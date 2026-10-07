#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int seats;
    string color;
    int size;
    string fuel;

    void input(){
        cout << "------------------------------------\n";
        cout << "Enter the name of the car: ";
        cin >> name;

        cout << "Enter the no. of seats: ";
        cin >> seats;

        cout << "Enter the color of the car: ";
        cin >> color;

        cout << "Enter the Engine size of the car: ";
        cin >> size;

        cout << "Enter the fuel type of the car: ";
        cin >> fuel;

        cout << "------------------------------------\n";
    }

    void output(){
        cout << "------------------------------------\n";
        cout << "Car Details : " << endl;
        cout << "Name            : " << name << endl;
        cout << "Seats           : " << seats << endl;
        cout << "Color           : " << color << endl;
        cout << "Engine Size     : " << size << endl;
        cout << "Fuel Type       : " << fuel << endl;
        cout << "------------------------------------\n";
    }
};

int main(){

    Car c1;

    c1.input();
    c1.output();

    return 0;
}