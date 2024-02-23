// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

class Office {
private:
    std::string Location;
    int SeatingCapacity;
    std::string Furniture1;
    std::string Furniture2;
    std::string Furniture3;

public:
    Office(std::string location = " ", int seatingCapacity = 0, std::string furniture1 = "", std::string furniture2 = "", std::string furniture3 = "")
        : Location(location), SeatingCapacity(seatingCapacity), Furniture1(furniture1), Furniture2(furniture2), Furniture3(furniture3) {}
    void display() {
        std::cout << "Location: " << Location << std::endl;
        std::cout << "Seating Capacity: " << SeatingCapacity << std::endl;
        std::cout << "Furniture: " << Furniture1 << " " << Furniture2 << " " << Furniture3 << std::endl;
    }
};

int main() {
    Office office1; 
    Office office2("Building A", 50, "Desk", "Chair", "Computer");  
    Office office3("Building B", 30, "Table"); 
    std::cout << "Office 1:\n";
    office1.display();
    std::cout << std::endl;

    std::cout << "Office 2:\n";
    office2.display();
    std::cout << std::endl;

    std::cout << "Office 3:\n";
    office3.display();
    std::cout << std::endl;

    return 0;
}
