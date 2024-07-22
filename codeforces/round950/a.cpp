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
    int n,m; cin >> n >> m;
    string s; cin >> s;
    sort(s.begin(),s.end());
    
    map<char,int> mp;
    for (int i = 0; i < n; i++) mp[s[i]]++;
    string g = "ABCDEFG";
    int res = 0;
    for (int i = 0; i < 7; i++){
        res += max(m - mp[g[i]] , 0);
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


