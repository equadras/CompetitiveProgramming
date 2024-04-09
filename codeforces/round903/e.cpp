#include <bits/stdc++.h>

using namespace std;
//#define int long long
const int inf = 2e5+5;

void solve(){
    int n; cin >> n;
    vector<int> a(n+1);
    vector<int> dp(n + 1, inf);
    dp[0] = 0;

    for(int i = 1; i < n+1; i++) cin >> a[i];

    for(int i = 1; i <= n; i++){
        if(i + a[i] <= n) dp[i + a[i]] = min(dp[i + a[i]], dp[i - 1]);
        dp[i] = min(dp[i], dp[i - 1] + 1);
    }
    cout << dp[n] << endl;
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
