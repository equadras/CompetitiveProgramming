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
    int n, a, b; cin >> n >> a >> b;
    int res = 0;
    if (n & 1){
        res += a;
        ((n/2)*b < (n-1)*a ? res+= (n/2)*b : res+= (n-1)*a);
    }
    else ((n/2)*b < (n*a) ? res+= (n/2)*b : res+= n*a);
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



