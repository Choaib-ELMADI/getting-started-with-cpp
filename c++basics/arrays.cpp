#include <iostream>

int main() {
    int scores[]= {1, 2, 3, 4, 5, 6};
    // std::cout << std::size(scores);

    /*
    for (size_t i{}; i<10; i++) {
        std::cout << "Enter " << i+1 << (i == 0 ? "st element: " : i == 1 ? "nd element: " : i == 2 ? "rd element: " : "th element: ");
        std::cin >> scores[i];
    }

    std::cout << "Entered values:" << std::endl;

    for (size_t i{}; i<10; i++) {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }
    */

   /*
   char name[7] = {'C', 'h', 'o', 'a', 'i', 'b'};
   char name[] = {'C', 'h', 'o', 'a', 'i', 'b', '\0'};
   std::cout << "Name: " << name << std::endl;
   std::cout << std::size(name) << std::endl;
   */

   char message[] = "Hello";
   std::cout << "Message: " << message << std::endl;
   std::cout << std::size(message) << std::endl;

    return 0;
}