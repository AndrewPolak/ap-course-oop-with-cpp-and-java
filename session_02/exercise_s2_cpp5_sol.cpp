// Save as: exercise_s2_cpp5_sol.cpp
#include <iostream>

int multiplyByTwo(int x) {
    std::cout << "Debug: multiplying " << x << " by 2" << std::endl;
    return x * 2;
}

int main() {
    int val;
    std::cin >> val;
    std::cout << multiplyByTwo(val) << std::endl;
    return 0;
}