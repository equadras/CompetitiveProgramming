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
    string s, t;
    cin >> s;
    ll cnt0 = 0, cnt1 = 0;

    for (char c : s){
        if (c == '0') cnt0++;
        else cnt1++;
    }

    for (char c : s){
        if (c == '0'){
            if(cnt1 > 0) cnt1--;
            else break;
        }
        else {
            if (cnt0 > 0) cnt0--;
            else break;
        }
    }
    cout << abs(cnt1 - cnt0) << endl;
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



