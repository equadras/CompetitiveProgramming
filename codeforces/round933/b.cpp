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

    for (ll i = 0; i < n; i++) cin >> a[i];

    bool flag = false;

    for (ll i = 1; i < n-1; i++){
        if (a[i - 1] < 0) flag = true;
        a[i] = a[i] - a[i-1] * 2;
        a[i+1] = a[i+1] - a[i-1];
        a[i-1] = 0;
    }

    for (ll i = 0; i < n; i++){
        if (a[i] != 0) flag = true;
    }
    cout << (!flag ? "YES" : "NO") << endl;
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



