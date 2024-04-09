#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


pair<ll,ll> calc(ll n, ll m, ll x, ll y){
    ll yy = (x-y+m-1);
    if (yy&1) return {-1,-1};
    yy/=2;
    ll xx = x-yy;
    if (xx < 0 || yy < 0 || xx >= n || yy >= m) return {-1,-1};
    return {xx+1,yy+1};
}

void solve(){
    ll n,m; cin >> n >> m;

    cout << "? " << 1 << " " << 1 << endl;

    ll x; cin >> x;

    cout << "? " << n << " " << m << endl;
    ll y; cin >> y;
    y = n+m-2-y;

    cout << "? " << 1 << " " << m << endl;
    ll z; cin >> z;

    pair<ll,ll> m1 = calc(n,m,x,z);
    pair<ll,ll> m2 = calc(n,m,y,z);

    if(m1.first == -1){
        cout << "! " << m2.first << " " << m2.second << endl;
        return;
    }

    cout << "? " <<m1.first << " " << m1.second << endl;
    cin >> x;
    if(x == 0) cout << "! " << m1.first << " " << m1.second << endl;
    else cout << "! " << m2.first << " " << m2.second << endl;
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


