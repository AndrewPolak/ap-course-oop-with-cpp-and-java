// Save as: exercise_s3_cpp5.cpp
#include <iostream>
#include <string>

// TODO: class Product with debug prints in constructors and setPrice
class Product {
private:
    std::string name;
    double price;

public:
    // Constructors
    Product(std::string n, double p) : name(n), price(p) {
        std::cout << "Parameterized constructor called" << std::endl;
    }

    Product() : Product("Unknown", 0.0) {
        std::cout << "Default constructor called" << std::endl;
    }

    // Getters
    std::string get_name(void) {return name;}
    double get_price(void) {return price;}

    // Setters
    void set_name(std::string name) {name = name;}
    void set_price(double price) {
        std::cout << "set_price() called with: " << price << std::endl;
        if (price >= 0) price = price;
    }

    // Methods
    void print_details(int number) {
        std::cout << "TODO: print_details() not implemented" << std::endl;
    }
};

int main() {
    // TODO: Create a default product, create a parameterized product
    Product p1;
    Product p2("Apple", 3.50);
    // call setPrice(...) on one of them
    p1.set_price(13);
    // observe debug prints
    return 0;
}