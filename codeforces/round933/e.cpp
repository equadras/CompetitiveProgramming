#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

struct SegTree {
    ll merge(ll a, ll b) { return a < b ? a : b; }
    const ll neutral = LLONG_MAX;

    int n;
    vector<ll> t;

    void build(int u, int l, int r, const vector<ll> &v) {
        if (l == r) {
            t[u] = v[l];
        } else {
            int mid = (l + r) >> 1;
            build(u << 1, l, mid, v);
            build(u << 1 | 1, mid + 1, r, v);
            t[u] = merge(t[u << 1], t[u << 1 | 1]);
        }
    }

    void build(int _n) { // pra construir com tamanho, mas vazia
        n = _n;
        t.assign(n << 2, neutral);
    }

    void build(const vector<ll> &v) { // pra construir com vector
        n = int(v.size());
        t.assign(n << 2, neutral);
        build(1, 0, n - 1, v);
    }
    void build(ll *bg, ll *en) { // pra construir com array de C
        build(vector<ll>(bg, en));
    }

    ll query(int u, int l, int r, int L, int R) {
        if (l > R || r < L) {
            return neutral;
        }
        if (l >= L && r <= R) {
            return t[u];
        }

        int mid = (l + r) >> 1;
        ll ql = query(u << 1, l, mid, L, R);
        ll qr = query(u << 1 | 1, mid + 1, r, L, R);
        return merge(ql, qr);
    }

    ll query(int l, int r) { return query(1, 0, n - 1, l, r); }

    void update(int u, int l, int r, int i, ll x) {
        if (l == r) {
            //t[u] += x; // soma
            t[u] = x; // substitui
        } else {
            int mid = (l + r) >> 1;
            if (i <= mid) {
                update(u << 1, l, mid, i, x);
            } else {
                update(u << 1 | 1, mid + 1, r, i, x);
            }
            t[u] = merge(t[u << 1], t[u << 1 | 1]);
        }
    }
    void update(int i, ll x) { update(1, 0, n - 1, i, x); }
};


void solve(){
    int n, m, k, d; cin >> n >> m >> k >> d;
    vector<ll> pref(n + 1, 0);

    for (int i = 0; i < n; i++){
        SegTree st;
        st.build(m);
        st.update(0, 1);

        for (int j = 0; j < m; j++){ 
            int x; cin >> x;
            if (j == 0) continue;

            ll mn = st.query(max(0, j - d - 1), j);
            st.update(j, mn + x + 1);

        }
        pref[i+1] = pref[i] + st.query(m - 1, m - 1);
    }

    ll res = LLONG_MAX;

    
    for (int i = k; i <= n; i++) res = min(res, pref[i] - pref[i - k]);
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


