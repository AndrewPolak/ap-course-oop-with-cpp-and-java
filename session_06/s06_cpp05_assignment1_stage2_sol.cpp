// Save as: s06_cpp05_assignment1_stage2_sol.cpp
#include <iostream>
#include <vector>
#include <string>
#include <memory>

class Product {
protected:
    std::string name;
    double price;
public:
    Product(const std::string &n, double p) : name(n), price(p) {}
    virtual ~Product() {}

    virtual void printInfo() const {
        std::cout << "Product: " << name << ", Price=" << price << "\n";
    }
};

class Book : public Product {
private:
    std::string author;
public:
    Book(const std::string &n, double p, const std::string &auth)
        : Product(n, p), author(auth) {}
    void printInfo() const override {
        std::cout << "Book: Title=" << name << ", Price=" << price 
                  << ", Author=" << author << "\n";
    }
};

class Movie : public Product {
private:
    std::string director;
public:
    Movie(const std::string &n, double p, const std::string &dir)
        : Product(n, p), director(dir) {}
    void printInfo() const override {
        std::cout << "Movie: Title=" << name << ", Price=" << price 
                  << ", Director=" << director << "\n";
    }
};

int main() {
    int N;
    std::cin >> N;  
    std::vector<std::unique_ptr<Product>> products;
    products.reserve(N);

    for(int i=0; i<N; i++) {
        std::string type, n, extra;
        double p;
        std::cin >> type >> n >> p >> extra; 
        // e.g. "Book TheHobbit 10.0 Tolkien"
        
        if(type == "Book") {
            products.push_back(std::make_unique<Book>(n, p, extra));
        } else if(type == "Movie") {
            products.push_back(std::make_unique<Movie>(n, p, extra));
        } else {
            // unknown type, skip or handle error
        }
    }

    for(const auto &prod : products) {
        prod->printInfo();
    }

    return 0;
}