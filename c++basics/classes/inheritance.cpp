#include <iostream>
#include <cstring>
#include <string>

class Person {
    private:
        std::string first_name;
        std::string last_name;
    
    public:
        Person();
        Person(std::string, std::string);
        ~Person();

        std::string get_fname() {
            return first_name;
        }
        std::string get_lname() {
            return last_name;
        }

        void set_fname(std::string fn) {
            first_name = fn;
        }
        void set_lname(std::string ln) {
            last_name = ln;
        }
};

Person::Person() {
    first_name = "Unknown";
    last_name = "Unknown";
}
Person::Person(std::string fn, std::string ln) {
    first_name = fn;
    last_name = ln;
}
Person::~Person() {}

class Player: public Person {
    private:
        std::string m_game;

    public:
        Player() = default;
        Player(std::string);
        ~Player();

    std::string get_game() {
        return m_game;
    }
};

Player::Player(std::string mg): m_game(mg) {}
Player::~Player() {}

int main() {
    Person person1("Choaib", "ELMADI");
    std::cout << "Person-1 name: " << person1.get_fname() << " " << person1.get_lname() << std::endl;

    Player player1("Football");
    std::cout << "Player-1 name: " << player1.get_fname() << " " << player1.get_lname() << " " << player1.get_game() << std::endl;
    player1.set_fname("Cristiano");
    player1.set_lname("Ronaldo");
    std::cout << "Player-1 name: " << player1.get_fname() << " " << player1.get_lname() << " " << player1.get_game() << std::endl;

    return 0;
}