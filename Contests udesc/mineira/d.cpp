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
    int n, l; cin >> n >> l;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.rbegin(),a.rend());

    int res = 0;
    for (int i = 0; i < n; i++){
        if (a[i] >= 100){ res++; continue;}
        int df = 100 - a[i];
        if (df <= l){
            l -= df;
            res++;
        }
        else break;
    }
    cout << res << endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}



