#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string s;
    cin >> s;
    int ans = 1;
    if(s[0] == '0') ans = 0;
    if(s[0] == '?') ans = 9;
    for(int j = 1; j < s.size(); j++)
        if(s[j] == '?') ans *= 10;
    cout << ans << endl;
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
