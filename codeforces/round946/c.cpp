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
    vector<ll> a(n);
    for (ll &i : a) cin >> i;

    map<tuple<ll, ll, ll>, ll> mp;

    ll res = 0;
    for (ll i = 0; i < n-2; i++){

        tuple <ll,ll,ll> cj1 = {a[i], a[i+1], a[i+2]};
        tuple <ll,ll,ll> cj2 = {-11, a[i+1], a[i+2]};
        tuple <ll,ll,ll> cj3 = {a[i], -11, a[i+2]};
        tuple <ll,ll,ll> cj4 = {a[i], a[i+1], -11};

        mp[cj1]++; mp[cj2]++; mp[cj3]++; mp[cj4]++;
        ll x = mp[cj2] + mp[cj3] + mp[cj4];
        res += abs((3*mp[cj1]) - x);
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



