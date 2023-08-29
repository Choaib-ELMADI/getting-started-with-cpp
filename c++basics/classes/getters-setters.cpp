#include <iostream>

const double PI = 3.1415;

class Cylinder {
    private:
        double radius = 1;
        double height = 1;

    public:
        Cylinder() = default;

        Cylinder(double r, double h) {
            radius = r;
            height = h;
        }

        double volume() {
            return PI * radius * radius * height;
        }

        double get_radius() {
            return radius;
        }
        void set_radius(double r) {
            radius = r;
        }

        double get_height() {
            return height;
        }
        void set_height(double h) {
            height = h;
        }
};

int main() {
    Cylinder c1;
    std::cout << "c1.volume = " << c1.volume() << std::endl;
    std::cout << "c1.radius = " << c1.get_radius() << std::endl;
    std::cout << "c1.height = " << c1.get_height() << std::endl << std::endl;

    c1.set_radius(2.25);
    c1.set_height(5);

    std::cout << "c1.volume = " << c1.volume() << std::endl;
    std::cout << "c1.radius = " << c1.get_radius() << std::endl;
    std::cout << "c1.height = " << c1.get_height() << std::endl;

    return 0;
}