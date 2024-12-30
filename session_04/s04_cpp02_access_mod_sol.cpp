// Save as: s04_cpp02_access_mod_sol.cpp
#include <iostream>

class SecretBox {
private:
    int secretNumber;
public:
    SecretBox(int num) : secretNumber(num) {}
    int revealSecret() const {
        return secretNumber;
    }
};

int main() {
    SecretBox box(42);

    // This line would fail if uncommented: 
    // std::cout << box.secretNumber << std::endl;

    std::cout << "The secret number is: " << box.revealSecret() << std::endl;
    return 0;
}