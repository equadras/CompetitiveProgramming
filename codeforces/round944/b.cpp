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
    bool f = true;
    for (int i = 1; i < (int) s.size(); i++) if (s[i-1] != s[i]) f = false;
    if (s.size() == 1 || f) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        string ss = s;
        sort(ss.begin(),ss.end());
        if (s == ss) sort(ss.rbegin(),ss.rend());
        cout << ss << endl;
    }

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



