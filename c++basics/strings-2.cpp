#include <iostream>
#include <cstring>

int main() {
    char dest[50] = "Hello, ";
    char src[10] = "World!";

    std::strcat(dest, src);

    std::cout << dest << std::endl;

    return 0;
}