#include <iostream>

int main() {
    std::cout << "Enter an integer: ";

    int n;
    std::cin >> n;

    if (n % 2 == 0) std::cout << "Even";
    else std::cout << "Odd";
    std::cout << std::endl;

    return 0;
}