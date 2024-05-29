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
    string ref = "314159265358979323846264338327";
    string s; cin >> s;
    int c = 0;
    for (int i = 0; i < 30; i++){
        if (ref[i] != s[i]) break;
        c++;
    }
    cout << c << endl;
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



