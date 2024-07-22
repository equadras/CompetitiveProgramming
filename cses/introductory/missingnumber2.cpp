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
    ll n; cin >> n;
    vector<ll> a(n-1);
 
    for (ll i = 0; i < n-1; i++) cin >> a[i];
 
    if (n-1 == 1){
        if (a[0] == 1) cout << 2 << endl;
        else cout << 1 << endl;
        return;
    }


    sort(a.begin(),a.end());
    /* debug(a[n-2], a[n-3]); */

    if (a[n-2]-1 != a[n-3]){
        cout << a[n-3]+1 << endl;
        return;
    }

    for (ll i = 1; i < n-1; i++){
        if (a[i] -1 != a[i-1]){
            cout << a[i-1] + 1 << endl;
            return;
        }
    }
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
 

