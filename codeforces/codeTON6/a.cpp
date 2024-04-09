#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, k , x; cin >> n >> k >> x;
    if(min(n, x+1) < k){
        cout << -1 << endl;
        return;
    }
    int cnt = 0;
    int ele = 0, res = 0;
    while(cnt < n){
        res += ele;
        if(ele + 1 < k) ele++;
        else if(x > k){
            ele = x;

        }
        cnt++;
        //cout << "ele = " << ele << endl;
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
