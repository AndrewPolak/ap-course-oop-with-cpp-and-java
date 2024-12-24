
#include <iostream>

class Product {
private:
    std::string name;
    double price;

public:
    // Constructors
    Product(std::string n, double p) : name(n), price(p) {}
    
    Product() : Product("Unknown", 0.0) {}

    // Getters

    // Setters

    // Methods
    void printDetails(int number) {
        std::cout << "Product " << number << ": " << name << ", " << price << std::endl;
    }
};

int main(void) {
    Product p1;
    Product p2("Apple", 3.50);

    p1.printDetails(1);
    p2.printDetails(2);

    return 0;
}