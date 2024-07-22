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
    ll m, n; cin >> m >> n;

    vector<ll> a(m+1);
    for (ll i = 1; i <= m; i++) cin >> a[i];

    string res;
    map <ll,ll> mp;

    for (ll i = 1; i <= n; i++){
        ll mio = 1e9+5, x = -1;

        for (ll j = 1; j <= m; j++){
            if (mp[j]) continue;
            if (a[j] == i && mio > n - a[j] + 1) mio = n - a[j] + 1, x = j;

            if (n - a[j] + 1 == i){
                if (mio > a[j])
                    mio = a[j], x = j;
            }
        }

        mp[x] = 1;
        if (x != -1) res += 'A';
        else res += 'B';
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



