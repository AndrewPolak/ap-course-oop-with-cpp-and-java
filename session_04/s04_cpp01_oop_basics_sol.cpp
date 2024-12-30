// Save as: s04_cpp01_oop_basics_sol.cpp
#include <iostream>

class Counter {
private:
    int count;
public:
    Counter() : count(0) {} // constructor sets count to 0
    void increment() {
        count++;
    }
    int getCount() const {
        return count;
    }
};

int main() {
    Counter c;
    c.increment();
    c.increment();
    c.increment();
    std::cout << "Final count: " << c.getCount() << std::endl;
    return 0;
}