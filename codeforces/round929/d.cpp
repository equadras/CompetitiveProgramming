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
    ll mn = 2e9+5;
    for (ll i = 0; i < n; i++){
        ll x; cin >> x;
        a[i] = x;
        mn = min(mn, x);
    }
    bool f = false;
    
    if (count(a.begin(), a.end(), mn) == 1) f = true;
    else {
        for (ll i = 0; i < n; i++){
            if (a[i] % mn != 0) f = true;
        }
    }

    /* debug(a,mn,f); */
    cout << (f ? "YES" : "NO") << endl;

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


