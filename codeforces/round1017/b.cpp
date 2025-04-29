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
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    vector<int> res;
    res.push_back(0);

    for (int i = 1; (int) res.size() <= m && i <= r; i++){
        res.push_back(i);
    }
    for (int i = -1; (int) res.size() <= m && i >= l; i--){
        res.push_back(i);
    }

    sort(res.begin(),res.end());
    cout << res[0] << ' ' << res[m] << endl;
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




