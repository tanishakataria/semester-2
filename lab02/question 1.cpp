#include <iostream>
#include <string>
using namespace std;
class BoardMarker {
private:
    string brand;
    string shade;
    bool refillable;
    bool ink_status;

public:
    BoardMarker(string b, string s, bool r, bool i) {
        brand = b;
        shade = s;
        refillable = r;
        ink_status = i;
    }

    string getBrand() {
        return brand;
    }

    string getShade() {
        return shade;
    }

    bool isRefillable() {
        return refillable;
    }

    bool hasInk() {
        return ink_status;
    }

    void setBrand(string b) {
        brand = b;
    }

    void setShade(string s) {
        shade = s;
    }

    void setRefillable(bool r) {
        refillable = r;
    }

    void setInkStatus(bool i) {
        ink_status = i;
    }

    void write() {
        if (ink_status)
            cout << "Writing..." << endl;
        else
            cout << "Ink has run out. Refill required." << endl;
    }

    void refill() {
        if (refillable) {
            ink_status = true;
         cout << "Refilled successfully." << endl;
        } else {
            cout << "This marker cannot be refilled." << endl;
        }
    }
};

int main() {
    BoardMarker marker("Dollar", "Black", true, true);
    marker.write();

   
    marker.setInkStatus(false);
    marker.write();

    marker.refill();
    marker.write();

    return 0;
}
