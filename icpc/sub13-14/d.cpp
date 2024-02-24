#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

vector<ll> res;
vector<ll> a;
vector<ll> b;

vector<ll> dobra(vector<ll> &aa, ll pos){
    vector<ll> db;
    ll l = pos, r = pos + 1;

    while (l >= 0 || r < ll(aa.size())){
        ll l2 = (l >= 0) ? aa[l] : 0;
        ll rr = (r < ll(aa.size())) ? aa[r] : 0;
        db.push_back(l2 + rr);
        l--, r++;
    }
    reverse(db.begin(), db.end());
    return db;
}

bool check(vector<ll> a){
    if (a.size() <= res.size()){
        if (a == res) return true; 
        reverse(a.begin(),a.end());
        return (res == a);
    }

    for (ll i = 0; i < ll(a.size()) - 1; i++){
        if (check(dobra(a,i))) return true;
    }

    return false;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n; cin >> n;
    a.resize(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    ll m; cin >> m;
    res.resize(m);
    for (ll i = 0; i < m; i++) cin >> res[i];

    cout << (check(a) ? "S" : "N");
    cout << endl;
    
    return 0;
}


