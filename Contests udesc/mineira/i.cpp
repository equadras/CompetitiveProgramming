#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


void solve(){
    int n; cin >> n;
    vector<int> a (n);
    for (int &i : a) cin >> i;

    sort(a.begin(), a.end());

    vector<int> dp(n, 1);          
    vector<int> ant(n, -1); 

    map<int, int> mp;
    int mx = 1;
    int idx = 0;

    for (int i = 0; i < n; ++i){
        int agr_mx = 0;
        int agr_idx = -1;

        for (auto& [id, e] : mp){
            if (a[i] % id == 0) {
                if (dp[e] > agr_mx){
                    agr_mx = dp[e];
                    agr_idx = e;
                }
            }
        }

        dp[i] = agr_mx + 1;
        ant[i] = agr_idx;

        mp[a[i]] = i;

        if (dp[i] > mx){
            mx = dp[i];
            idx = i;
        }
    }

    vector<int> res;
    while (idx != -1){
        res.push_back(a[idx]);
        idx = ant[idx];
    }
    cout << res.size() << endl;

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}
