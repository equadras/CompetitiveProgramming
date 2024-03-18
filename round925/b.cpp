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
    int sm = 0;
    for (int i = 0; i < n; i++){ 
        cin >> a[i];
        sm += a[i];
    }

    int sobra = 0;
    for (int i = 0; i < n; i++){ 

        if (a[i] > sm/n) sobra += a[i] - (sm/n);
        else sobra -= (sm/n) - a[i];

        if (sobra < 0){
            cout << "NO" << endl;
            return;
        }

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
