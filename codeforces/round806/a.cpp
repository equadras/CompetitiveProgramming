#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    string s; cin >> s;
    for (int j = 0; j < 3; j++) s[j] = toupper(s[j]);
    if (s == "YES") cout << "YES" << endl;
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
