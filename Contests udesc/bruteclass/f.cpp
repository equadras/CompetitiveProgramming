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
    int n,k,q; cin >> n >> k >> q;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    ll res = 0;
    for (int i = 1; i<= n; i++){
        ll tam = 0;
        if (a[i] <= q){
            while (i <= n && a[i++] <= q) tam++;
            if (tam >= k) res += ((tam - k+2)*(tam - k+1))/ 2;
            i -= 1;
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
