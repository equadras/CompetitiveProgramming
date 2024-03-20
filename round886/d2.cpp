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
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());

    int c = 1, ans = 1;

    for(int i = 1; i < n; ++i) {
        if(a[i] - a[i - 1] > k) {
            c = 1;
        } else {
            c++;
        }
        ans = max(ans, c);
    }
    cout << n - ans << endl;

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


