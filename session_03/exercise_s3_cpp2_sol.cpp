// Save as: exercise_s3_cpp2_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    Product(const std::string &n, double p) : name(n), price(p) {}

    std::string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double p) {
        if (p >= 0.0) {
            price = p;
        }
    }
};

int main() {
    std::string n;
    double p;
    std::cin >> n >> p;

    Product prod(n, p);

    double newPrice;
    std::cin >> newPrice;  // e.g., -10
    prod.setPrice(newPrice);

    std::cout << "Final price is: " << prod.getPrice() << std::endl;
    return 0;
}