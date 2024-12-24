
#include <iostream>

struct Item {
    std::string name;
    double price;
};

int main(void) {
    Item item;
    std::cout << "Enter item name: ";
    std::cin >> item.name;
    std::cout << "Enter item price: ";
    std::cin >> item.price;

    std::cout << item.name << " costs " << item.price << std::endl;

    return 0;
}