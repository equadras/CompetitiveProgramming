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
    string s, p; cin >> s >> p;

    if (s == p){
        cout << "YES" << endl;
        return;
    }

    ll n = (ll) s.size(), m = (ll) p.size();

    if (s[0] != p[0] || m > 2 * n){
        cout << "NO" << endl;
        return;
    }

    vector<ll> cs;
    vector<ll> cp;
    ll x = 1;
    for (ll i = 1; i < m; i++) {
        if (p[i-1] != p[i]) {
            cp.push_back(x);
            x = 1;
        }
        else x+=1;
    }
    cp.push_back(x);
    x = 1;

    for (ll i = 1; i < n; i++){
        if (s[i-1] != s[i]){
            cs.push_back(x);
            x = 1;
        }
        else x+=1;
    }
    cs.push_back(x);

    ll scs = (ll) cs.size();
    ll scp = (ll) cp.size();

    if (scs != scp) cout << "NO" << endl;
    else {
        for (ll i = 0; i < scs; i++) {
            if (2*cs[i] < cp[i] || cp[i] < cs[i]) {
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;

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




