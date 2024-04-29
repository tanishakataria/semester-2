#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846; // Global constant representing pi

class Shape {
public:
    Shape() {} // Default constructor

    // Circle methods
    double calculateArea(double radius) {
        return PI * radius * radius;
    }

    double calculatePerimeter(double radius) {
        return 2 * PI * radius;
    }

    // Rectangle methods
    double calculateArea(double length, double width) {
        return length * width;
    }

    double calculatePerimeter(double length, double width) {
        return 2 * (length + width);
    }

    // Triangle methods
    double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }

    double calculatePerimeter(double side1, double side2, double side3) {
        return side1 + side2 + side3;
    }
};

int main() {
    Shape shape;

    // Circle
    double circle_radius = 5.0;
    cout << "Circle with radius " << circle_radius << ":\n";
    cout << "Area: " << shape.calculateArea(circle_radius) << endl;
    cout << "Perimeter: " << shape.calculatePerimeter(circle_radius) << endl;

    // Rectangle
    double rectangle_length = 4.0;
    double rectangle_width = 6.0;
    cout << "\nRectangle with length " << rectangle_length << " and width " << rectangle_width << ":\n";
    cout << "Area: " << shape.calculateArea(rectangle_length, rectangle_width) << endl;
    cout << "Perimeter: " << shape.calculatePerimeter(rectangle_length, rectangle_width) << endl;

    // Triangle
    double triangle_base = 3.0;
    double triangle_height = 4.0;
    double triangle_side1 = 5.0;
    double triangle_side2 = 5.0;
    cout << "\nTriangle with base " << triangle_base << " and height " << triangle_height << ":\n";
    cout << "Area: " << shape.calculateArea(triangle_base, triangle_height) << endl;
    cout << "Perimeter: " << shape.calculatePerimeter(triangle_side1, triangle_side2, triangle_base) << endl;

    return 0;
}

