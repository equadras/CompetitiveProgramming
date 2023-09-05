#include <bits/stdc++.h>

using namespace std;
#define ll long long

const ll mod = 1e9+7;
const ll maxn = 1e5+5;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n+1);
        vector<vector<int>> dp(n+1, vector<int>(64, 0));
        for(int i = 1; i <= n; ++i) {
            cin >> a[i];
            for(int mask = 0; mask < 64; ++mask) {
                dp[i][mask] = (dp[i][mask] + dp[i - 1][mask]) % mod;
                dp[i][mask & a[i]] = (dp[i][mask & a[i]] + dp[i - 1][mask]) % mod;
            }
            dp[i][a[i]] = (dp[i][a[i]] + 1) % mod;
        }
        int ans = 0;
        for(int mask = 0; mask < 64; ++mask) {
            if(__builtin_popcount(mask) == x) {
                ans = (ans + dp[n][mask]) % mod;
            }
        }
        cout << ans << "\n";
    }
}

