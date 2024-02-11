#include <iostream>
using namespace std;

// Function to calculate Greatest Common Divisor (GCD) using Euclidean algorithm recursively
int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    return calculateGCD(b, a % b);
}

// Function to calculate Least Common Multiple (LCM) using GCD
int calculateLCM(int a, int b) {
    // LCM * GCD = a * b
    return (a * b) / calculateGCD(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << calculateGCD(num1, num2) << endl;

    // Calculate and display LCM
    cout << "LCM of " << num1 << " and " << num2 << " is: " << calculateLCM(num1, num2) << endl;

    return 0;
}
