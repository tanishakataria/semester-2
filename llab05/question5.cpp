#include<iostream>
#include<string>
using namespace std;

// Forward declarations
class Engine;
class Wheel;
class Headlight;
class Steering;

// Engine class
class Engine {
private:
    string enginetype;

public:
    Engine(string type) : enginetype(type) {}

    string getenginetype() {
        return enginetype;
    }
};

// Wheel class
class Wheel {
private:
    int size;

public:
    Wheel(int wheelSize) : size(wheelSize) {}

    int getsize() {
        return size;
    }
};

// Headlight class
class Headlight {
private:
    string type;

public:
    Headlight(string headtype) : type(headtype) {}

    string gettype() {
        return type;
    }
};

// Steering class
class Steering {
private:
    string type;

public:
    Steering(string steeringtype) : type(steeringtype) {}

    string gettype() {
        return type;
    }
};

// Car class
class Car {
private:
    Engine* engine;
    Wheel* wheels[4];
    Headlight* headlights[2];
    Steering* steering;

public:
    Car(Engine* carEngine, Wheel* carWheels[], Headlight* carHeadlights[], Steering* carSteering) :
        engine(carEngine), steering(carSteering) {
            for(int i = 0; i < 4; ++i)
                wheels[i] = carWheels[i];
            for(int i = 0; i < 2; ++i)
                headlights[i] = carHeadlights[i];
        }

    void display() {
        cout << "Car details:" << endl;
        cout << "Engine type: " << engine->getenginetype() << endl;
        cout << "Steering type: " << steering->gettype() << endl;
        cout << "Wheel types:" << endl;
        for (int i = 0; i < 4; ++i) {
            cout << wheels[i]->getsize() << endl;
        }
        cout << "Headlight types:" << endl;
        for (int i = 0; i < 2; ++i) {
            cout << headlights[i]->gettype() << endl;
        }
    }
};

int main() {
    Engine* carEngine = new Engine("V6");
    Wheel* carWheels[4] = { new Wheel(18), new Wheel(19), new Wheel(16), new Wheel(17) };
    Headlight* carHeadlights[2] = { new Headlight("LED"), new Headlight("ABD") };
    Steering* carSteering = new Steering("Power Steering");

    Car myCar(carEngine, carWheels, carHeadlights, carSteering);
    myCar.display();

    delete carEngine;
    for (int i = 0; i < 4; ++i) {
        delete carWheels[i];
    }
    for (int i = 0; i < 2; ++i) {
        delete carHeadlights[i];
    }
    delete carSteering;

    return 0;
}
