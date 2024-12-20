
#include <iostream>

int main() {
    int m;
    int n;

    std::cin >> m >> n;

    if (m <= 0) {
        std::cout << "M must be positive." << std::endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
        std::cout << (i * m) << std::endl;
}