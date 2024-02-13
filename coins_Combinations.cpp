#include<iostream>
#include<vector>
using namespace std;

int fbu(vector<int>& coins, int x, int  n) {
    vector<int> dp(100005, 0);
    int MOD = 1000000007;
    dp[0] = 0;
    for(int j = 0; j < n; j++) {
        for(int i = 1; i <= x; i++) {
                if(i - coins[j] < 0) continue;
                dp[i] = (dp[i] % MOD + dp[i - coins[j]] % MOD) % MOD;
        }
    }
    return dp[x];
}

int main() {
    int n, x;
    cin>> n >> x;
    vector<int> coins(n);
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    cout << fbu(coins, x, n);
    return n;
}