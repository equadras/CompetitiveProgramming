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
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    map<int,int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
        mp[b[i]]++;
    }

    for (int i = 1; i <= k; i++){
        if (mp[i] > 0) continue;
        else {
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
