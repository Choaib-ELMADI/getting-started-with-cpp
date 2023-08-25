#include <iostream>
#include "cylinder.h"
#include "constants.h"

int main() {
    //! Stack Object
    Cylinder c1(14, .5);
    std::cout << "Stack c.volume = " << c1.volume() << std::endl;

    //! Heap Object
    Cylinder *c2 = new Cylinder(14, .5);
    std::cout << "Heap c.volume  = " << c2->volume() << std::endl;
    std::cout << "Heap c.volume  = " << (*c2).volume() << std::endl;
    delete c2;

    return 0;
}