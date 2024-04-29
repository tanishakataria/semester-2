#include <iostream>

using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Overloading prefix decrement operator
    Number& operator--() {
        value *= 4;
        return *this;
    }

    // Overloading postfix decrement operator
    Number operator--(int) {
        Number temp = *this;
        value /= 4;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(16);

    cout << "Original Value:" << endl;
    num.display();

    // Prefix decrement
    --num;
    cout << "After Prefix Decrement:" << endl;
    num.display();

    // Postfix decrement
    num--;
    cout << "After Postfix Decrement:" << endl;
    num.display();

    return 0;
}
