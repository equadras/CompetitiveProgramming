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
    vector<int> b(n+1);
    for (int i = 1; i <= n; i++){
        a[i] = i;
    }

    debug(a);

    bool f = false;
    int l = 1, r = n;

    for (int i = 1; i <= n; i++){
        if (f){
            /* debug(f, cnt); */
            cout << a[l++] << " ";
            f = false;
        }
        else {
            /* debug(f, cnt); */
            cout << a[r--] << " ";
            f = true;
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



