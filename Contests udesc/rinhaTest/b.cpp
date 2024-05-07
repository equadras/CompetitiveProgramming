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
    int n, m; cin >> n >> m;
    vector<int> a(n+1);
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[x]++;
    }
    sort(a.begin(),a.end());
    int res = 0;
    for (int i = 1; i < n; i++){
        res += a[i]; 
    }
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}



