#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const ll MOD = 1e9+7;


ll binpow(ll a, ll b){
    ll res = 1;
    while (b > 0){
        if (b & 1) res = res *a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    ll mx = 0, total = 0;
    ll agr = 0;
    for (ll i = 0; i < n; i++) {
        total += a[i];
        agr += a[i];
        agr = max(agr, 0LL);
        mx = max(mx, agr);
    }
    total = (total % MOD + MOD) % MOD;
    mx = mx % MOD;


    cout << (total + mx * binpow(2,k) - mx + MOD) % MOD << endl;
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


