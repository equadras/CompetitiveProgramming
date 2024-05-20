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
    ll R; cin >> r;
    ll l2 = r, g = r+1;
    int res = 2;

    for (int x = 1; x <= r; x++){
        while (l2 >= 1 && x*x + (l2-1)*(l2-1) >= r*r) l2--;
        while (g >= 1&&x*x+(yr-1)*(yr-1)>=(r+1)*(r+1)) yr--;
        if (l2 < g){
            res += (g-l2)*4;
            if (l2==0) res-= 2;
        }
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



