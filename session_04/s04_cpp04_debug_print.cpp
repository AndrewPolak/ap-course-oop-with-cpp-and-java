
#include <iostream>

class DebugExample {
private:
    int value;
public:
    DebugExample(int v) : value(v) {
        std::cout << "DebugExample constructor called, value = " << value << std::endl;
    }

    void increment_value(void) {
        std::cout << "In increment_value()" << std::endl;
        value++;
    }
};

int main(void) {
    DebugExample d(5);
    d.increment_value();
    d.increment_value();
    return 0;
}