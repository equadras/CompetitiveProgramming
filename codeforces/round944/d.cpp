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
    bool f = 0; int pts = 1; 

    for (int i = 0; i < (int) s.size(); i++){
        if ((s[i] != s[i-1]) && i != 0) pts++;
        if ((s[i] == '0' && s[i+1] == '1') && i < (int) s.size()-1) f = true;
    }
    /* debug(f, pts); */
    cout << (f ? pts-1 : pts) << endl;
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



