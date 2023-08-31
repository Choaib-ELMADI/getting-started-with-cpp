#include <iostream>
#include <string>

class Dog {
    private:
        std::string name;
        std::string breed;
        int *age;

    public:
        Dog() {
            name = "None";
            breed = "None";
            age = new int;
            *age = 0;
        };
        Dog(std::string n, std::string b, int a) {
            name = n;
            breed = b;
            age = new int;
            *age = a;
            std::cout << "Dog constructor called for '" << name << "' at: " << this << std::endl;
        }
        ~Dog() {
            delete age;
            std::cout << "Dog destructor called for '" << name << "' at: " << this << std::endl;
        }
};

int main() {
    Dog Chevo("chevo", "doggy", 4);

    return 0;
}