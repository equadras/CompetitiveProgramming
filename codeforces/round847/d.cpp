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
    /* map<int,int> mp; */
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());

    multiset<int> mst;
    int res = 0;

    for(int i = 0; i < n; i++){
        auto x = mst.find(a[i] - 1);
        if (x != mst.end()) mst.erase(x);

        else res++;
        mst.insert(a[i]);
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



