#include <iostream>

int main() {
    std::cout << "Enter an integer N (to sum from 1 to N): ";

    int N;
    std::cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; i++)
        sum += i;

    std::cout << "Sum: " << sum << std::endl;
}