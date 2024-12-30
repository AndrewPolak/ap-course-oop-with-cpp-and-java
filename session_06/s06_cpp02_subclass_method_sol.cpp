// Save as: s06_cpp02_subclass_method_sol.cpp
#include <iostream>

class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Some generic animal sound\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof\n";
    }
    void fetch() const {
        std::cout << "Dog is fetching a ball\n";
    }
};

int main() {
    Dog d;
    d.makeSound(); // Woof
    d.fetch();     // Dog is fetching a ball

    // Animal a;
    // a.fetch(); // wouldn't compile, fetch() not in Animal

    return 0;
}