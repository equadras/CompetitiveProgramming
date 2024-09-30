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


struct SegTree {
    ll merge(ll a, ll b) { return a + b; }
    const ll neutral = 0;
    inline int lc(int p) { return p * 2; }
    inline int rc(int p) { return p * 2 + 1; }
    int n;
    vector<ll> t;
    void build(int p, int l, int r, const vector<ll> &v) {
        if (l == r) {
            t[p] = v[l];
        } else {
            int mid = (l + r) / 2;
            build(lc(p), l, mid, v);
            build(rc(p), mid + 1, r, v);
            t[p] = merge(t[lc(p)], t[rc(p)]);
        }
    }
    void build(int _n) { // pra construir com tamanho, mas vazia
        n = _n;
        t.assign(n * 4, neutral);
    }
    void build(const vector<ll> &v) { // pra construir com vector
        n = (int)v.size();
        t.assign(n * 4, neutral);
        build(1, 0, n - 1, v);
    }
    void build(ll *bg, ll *en) { // pra construir com array de C
        build(vector<ll>(bg, en));
    }
    ll query(int p, int l, int r, int L, int R) {
        if (l > R || r < L) return neutral;
        if (l >= L && r <= R) return t[p];
        int mid = (l + r) / 2;
        auto ql = query(lc(p), l, mid, L, R);
        auto qr = query(rc(p), mid + 1, r, L, R);
        return merge(ql, qr);
    }
    ll query(int l, int r) { return query(1, 0, n - 1, l, r); }
    void update(int p, int l, int r, int i, ll x, bool repl = 0) {
        if (l == r) {
            if (repl) t[p] = x; // substitui
            else t[p] += x;     // soma
        } else {
            int mid = (l + r) / 2;
            if (i <= mid) update(lc(p), l, mid, i, x, repl);
            else update(rc(p), mid + 1, r, i, x, repl);
            t[p] = merge(t[lc(p)], t[rc(p)]);
        }
    }
    void sumUpdate(int i, ll x) { update(1, 0, n - 1, i, x, 0); }
    void assignUpdate(int i, ll x) { update(1, 0, n - 1, i, x, 1); }
} seg;


void solve(){

    int n; cin >> n;
    vector<pair<pl,int>> ranges(n);
    vector<pl> captain(22);
    set<ll> st;
    map<ll,int> mp;
    /* vector<pair<pair<ll, ll>, int>> ranges(n); */

    for (int i = 0; i < n; i++){
        ll x,y; cin >> x >> y;
        ranges[i] = make_pair(make_pair(x,y), i);

        st.insert(x); st.insert(y);
    }
    vector<ll> tem(n), ta(n);

    sort(ranges.begin(), ranges.end(), [&](auto& a, auto& b){
        if (a.first.first == b.first.first)
            return a.first.second > b.first.second;
        return a.first.first < b.first.first;
    });

    int i = 0;
    for (auto e : st) mp[e] = i++;

    for (int i = 0; i < n; i++){
        ll x = ranges[i].first.first;
        ll y = ranges[i].first.second;

        ranges[i] = make_pair(make_pair(mp[x],mp[y]), i);
    }
    /* debug(mp); */
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



