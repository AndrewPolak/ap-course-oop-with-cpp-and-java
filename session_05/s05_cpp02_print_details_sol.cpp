// Save as: s05_cpp02_print_details_sol.cpp
#include <iostream>
#include <string>

class User {
private:
    std::string username;
    int age;
public:
    User(const std::string &u, int a) : username(u), age(a) {}

    void printInfo() const {
        std::cout << "User: " << username << ", Age: " << age << std::endl;
    }
};

int main() {
    User u1("alice", 30);
    User u2("bob", 25);

    u1.printInfo();
    u2.printInfo();
    return 0;
}