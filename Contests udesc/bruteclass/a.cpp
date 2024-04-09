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
    vector<int>a(n);

    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());

    int l = 0, r = n-1;
    int res = 0;
    while (l < r){
        res += a[r] - a[l];
        r--; l++;
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


