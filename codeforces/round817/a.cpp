#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    string name = "Timur";
    sort(name.begin(), name.end());
        int m; cin >> m;
        string s; cin >> s;
        sort(s.begin(), s.end());
        cout << (s == name ? "YES" : "NO") << endl;
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
