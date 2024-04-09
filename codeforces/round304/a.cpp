#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int k, n, w; cin >> k >> n >> w;
    int x = k * w * (w + 1) / 2;
    x -= n;
    if (x < 0) x = 0;
    cout << x << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
