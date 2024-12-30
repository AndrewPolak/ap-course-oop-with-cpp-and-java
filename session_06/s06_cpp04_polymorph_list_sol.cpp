// Save as: s06_cpp04_polymorph_list_sol.cpp
#include <iostream>
#include <vector>
#include <string>

class Product {
protected:
    std::string name;
public:
    Product(const std::string &n) : name(n) {}
    virtual ~Product() {}
    virtual void printInfo() const {
        std::cout << "Product: " << name << "\n";
    }
};

class Book : public Product {
private:
    std::string author;
public:
    Book(const std::string &n, const std::string &a)
        : Product(n), author(a) {}
    void printInfo() const override {
        std::cout << "Book: Title=" << name << ", Author=" << author << "\n";
    }
};

class Movie : public Product {
private:
    std::string director;
public:
    Movie(const std::string &n, const std::string &d)
        : Product(n), director(d) {}
    void printInfo() const override {
        std::cout << "Movie: Title=" << name << ", Director=" << director << "\n";
    }
};

int main() {
    std::vector<Product*> items;
    items.push_back(new Book("The Hobbit", "J.R.R. Tolkien"));
    items.push_back(new Movie("Inception", "Christopher Nolan"));

    for (auto* item : items) {
        item->printInfo();
    }

    // cleanup
    for (auto* item : items) {
        delete item;
    }
    items.clear();

    return 0;
}