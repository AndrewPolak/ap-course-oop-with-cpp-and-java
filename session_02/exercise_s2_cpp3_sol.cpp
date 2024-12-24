// Save as: exercise_s2_cpp3_sol.cpp
#include <iostream>
#include <string>

struct Item {
    std::string name;
    double price;
};

int main() {
    Item it;
    std::cin >> it.name >> it.price;
    std::cout << it.name << " costs " << it.price << std::endl;
    return 0;
}