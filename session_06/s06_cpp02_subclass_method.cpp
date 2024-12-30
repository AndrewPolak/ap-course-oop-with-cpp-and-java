
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
    void fetch(void) const {
        std::cout << "Dog is fetching a ball!" <<std::endl;
    }
};

int main(void) {
    Animal a;
    Dog d;

    a.makeSound();
    d.makeSound();
    d.fetch();

    return 0;
}
