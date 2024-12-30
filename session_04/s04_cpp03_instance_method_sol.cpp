// Save as: s04_cpp03_instance_method_sol.cpp
#include <iostream>

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int area() const {
        return width * height;
    }

    int perimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    int w, h;
    std::cin >> w >> h;
    Rectangle rect(w, h);
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    return 0;
}