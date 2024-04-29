#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void displayProperties() const = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }

    void displayProperties() const override {
        cout << "Properties of the Circle:" << endl;
        cout << "- Area: " << fixed << setprecision(4) << area() << endl;
        cout << "- Perimeter: " << perimeter() << endl;
        cout << "- Diameter: " << 2 * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }

    void displayProperties() const override {
        double diagonal = sqrt(length * length + width * width);
        cout << "Properties of the Rectangle:" << endl;
        cout << "- Area: " << area() << endl;
        cout << "- Perimeter: " << perimeter() << endl;
        cout << "- Diagonal: " << diagonal << endl;
    }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
};

class Triangle : public Shape {
protected:
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side) : Triangle(side, side, side) {}

    double area() const override {
        double s = perimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    void displayProperties() const override {
        cout << "Properties of the Equilateral Triangle:" << endl;
        cout << "- Area: " << area() << endl;
        cout << "- Perimeter: " << perimeter() << endl;
    }
};

int main() {
    cout << "Welcome to the Geometry Competition Calculator!" << endl;
    string choice;

    do {
        cout << "Please select a shape:" << endl;
        cout << "1. Circle\n2. Rectangle\n3. Square\n4. Triangle" << endl;
        cout << "Enter your choice: ";
        int shapeChoice;
        cin >> shapeChoice;

        switch (shapeChoice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Shape* circle = new Circle(radius);
                circle->displayProperties();
                delete circle;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                Shape* rectangle = new Rectangle(length, width);
                rectangle->displayProperties();
                delete rectangle;
                break;
            }
            case 3: {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Shape* square = new Square(side);
                square->displayProperties();
                delete square;
                break;
            }
            case 4: {
                double side1, side2, side3;
                cout << "Enter the lengths of the three sides of the triangle: ";
                cin >> side1 >> side2 >> side3;
                Shape* triangle = new EquilateralTriangle(side1);
                triangle->displayProperties();
                delete triangle;
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to calculate properties for another shape? (yes/no): ";
        cin >> choice;
    } while (choice == "yes");

    cout << "Thank you for using the Geometry Competition Calculator!" << endl;
    return 0;
}
