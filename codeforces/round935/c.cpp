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
    string s; cin >> s;

    int l = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '0') l++;
    }
    int r = n-l;
    int res = -2, p1 = 0, p2 = 0;

    for (int i = 0; i <= n; i++){
        if (2*p1 >= p1+p2 && 2*(r-p2) >= n-p1-p2){
            if (abs(n-2*i) < abs(n-2*res)) res = i;
        }
        if (i != n){
            if (s[i] == '0') p1++;
            else p2++;
        }
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


