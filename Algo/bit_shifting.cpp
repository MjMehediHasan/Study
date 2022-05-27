// Qus : https://codeforces.com/contest/579/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);


int main() {
    fast
    int x, cnt{0};
    cin >> x;
    
  // Very very important and handy method in binary cases
    while (x) {
        cnt += x & 1;     // Compares if last bit is 1 or 0
        x >>= 1;    // Shifts the last bit and updates X
    }
    cout << cnt << endl;
}
