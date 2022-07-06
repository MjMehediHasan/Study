
#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
#define read(_a, _n) for (ui i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
#define all(_a) _a.begin(), _a.end()
using namespace std;
#define ll long long
#define ull unsigned long long
#define ui unsigned ll
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);


void subSet(string &s) {
    int n = s.length();
    for (int i = 0; i < (1 << n); i++) {
        string str = "";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                str += s[j];
            }
        }
        if (str.size()) cout << str << endl;
    }
}

int main() {
    fast
    string s;
    cin >> s;
    subSet(s);
    return 0;
}