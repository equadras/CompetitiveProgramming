#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

ll solve2(vector<ll>&p, vector<ll>&a,ll s,ll k){
    ll res = 0;
    ll at = 0;
    ll n = (ll) p.size();
	vector<bool>vis(n);

	while (!vis[s] && k > 0){
		vis[s] = true;
        ll x = at+1 * k--* a[s];
		res = max(res, x);
		at += a[s];
		s = p[s];
	}
	return res;
}

void solve(){
    ll n, k, pb, ps; cin >> n >> k >> pb >> ps;
    vector<ll> p(n);
    vector<ll> a(n);

    for (ll &i : p) cin >> i,i--;
    for (ll &i : a) cin >> i;

    ll res1 = solve2(p,a,pb-1,k);
    ll res2 = solve2(p,a,ps-1,k);

    cout << (res1 > res2 ? "Bodya" : res1 < res2 ? "Sasha" : "Draw") << endl;
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



