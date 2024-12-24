// Save as: exercise_s2_cpp1_sol.cpp
#include <iostream>
int maxInt(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int a,b;
    std::cin >> a >> b;
    std::cout << maxInt(a,b) << std::endl;
    return 0;
}