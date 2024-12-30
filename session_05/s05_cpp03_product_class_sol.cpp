// Save as: s05_cpp03_product_class_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string &n, double p) : name(n), price(p) {}

    std::string getName() const { return name; }
    void setName(const std::string &n) { name = n; }

    double getPrice() const { return price; }
    void setPrice(double p) {
        if (p >= 0) price = p;
    }

    void printInfo() const {
        std::cout << "Product: " << name << ", Price: " << price << std::endl;
    }
};

int main() {
    std::string n;
    double p;
    std::cin >> n >> p; // e.g. Apple 1.2
    Product prod(n, p);
    prod.printInfo();
    return 0;
}