// Save as: exercise_s3_cpp1_sol.cpp
#include <iostream>
#include <string>

void applyDiscount(double &price, double percent) {
    if (percent > 0 && percent < 100) {
        price *= (1 - percent / 100.0);
    }
}

class Product {
public:
    std::string name;
    double price;
    
    void applyDiscount(double percent) {
        if (percent > 0 && percent < 100) {
            price *= (1 - percent / 100.0);
        }
    }
};

int main() {
    std::string name;
    double price, discount;
    std::cin >> name >> price >> discount;

    // Procedural
    double proceduralPrice = price;
    applyDiscount(proceduralPrice, discount);
    std::cout << "Procedural price after discount: " << proceduralPrice << std::endl;

    // OOP
    Product prod;
    prod.name = name;
    prod.price = price;
    prod.applyDiscount(discount);
    std::cout << "OOP price after discount: " << prod.price << std::endl;

    return 0;
}