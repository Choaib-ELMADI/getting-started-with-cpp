#include <iostream>

int main() {
    for (unsigned int i{}; i<10; i++) {
        std::cout << "I Love C++" << std::endl;
    }

    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;

    return 0;
}