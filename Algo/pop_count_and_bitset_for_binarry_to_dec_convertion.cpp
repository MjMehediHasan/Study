// Qus : https://codeforces.com/contest/579/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);

ll bin(ll &n) {
    auto bit = std::bitset<32>(n).to_ullong();
    return __builtin_popcount(bit);
}

int main() {
    fast
    ll x;
    cin >> x;
    cout << bin(x) << endl;
}
