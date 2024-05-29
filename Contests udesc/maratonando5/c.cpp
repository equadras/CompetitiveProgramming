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
    int r = n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        while (x % 2 == 0){
            r--;
            x /= 2;
        }
        int p = (i + 1);
        int c = 0;
        while (p % 2 == 0){
            c++;
            p /= 2;
        }
        a.push_back(c);
    }
    sort(a.begin(), a.end(), greater<int>());
    int cur = 0;

    while (cur < a.size() && r > 0){
        r -= a[cur];
        cur++;
    }
    cout << (r <= 0 ? cur : -1) << endl;
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



