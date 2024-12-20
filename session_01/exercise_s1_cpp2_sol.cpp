// Save as: exercise_s1_cpp2_sol.cpp
#include <iostream>
int main() {
    int n;
    std::cin >> n;
    if (n % 2 == 0)
        std::cout << "Even\n";
    else
        std::cout << "Odd\n";
    return 0;
}