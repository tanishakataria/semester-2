#include <iostream>
#include <string>
using namespace std;

// Abstract base class Vehicle
class Vehicle {
protected:
    string make;
    string model;
    int speed;

public:
    Vehicle(const string& mk, const string& md, int spd) : make(mk), model(md), speed(spd) {}

    // Pure virtual functions
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual double calculateFuelEfficiency() const = 0;

    // Concrete member functions
    string getMake() const {
        return make;
    }

    string getModel() const {
        return model;
    }

    int getSpeed() const {
        return speed;
    }
};

// Concrete subclass Car
class Car : public Vehicle {
private:
    double fuelCapacity;

public:
    Car(const string& mk, const string& md, int spd, double fuelCap) : Vehicle(mk, md, spd), fuelCapacity(fuelCap) {}

    void accelerate() override {
        speed += 10; // Accelerate by 10 units
    }

    void brake() override {
        speed -= 5; // Brake by 5 units
        if (speed < 0) {
            speed = 0; // Ensure speed doesn't go negative
        }
    }

    double calculateFuelEfficiency() const override {
        // Simple calculation for demonstration purposes
        return speed * fuelCapacity;
    }
};

// Concrete subclass Truck
class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck(const string& mk, const string& md, int spd, int cargoCap) : Vehicle(mk, md, spd), cargoCapacity(cargoCap) {}

    void accelerate() override {
        speed += 5; // Accelerate by 5 units
    }

    void brake() override {
        speed -= 3; // Brake by 3 units
        if (speed < 0) {
            speed = 0; // Ensure speed doesn't go negative
        }
    }

    double calculateFuelEfficiency() const override {
        // Simple calculation for demonstration purposes
        return speed * cargoCapacity;
    }
};

int main() {
    Car car("Toyota", "Camry", 60, 12.5); // Make: Toyota, Model: Camry, Speed: 60 mph, Fuel Capacity: 12.5
    Truck truck("Ford", "F150", 50, 1000); // Make: Ford, Model: F150, Speed: 50 mph, Cargo Capacity: 1000 lbs

    // Accelerate the car and the truck
    car.accelerate();
    truck.accelerate();

    // Display vehicle information
    cout << "Car Make: " << car.getMake() << ", Model: " << car.getModel() << ", Speed: " << car.getSpeed() << " mph" << endl;
    cout << "Truck Make: " << truck.getMake() << ", Model: " << truck.getModel() << ", Speed: " << truck.getSpeed() << " mph" << endl;

    // Calculate and display fuel efficiency
    cout << "Car Fuel Efficiency: " << car.calculateFuelEfficiency() << " mpg" << endl;
    cout << "Truck Fuel Efficiency: " << truck.calculateFuelEfficiency() << " lbs/mph" << endl;

    return 0;
}
