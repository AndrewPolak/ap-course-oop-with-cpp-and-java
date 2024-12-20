// Save as: exercise_s1_cpp3_sol.cpp
#include <iostream>
int main() {
    int N;
    std::cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}