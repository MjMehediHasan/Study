// Copyright [2022] Meek_0
// Learning Started 10/02/22 | 08.00 p.m
// declare methods outside of class

#include <iostream>
#include <vector>
#include <string>

#define cout std::cout
#define str std::string
#define vec std::vector
#define cin std::cin
#define pb push_back
#define endl std::endl

class Account {
 private:
    // attributes
    str names {"Accounts"};
    double balance {0.0};
 public:
    // methods
    bool deposit(double bal) { balance += bal; cout << bal << " is deposited, balance is " << balance << endl; return true; }  // NOLINT
    void set_balance(double b) {balance = b;}
    double get_balance() {return balance;}

    // will be declared outside of the class
    // but prototypes must be inside the class first
    bool withdraw(double bal);
    void set_name(str n);
    str get_name();
};

void Account::set_name(str n) {
    names = n;
}
str Account::get_name() {
    return names;
}
bool Account::withdraw(double bal) {
    if (balance - bal > 0) {
       balance -= bal;
       cout << "Successfull ! Balance is " << balance << endl;
       return true;
    } else {
       cout << "Insufficient money !:disappointed:" << endl;
       return false;
    }
}
int main() {
    // Account class
    Account meek_account;
    meek_account.set_name("Meek_0");
    meek_account.deposit(100.25);
    meek_account.withdraw(50.10);
    cout << meek_account.get_balance() << endl;
    cout << meek_account.get_name() << endl;
return 0;
}