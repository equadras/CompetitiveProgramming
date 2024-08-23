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
    int n, k; cin >> n >> k;
    vector<string> a(n);

    for (int i = 0; i < n; i++){
            cin >> a[i];
    }


    for (int i = 0; i < n; i += k){
        for (int j = 0; j < n; j += k){
            cout << a[i][j];
        }
    }
    cout << endl;

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



