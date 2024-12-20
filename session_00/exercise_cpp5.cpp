// Save as: exercise_cpp5.cpp
#include <iostream>
#include <string>
int main() {
    // TODO: Use std::getline(std::cin, some_string) to read a full line of input.
    // Print it exactly as read.
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << sentence << std::endl;
    return 0;
}