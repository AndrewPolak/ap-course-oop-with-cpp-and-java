
#include <iostream>

class EncapsTest {
private:
    int value;
public:
    // Constructors
    EncapsTest(void) : value(0) {}

    // Getters
    int getValue(void) {return value;}

    // Setters
    void setValue(int value) {
        if (value > 0) {
            this->value = value;
        }
    }

    // Methods
};

int main(void) {
    EncapsTest et;

    std::cout << "Trying to set to 10... ";
    et.setValue(10);
    if (et.getValue() == 10) std::cout << "OK.";
    else std::cout << "Rejected.";
    std::cout << std::endl;

    std::cout << "Trying to set to -5... ";
    et.setValue(-5);
    if (et.getValue() == -5) std::cout << "OK.";
    else std::cout << "Rejected.";
    std::cout << std::endl;

    std::cout << "Final value: " << et.getValue() << std::endl;
}