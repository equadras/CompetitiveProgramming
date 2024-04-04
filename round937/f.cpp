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
    int a, b, c; cin >> a >> b >> c;
    if (a+1 != c){
        cout << -1 << endl;
        return;
    }
    int res = -1, cnt = 1;

    int x,k,l;
    while (a + b + c > 0){
        if (a < cnt) x = a;
        if (cnt <= a) x = cnt;


        if (b < cnt-x) k = b;
        if (cnt-x <= b) k = cnt-x;


        if (c < cnt-x-k) l = c;
        if (cnt-x-k <= c) l = cnt-x-k;

        a -= x; b -= k; c -= l;
        cnt = cnt + x - l;

        res++;
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


