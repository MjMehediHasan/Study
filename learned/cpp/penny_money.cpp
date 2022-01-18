// "Copyright [2022] Mehedi Hasan"
// Learning Started 18/01/22 | 7.00 p.m


#include<iostream>

int main() {
    const int money[5] = {100, 25, 10, 5, 1};
    const char *moneyName[5] = {"Dollar ", "Quaters", "Dimes  ", "Nickels", "Penny  "};
    // Pointer(*) is needed to declare string array !
    int cents{0}, reminder{0};
    std::cout << "\nEnter the cents : ";
    std::cin >> cents;
    std::cout << "\n======= Here is the change =======\n\n";
    for (int i = 0; i < 5; i++) {
        std::cout << moneyName[i] << " : " << cents/money[i] << std::endl;
        cents %= money[i];
    }
}  // NOLINT