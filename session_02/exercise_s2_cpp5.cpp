// Save as: exercise_s2_cpp5.cpp
#include <iostream>

// TODO: Define int multiplyByTwo(int x) with a debug print before returning x*2
int multplyByTwo(int x) {
    std::cout << "Debug: multiplying " << x << " by 2" << std::endl;
    return x * 2;
}

int main() {
    int val;
    std::cin >> val;
    // TODO: Call multiplyByTwo(val), print result
    std::cout << multplyByTwo(val) << std::endl;
    return 0;
}