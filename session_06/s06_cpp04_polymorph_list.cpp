
#include <iostream>
#include <vector>

class Product {
private:
    std::string name;
public:
    Product(const std::string &n) : name(n) {}
    virtual void printInfo(void) const {
        std::cout << "Printing product info!" << std::endl;
    }
};

class Book : public Product {
private:
    std::string author;
public:
    Book(const std::string &n, const std::string &a) : Product(n), author(a) {}
    void printInfo(void) const override {
        std::cout << "Printing book info!" << std::endl;
    }
};

class Movie : public Product {
private:
    std::string director;
public:
    Movie(const std::string&n, const std::string &d) : Product(n), director(d) {}
    void printInfo(void) const override {
        std::cout << "Printing movie info!" << std::endl;
    }
};

int main(void) {
    std::vector<Product*> products;

    Product *b = new Book("The Hobbit", "J.R.R");

    products.push_back(b);
    products.push_back(new Movie("Inception", "Christopher Nolan"));

    for (int i = 0; i < products.size(); i++) {
        products[i]->printInfo();
    }

    return 0;
}