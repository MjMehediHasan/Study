// WAKE UP TO REALITY - Ghost of the uchiha
#include<bits/stdc++.h>
using namespace std;

pair<string, char> divide(string a, int b, int base) {
    string quotient = "";
    int remainder = 0;
    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (char digit : a) {
        if (digits.find(digit) >= base) {
            return {"0", '0'};
        }
        int dividend = remainder * base + digits.find(digit);
        char quotient_digit = digits[dividend / b];
        remainder = dividend % b;
        quotient += quotient_digit;
    }
    return {quotient, digits[remainder]};
}

int main() {
    cout << "Enter Number, Base, Expected number base : " << endl;
    string base_number;
    int convert_to, base;
    cin >> base_number >> base >> convert_to;
    string ans = "";
    while (stoi(base_number) > 0) {
        auto res = divide(base_number, convert_to, base);
        if (res.first == "0" && res.second == '0') {
            cout << "Not Today Brother ! 😉" << endl;
            return 0;
        }
        ans += res.second;
        base_number = res.first;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
