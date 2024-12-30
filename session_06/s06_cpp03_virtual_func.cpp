
#include <iostream>

class Shape {
public:
    void draw(void) const {
        std::cout << "Drawing a generic shape" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw(void) const {
        std::cout << "Drawing a circle" << std::endl;
    }
};

int main(void) {
    Shape *s = new Shape();
    s->draw();

    Shape *sc = new Circle();
    sc->draw();

    Circle *c = new Circle();
    c->draw();
}