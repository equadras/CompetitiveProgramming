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
    vector<int> a(n+1);
    int mx = 0, mxi = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] >= mx){
            if (a[i] == mx && ((mxi) % 2 == 0)){
                /* debug(i, mxi); */
                if (i % 2 != 0) mxi = i;
            }
            else if (a[i] > mx){
                mxi = i;
                mx = a[i];
            }
        }
    }
    int res; 
    if (n % 2 == 0) res = mx + (n/2);
    else {
        if (mxi % 2 != 0){
            res = mx + (n/2) + 1;
        }
        else res = mx + (n/2);


    }
    cout << res << endl;

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



