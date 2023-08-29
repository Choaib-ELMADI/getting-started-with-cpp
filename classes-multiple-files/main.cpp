#include <iostream>
#include "cylinder.cpp"
#include "constants.h"

int main() {
    Cylinder c1;
    std::cout << "volume = " << c1.volume() << std::endl;

    std::cout << "PI = " << PI << std::endl;

    return 0;
}