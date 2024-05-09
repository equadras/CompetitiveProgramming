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
    int n, q; cin >> n >> q;
    vector<int> a(n+1);
    map<int,vector<int>> mp;
    mp[0].push_back(0);

    for (int i = 1;i <= n; i++){
        int x; cin >> x;
        a[i] = a[i-1] ^ x;
        mp[a[i]].push_back(i);
    }


    for (int i = 0;i < q; i++){
        int l, r; cin >> l >> r;
        if (a[l-1] == a[r]) cout << "YES" << endl;
        else {
            int l2 = 0;
            int r2 = (int) mp[a[l-1]].size()-1;

            while(l2 <= r2){
                int mid = (l2 + r2) >> 1;
                /* debug(mid); */

                if (mp[a[l-1]][mid] <= r) l2 = mid+1;
                else r2 = mid-1;
            }

            int lind = mp[a[l-1]][r2];
            /* debug(lind); */

            l2 = 0;
            r2 = (int) mp[a[r]].size()-1;

            while (l2 <= r2){
                /* debug(mid); */
                int mid = (l2 + r2) >> 1;
                if (mp[a[r]][mid] >= l) r2 = mid-1;
                else l2 = mid+1;
            }

            int rind = mp[a[r]][l2];
            /* debug(rind); */

            cout << (lind > rind ? "YES" : "NO" ) << endl;
        }
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



