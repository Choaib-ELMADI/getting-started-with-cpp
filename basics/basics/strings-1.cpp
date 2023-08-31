#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    /*
    char greet[] = "Hello";
    const char *message = "Hello";
    std::cout << "Greet length: " << std::strlen(greet) << std::endl;
    std::cout << "Greet length (using size): " << std::size(greet) << std::endl;
    std::cout << "Message length: " << std::strlen(message) << std::endl;
    */

    
    const char *message = "Hello, World!";
    const char *result = message;
    char target = 'l';
    int number = 0;

    while ((result = strchr(result, target)) != nullptr) {
        std::cout << "Found " << target << " starting at " << result << "\n";
        ++result;
        ++number;
    }

    std::cout << "Found " << number << " occurrence(s) of " << target << std::endl;
    

    /*
    const char *input = "c:/users/modules/cpp/testing.cpp";
    const char *fileName = std::strrchr(input, '/');
    const char *extension = std::strrchr(input, '.');

    if (fileName && extension) {
        std::cout << "File name: " << fileName+1 << std::endl;
        std::cout << "Extension: " << extension+1 << std::endl;
    } else {
        std::cout << "Character not found" << std::endl;
    }
    */

    return 0;
}