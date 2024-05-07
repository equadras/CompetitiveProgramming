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
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    sort(a.rbegin(), a.rend());

    int mx = a[0];
    int tmp = 0;

    for (int i = 1; i < n; ++i){
        int diff = a[i - 1] - a[i];
        if (x >= diff * (i)){
            mx = a[i]; 
            x -= diff * (i); 
        } 
        else{
            mx -= x / (i); 
            break;
        }
        tmp += i; 
    }
    cout << mx << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}




