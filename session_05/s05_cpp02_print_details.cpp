
#include <iostream>

class User {
private:
    std::string username;
    int age;
public:
    // Constructors
    User(std::string u, int a) : username(u), age(a) {}

    // Getters
    void printInfo(void) {
        std::cout << "User: " << username << ", Age: " << age << std::endl;
    }
};

int main(void) {
    User u1("alice", 30);
    User u2("bob", 25);

    u1.printInfo();
    u2.printInfo();
}