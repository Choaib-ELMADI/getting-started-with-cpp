#ifndef CYLINDER_HEADER
#define CYLINDER_HEADER

#include "constants.h"

class Cylinder {
    private:
        double radius = 1;
        double height = 1;

    public:
        Cylinder() = default;
        Cylinder(double r, double h);

        double volume();

        double get_radius();
        void set_radius(double r);

        double get_height();
        void set_height(double h);
};

#endif