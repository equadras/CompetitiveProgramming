#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 2e5 + 5; 

int n, q;
vector<int> a(MAXN);


vector<int> seg(2 * MAXN);

void build(int l, int r, int pos){
    if (l == r) {
        seg[pos] = a[l];
        return;
    }

    int tm = (l + r) / 2;
    build(l, tm, 2 * pos);
    build(tm + 1, r, 2 * pos + 1);

    seg[pos] = seg[2 * pos] + seg[2 * pos + 1];
}

void updateSeg(int i, int v, int l, int r, int pos) {
    if (l == r) {
        seg[pos] = v;
        return;
    }

    int mid = (l + r) / 2;

    if (i <= mid){
        updateSeg(i, v, l, mid, 2 * pos);
    } else {
        updateSeg(i, v, mid + 1, r, 2 * pos + 1);
    }

    seg[pos] = seg[2 * pos] + seg[2 * pos + 1];
}

void update(int i, int v){
    i += n;
    updateSeg(i, v, 0, n - 1, 1);
}

int query(int l, int r, int L, int R, int pos){
    if (r < L || l > R) return 0;
    if (l >= L && r <= R) return n;
    int mid = (l + r) / 2;
    return query(l, r, L, R , 2*pos) + query(l, r, L, R , 2*pos+1);
}

void solve(){
    cin >> n >> q;
    for (int i = 0; i < n; i++) cin >> a[i];

    build(0, n - 1, 1);

    for (int j = 0; j < q; ++j){
        int op;
        cin >> op;

        if (op == 1){
            int s;
            cin >> s;
            cout << (query(s - 1, s - 1, 0, n - 1, 1) ? puts("YES") : puts("NO"));
        } else {
            int idx, v;
            cin >> idx >> v;
            update(idx - 1, v);
        }
    }
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
