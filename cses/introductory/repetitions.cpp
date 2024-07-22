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
    string s; cin >> s;
    ll cnt = 1, res = 0;
    for (int i = 1; i < (int) s.size(); i++){
        if (s[i-1] == s[i]) cnt++;
        else res = max(cnt, res), cnt = 1;
    } 
    res = max(cnt, res);
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}



