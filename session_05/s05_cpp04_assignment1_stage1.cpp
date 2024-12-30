
#include <iostream>
#include <vector>

class Product {
private:
    std::string name;
    double price;
public:
    // Constructors
    Product(std::string n, double p) : name(n), price(p) {}

    // Getters
    std::string getName(void) {return name;}
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
    std::vector<Product> products;

    std::string name;
    double price;

    std::cout << "How many products? ";
    int number_of_products;
    std::cin >> number_of_products;

    for (int i = 0; i < number_of_products; i++) {
        std::cin >> name >> price;
        products.push_back(Product(name, price));
    }

    for (int i = 0; i < products.size(); i++) {
        products[i].printInfo();
    }
}