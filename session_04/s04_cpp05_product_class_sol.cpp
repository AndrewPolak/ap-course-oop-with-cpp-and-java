// Save as: s04_cpp05_product_class_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string& n, double p)
        : name(n), price(p) {}
    
    std::string getName() const { return name; }
    double getPrice() const { return price; }

    void applyDiscount(double percent) {
        if (percent > 0 && percent < 100) {
            price *= (1 - percent / 100.0);
        }
    }
};

int main() {
    std::string n;
    double p, d;
    std::cin >> n >> p >> d;  // e.g., Book 20 25
    Product prod(n, p);
    prod.applyDiscount(d);
    std::cout << "Discounted price: " << prod.getPrice() << std::endl;
    return 0;
}