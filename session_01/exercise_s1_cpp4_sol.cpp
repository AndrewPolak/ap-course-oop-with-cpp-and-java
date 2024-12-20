#include <iostream>
int main() {
    int secret = 7;
    int guess;
    std::cout << "Guess the number:\n";
    std::cin >> guess;
    while (guess != secret) {
        std::cout << "Guess again:\n";
        std::cin >> guess;
    }
    std::cout << "Correct!\n";
    return 0;
}