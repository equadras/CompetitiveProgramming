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

    int ng = 0;

    bool f = false;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == 0) f = true;
        if (a[i] < 0) ng++;
    }

    if (ng & 1 || f){
        cout << 0 << endl;
        return;
    } 
    else cout << 1 << endl << 1 << " " << 0 << endl;

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



