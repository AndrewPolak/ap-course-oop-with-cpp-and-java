
#include <iostream>
#include <vector>

class Product {
private:
    std::string name;
    double price;
public:
    // Constructors
    virtual ~Product() {}
    Product(const std::string &n, double p) : name(n), price(p) {}

    // Getters
    std::string getName(void) const {return this->name;}
    double getPrice(void) const {return this->price;}

    // Setters
    void setName(std::string name) {this->name = name;}
    void setPrice(double price) {this->price = price;}

    // Methods
    virtual void printInfo(void) const {
        std::cout << "Product: Name=" << name << ", Price=" << price << std::endl;
    }
};

class Book : public Product {
private:
    std::string author;
public:
    // Constructors
    ~Book() override {}
    Book(const std::string &n, double p, const std::string &a) : Product(n,p), author(a) {}

    // Getters
    std::string getAuthor(void) const {return this->author;}

    // Setter
    void setAuthor(const std::string &author) {this->author = author;}

    // Methods
    void printInfo(void) const override {
        std::cout
            << "Book: Title=" << getName() 
            << ", Price=" << getPrice() 
            << ", Author=" << author 
            << std::endl;
    }
};

class Movie : public Product {
private:
    std::string director;
public:
    // Constructors
    ~Movie() override {}
    Movie(const std::string &n, double p, const std::string &a) : Product(n,p), director(a) {}

    // Getters
    std::string getDirector(void) const {return this->director;}

    // Setters
    void setDirector(const std::string &director) {this->director = director;}

    // Methods
    void printInfo(void) const override {
        std::cout
            << "Book: Title=" << getName() 
            << ", Price=" << getPrice() 
            << ", Director=" << director 
            << std::endl;
    }
};

int main(void) {
    int number_of_products;
    std::cin >> number_of_products;
    
    std::vector<Product*> products;
    products.reserve(number_of_products);

    for (int i = 0; i < number_of_products; i++) {
        std::string type, title, author, director;
        std::cin >> type;
        double price;

        if (type == "Book") {
            std::cin >> title >> price >> author;
            products.push_back(new Book(title, price, author));
        } else if (type == "Movie") {
            std::cin >> title >> price >> director;
            products.push_back(new Movie(title, price, director));
        } 
    }

    for (Product* p : products) {
        p->printInfo();
        delete p;
    }

    products.clear();

    return 0;
}
