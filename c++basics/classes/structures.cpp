#include <iostream>
#include <string>

struct Cat {
    std::string name;
};

int main() {
    Cat cat;
    cat.name = "Amir";

    std::cout << "name: " << cat.name << std::endl;

    return 0;
}