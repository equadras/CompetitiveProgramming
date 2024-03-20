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
    ll n, x, y; cin >> n >> x >> y;
    vector <ll> a(n);
    map <pair <ll,ll>,ll> mp;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[{a[i] % x, a[i] % y}]++;
    }

    ll res = 0;

    for (auto [ele1, ele2] : mp){
        pair <ll,ll> xx = make_pair((x - ele1.first) % x, ele1.second);
        if (ele1 == xx) res += ele2 * (ele2 - 1);
        else if (mp.count(xx)) res += ele2 * mp[xx];

    }

    cout << res / 2 << endl;

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


