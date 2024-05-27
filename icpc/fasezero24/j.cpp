#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MAX = 2e5 + 2;
const int INF = 1.05e9;
const int INFM = -1.05e9;
const long long INFLL = 4.5e18;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;

struct SegTree {
    pair<ll,int> merge(pair<ll,int> a, pair<ll,int> b) { 
        if (a.first >= b.first) return a;
        else return b;
    }
    const pair<ll,int> neutral = make_pair(-1,0);

    int n;
    vector<pair<ll,int>> t;

    void build(int u, int l, int r, const vector<pair<ll,int>> &v) {
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

    void build(const vector<pair<ll,int>> &v) { // pra construir com vector
        n = int(v.size());
        t.assign(n << 2, neutral);
        build(1, 0, n - 1, v);
    }
    /* void build(ll *bg, ll *en) { // pra construir com array de C */
    /*     build(vector<ll>(bg, en)); */
    /* } */

    pair<ll,int> query(int u, int l, int r, ll L, ll R) {
        if (l > R || r < L) {
            return neutral;
        }
        if (l >= L && r <= R) {
            return t[u];
        }
        int mid = (l + r) >> 1;
        pair<ll,int> ql = query(u << 1, l, mid, L, R);
        pair<ll,int> qr = query(u << 1 | 1, mid + 1, r, L, R);
        return merge(ql, qr);
    }
    pair<ll,int> query(ll l, ll r) { return query(1, 0, n - 1, l, r); }

    /* void update(int u, int l, int r, int i, ll x) { */
    /*     if (l == r) { */
    /*         t[u] += x; // soma */
    /*         // t[u] = x; // substitui */
    /*     } else { */
    /*         int mid = (l + r) >> 1; */
    /*         if (i <= mid) { */
    /*             update(u << 1, l, mid, i, x); */
    /*         } else { */
    /*             update(u << 1 | 1, mid + 1, r, i, x); */
    /*         } */
    /*         t[u] = merge(t[u << 1], t[u << 1 | 1]); */
    /*     } */
    /* } */
    /* void update(int i, ll x) { update(1, 0, n - 1, i, x); } */
} ;

void solve(){
    int n, k; cin >> n >> k;
    vector<ll> v(n), b(n);
    vector<pair<ll,int>> mx(n);

    map<ll,int> m;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[i] = x;
        m[x] = cnt;
        cnt++;
    }
    for(auto &u : b) cin >> u;
    for(int i = 0; i < n; i++){
        mx[i].first = v[i] + b[i];
        mx[i].second = i;
    }
    
    ll l = 0;

    if(upper_bound(v.begin(),v.end(),k) == v.end()){
        cout << 0 << endl;
        return;
    }
    ll r = *upper_bound(v.begin(),v.end(),k);
    
    r = m[r] - 1;
    ll res = 0;
    

    SegTree seg;
    seg.build(mx);
    if( k < v[0]){
        cout << -1 << endl;
        return;
    }
    
    int flg = 0;
    while(r < v[n-1]){
        pair<ll,int> x = seg.query(l,r);
        /* cout << l << ' ' << r << endl; */
        l = x.second;
        r = x.first;
        if(upper_bound(v.begin(),v.end(),r) == v.end()){
            res++;
            cout << res << endl;
            return;
        }
        ll up = *upper_bound(v.begin(),v.end(),r);
        r = m[up] - 1;
        res++;
        if(l == r && flg > 1){
            cout << -1 << endl;
            return;
        }
        if(l == r){
            flg++;
        }
    }
    
    cout << res << endl;
    

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    bool tttt = 0;
    if(tttt){
        int testcase; cin >> testcase;
        while (testcase--){
            solve();
        }
    }else solve();

    return 0;
}


