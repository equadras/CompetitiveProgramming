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
    vector<int> a (n), b(n); 
    bool f = 0;
    int s;
    for (int &i : a) cin >> i;
    for (int i = 0; i < n; i++){
        cin >> b[i];
        if (b[i] != -1){ 
            f = true;
            s = a[i]+b[i];
        }
    }

    if (f){
        for (int i = 0; i < n; i++){
            if ((a[i] + b[i] != s && b[i] != -1) || (s - a[i] < 0 || s- a[i] > k)){
                /* debug(a[i],b[i],s); */
                cout << 0 << endl;
                return;
            }
        }
        cout << 1 << endl;
    }
    
    else { 
        int l = 0, r = INT_MAX;

        //a[i] << x << a[i]+k
        for (int i = 0; i < n; i++){
            l = max(l, a[i]);
            r = min(r, a[i]+k);
        }

        /* debug(l, r); */
        cout << r-l+1 << endl;
    }
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




