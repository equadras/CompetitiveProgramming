#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int a, b , c; cin >> a >> b >> c;
    if (a != b && a != c) cout << a << endl;
    if (b != a && b != c) cout << b << endl;
    if (c != a && c != b) cout << c << endl;

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
