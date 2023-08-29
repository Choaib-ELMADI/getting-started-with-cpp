#include <iostream>

int main() {
    int a = 10, b = 23;

    auto func = [&]() {
        std::cout << "a = " << a << ", b = " << b << std::endl;
        ++a;
    };

    func();
    std::cout << "a = " << a << std::endl;

    return 0;
}