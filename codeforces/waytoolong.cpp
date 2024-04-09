#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    string s; cin >> s;
    if(s.size() > 10){
        cout << s[0] << s.size()-2 <<s[s.size()-1] << endl;
    }
    else cout << s << endl;
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
