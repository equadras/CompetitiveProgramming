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
    vector<int> a(n);
    vector<int> pref(n+1);
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
        pref[i+1] = pref[i] + a[i];
    }

    int q; cin >> q;
    int l, u;
    int idx = -1;
    while(q--){
        cin >> l >> u;
        int ll = l;
        int rr = n; 

        while (ll <= rr){
            int mid = (ll + rr) / 2;
            if (pref[mid] - pref[l-1] > (u+1)){
                rr = mid - 1;
            }
            else {
                idx = mid;
                l = mid+1;
            }
        }
    }
    cout << l << " " << pref[l] << endl;
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


