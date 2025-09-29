#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll y, k; cin >> y >> k;
    ll xi = 1;

    for (ll i = 0; i < k; i++){
        if (gcd(y,xi) == y || k == 0) break;
        xi += gcd(y, xi);
        k--;
    }

    if (k > 0) xi += k * y;
    cout << xi << endl;
    return 0;
}



