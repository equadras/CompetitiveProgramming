#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    map<char,int> mp;

    for (auto &c : s){
        mp[c]++;
    }

    int res = 0;
    for (auto &[c, f] : mp){
        if (f >= c - 'A' + 1) res ++;
    }
    cout << res << endl;
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
