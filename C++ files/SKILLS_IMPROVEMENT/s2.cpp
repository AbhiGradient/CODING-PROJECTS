#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int seats;
    string color;
    int size;
    string fuel;

void input(string n, int s, string c, int siz, string f){
    cout << "------------------------------------\n";
    cout << "Enter the name of the car: ";
    cin >> n;
    name = n;

    cout << "Enter the no. of seats: ";
    cin >> s;
    seats = s;

    cout << "Enter the color of the car: ";
    cin >> c;
    color = c;

    cout << "Enter the Engine size of the car: ";
    cin >> siz;
    size = siz;

    cout << "Enter the fuel type of the car: ";
    cin >> f;
    fuel = f;
    cout << "------------------------------------\n";

}

void output(Car car){
    cout << "------------------------------------\n";
    cout << "Car Details : " << endl;
    cout << "Name            : " << car.name << endl;
    cout << "Seats           : " << car.seats << endl;
    cout << "Color           : " << car.color << endl;
    cout << "Engine Size     : " << car.size << endl;
    cout << "Fuel Type       : " << car.fuel << endl;
    cout << "------------------------------------\n";

}

};

int main(){

    Car c1;
    c1.input(c1.name, c1.seats,c1.color, c1.size, c1.fuel);
    c1.output(c1);
    return 0;
    
}