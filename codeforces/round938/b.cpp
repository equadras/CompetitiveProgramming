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
    int n, c, d; cin >> n >> c >> d;
    vector<int> a(n*n);
    int mn = 1e9+2;
    for (int &i : a){
        cin >> i;
        mn = min(mn,i);
    }

    sort(a.begin(),a.end());

    int a1 = a[0];
    multiset<int> mp;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            mp.insert(a1+(i)*c+(j)*d);
        }
    }
    /* debug(mp); */

    for (int i = 0; i < n * n; ++i){
        if (mp.count(a[i]) == 0){
            cout << "NO" << endl;
            return;
        }
        mp.extract(a[i]);
    }
    cout << "YES" << endl;
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



