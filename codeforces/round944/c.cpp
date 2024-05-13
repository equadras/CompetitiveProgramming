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
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a > b){
        swap(a,b);
    }
    /* debug(a,b,c,d); */
    cout << (((c > a && c < b) ^ (d > a && d < b)) ? "YES" : "NO") << endl;
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



