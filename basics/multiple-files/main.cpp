#include <iostream>
#include "compare.cpp"

int main() {
    int maximum = maxNumber(15, 123);
    int minimum = minNumber(10, 100);

    std::cout << maximum << " - " << minimum << std::endl;

    return 0;
}