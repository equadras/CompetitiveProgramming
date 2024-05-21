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
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll &i : a) cin >> i;

    ll res = 0, gp = 1;
    ll soma = a[0];
    for (int i = 1; i < n; i++){
        if (soma & a[i]){
            gp++;
            res += soma;
            soma = a[i];

        }
        else soma += a[i];
    }
    cout << res + soma << " " << gp << endl;

    return 0;
}



