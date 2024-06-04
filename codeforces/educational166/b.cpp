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
    vector<ll> b(n+1);

    for (ll &i : a) cin >> i;
    for (ll &i : b) cin >> i;

    ll ans = INT_MAX;


    for (ll i = 0; i < n; i++){
        ans = min(ans, abs(a[i] - b[n]));
        ans = min(ans, abs(b[i] - b[n]));
        /* debug(ans); */
        if (b[n] <= max(a[i], b[i]) && min(a[i], b[i]) <= b[n]
) ans = 0;
            }


    for (ll i = 0; i < n; i++){
        ans += abs(a[i] - b[i]);
    }
    cout << ans+1 << endl;
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



