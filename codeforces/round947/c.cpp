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
    vector<int> a(n);
    for (int &i : a) cin >> i;
    if (n == 2){
        int mn = *min_element(a.begin(),a.end());
        cout << mn << endl;
        return;
    }
    int res = 0;
    for (int i = 0; i < n-2; i++){
        vector<int> aux;
        aux.push_back(a[i]); 
        aux.push_back(a[i+1]); 
        aux.push_back(a[i+2]); 
        sort(aux.begin(),aux.end());
        /* debug(aux); */
        res = max(res, aux[1]);
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



