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
    ll a, b, l; cin >> a >> b >> l;
    map <ll,ll> mp;

    ll x = 1, y = 1;
    while (true){
        if (x > l) break;
        while (true){
            if (y > l) break;
            if (x*y <= l && l % (x*y)== 0) mp[l/(x*y)]++;
            y*=b;
        }
        y = 1;
        x *= a;
    }
    cout << mp.size() << endl;
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


