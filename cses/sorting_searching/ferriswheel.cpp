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
    int n, mxw; cin >> n >> mxw;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());

    int l = 0,r = n-1, ans = 0;
    while (l <= r){
        if (l == r){
            ans++;
            break;
        }
        if (a[l] + a[r] > mxw) r--;
        else r--, l++;
        ans++;
    }

    cout << ans << endl;
    
        
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



