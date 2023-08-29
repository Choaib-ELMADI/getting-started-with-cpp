#include <iostream>

void enterBar(int);

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    enterBar(age);

    return 0;
}

void enterBar(int age) {
    if (age >= 18) {
        std::cout << "You can enter the bar. Enjoy!" << std::endl;
    } else {
        std::cout << "Sorry!. You can't enter the bar." << std::endl;
    }
}