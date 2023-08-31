#include <iostream>

int main() {
    int number1 = 0b00001111; // 15
    int number2 = 017; // 15
    int number3 = 15; // 15
    int number4 = 0x0f; // 15

    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;
    std::cout << "Number 3: " << number3 << std::endl;
    std::cout << "Number 4: " << number4 << std::endl;

    return 0;
}