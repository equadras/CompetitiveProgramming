#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 100000 + 5;
vector<vector<int>> divs(maxn), pos(maxn);

void solve(){
    int n, q; cin >> n >> q;
    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
        pos[a[i]].push_back(i);
    }


    while (q--){
        int k, l, r; cin >> k >> l >> r;
        l--; r--;

        ll ans = 0;

        while (l <= r){
            while (k % a[l] == 0) k /= a[l];

            //proximo idx do divisor de k > l
            int proximo = (r + 1);

            for (int d : divs[k]){
                auto &idxs = pos[d];

                if (idxs.empty()) continue;

                auto it = lower_bound(idxs.begin(), idxs.end(), l);

                if (it != idxs.end() && *it <= r){
                    proximo = min(proximo, *it);
                }
            }

            /* debug(ans); */
            ans += (ll)k * (proximo - l);
            l = proximo;
        }

        cout << ans << endl;
    }

    for (int x : a) pos[x].clear();
}


signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    for (int i = 1; i < maxn; i++){
        for (int j = i; j < maxn; j += i){
            divs[j].push_back(i);
        }
    }

    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}





