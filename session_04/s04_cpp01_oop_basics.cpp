// // Save as: s04_cpp01_oop_basics.cpp
// #include <iostream>

// // TODO: Define class Counter with private int count, constructor, increment(), and getCount().

// int main() {
//     // TODO: Create a Counter object, increment it 3 times, print the result.
//     return 0;
// }

#include <iostream>

class Counter {
private:
    int count;
public:
    // Constructors
    Counter(int c) : count(c) {}
    Counter() : Counter(0) {}
    // Getters
    int get_count(void) {return count;}
    // Methods
    void increment(void) {count++;}
};

int main(void) {
    Counter c;
    c.increment();
    c.increment();
    c.increment();
    std::cout << "Final count: " << c.get_count() << std::endl;
    return 0;
}
