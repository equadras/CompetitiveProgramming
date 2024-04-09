#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

int solve2 (int idx, vector<vector<int>> a, vector<vector<int>> dp, int m){
    if (idx == a[0].size()) return 0; //out of bounds
    if (dp[idx][m] != -9) return dp[idx][m];

    int res = 1e9-5;

    //alrai
    for (int i = 0; i < 3; i++){
          if (((1 << i) & (m)) == 0){
            res = max(res,solve2(idx+1,a,dp,m | (1 << i)) + a[i][idx]);
        }
    }

    //not alrai
    res = max(res,solve2(idx+1,a,dp,m));
    return dp[idx][m] = res;
}

void solve(){
    int n, k; cin >> n >> k;
    vector<vector<int>> a(3, vector<int>(n));

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(9,-9));
    cout << solve2 (0,a,dp,0) << endl;

}


signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}


