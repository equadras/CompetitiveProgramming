#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, a, b; cin >> n >> a >> b;
    for (int i=0; i < n - 1; i++) {
        int x, y; cin >> x >> y;
        if (x >= a && y >= b) {
            cout << -1 << endl;
            return;
        }
    }
    cout << a << endl;
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
