#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int a, b, n; cin >> a >> b >> n;
    int res = b;
    for (int i = 0;i < n;i++){
        int x; cin >> x;
        res += min(a - 1, x);
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
