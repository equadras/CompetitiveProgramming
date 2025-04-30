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
    for (ll &i : a) cin >> i;

    vector<ll> cnt(30);
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < 30; j++){
            if ((a[i] >> j) & 1) cnt[j]++;
        }
    }

    ll res;
    for (ll i = 0; i < n; i++){
        ll x = 0;
        for (ll j = 0; j < 30; j++){
            if ((a[i] >> j) & 1) x += (1 << j)* (n-cnt[j]); // (cntBit[i]-n) * (2^i)
            else x += (1 << j) * cnt[j]; //cnt[i] * (2^i)
        }
        res = max(res, x);
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




