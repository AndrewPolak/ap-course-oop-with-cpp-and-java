
#include <iostream>

class Product {
private:
    std::string name;
    double price;
public:
    // Constructors
    Product(std::string n, double p) : name(n), price(p) {}

    // Getters
    std::string get_name(void) {return name;}
    double get_price(void) {return price;}

    // Setters
    void set_name(std::string name) {name = name;}
    void set_price(double price) {
        if (price >= 0) price = price;
    }

    // Methods
    void applyDiscount(double percent) {
        if (0 <= percent && percent <= 100) {
            price = price * (100 - percent) / 100;
        }
    }
};

int main(void) {
    std::string name;
    double price;
    double discount;

    std::cin >> name >> price >> discount;

    Product product(name, price);
    product.applyDiscount(discount);

    std::cout << "After " << discount << "% discount, price is " << product.get_price() << std::endl;

    return 0;
}


