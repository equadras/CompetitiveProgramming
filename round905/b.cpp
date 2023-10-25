#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map <char ,int> mp;
    for(auto c : s){
        mp[c]++;
    }
    int res = 0;
    for (auto [key, value] : mp)
        res += value % 2;

    if (res - k <= 1) cout << "YES" << endl;
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
