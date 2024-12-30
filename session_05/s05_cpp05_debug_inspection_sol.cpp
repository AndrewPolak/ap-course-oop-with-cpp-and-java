// Save as: s05_cpp05_debug_inspection_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string &n, double p) : name(n), price(p) {
        std::cout << "Product created: " << n << ", " << p << std::endl;
    }
    void setPrice(double newPrice) {
        std::cout << "Changing price from " << price << " to " << newPrice << std::endl;
        if(newPrice >= 0) {
            price = newPrice;
        }
    }
};

int main() {
    Product p1("Apple", 1.2);
    Product p2("Book", 15);
    p2.setPrice(10.0);
    return 0;
}