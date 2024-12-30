
#include <iostream>

class Animal {
public:
    virtual void makeSound(void) const {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound(void) const override {
        std::cout << "Woof!" << std::endl;
    }
};

int main(void) {
    Animal a;
    Dog d;

    a.makeSound();
    d.makeSound();

    return 0;
}