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
    int n, m; cin >> n >> m;
    string a, r; cin >> a >> r;

    int px = 0, py = 0;
    int res = 0;

    while (px < n && py < m){
        /* debug(px,py); */
        if (a[px] == r[py]) px++,py++,res++;
        else py++;
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



