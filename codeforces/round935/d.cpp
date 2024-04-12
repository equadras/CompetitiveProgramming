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

    ll n, m; cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> mns;


    for (ll &i : a) cin >> i;
    for (ll &i : b) cin >> i;

    for (ll i = 0; i < n; i++){
        mns.push_back(min(a[i], b[i]));
    }

    ll res = 0;
    ll ans = LLONG_MAX;
    for (ll i = n-1; i >= m; i--){
        res += mns[i];
    }
    ans = a[m-1] + res;
    res += min(a[m-1], b[m-1]);

    for (ll i = m-2; i >= 0; i--){
        ans = min(res + a[i], ans);
        res += min(a[i], b[i]);
    }

    cout << ans << endl;

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



