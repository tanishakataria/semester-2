#include <iostream>

using namespace std;

// Forward declaration of printClass
class printClass;

// Class declaration for perimeter
class perimeter {
private:
    int length;
    int breadth;

public:
    perimeter(int l, int b) : length(l), breadth(b) {}

    // Declaration of printPerimeter as friend function
    friend void printPerimeter(const perimeter& obj);
};

// Definition of printPerimeter function (friend of perimeter class)
void printPerimeter(const perimeter& obj) {
    int p = 2 * (obj.length + obj.breadth);
    cout << "Perimeter: " << p << endl;
}

int main() {
    // Create an object of perimeter class
    perimeter rect(5, 4);

    // Call printPerimeter function passing the object of perimeter class
    printPerimeter(rect);

    return 0;
}
