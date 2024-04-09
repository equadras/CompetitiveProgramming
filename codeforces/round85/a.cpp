#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve2(char& c){
    if (c > 'Z'){
        c -= ('a'-'A');
    }
}

void solve(){
    string a,b; cin >> a >> b;
    int n = a.size();
    for (int i = 0; i < n; i++){
        solve2(a[i]);
        solve2(b[i]);
    }
    if (a == b) cout << 0 << endl;
    else cout << (a > b ? 1 : -1) << endl;
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
