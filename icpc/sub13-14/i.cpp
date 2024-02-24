#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;


const int maxn = 2005;
int a [maxn];
int dp [maxn];

void solve(){
    int n, c, t1, t2; cin >> n >> c >> t1 >> t2;

    for (int i = 1; i <= n; i++) cin >> a[i];

    sort(a, a+1+n);

    for (int i = 1; i <= n; i ++){
        dp[i] = dp[i - 1] + min(t1, t2);

        int x = -1, y = -1;

        for (int j = i - 1; j >= 1; j--){
            if (a[i] - a[j] <= t1) x = j;
            if (a[i] - a[j] <= t2) y = j;
        }

        if (x != -1) dp[i] = min(dp[i], dp[x-1]+t1);
        if (y != -1) dp[i] = min(dp[i], dp[y-1]+t2);
    }
    
    /* for (auto e:dp) cout << e << " "; */
    cout << dp[n] << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}


