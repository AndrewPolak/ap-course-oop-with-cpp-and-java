// Save as: exercise_s3_cpp4_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    // Default constructor
    Product() {
        name = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Product(const std::string &n, double p) : name(n), price(p) {}

    std::string getName() const { return name; }
    double getPrice() const { return price; }
};

int main() {
    Product p1;                  // default
    Product p2("Book", 15.0);    // parameterized

    std::cout << "Product 1: " << p1.getName() << ", " << p1.getPrice() << std::endl;
    std::cout << "Product 2: " << p2.getName() << ", " << p2.getPrice() << std::endl;
    return 0;
}