#include <iostream>
#include <string>
using namespace std;

// Forward declarations
class MenuItem;
class Menu;
class Payment;
class Order;

// MenuItem class
class MenuItem {
private:
    string foodName;
    double price;

public:
    MenuItem(string foodname, double price) : foodName(foodname), price(price) {}

    string getFoodName() const {
        return foodName;
    }

    double getPrice() const {
        return price;
    }
};

// Menu class
class Menu {
private:
    MenuItem* items[10];
    int itemCount;

public:
    Menu() : itemCount(0) {}

    void addItem(MenuItem* item) {
        if (itemCount < 10) {
            items[itemCount++] = item;
        }
    }

    void displayMenu() const {
        cout << "Menu:" << endl;
        for (int i = 0; i < itemCount; ++i) {
            cout << items[i]->getFoodName() << " - $" << items[i]->getPrice() << endl;
        }
    }
};

// Payment class
class Payment {
private:
    double amount;

public:
    Payment(double totalAmount) : amount(totalAmount) {}

    double getAmount() const {
        return amount;
    }
};

// Order class
class Order {
private:
    MenuItem* items[10];
    int itemCount;
    Payment payment;

public:
    Order() : itemCount(0), payment(0) {}

    void addItem(MenuItem* item) {
        if (itemCount < 10) {
            items[itemCount++] = item;
        }
    }

    void setPayment(const Payment& orderPayment) {
        payment = orderPayment;
    }

    double getTotalAmount() const {
        double total = 0.0;
        for (int i = 0; i < itemCount; ++i) {
            total += items[i]->getPrice();
        }
        return total;
    }
};

// Restaurant class
class Restaurant {
private:
    Menu menu;

public:
    void addMenuItem(MenuItem* item) {
        menu.addItem(item);
    }

    void displayMenu() const {
        menu.displayMenu();
    }

    void placeOrder(Order& order) {
        double totalAmount = order.getTotalAmount();
        Payment payment(totalAmount);
        order.setPayment(payment);
        cout << "Order placed successfully. Total amount: $" << totalAmount << endl;
    }
};

int main() {
    // Create menu items
    MenuItem burger("Burger", 5.99);
    MenuItem pizza("Pizza", 8.99);
    MenuItem salad("Salad", 4.99);

    // Create restaurant
    Restaurant restaurant;

    // Add menu items to the restaurant's menu
    restaurant.addMenuItem(&burger);
    restaurant.addMenuItem(&pizza);
    restaurant.addMenuItem(&salad);

    // Display the restaurant's menu
    restaurant.displayMenu();

    // Example: Place an order
    Order order;
    order.addItem(&burger);
    order.addItem(&pizza);
    restaurant.placeOrder(order);

    return 0;
}
