#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, m, k, h;
    cin >> n>> m >> k >> h;
    int res = 0;
    for(int i = 0; i < n; i++){
        int z; cin >> z;
        if (z==h) continue;
        if (abs(z-h)%k!=0) continue;
        if (abs(z-h)<=(m-1)*k) res++;
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
