// Save as: exercise_cpp2.cpp
#include <iostream>
#include <string>

int main() {
    // TODO: Prompt the user to enter their name (print a message asking for it).
    // Read the user's name using std::cin.
    // Print "Hello, <name>!"
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}