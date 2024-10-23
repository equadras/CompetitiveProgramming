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
    int n, k; cin >> n >> k;
    vector<ll> a(n);
    for (ll &i : a) cin >> i;

    sort(a.begin(),a.end());

    ll x = k;
    ll res = 0;

    for (int i = 0; i < n; i++){
        if ((a[i] * (n-i)) >= x){
            res += x;
            break;
        }
        x -= a[i];
        res += a[i]+1;
    }

    cout << res << endl;
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



