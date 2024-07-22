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
    for (int &i : a) cin >> i;

    multiset<int, greater<>> mst;
    ll res = 0;

    for (int i = 0; i < n; i++){
        if (a[i] > 0) mst.emplace(a[i]);
        else {
            if (!mst.empty()){
                auto x = begin(mst);
                res += *x;
                mst.erase(x);
            }
        }
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



