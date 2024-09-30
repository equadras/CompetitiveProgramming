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
    int n;
    vector<int> a(n);
    float x = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        x += a[i];
    }
    x /= n;
    sort(a.begin(),a.end());

    // n+1 e o cara que precisa ser menor que o dobro da media
    cout << a[(n/2)+1] << endl;
    
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



