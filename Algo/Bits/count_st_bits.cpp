#include<bits/stdc++.h>
using namespace std;


int cntBitz(int n) {
    // for worst case O(N) , here N = count of 1's in the binary

    int ans{0};
    while (n > 0) {
        n &= (n - 1);
        ans++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    {
    clock_t tStart = clock();
    cout << cntBitz(n) << endl;
    fprintf(stderr, "\n>> Runtime: %.3fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    }
    {
    clock_t tStart = clock();
    cout << __builtin_popcount(n) << endl;
    fprintf(stderr, "\n>> Runtime: %.3fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    }

    // so both are same
}