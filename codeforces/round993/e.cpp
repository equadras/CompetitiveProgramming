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
    int k, l1, l2, r1, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    int ans = 0;
    while (r2 != 0){
        int gap = min(r1,r2) - max(l1,l2);
        if (gap >= 0){
            ans += gap+1;
        }
        r2 /= k;
        l2 = (l2+k-1)/k;
    }
    cout << ans << endl;
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



