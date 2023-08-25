#include <iostream>

int main() {
    int age = 21, num = 50;
    int *agePointer = &age;

    //! char *message = "Hello, World";
    const char *message = "Hello, World";

    /*
    std::cout << "agePointer : " << *agePointer << std::endl;
    std::cout << "agePointer address : " << agePointer << std::endl;
    agePointer = &num;
    std::cout << "agePointer : " << *agePointer << std::endl;
    std::cout << "agePointer address : " << agePointer << std::endl;

    std::cout << "sizeof(agePointer) : " << sizeof(agePointer) << std::endl;
    */

   std::cout << message << std::endl;

    return 0;
}