#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int MAXX = 200000+8;

vector<ll> divisores(ll x){
    vector<ll> aux, divs;
    x = abs(x);

    for (ll i = 1; i * i <= x; i++){
        if (x % i == 0){
            aux.push_back(i);
            if (i != x / i){
                aux.push_back(x / i);
            }
        }
    }

    for (auto d : aux){
        divs.emplace_back(d);
        divs.emplace_back(-d);
    }

    return divs;
}

void solve(){
    ll n, m, q; cin >> n >> m >> q;
    vector<ll> a(n);
    vector<ll> b(m);
    ll sum_a = 0, sum_b = 0;

    for (ll i = 0; i < n; i++){
        cin >> a[i];
        sum_a += a[i];
    }

    for (ll i = 0; i < m; i++){
        cin >> b[i];
        sum_b += b[i];
    }

    vector<ll> freqA(2*MAXX);
    vector<ll> freqB(2*MAXX);

     for (ll i = 0; i < n; i++) {
        ll x = sum_a - a[i];
        if (abs(x) <= MAXX) {
            freqA[x + MAXX] = 1;
        }
    }

    for (ll i = 0; i < m; i++) {
        ll x = sum_b - b[i];
        if (abs(x) <= MAXX) {
            freqB[x + MAXX] = 1;
        }
    }


    while (q--){
        ll x; cin >> x;
        bool flg = false;

        auto divs = divisores(x);

        for (ll c : divs){
            int idxA = int(c + MAXX);

            if ((idxA < 0 || idxA >= 2*MAXX) || !freqA[idxA]) continue;

            ll d = x / c;

            int idxB = int(d + MAXX);

            if (idxB < 0 || idxB >= 2*MAXX) continue;
            if (freqB[idxB]){
                flg = true;
                break;
            }
        }

        cout << (flg ? "YES" : "NO") << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
