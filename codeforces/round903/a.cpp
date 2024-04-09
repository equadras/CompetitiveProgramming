#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n, m; cin >> n >> m;
    string x, s; cin >> x >> s;
    for(int i = 0; i < 6; i++){
        if (x.find(s) != -1){
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
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

