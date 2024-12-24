// Save as: exercise_s2_cpp4.cpp
#include <iostream>
#include <string>

struct Item {
    std::string name;
    double price;
};

Item readItem(void) {
    Item it;
    std::cin >> it.name >> it.price;
    return it;
}

// TODO: Define void printItem(const Item &it)
void printItem(const Item &it) {
    std::cout << it.name << " costs " << it.price << std::endl;
}

int main() {
    // TODO: Read an Item (name and price), call printItem
    printItem(readItem());
    return 0;
}