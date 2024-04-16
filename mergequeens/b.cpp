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
    vector<int>gab(n);
    vector<int>mat(n);

    for (int i = 0; i < n; i++) cin >> gab[i];

    int resmat = 0;
    for (int i = 0; i < n; i++){
        cin >> mat[i];
        if (mat[i] == gab[i]) resmat++;
    }

    while (m--){
        int resamigo = 0;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (x == gab[i]) resamigo++;
            if (resamigo >= resmat){
                cout << "NAO" << endl;
                return;
            }
        }
    }
    cout << "SIM" << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}


