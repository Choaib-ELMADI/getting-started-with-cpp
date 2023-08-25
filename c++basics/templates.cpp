#include <iostream>

template <typename T> T max(T a, T b);

int main() {
    std::cout << "max(15, 23) = " << max(15, 23) << std::endl;
    std::cout << "max(12.05, 20.25) = " << max(12.05, 20.25) << std::endl;
    std::cout << "max('Hello World', 'Hi World') = " << max("Hello World", "Hi World") << std::endl;

    return 0;
}

template <typename T> T max(T a, T b) {
    return (a > b) ? a : b;
}