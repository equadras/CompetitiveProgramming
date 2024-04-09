#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    ll n; cin >> n;

    set<ll> pref;
    pref.insert(0);
    ll atual = 0;
    ll res = 0;
    for (ll i = 0; i < n; i++){
        ll x; cin >> x;
        atual += x;
        if (pref.count(atual)){
            pref.clear(); pref.insert(0);
            res++;
            atual = x;
        }
        pref.insert(atual);
    }
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
