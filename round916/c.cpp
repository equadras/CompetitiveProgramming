#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n + 1);
    vector<int> b(n + 1); 

    for (int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i - 1];
        /* cout << a[i] << "  "; */
    }
    /* cout << endl; */
    for (int i = 1; i <= n; i++){
        cin >> b[i];
        b[i] = max(b[i], b[i - 1]);
        /* cout << b[i] << "  "; */
    }
    /* cout << endl; */

    int x = min(n, k);
    int res = 0;
    for (int i = 1; i <= x; i++){
        res = max(res, a[i] + b[i] * (k - i));
        /* cout << res << "  "; */
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
