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
    vector<vector<int>> a (n, vector<int> (n));
    vector<int> ans(2*n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            ans[i+j+1] = a[i][j];
        }
    }

    auto sans = ans;
    sort(sans.begin(),sans.end());

    /* debug(sans); */
    for (int i = 1; i < (int) sans.size(); i++){
        if (sans[i-1] + 1 != sans[i]) {
            ans[0] = sans[i]-1;
            /* debug(sans[i]); */
        }
    }

    auto mx = *max_element(ans.begin(),ans.end());
    /* debug(mx); */
    for (auto e : ans){
        cout << (e!= 0 ? e : mx+1) << ' ';
    }
    cout << endl;
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




