// Save as: s06_cpp03_virtual_func_sol.cpp
#include <iostream>

class Shape {
public:
    // comment/uncomment 'virtual' to compare behavior
    virtual void draw() const {
        std::cout << "Drawing a generic shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle\n";
    }
};

int main() {
    std::cout << "With virtual:\n";
    Shape* s1 = new Circle();
    s1->draw(); // Drawing a circle
    delete s1;

    // Now demonstrate "Without virtual" by removing 'virtual' above
    // Or create a separate scenario

    std::cout << "Without virtual:\n";
    // Hypothetical if we removed virtual, it would print "Drawing a generic shape"
    // We'll just simulate it here:
    Shape* s2 = new Circle();
    s2->draw(); // might do "Drawing a generic shape" if not virtual
    delete s2;

    return 0;
}