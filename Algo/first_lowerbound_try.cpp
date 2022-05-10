// Qus : https://codeforces.com/contest/1676/problem/E


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);



int main() {
    fastIO
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end(), greater<ll>());

        map<ll, ll> psum;
        ll curr = 0;
        for (ll i = 0; i < n; i++) {
            curr += arr[i];
            psum.insert({curr, i});
        }

        while (q--) {
            ll x;
            cin >> x;
            auto it = psum.lower_bound(x);
            if (it == psum.end()) {
                cout << -1 << '\n';
                continue;
            }
            cout << (*it).second+1 << '\n';
        }
    }
}
