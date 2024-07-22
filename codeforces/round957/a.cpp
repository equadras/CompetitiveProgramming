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
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];

    
    for (int i = 0; i < 5; i++){
        sort(a.begin(),a.end());
        a[0]++;
    }
    cout << a[0] * a[1] * a[2] << endl;
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



