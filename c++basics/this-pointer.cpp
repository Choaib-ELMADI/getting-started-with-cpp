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

        void print_info() {
            std::cout << "Dog name : " << name  << std::endl;
            std::cout << "Dog breed: " << breed << std::endl;
            std::cout << "Dog age  : " << *age  << std::endl;
        }

        Dog *set_name(std::string name) {
            this->name = name;
            return this;
        }
        Dog *set_brees(std::string breed) {
            this->breed = breed;
            return this;
        }
        Dog *set_age(int age) {
            *(this->age) = age;
            return this;
        }
};

int main() {
    Dog *Chevo = new Dog("Chavo", "Doggy", 4);
    Chevo->print_info();
    std::cout << "\n";

    Chevo->set_age(5);
    Chevo->set_brees("Shepherd");
    Chevo->set_name("Chevo");
    Chevo->print_info();
    std::cout << "\n";

    Chevo->set_age(6)->set_name("Choove")->set_brees("HawHaw");
    Chevo->print_info();
    std::cout << "\n";

    delete Chevo;
    return 0;
}