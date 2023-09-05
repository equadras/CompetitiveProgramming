#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    string s;
    for(int i = 0; i < 8; i++){
        for(int i = 0; i < 8; i++){
            char c; cin >> c;
            if(c != '.') s.push_back(c);
        }
    }
    cout << s << endl;
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
