#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    string s; cin >> s;
    int f = 0;
    int n = s.size()-1;
    if((s[0] + s[1] + s[2]) == (s[n] + s[n-1] + s[n-2])) f = true;
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;
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

