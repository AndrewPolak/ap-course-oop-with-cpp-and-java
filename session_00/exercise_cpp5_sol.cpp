// Save as: exercise_cpp5_sol.cpp
#include <iostream>
#include <string>
int main() {
    std::string line;
    std::getline(std::cin, line);
    if (line.empty()) {
        // If empty, try reading again (in case of newline issues)
        std::getline(std::cin, line);
    }
    std::cout << line << std::endl;
    return 0;
}