#include <iostream>

const double PI = 3.1415926535897932384626433832795;

class Cylinder {
    public:
        double radius = 1;
        double height = 1;

    public:
        double volume() {
            return PI * radius * radius * height;
        }
};

int main() {
    Cylinder c1;
    std::cout << "Volume of c1: " << c1.volume() << std::endl;

    Cylinder c2;
    c2.height = 2;
    c2.radius = 1.5;
    std::cout << "Volume of c2: " << c2.volume() << std::endl;

    std::cout << "sizeof(Cylinder): " << sizeof(Cylinder) << std::endl;

    return 0;
}