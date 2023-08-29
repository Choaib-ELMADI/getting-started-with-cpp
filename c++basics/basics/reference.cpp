#include <iostream>

int main() {
    /*
    int age = 21;
    int& ageRef = age;

    std::cout << "age: " << age << std::endl;
    std::cout << "ageRef: " << ageRef << std::endl;
    std::cout << "&age: " << &age << std::endl;
    std::cout << "&ageRef: " << &ageRef << std::endl;
    */

    /*
    int age = 21;
    const int& ageRef = age;
    age = 22;
    //! ageRef = 22;
    std::cout << "age: " << age << std::endl;
    std::cout << "ageRef: " << ageRef << std::endl;
    */

   int age = 21, age2 = 100;
   const int *const pAge = &age; //! can't change the value of age
                                 //! can't point to another variable

    //! *pAge = 22;
    //! pAge = &age2;

    std::cout << "age: " << age << std::endl;
    std::cout << "*pAge: " << *pAge << std::endl;

    return 0;
}