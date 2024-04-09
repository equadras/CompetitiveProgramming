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
    
    for (int i = 0; i < s.size()-1; i++){
        if (s[i] == 'i' && s[i+1] == 't'){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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


