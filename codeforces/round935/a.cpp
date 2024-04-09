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
    ll a, b, c; cin >> a >> b >> c; 
    ll tr;

    ll r = b+c;

    ll xx = (3 - b % 3) % 3;
    if (b > 0 && xx > c){
        cout << -1 << endl;
        return;
    }

    if (r % 3 == 0) tr = r/3;
    else tr = (r/3)+1;

    cout << a+tr << endl;
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


