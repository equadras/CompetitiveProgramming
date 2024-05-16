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
    int n, k, q; cin >> n >> k >> q;

    vector<ll> a(k+1), b(k+1);
    debug(a,b);
    a[0] = 0;
    b[0] = 0;

    for (int i = 1; i <= k; i++) cin >> a[i];
    for (int i = 1; i <= k; i++) cin >> b[i];
    /* for (auto &i : a) cin >> i; */
    /* for (auto &i : b) cin >> i; */

    for (int i = 0; i < q; i++){
        ll c; cin >> c;
        int l = 0, r = k;

        /* debug(c); */
        while (l <= r){
            int mid = (l+r) >> 1;
            if (a[mid] > c)
                r = mid-1;
            else
                l = mid+1;
        }

        /* debug(a[r]); */

        if (a[r] == c){
            cout << b[r] << " ";
            continue;
        }

        ll res = b[r] + (c-a[r]) * (b[r+1]-b[r]) / (a[r+1]-a[r]);
        cout << res << " ";
    }
    cout << endl;
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


