#include <iostream>
#include <limits>

int main() {
    int age;
    std::string name, fullName, password;

    /*
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Welcome, " << name << "-" << age << " years old." << std::endl;
    */

    std::cout << "Enter your name, age and password: ";
    std::cin >> name >> age >> password;  //! chain inputs !//

    //! The >> operator leaves a newline character in the input buffer !//
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //! clear the newline character !//

    std::cout << "Welcome, " << name << " - " << age << " years old. Your pass is: " << password << std::endl;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    std::cout << "Full name: " << fullName << std::endl;

    return 0;
}