#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    int cnt = 0, z = 0;

    for(int i = n - 1; i >= 0; --i) {
        if(v[i] == 0) ++z;
        else ans += z;
    }    

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
