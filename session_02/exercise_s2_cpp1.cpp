
#include <iostream>

int maxInt(int a, int b) {
    if (a >= b) return a;
    else return b;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << maxInt(a, b) << std::endl;

    return 0;
}