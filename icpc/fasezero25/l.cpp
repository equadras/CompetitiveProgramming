#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const ll M = 1e6*8;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll x; cin >> x;

    x = x*M;
    debug(x);
    
    ll lexp = 2;
    bool f = true;
    int i = 1;
    while (f){
        debug(lexp);
        if (x <= (lexp)){
            cout << i << endl; 
            return 0;
        }
        lexp = lexp*2;
        i++;
    }
    return 0;

}



