// Save as: s04_cpp02_access_mod.cpp
#include <iostream>

// TODO: Define class SecretBox with private secretNumber
//       Provide a constructor, revealSecret() method
class SecretBox {
private:
    int secret_number;
public:
    SecretBox(int s) : secret_number(s) {}

    int reveal_secret(void) {
        return secret_number;
    }
};

int main() {
    // TODO: create a SecretBox with some number, attempt to print secretNumber directly (observe error)
    //       then use revealSecret() to print

    SecretBox sb(7);

    std::cout << "The secret number is: ";
    // std::cout << sb.secret_number;
    std::cout << sb.reveal_secret();
    std::cout << std::endl;

    return 0;
}