#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;
const ll maxn = 1e6+5;

vector<pair<ll,ll>> a[2];
vector<ll> seg[4*maxn];//  armazena os valores das coords dentro de um llervalo .
ll v[maxn];

void merge(vector<ll>& esquerda, vector<ll>& direita, vector<ll>& result) {
    ll i = 0, j = 0;
    /* debug(esquerda,direita); */
    while (i < esquerda.size() && j < direita.size()) {
        if (esquerda[i] <= direita[j]) {
            result.push_back(esquerda[i]);
            i++; 
        } else {
            result.push_back(direita[j]);
            j++; 
        }
    }
    while (i < esquerda.size()){
        result.push_back(esquerda[i]);
        i++;
    }
    while (j < direita.size()){
        result.push_back(direita[j]);
        j++;
    }
}

void build(ll l, ll r, ll u, ll idx){
    if (l == r){
        seg[u].push_back(a[idx][l].second);
        return;
    }

    ll mid = (l + r) >> 1;
    build(l, mid, u << 1, idx);
    build(mid + 1, r, (u << 1) | 1, idx);
    merge(seg[u << 1], seg[(u << 1) | 1], seg[u]);
}

ll query(ll l, ll r, ll ql, ll qr, ll i, ll x){
    //fora
    if (l > r || l > qr || r < ql) return 0;
    // qtnd ele > x no rng curr
    /* debug(seg[i]); */
    if (l >= ql && r <= qr) return seg[i].end() - upper_bound(seg[i].begin(), seg[i].end(), x);

    ll mid = (l + r) >> 1;
    return query(l, mid, ql, qr, i << 1, x) + query(mid + 1, r, ql, qr, (i << 1) | 1, x);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n, m, h, v;
    cin >> n >> m >> h >> v;
    a[0].resize(h);
    a[1].resize(v);
    for (ll i = 0; i < h; i++) cin >> a[0][i].first >> a[0][i].second;
    for (ll i = 0; i < v; i++) cin >> a[1][i].first >> a[1][i].second;
    for (ll i = 0; i < 2; i++) sort(a[i].begin(), a[i].end());

    ll res = (h+v) + (h*v);

    /* debug(a[0], a[1]); */
    for (ll j = 0; j < 2; j++){
        build(0, a[j].size() - 1, 1, j);
        for (ll i = 0; i < a[j].size(); i++){
            res += query(0, a[j].size() - 1, 0, i, 1, a[j][i].second);
            /* debug(res); */
        }
        for (ll i = 0; i < 4 * a[j].size(); i++) seg[i].clear();
    }
    cout << res + 1<< endl;
    return 0;
}





