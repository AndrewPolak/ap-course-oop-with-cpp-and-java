#include <iostream>

int main() {
    std::cout << "Enter two integers: ";
    
    int a;
    int b;
    std:: cin >> a >> b;

    std::cout << "Sum: " << (a + b) << std::endl;
    std::cout << "Difference: " << (a - b) << std::endl;
    std::cout << "Product: " << (a * b) << std::endl;

    return 0;
}