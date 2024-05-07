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
    vector<pair<int,bool>> a(n);

    for (int i = 0; i < n; i++){
        int c; cin >> c;
        a[i] = {c,0};
    }

    for (int i = 0; i < n; i++){
        int f; cin >> f;
        a[i] = {a[i].first,f};
    }
    sort(a.begin(), a.end());

    bool f = false;
    int res = 0;
    for (auto [custo, lanc] : a){
        //qnd n tiver pego lanc ou qnd o filme n for lanc
        if (!lanc || (lanc && !f)){
            x -= custo;
            res++;
        }
        if (lanc) f = true;
        if (x < 0){
            res--;
            break;
        }
    }
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}



