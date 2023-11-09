#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

using ll = long long;

const ll maxN = 1e5;
ll s[maxN + 1];
ll d;

ll dist(ll from, ll till){
    ll zero = 0;
    return std::max(zero, (till - from + d - 1) / d - 1);
}

void solve(){
    ll m, n;
    cin >> m >> n >> d;
    for (ll i = 0; i < n; ++i)
        cin >> s[i];
    s[n] = m + 1;

    ll cnt = 0;
    ll y = 9999;
    ll x = 0;

    ll lt = 1 - d;
    for (ll i = 0; i <= n; ++i){
        cnt += dist(lt, s[i]);

        if (i == n) break;

        cnt++;
        ll delta = -(dist(lt, s[i]) + 1 + dist(s[i], s[i + 1])) + dist(lt, s[i + 1]);

        if (s[i] == 1) delta = 0;
        if (i == 0 || delta < y){
            y = delta;
            x = 1;
        } else if (delta == y){
            x++;
        }

        lt = s[i];
    }

    cout << cnt + y << ' ' << x << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll TC = 1;
    if (TC){
        cin >> TC;
        while (TC--) solve();
    } else solve();
    return 0;
}

