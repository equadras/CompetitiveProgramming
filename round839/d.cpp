#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const ll maxn = 2e5+5;
ll a[maxn];

void solve(){
    ll n; cin >> n;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    ll l = 0, r = 1e9+5;
    for (ll i = 2; i <= n; i++){
        ll x = 0, y = 1e9+5;
        if (a[i] > a[i - 1]) y = (a[i] + a[i - 1]) / 2;
        else if (a[i] < a[i - 1]) x = (a[i] + a[i - 1] + 1) / 2;
        l = max(l, x), r = min(r, y);
    }
    if (l > r) cout << -1 << endl;
    else cout << l << endl;
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


