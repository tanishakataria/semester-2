#include<iostream>
#include<string>
using namespace std;

class vehicle {
public:
    string make;
    string model;
    int year;
    
    // Constructor
    vehicle(string make, string model, int year): make(make), model(model), year(year) {}

    void display() {
        cout << "make: " << make << endl;
        cout << "model: " << model << endl;
        cout << "year: " << year << endl;
    }
};

class car : public vehicle {
public:
    int nofdoor;
    int fuel;

    // Constructor
    car(int year, string make, string model, int nofdoor, int fuel): vehicle(make, model, year), nofdoor(nofdoor), fuel(fuel) {}

    void display() {
        vehicle::display();
        cout << "the no of door is: " << nofdoor << endl;
        cout << "fuel efficiency is: " << fuel << endl;
    }
};

class electriccar : public car {
public:
    int batterylife;

    // Constructor
    electriccar(int year, string make, string model, int nofdoor, int fuel, int batterylife): car(year, make, model, nofdoor, fuel), batterylife(batterylife) {}

    void display() {
        car::display();
        cout << "the battery life is now: " << batterylife << endl;
    }
};

int main() {
    electriccar e(2000, "Toyota", "Plastic", 4, 230, 45);
    e.display();
    return 0;
}
