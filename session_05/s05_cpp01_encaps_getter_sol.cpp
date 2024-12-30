// Save as: s05_cpp01_encaps_getter_sol.cpp
#include <iostream>

class EncapsTest {
private:
    int value;
public:
    EncapsTest() : value(0) {}

    int getValue() const {
        return value;
    }

    void setValue(int v) {
        if (v >= 0) {
            value = v;
            std::cout << "Trying to set to " << v << "... OK.\n";
        } else {
            std::cout << "Trying to set to " << v << "... Rejected.\n";
        }
    }
};

int main() {
    EncapsTest obj;
    obj.setValue(10);
    obj.setValue(-5);
    std::cout << "Final value: " << obj.getValue() << std::endl;
    return 0;
}