// Qus : https://www.codechef.com/problems/GCDQ

#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);

vector<int> preGCD;
vector<int> sufGCD;

void preGCD_calc(vector<int> &a, int n) {
    preGCD.resize(n, 0);
    preGCD[0] = a[0];
    for (int i = 1; i < n; i++) preGCD[i] = __gcd(preGCD[i - 1], a[i]);

    sufGCD.resize(n, 0);
    sufGCD[n - 1] = a[n - 1];
    for (int i{n-2}; i > 0; i--) sufGCD[i] = __gcd(sufGCD[i+1], a[i]);
}

int main() {
    fast
    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        preGCD_calc(a, n);
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--, r--;
          
          // Corner cases
            if (l == 0) cout << sufGCD[r + 1] << nn;
            else if (r == n - 1) cout << preGCD[l - 1] << nn;
          // General cases
            else cout << __gcd(preGCD[l-1], sufGCD[r+1]) << nn;
        }
    }
}
