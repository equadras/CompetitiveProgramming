#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    auto cp = s;
    sort(cp.begin(),cp.end());
    cp.erase(unique(cp.begin(),cp.end()), cp.end());
    map<char,char> mp;

    for (int i = 0; i < (int) cp.size(); i++){
        debug(cp[(int)cp.size() - 1 - i], i);
        mp[cp[i]] = cp[(int)cp.size() - 1 - i];
    }
    for (char c : s) cout << mp[c];
    cout << endl;
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



