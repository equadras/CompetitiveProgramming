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
    int n, s, r; cin >> n >> s >> r;
    int last = s - r;

    vector<int> res;
    res.emplace_back(last);

    for (int i = 0; i < n - 1; i++){
        int k = (n - 2 - i);
        int x = min(r - k,last);
        r -= x;
        res.emplace_back(x);
    }

    for (auto e : res) cout << e << " ";
    cout << endl;
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



