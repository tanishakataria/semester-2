#include <iostream>
using namespace std;

// Base class
class Convert {
protected:
    double val1; // Initial value
    double val2; // Converted value

public:
    Convert(double v1) : val1(v1), val2(0) {}
    virtual void compute() = 0; // Virtual function to perform conversion
};

// Derived class for converting liters to gallons
class L_to_G : public Convert {
public:
    L_to_G(double liters) : Convert(liters) {}

    void compute() override {
        val2 = val1 * 0.264172; // Conversion factor: 1 liter = 0.264172 gallons
    }
};

// Derived class for converting Fahrenheit to Celsius
class F_to_C : public Convert {
public:
    F_to_C(double fahrenheit) : Convert(fahrenheit) {}

    void compute() override {
        val2 = (val1 - 32) * 5 / 9; // Conversion formula: (Fahrenheit - 32) * 5/9 = Celsius
    }
};

int main() {
    // Creating objects for conversion
    Convert* conversions[2];

    L_to_G lg(4); // Convert 4 liters to gallons
    F_to_C fc(70); // Convert 70 Fahrenheit to Celsius

    conversions[0] = &lg;
    conversions[1] = &fc;

    // Performing conversions
    for (int i = 0; i < 2; i++) {
        conversions[i]->compute();
    }

    // Displaying results
    cout << "4 liters is equal to " << lg.val2 << " gallons." << endl;
    cout << "70 Fahrenheit is equal to " << fc.val2 << " Celsius." << endl;

    return 0;
}

