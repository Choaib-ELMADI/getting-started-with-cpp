//! Cylinder Class Methods Implementation

#include "cylinder.h"

Cylinder::Cylinder(double r, double h) {
    radius = r;
    height = h;
}

double Cylinder::volume() {  //! scope resolution operator
    return PI * radius * radius * height;
}

double Cylinder::get_radius() {
    return radius;
}
void Cylinder::set_radius(double r) {
    radius = r;
}

double Cylinder::get_height() {
    return height;
}
void Cylinder::set_height(double h) {
    height = h;
}