// Copyright [2022] Meek_0
// Learning Started 10/02/22 | 04.00 p.m
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
 public:
    // attributes
    str name {"Player"};
    int health {100}, xp {0};

    // methods
    void talk(str text) {cout << name << " says,\"" << text << "\"" << endl ;}
    bool is_dead();
    // these are only prototypes
};

class Account {
 public:
    // attributes
    str names {"Accounts"};
    double balance {0.0};

    // methods
    bool deposit(double bal) { balance += bal; cout << bal << " is deposited, balance is " << balance << endl; return true; }
    bool withdraw(double bal) { balance -= bal; cout << bal << " is withraw, balance is " << balance << endl; return true; }
    // don't need semicolon outside of curly braces
};
int main() {
    // PLAYER class
    PLAYER meek;
    meek.name = "Meek";
    meek.talk("hello buddy !");
    //
    PLAYER *enemy{nullptr};
    enemy = new PLAYER;
    (*enemy).name = "Enemy";
    enemy -> health = 50;
    enemy -> talk("I'll destroy you !");
    // both methods are for accessing pointer to an object
    delete enemy;

    // Account class
    Account meek_account;
    Account mehedi_account;
    meek_account.deposit(100.25);
    mehedi_account.deposit(200);
    meek_account.withdraw(50.10);
    mehedi_account.withdraw(100);
return 0;
}