
#include <iostream>

class Product {
private:
    std::string name;
    double price;

public:
    Product(std::string name, double price) : name(name), price(price) {}

    // Product(std::string name, double price) {
    //     name = name;
    //     price = price;
    // }
    
    void setName(std::string name) {
        name = name;
    }

    std::string getName() {
        return name;
    }

    void setPrice(double price) {
        price = price;
    }

    double getPrice() {
        return price;
    }

    void applyDiscount(double percent) {
        double ratio = (100 - percent) / 100;
        price *= ratio;
    }
};

double applyDiscount(double price, double percent) {
    double ratio = (100 - percent) / 100;
    price *= ratio;
    return price;
}

int main() {
    std::string name;
    double price;
    double percent;

    std::cin >> name >> price >> percent;
    Product product = Product(name, price);

    price = applyDiscount(price, percent);
    std::cout << "Procedural price after discount: " << price << std::endl;

    product.applyDiscount(percent);
    std::cout << "OOP price after discount: " << product.getPrice() << std::endl;

    return 0;
}

// Save as: exercise_s3_cpp1.cpp
#include <iostream>
#include <string>

// TODO: Write a free function applyDiscount(double &price, double percent)

// int main() {
    // 1) Procedural approach
    //    - read name, price, discount
    //    - apply discount using applyDiscount(...)
    //    - print the result
    
    // 2) OOP approach
    //    - define a Product class (if you like, define it above main)
    //    - create an object, set the same name, price
    //    - call a method applyDiscount(...) on it
    //    - print the result
    
//     return 0;
// }