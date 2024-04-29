#include <iostream>

using namespace std;

class Shape {
private:
    double area;

public:
    Shape(double a) : area(a) {}

    double getArea() const {
        return area;
    }

    // Overloading the addition operator
    Shape operator+(const Shape& other) {
        double combinedArea = area + other.area;
        return Shape(combinedArea);
    }
};

int main() {
    // Creating two shape objects
    Shape shape1(25.5);
    Shape shape2(35.7);

    // Adding the areas of shape1 and shape2 using operator overloading
    Shape totalArea = shape1 + shape2;

    // Displaying the areas
    cout << "Area of Shape 1: " << shape1.getArea() << endl;
    cout << "Area of Shape 2: " << shape2.getArea() << endl;
    cout << "Combined Area: " << totalArea.getArea() << endl;

    return 0;
}
