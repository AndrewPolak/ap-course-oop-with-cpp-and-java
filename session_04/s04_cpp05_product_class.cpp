
#include <iostream>

class Product {
private:
    std::string name;
    double price;
public:
    // Constructor
    Product(std::string n, double p) : name(n), price(p) {}

    // Getters
    std::string get_name(void) {return name;}
    double get_price(void) {return price;}

    // Setters

    // Methods
    void apply_discount(double percent) {
        if (0 <= percent && percent <= 100) {
            price *= (100 - percent) / 100;
        }
    }
};

int main(void) {
    std::string name;
    double price;
    double discount;

    std::cin >> name >> price >> discount;

    Product p(name, price);
    p.apply_discount(discount);

    std::cout << "Discounted price: " << p.get_price() << std::endl;
}