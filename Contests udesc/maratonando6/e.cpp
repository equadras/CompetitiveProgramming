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
    for (int & i : a) cin >> i;
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    
    int j = 0, res = 0;

    /* debug(a); */
    for (int i = 0; i < (int) a.size(); i++){
        /* debug(a[i],a[j]); */
        while (a[i] - a[j] >= n) j++;
        /* debug(a[i],a[j]); */

        res = max(res, i - j + 1);
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




