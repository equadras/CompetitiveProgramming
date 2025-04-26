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
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;

    vector <int> pref(m+1, INT_MAX);
    pref[0] = 0;

    vector <int> suff(m+1, -1);
    suff[m] = n;

    for (int i = 0, j = 0; i < m; i++){
        while (j < n && a[j] < b[i]) j++;
        if (j >= n) break;

        pref[i+1] = j+1;
        j++;
    }

    for (int i = m-1, j = n-1; i >= 0 && j >= 0; i--){
        while ( j >= 0 && a[j] < b[i])  j--;

        if (j < 0) break;

        suff[i] = j--;
    }

    if (pref[m] <= n) cout << 0 << endl;
    else {
        int res = INT_MAX;

        for (int i = 0; i < m; i++){
            if (pref[i] <= suff[i+1]){
                res = min(res, b[i]);
            }
        }
        cout << (res == INT_MAX ? -1 : res) << endl;
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







