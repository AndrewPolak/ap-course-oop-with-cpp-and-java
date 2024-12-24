// Save as: exercise_s2_cpp4_sol.cpp
#include <iostream>
#include <string>

struct Item {
    std::string name;
    double price;
};

void printItem(const Item &it) {
    std::cout << it.name << " costs " << it.price << std::endl;
}

int main() {
    Item it;
    std::cin >> it.name >> it.price;
    printItem(it);
    return 0;
}