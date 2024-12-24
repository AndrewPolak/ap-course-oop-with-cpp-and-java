// Save as: exercise_s3_cpp3_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    Product(const std::string &n, double p) : name(n), price(p) {}

    void applyDiscount(double percent) {
        if (percent > 0 && percent < 100) {
            price *= (1 - percent / 100.0);
        }
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    std::string n;
    double p, d;
    std::cin >> n >> p >> d;
    Product prod(n, p);
    prod.applyDiscount(d);
    std::cout << "After " << d << "% discount, price is " << prod.getPrice() << std::endl;
    return 0;
}