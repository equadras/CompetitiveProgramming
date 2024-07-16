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

    ll x = 0, ans = 0;
    map<ll,ll> mp;


    for (ll e : a){
        x += e;
        mp[e]++;

        if (x & 1) continue;
        if (mp.count(x/2)) ans++;
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

    ll x = 0, ans = 0;
    map<ll,ll> mp;


    for (ll e : a){
        x += e;
        mp[e]++;

        if (x & 1) continue;
        if (mp.count(x/2)) ans++;
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



