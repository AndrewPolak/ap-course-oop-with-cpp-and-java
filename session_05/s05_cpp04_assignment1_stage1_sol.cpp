// Save as: s05_cpp04_assignment1_stage1_sol.cpp
#include <iostream>
#include <vector>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string &n, double p) : name(n), price(p) {}
    void printInfo() const {
        std::cout << "Product: " << name << ", Price: " << price << std::endl;
    }
};

int main() {
    int N;
    std::cin >> N; // e.g. 3
    std::vector<Product> products;
    products.reserve(N);

    for(int i = 0; i < N; i++) {
        std::string n;
        double p;
        std::cin >> n >> p;
        products.emplace_back(n, p);
    }

    for(const auto &prod : products) {
        prod.printInfo();
    }

    return 0;
}