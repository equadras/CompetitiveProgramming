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
    int n; cin >> n;
    int t1 = 0, t2 = 0, t3 = 0;

    while (n--){
        int a, b, c; cin >> a >> b >> c;
        t1 += a;
        t2 += b;
        t3 += c;
    }
    if (t1 == 0 && t2 == 0 && t3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
