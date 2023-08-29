#include <iostream>

int main() {
    int *pNumber = nullptr;
    pNumber = new int;  //! Dynamically allocate space for a single int on the heap
                        //! pNumber point to the space allocated

    /*
    *pNumber = 77;
    std::cout << "pNumber: " << pNumber << std::endl;
    std::cout << "*pNumber: " << *pNumber << std::endl;

    delete pNumber;     //! Release memory --> Dont have access any more, but still exists
    std::cout << "pNumber (After release): " << pNumber << std::endl;
    std::cout << "*pNumber (After release): " << *pNumber << std::endl;

    pNumber = nullptr;  //! Reset memory
    std::cout << "pNumber (After reset): " << pNumber << std::endl;
    std::cout << "*pNumber (After reset): " << *pNumber << std::endl;
    */

    int *pNumber2 = new int {32};
    std::cout << "pNumber2: " << pNumber2 << std::endl;
    std::cout << "*pNumber2: " << *pNumber2 << std::endl;

    return 0;
}