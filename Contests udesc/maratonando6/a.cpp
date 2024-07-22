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
    int n, x, y; cin >> n >> x >> y;
    map <pair<int, int>, int> mp;

    ll res = 0;

    for (int i = 0; i < n; i++){
        int a; cin >> a;
        res += mp[{(x-a%x)%x, a%y}];
        ++mp[pair{a%x, a % y}];
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



