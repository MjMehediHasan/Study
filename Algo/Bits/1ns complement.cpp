#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn endl
#define prime 1000000007
#define all(_a) (_a.begin(), _a.end())
#define read(_a, _n) for (ui i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
using namespace std;
#define ll long long
#define ull unsigned long long
#define ui unsigned ll
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);


int main() {
	#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    fprintf(stderr, "\n>> Runtime: %.3fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
	#endif
    fast
    cout << (~0) << nn;
    int a, b;
    cin >> a >> b;
    cout << (a << b) << nn; 	// ans = (a*(2^b)), when a << b;
    cout << (a >> b) << nn; 	// ans = (a/(2^b)), when a >> b;

    // Get the i'th bit
    int c, d;
    cin >> c >> d;
    cout << (c&(c<<d)) << nn;  // prints the d'th bit of number c

    return 0;
}