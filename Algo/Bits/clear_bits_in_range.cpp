#include<bits/stdc++.h>
using namespace std;

void cleadBitzInRange(int &n, int start, int finish) {          // starting from right most bits
    int a = (~0) << (finish+1);     // ~0 == -1
    int b = (1 << start) - 1;       // BEcause till i'th bit it's 2^i - 1. Which is basically 1 shifted to i then minus 1
    // cout << "B: " << b << endl;
    int mask =(a | b);
    n &= mask;
}

void replaceBitz(int &n, int i, int j, int m) {
    cleadBitzInRange(n, i, j);
    int mask = (m << i);
    n |= mask;
}


int main() {
    int n, i, j, m;
    cin >> n >> i >> j >> m;
    // cleadBitzInRange(n, i, j);
    // cout << n << endl;
    replaceBitz(n, i , j, m);
    cout << n << endl;
}

/*
for n = 31

n =     1 1 1 1 1
a =     1 0 0 0 0 (if finish(j) == 3)
b =     0 0 0 0 1 (if start(i) == 1)
mask =  1 0 0 0 1 (a|b)
n&mask= 1 0 0 0 1 = 17

*/