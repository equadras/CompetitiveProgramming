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
    int res = 0;

    for (int &i : a) cin >> i;

    sort(a.begin(),a.end());
    vector<pair<int,int>> pa((n/2));

    int j = 0;
    for (int i = 0; i < n-1; i+=2){
        pa[j++] = make_pair(a[i],a[i+1]);
    }

    for (int i = 0; i < n/2; i++){
        int x = pa[i].first;
        int y = pa[i].second;
        res = max(abs(x-y),res);
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


