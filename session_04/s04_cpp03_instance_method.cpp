
#include <iostream>

class Rectangle {
private:
    int width;
    int height;
public:
    // Constructors
    Rectangle(int w, int h) : width(w), height(h) {}

    // Getters
    int get_width(void) {return width;}
    int get_height(void) {return height;}

    // Setters
    void set_width(int width) {width = width;}
    void set_height(int height) {height = height;}

    // Methods
    int get_area(void) {
        return width * height;
    }
    int get_perimeter(void) {
        return 2 * (width + height);
    }
};

int main(void) {
    int height, width;
    std::cin >> height >> width;

    Rectangle r = Rectangle(height, width);

    std::cout << "Area: " << r.get_area() << std::endl;
    std::cout << "Perimeter: " << r.get_perimeter() << std::endl;

    return 0;
}