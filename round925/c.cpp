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
    for (int i = 0; i < n; i++) cin >> a[i];

    int pref = 0, suf = 0;
    /* int l = 0, r = n-1; */

    while (pref < n){
        if (a[pref] != a[0]) break;
        pref++;
    }
    while (suf < n){
        if (a[n-1-suf] != a[n-1]) break;
        suf++;
    }


    int res = 0;
    /* debug(pref,suf); */
    if (pref != n && suf != n){
        res = n - max(pref,suf);
        if (a[0] == a[n-1]) res = (n-pref-suf < res ? n-pref-suf : res);
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


