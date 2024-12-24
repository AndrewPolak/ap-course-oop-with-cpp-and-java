
#include <iostream>
#include <iostream>

class Product {
private:
    std::string name;
    double price;

public:
    Product(std::string n, double p) : name(n), price(p) {};

    void set_name(std::string name) {
        name = name;
    }

    std::string get_name(void) {
        return name;
    }

    void set_price(double new_price) {
        if (new_price >= 0) price = new_price;
    }

    double get_price(void) {
        return price;
    }
};

int main(void) {
    std::string name;
    std::cin >> name;
    double price;
    std::cin >> price;
    Product product(name, price);

    double new_price;
    std::cin >> new_price;
    product.set_price(new_price);

    std::cout << "Final price is: " << product.get_price() << std::endl;

    return 0;
}