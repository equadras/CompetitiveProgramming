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
    int x; cin >> x;
    int s = 2*x;

    int a = 0, b = 0;
    for (int i = 0; i < 30; i++){
        if ((x >> i) & 1){

            if (b == 0) b += 1 << i;
            else a += 1 << i;

            if (i){
                a += 1 << (i-1);
                b += 1 << (i-1);
            }
        }
    }

    
    if (((a^b) == x) && (a+b) == s) cout << a << " " << b << endl;
    else cout << -1 << endl;
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



