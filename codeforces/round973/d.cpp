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

    ll mn = 1e18+5, mx = -1;
    ll sum = 0, x = 0;

    for (int i = 0; i < n; i++){
        sum += a[i]; x++;
        mn = min(mn, sum/x);
    }

    sum = 0, x = 0;

    for (ll i = n-1; i >= 0; i--){
        sum += a[i]; x++;
        mx = max(mx, (sum+x-1)/x);
    }

    cout << mx - mn << endl;
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



