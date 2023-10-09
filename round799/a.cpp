#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int x; cin >> x;
    int cnt = 0;
    for(int i = 0; i < 3; i++){
        int k; cin >> k;
        if(k > x) cnt++;
    }
    cout << cnt << endl;
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
