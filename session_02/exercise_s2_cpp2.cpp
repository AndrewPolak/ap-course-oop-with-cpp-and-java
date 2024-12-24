
#include <iostream>

void printLine(void) {
    std::cout << "----------" << std::endl;
}

int main(void) {
    for (int i = 0; i < 3; i++) {
        printLine();
    }

    return 0;
}