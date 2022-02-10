// Copyright [2022] Meek_0
// Learning Started 10/02/22 | 11.00 a.m
// declare classes and objects

#include <iostream>
#include <vector>
#include <string>

#define cout std::cout
#define str std::string
#define vec std::vector
#define cin std::cin
#define pb push_back
#define endl std::endl

class PLAYER {
    // attributes
    str name {"Player"};
    int health {100}, xp {0};

    // methods
    void talk(str);
    bool is_dead();
    // these are only prototypes
};

class Account {
    // attributes
    str names {"Accounts"};
    double balance {0.0};

    // methods
    bool deposit(double);
    bool withdraw(double);
};
int main() {
    Account meek_account;
    Account mehedi_account;
    PLAYER meek;
    PLAYER hero;
    PLAYER player[] {meek, hero};
    // PLAYER newPlayers[] {"meek", "Mehedi"}
    vec<PLAYER> player_vec {meek};
    player_vec.pb(hero);
    PLAYER *enemy{nullptr};
    enemy = new PLAYER;
    delete enemy;

return 0;
}
