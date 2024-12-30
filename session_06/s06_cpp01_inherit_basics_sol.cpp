// Save as: s06_cpp01_inherit_basics_sol.cpp
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
};

int main() {
    Animal a;
    Dog d;

    a.makeSound();  // Some generic animal sound
    d.makeSound();  // Woof
    return 0;
}