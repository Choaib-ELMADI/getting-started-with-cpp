#include <iostream>
#include <string>

class Shape {
    protected:
        std::string description = "";

    public:
        Shape() = default;
        Shape(std::string description) {
            this->description = description;
        }
        ~Shape() {};

        void draw() {
            std::cout << "Shape::draw(), drawing " << this->description << std::endl;
        }
};

class Oval: public Shape {
    protected:
        double x_radius = 0, y_radius = 0;

    public:
        Oval() = default;
        Oval(double xr, double yr, std::string description) {
            x_radius = xr;
            y_radius = yr;
            this->description = description;
        }
        ~Oval() {}

        void draw() {
            std::cout << "Oval::draw(), drawing " << this->description << " xr = " << this->x_radius << " yr = " << this->y_radius << std::endl;
        }
};

class Circle: public Oval {
    public:
        Circle() = default;
        Circle(double radius, std::string description) {
            this->x_radius = radius;
            this->y_radius = radius;
            this->description = description;
        }
        ~Circle() {}

        void draw() {
            std::cout << "Circle::draw(), drawing " << this->description << " radius = " << this->x_radius << std::endl;
        }
};

int main() {
    std::cout << std::endl;

    //* Direct access
    std::cout << "Direct access" << std::endl;
    Oval oval1(2.5, 2.5, "First oval shape");
    oval1.draw();
    Circle circle1(10, "First circle shape");
    circle1.draw();
    
    //* Base pointers
    std::cout << "--------------------" << std::endl;
    std::cout << "Base pointers" << std::endl;
    Shape *oval1_ptr = &oval1;//! Static binding ==> compiler checks the type of the pointer and calls the right method
    oval1_ptr->draw();//! Call the draw method in the Shape class
    Oval *circle1_ptr = &circle1;
    circle1_ptr->draw();//! Call the draw method in the Oval class

    //* Base references
    std::cout << "--------------------" << std::endl;
    std::cout << "Base references" << std::endl;
    Shape& oval1_ref = oval1;//! Static binding ==> compiler checks the type of the reference and calls the right method
    oval1_ref.draw();//! Call the draw method in the Shape class
    Oval& circle1_ref = circle1;
    circle1_ref.draw();//! Call the draw method in the Oval class

    std::cout << std::endl;
    return 0;
}