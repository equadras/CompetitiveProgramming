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
    int m, a, b, c; cin >> m >> a >> b >> c;
    int res = 0;
    
    if (a >= m) res += m;
    if (b >= m) res += m;
    
    
    if (a < m){
        int dt = m - a;
        if (dt <= c) res += m, c -= dt;
        else res += a+c, c = 0;
    }
    
    if (b < m){
        int dt = m - b;
        if (dt <= c) res += m, c -= dt;
        else res += b+c, c = 0;
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



