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
    vector<int> a(n);
    for (int &i : a) cin >> i;
    
    while (q--){
        int k, l, r; cin >> k >> l >> r;
        int ans = 0;

        for (int i = l; i <= r; i++){
            while (k % a[i] == 0){
                k = k/a[i];
            }
            ans += k;
        }
        cout << ans << endl;
    }

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




