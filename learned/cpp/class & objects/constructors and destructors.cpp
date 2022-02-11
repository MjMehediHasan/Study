// Copyright [2022] Meek_0
// Learning Started 11/02/22 | 11.00 a.m
// Constructor and destructors

#include <iostream>
#include <string>

class player {
 private:
    std::string name;
    int health;
    int xp;
 public:
    void set_name(std::string name) {this->name = name;}    // "this" is a pointer to the object
    // void set_name(std::string name_input) {name = name_input;}

    // member methods with same name as class is called constructor
    // constructors with overloads
    player() {
        name = "Def_Player";
        health = 100;
        xp = 0;
        std::cout << "No argument constructor is called" << std::endl;
    }
    player(std::string name) {
        this->name = name;
        std::cout << "String constructor created ! for " << name << std::endl;
        }
    player(std::string name, int health, int xp) {
        this->name = name;
        this->health = health;
        this->xp = xp;
        std::cout << "Three argument constructor called! for " << name << std::endl;
    }
    // destructor
    ~player() {std::cout << "Destructor called! for " << name << std::endl;}
};

int main() {
    // they are separated by scopes "{}"
    // when class is out of scope then destructor is called
    {
        player meek;
        meek.set_name("Meek");
    }
    {
        player Mj;
        Mj.set_name("Mj");
        player hero;
        hero.set_name("Hero");
        player kim;
        kim.set_name("Kim");
        // destructor is called in reverse order of the constructors
    }
    {
    player *enemy = new player;
    enemy -> set_name("Enemy");
    delete enemy;
    player *boss = new player("Boss", 100, 1000);
    boss -> set_name("Boss");
    delete boss;
    }
    return 0;
}