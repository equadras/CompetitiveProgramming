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
    ll n, h; cin >> n >> h;
    vector<ll> a(n);

    for (ll &i : a) cin >> i;

    ll l = 0, r = 1e18+5;

    while (l <= r){
        ll mid = (l+r) / 2;

        ll sum = mid;
        for (ll i = 0; i < n - 1; ++i) sum += min(mid, a[i + 1] - a[i]);

        if (sum < h) l = mid + 1;
        else r = mid - 1;
    }

    cout << r+1 << endl;
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



