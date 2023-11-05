#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        if(a+b+c >= 2) res++;
    }
    cout << res << endl; 
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
