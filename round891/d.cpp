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
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> df(n);
    ll mx = -5e9-5;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++){
        df[i] = a[i] - b[i];
        mx = max(mx, df[i]);
    }

    debug(mx, a, b, df);

    vector<ll> res;
    /* res.clear(); */

    for (int i = 0; i < n; i++){
        if (df[i] == mx) res.push_back(i+1);
    }

    cout << res.size() << endl;
    for (auto ele: res) cout << ele << " ";
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


