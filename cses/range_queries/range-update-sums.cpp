#include <bits/stdc++.h>

using namespace std;
#define int long long
const int maxn = 2e5+5, neutral = 0;

vector<int> arr(maxn);
vector<int> seg(4*maxn);
vector<int> lazy(4*maxn);
vector<int> s(4*maxn);

int n;
void pushl(int v, int l, int r){
    assert(s[v] == 0);
    if (l < r) {
        lazy[2*v] += lazy[v];
        lazy[2*v+1] += lazy[v];
    }
    seg[v] += (r - l + 1) * lazy[v];
    lazy[v] = 0;
}

void pushs(int v, int l, int r){
    if (s[v]) {
        if (l < r) {
            s[2*v] = s[v];
            s[2*v+1] = s[v];
            lazy[2*v] = 0;
            lazy[2*v+1] = 0;
        }
        seg[v] = s[v] * (r - l + 1);
    }
    s[v] = 0;
}

void build(int l, int r, int v){
    if(l == r){
        seg[v] = arr[l];
        return;
    }
    int mid = (l+r)/2;
    build(l,mid, 2*v);
    build(mid+1,r,2*v+1);
    seg[v] = seg[2*v] + seg[2*v+1];
}
 
void setter(int v, int l, int r, int L, int R, int x) {
    pushs(v, l, r); 
    pushl(v, l, r);
    if (L > r || R < l) return;
    if (l >= L && r <= R) {
        s[v] = x;
        pushs(v, l, r);
        pushl(v, l, r);
    } else {
        int mid = (l + r) / 2;
        setter(2 * v, l, mid, L, R, x);
        setter(2 * v + 1, mid + 1, r, L, R, x);
        seg[v] = seg[2 * v] + seg[2 * v + 1]; 
    }
}

void update(int v, int l, int r, int L, int R, int x) {
    pushs(v, l, r); // Push set
    pushl(v, l, r); // Push set
    if (L > r || R < l) return;
    if (l >= L && r <= R) {
        lazy[v] += x;
        pushs(v, l, r);
        pushl(v, l, r);
    } else {
        int mid = (l + r) / 2;
        update(2 * v, l, mid, L, R, x);
        update(2 * v + 1, mid + 1, r, L, R, x);
        seg[v] = seg[2 * v] + seg[2 * v + 1]; 
    }
}

int query(int v, int l, int r, int L, int R){
    pushs(v, l, r);
    pushl(v, l, r);
    if(L > r || R < l) return 0;
    if(l >= L && r <= R) return seg[v];
    else {
        int mid = (l+r)/2;
        return query(v*2, l, mid, L, R) + query(v*2+1, mid+1, r, L, R); 
    }
}

void printarr(){
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int L, int R, int x){
    return update(1, 1, n, L, R, x);
}
void setter(int L, int R, int x){
    return setter(1, 1, n, L, R, x);
}

int query(int L, int R){
    return query(1, 1, n, L, R);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int q; cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    build(1, n, 1);
    for(int i = 0; i < q; i++){
        int tp; cin >> tp;
        if(tp == 1){
            int l, r , x; cin >> l >> r >> x;
            update(l, r, x);
        }
        if(tp == 2){
            int l, r , x; cin >> l >> r >> x;
            setter(l, r, x);
        }
        if(tp == 3){
            int l, r; cin >> l >> r;
            cout << query(l, r) << endl;
        }
    }
    return 0;
}
