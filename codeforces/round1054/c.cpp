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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    map<int,int> mp;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    int cp = mp[k];
    int res = 0;

    for (int i = 0; i < k; i++){
        debug(mp[i], res);
        if (mp[i] == 0) res++;
    }


    cout << (max(cp,res)) << endl;


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


