#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const ll INF = 2147483647;

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    map<ll,ll> mp;
    for (ll i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    ll res = 0;

    for (ll i = 0; i < n; ++i){
        if (mp[a[i]] > 0){

            ll x = INF ^ a[i];

            if (mp[x] > 0) mp[x]--;

            mp[a[i]]--;
            res++;
        }
    }
    cout << res << endl;
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


