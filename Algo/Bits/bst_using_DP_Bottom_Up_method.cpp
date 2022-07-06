/*
BST algo for bottom up method;
Intro : BST is continous; 1, 2, 3, 4, 5
        you can choose any of it as root node and then combine left and right elements;
        for J'th node out of "N" you will have "J-1" elements in left and "N-J" elements in right;
        choose 1 BST from J-1 element is (J-1) C (1) and (N-J) C (1);
*/



#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define prime 1000000007
#define read(_a, _n) for (ui i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
#define all(_a) _a.begin(), _a.end()
using namespace std;
#define ll long long
#define ull unsigned long long
#define ui unsigned ll
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);


// bst_using_DP_Bottom_Up_method; For n nodes it gives possible ways to make bst;

int bstBotUp(int n){
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        for (int j = 1; j <= i; j++) {
            dp[i] += (dp[j - 1] * dp[i - j]);
            dp[i] %= prime;
        }
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << bstBotUp(n);
    return 0;
}