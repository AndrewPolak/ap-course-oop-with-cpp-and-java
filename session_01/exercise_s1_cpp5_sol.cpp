// Save as: exercise_s1_cpp5_sol.cpp
#include <iostream>
int main() {
    int M, N;
    std::cin >> M >> N;
    if (M <= 0) {
        std::cout << "M must be positive.\n";
    } else {
        for (int i = 1; i <= N; i++) {
            std::cout << M * i << std::endl;
        }
    }
    return 0;
}