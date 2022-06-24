// Qus : https://vjudge.net/contest/500948#problem/N


#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
#define read(_a, _n) for (ui i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
using namespace std;
#define ll long long
#define ull unsigned long long
#define ui unsigned ll
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);


ll binomialCoeff(ll n, ll k)
{
    ll C[n + 1][k + 1];
    ll i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[n][k];
}

int main() {
    fast
    ll n, m;
    while (1) {
        cin >> n >> m;
        if (!n && !m) break;
        cout << n << " things taken " << m << " at a time is " << binomialCoeff(n, m) << " exactly.\n";
    }
}

/*

1
1 1
1 2 1
1 2 3 2 1

*/
