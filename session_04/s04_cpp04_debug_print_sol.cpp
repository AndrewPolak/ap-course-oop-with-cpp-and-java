// Save as: s04_cpp04_debug_print_sol.cpp
#include <iostream>

class DebugExample {
private:
    int value;
public:
    DebugExample(int val) : value(val) {
        std::cout << "DebugExample constructor called, value = " << val << std::endl;
    }
    void incrementValue() {
        std::cout << "incrementValue called, current value = " << value << std::endl;
        value++;
    }
};

int main() {
    DebugExample dbg(5);
    dbg.incrementValue();
    dbg.incrementValue();
    dbg.incrementValue();
    return 0;
}