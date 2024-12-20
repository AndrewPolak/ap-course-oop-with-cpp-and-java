
#include <iostream>

int main() {
    int secret = 7;

    std::cout << "Guess the number: ";
    int guess;
    std::cin >> guess;

    while (guess != secret) {
        std::cout << "Guess again: ";
        std::cin >> guess;
    }

    std::cout << "Correct!" << std::endl;
    return 0;
}