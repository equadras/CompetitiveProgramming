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
    vector<int> x(n-1);
    for (int &i : x) cin >> i;
    // x no max 500
    // posso ir somando a[i] dps no 500

    vector<int> a(n);
    int k = 501;
    a[0] = k;
    for (int i = 0; i < n-1; i++){
        k += x[i];
        a[i+1] = k;
    }

    for (auto i : a) cout << i << " ";
    cout << endl;

    /* debug(x); */
    /* for (int i = 1; i < n; i++) cout << a[i] % a[i-1] << "  "; */

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



