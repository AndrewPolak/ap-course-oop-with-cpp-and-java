
#include <iostream>

class Product {
private:
    std::string name;
    double price;
public:
    // Constructors
    Product(std::string n, double p) : name(n), price(p) {}

    // Getters
    const std::string &getName(void) const {return name;}
    double getPrice(void) {return price;}

    // Setters
    void setName(std::string name) {this->name = name;}
    void setPrice(double price) {this->price = price;}

    // Methods
    void printInfo(void) {
        std::cout << "Product: " << name << ", Price: " << price << std::endl;
    }
};

int main(void) {
    Product p1("Apple", 1.2);
    p1.printInfo();
    return 0;
}