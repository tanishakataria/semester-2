#include <iostream>
using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    int capacity_liters;
    int capacity_ml;

public:
    WaterBottle(string company, string color, int liters, int ml) {
        this->company = company;
        this->color = color;
        this->capacity_liters = liters;
        this->capacity_ml = ml;
    }

    // Getter methods
    string getCompany() const {
        return company;
    }

    string getColor() const {
        return color;
    }

    int getCapacityLiters() const {
        return capacity_liters;
    }

    int getCapacityMl() const {
        return capacity_ml;
    }

    // Setter methods
    void setCompany(string company) {
        this->company = company;
    }

    void setColor(string color) {
        this->color = color;
    }

    void setCapacityLiters(int liters) {
        this->capacity_liters = liters;
    }

    void setCapacityMl(int ml) {
        this->capacity_ml = ml;
    }

   
    void updateWaterConsumption(int ml_consumed) {
        int total_ml = capacity_ml - ml_consumed;
        capacity_liters = total_ml / 1000;
        capacity_ml = total_ml % 1000;
    }

  
    void displayDetails() const {
        cout << "Company: " << company << ", Color: " << color << ", Capacity: " << capacity_liters << " liters " << capacity_ml << " ml" << endl;
    }
};

int main() {
    string company, color;
    int liters, ml, consumed_ml;

    cout << "Enter the company: ";
    cin >> company;
    cout << "Enter the color: ";
    cin >> color;
    cout << "Enter the capacity in liters: ";
    cin >> liters;
    cout << "Enter the capacity in milliliters: ";
    cin >> ml;

    WaterBottle bottle(company, color, liters, ml);

    cout << "Initial Bottle Details:" << endl;
    bottle.displayDetails();

    cout << "Enter the amount of water consumed in milliliters: ";
    cin >> consumed_ml;

    bottle.updateWaterConsumption(consumed_ml);

    cout << "Updated Bottle Details:" << endl;
    bottle.displayDetails();

    return 0;
}


