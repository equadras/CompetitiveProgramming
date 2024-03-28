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
    int n; cin >> n;
    ll num = 0;
    ll pstt = 0;

    for (int i = 0; i < n; i++){
        int nt, ps; cin >> nt >> ps;
        num += (nt*ps);
        pstt += ps;
    }
    cout << num / pstt << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}


