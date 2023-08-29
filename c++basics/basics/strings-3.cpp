#include <iostream>
#include <string>

int main() {
    std::string fullName;                    //! Empty string
    std::string message = "Hello, World";
    std::string hello { "Hello, World", 5 }; //! copy first 5 characters
    std::string greet { message, 0, 5 };     //! start from index 0, copy 5 characters
    std::string word { message, 7, 5 };      //! start from index 7, copy 5 characters
    std::string laugh(6, 'h');               //! repeat h 6 times

    std::cout << "hello: " << hello << std::endl;

    return 0;
}