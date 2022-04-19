#include <iostream>
#include <bitset>
using namespace std;


string bin(int v) {
    string s = bitset<64> (v).to_string();
    const auto loc = s.find('1');
    if (loc != string::npos) {
        return s.substr(loc);
    }
    return "0";
}

int main() {
    int x;
    cin >> x;
    cout << bin(x) << endl;
    cout << bitset<64> (bin(x)).to_ulong();
}
