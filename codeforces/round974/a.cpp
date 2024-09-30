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

    int x = 0, res = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] >= k) x+= a[i];
        if (a[i] == 0 && x > 0) x--, res++;
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



