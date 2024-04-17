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
    if (s.size() & 1){
        cout << "NO" << endl;
        return;
    }
    string s1 = s.substr(0, s.size()/2);
    string s2 = s.substr(s.size()/2, s.size());
    cout << (s1 == s2 ? "YES" : "NO") << endl;
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



