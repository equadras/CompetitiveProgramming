#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int a,b,c; cin >> a >> b >> c;
    if(a+b == c || b+c == a || c+a==b){
        cout << "YES\n"; 
    } else cout << "NO\n";
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
