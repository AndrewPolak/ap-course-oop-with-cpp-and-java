// Save as: exercise_s3_cpp5_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    Product() {
        std::cout << "Default constructor called\n";
        name = "Unknown";
        price = 0.0;
    }
    Product(const std::string &n, double p) {
        std::cout << "Parameterized constructor called\n";
        name = n;
        price = p;
    }

    void setPrice(double newPrice) {
        std::cout << "setPrice called with: " << newPrice << "\n";
        if (newPrice >= 0.0) {
            price = newPrice;
        }
    }
};

int main() {
    Product p1;                      // debug: Default constructor
    Product p2("Phone", 100.0);      // debug: Parameterized constructor
    p2.setPrice(20.0);               // debug: setPrice
    return 0;
}