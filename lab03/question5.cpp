#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Define structure for product
struct Product {
    int productId;
    string name;
    double price;
    int quantity;
    string description;
};

// Vector to store products
vector<Product> products;

// Function to add a new product to the system
void addProduct(int productId, string name, double price, int quantity, string description) {
    Product newProduct;
    newProduct.productId = productId;
    newProduct.name = name;
    newProduct.price = price;
    newProduct.quantity = quantity;
    newProduct.description = description;
    products.push_back(newProduct);
    cout << "Product added successfully." << endl;
}
void displayProduct(int productId) {
    for (const auto& product : products) {
        if (product.productId == productId) {
            cout << "Product ID: " << product.productId << endl;
            cout << "Name: " << product.name << endl;
            cout << "Price: " << product.price << endl;
            cout << "Quantity in stock: " << product.quantity << endl;
            cout << "Description: " << product.description << endl;
            return;
        }
    }
    cout << "Product not found." << endl;
}
void updateProduct(int productId, double newPrice, int newQuantity, string newDescription) {
    for (auto& product : products) {
        if (product.productId == productId) {
            product.price = newPrice;
            product.quantity = newQuantity;
            product.description = newDescription;
            cout << "Product information updated successfully." << endl;
            return;
        }
    }
    cout << "Product not found." << endl;
}

int main() {
    addProduct(1, "Laptop", 999.99, 10, "High performance laptop with SSD.");
    addProduct(2, "Smartphone", 599.99, 20, "Latest model with advanced features.");
    cout << "Displaying information about product with ID 1:" << endl;
    displayProduct(1);
    cout << "\nUpdating information for product with ID 1..." << endl;
    updateProduct(1, 1099.99, 5, "High performance laptop with SSD and dedicated graphics card.");
    cout << "\nDisplaying updated information about product with ID 1:" << endl;
    displayProduct(1);

    return 0;
}
