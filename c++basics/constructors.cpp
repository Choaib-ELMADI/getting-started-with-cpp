#include <iostream>

const double PI = 3.1415;

class Cylinder {
    private:
        double radius = 1;
        double height = 1;

    public:
        //! Initializing the member varibles, either this or the other one is choosed by the compiler
        Cylinder() {
            radius = 2;
            height = 2;
        }

        //! Initializing the member varibles, either this or the other one is choosed by the compiler
        Cylinder(double r, double h) {
            radius = r;
            height = h;
        }

        double volume() {
            return PI * radius * radius * height;
        }
};

int main() {
    Cylinder c1(0, 0);
    std::cout << "c1.volume = " << c1.volume() << std::endl;

    return 0;
}