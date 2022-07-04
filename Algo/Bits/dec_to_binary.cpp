#include<bits/stdc++.h>
using namespace std;

int toBin(int n) {
    int p{1}, ans{0};
    while (n > 0) {
        int last_bit = (n&1);
        ans += p*last_bit;
        p *= 10;
        n >>= 1;
    }
    return ans;
}


stack<int> b;
void binz(int n) {
    while (n > 0) {
        b.push((n&1));
        n >>= 1;
    }
}

int main() {
    int n;
    cin >> n;
    cout << toBin(n) << endl;

    // using stack
    binz(n);
    while (!b.empty()) {
        cout << b.top();
        b.pop();
    }
}