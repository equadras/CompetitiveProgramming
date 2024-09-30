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
    if ((s[0] != '1' || s[1] != '0') || s.size() < 3){
        cout << "No" << endl;
        return;
    }
    if (s.size() > 3){
        if ((s[2] != '0')) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else {
        if ((s[2] != '0') && s[2] != '1') cout << "Yes" << endl;
        else cout << "No" << endl;
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



