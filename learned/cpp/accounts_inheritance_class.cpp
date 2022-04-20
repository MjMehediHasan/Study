#include<iostream>
#include<string>

using namespace std;



class account {
    double balance{100.0};
    float interestRate{0.1};
    int acNo{007};
    string name{"Koder"};

 public:
    account() {
        cout << "Empty Cons account !" << '\n';
    }
    account(int bal, int ac, string n)
        : balance{bal}, acNo{ac}, name{n} {
        cout << "Three argument constructor called! for " << name << '\n';
    }

    void showDetails(string s) {
        cout << "\n###############################\n";
        cout << s << " Details:\n\n";
        cout << "balance: " << balance << '\n' << "accountNo: " << acNo << '\n' << "name: " << name << '\n';
        cout << "Interest Rate: " << interestRate << " %\n";
    }


    void dep(int x, string s) {
        balance += x;
        cout << "Added " << x << " $ to " << s << " account\n";
    }

    void intDepo(int yr) {
        balance += balance*yr*interestRate;
        // i = pnr
        // p += i

    }

    void wit(int x, string s) {
        if (balance - x > 0) {
            balance -= x;
            cout << "Removed " << x << " $ from " << s << " account\n";
        } else {
            cout << "Insuffisient Fund !\n";
        }

    }
    ~account() {std::cout << "Destructor called! for " << name << std::endl;}
};

class savings : public account {
 public:
    savings() {account(); cout << "Empty Cons Savings !" << '\n';}
    savings(int bal, int ac, string n)
        : account(bal, ac, n) {
        cout << "Savings Account created for " << n << '\n';
    }

    void showDetails() {account::showDetails("SAVINGS"); cout << "\n\n\n";}

    // Deposit money
    void deposit(int x) {account::dep(x, "SAVINGS");}
    void withdraw(int y) {account::wit(y, "SAVINGS");}
    ~savings() {cout << "Des Savings !" << '\n';}
};


class fixedDeposit : public account {
    int installmentAmmount{0};
    int tenureYear{0};

 public:
    fixedDeposit() {account(); cout << "Cons fixedDeposit !" << '\n';}
    fixedDeposit(int bal, int ac, string n, int yr, int im)
        : account(bal, ac, n), installmentAmmount{im}, tenureYear{yr} {
        cout << "FixedDeposit Account created for " << n << '\n';
    }

    void showDetails() {
        account::showDetails("FIXED DEPOSIT");
        cout << "installmentAmmount: " << installmentAmmount << "\ntenureYear: " << tenureYear << "\n\n\n";
        }

    // Using direct reference to change the value of Savings account also
    void autoInstallment(savings &x) {

        // installment for 12 months directly
        x.withdraw(installmentAmmount*12);
        this->dep(installmentAmmount*12, "FIXED DEPOSIT");
    }
    ~fixedDeposit() {cout << "Des fixedDeposit !" << '\n';}
};




int main() {
    account test;
    savings svOBJ(150000, 7, "KoderSavings");
    // use 200000 instead of 150000 not to get insufficient fund msg

    svOBJ.showDetails();
    fixedDeposit fsvOBJ(1, 7, "KoderFixedDeposit", 3, 5000);
    for (int i{0}; i < 3; i++) {
        fsvOBJ.autoInstallment(svOBJ);
        svOBJ.intDepo(i);
        // Adding interest around the year
    }
    svOBJ.showDetails();
    fsvOBJ.showDetails();
}
