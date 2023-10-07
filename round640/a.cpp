#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n, k; cin >> n >> k;
    int f = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == k){
            f = true;
        }
    }
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;
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
