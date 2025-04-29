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
    int n, m, k; cin >> n >> m >> k;

    vector<int> a(m, -1), agr(m);

    for (int i = 0; i < n; i++){
        int inverte = 0; 

        for (int j = 0; j < m; j++){
            int ele = 1+ ((i * m + j) % k);

            if (ele == a[j]) inverte = 1;
            agr[j] = ele;
        }

        if (inverte) rotate(agr.begin(), agr.begin()+1, agr.end());

        for (auto e : agr) cout << e << ' ';
        cout << endl;

        a = agr;
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




