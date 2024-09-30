#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;
typedef pair<ll, ll> pl;

void solve(){

    int n; cin >> n;
    vector<pair<pl,int> ranges(n);

    /* vector<pair<pair<ll, ll>, int>> ranges(n); */

    for (int i = 0; i < n; i++){
        ll x,y; cin >> x >> y;
        ranges[i] = make_pair(make_pair(x,y), i);
    }

    vector<ll> tem(n), ta(n);

    sort(ranges.begin(), ranges.end(), [&](auto& a, auto& b){
        if (a.first.first == b.first.first)
            return a.first.second > b.first.second;
        return a.first.first < b.first.first;
    });

    /* debug(ranges); */

    ll x = 2e9 + 5;
    for (int i = n - 1; i >= 0; i--){
        if (ranges[i].first.second >= x)
            tem[ranges[i].second] = 1;

        x = min(x, ranges[i].first.second);
    }

    x = 0;
    for (ll i = 0; i < n; i++) {
        if (ranges[i].first.second <= x)
            ta[ranges[i].second] = 1;

        x = max(x, ranges[i].first.second);
    }

    for (int i = 0; i < n; i++) cout << tem[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++) cout << ta[i] << " ";

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();

    return 0;
}



