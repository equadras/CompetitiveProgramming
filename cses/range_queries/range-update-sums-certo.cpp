#include <bits/stdc++.h>

using namespace std;
#define int long long
const int maxn = 2e5+5;
int n;

vector<int> seg(4*maxn);
vector<int> lazy(4*maxn);
vector<int> has_set(4*maxn, false);
vector<int> arr(maxn);

void build(int v, int l ,int r){
    if(l == r){
        seg[v] = arr[l];
        return;
    }
    int mid = (l+r)/2;
    build(2*v, l, mid);
    build(2*v+1, mid+1, r);
    seg[v] = seg[2*v] + seg[2*v+1];
}


void push(int v, int l, int r){
  if (lazy[v]){
    if (has_set[v]){
      seg[v] = (r - l + 1) * lazy[v];
    } else {
      seg[v] += (r - l + 1) * lazy[v];
    }
    if (l < r){
      if (has_set[v]){
          lazy[2*v] = lazy[v];
          lazy[2*v+1] = lazy[v];
      } 
      else {
          lazy[2*v] += lazy[v];
          lazy[2*v+1] += lazy[v];
      }
      has_set[2*v] |= has_set[v];
      has_set[2*v+1] |= has_set[v];
    }
    has_set[v] = 0;
  }
  lazy[v] = 0;
}


void update_sum(int v, int l, int r, int L, int R, int x){
    push(v, l, r);
    if(l > R || r < L) return;
    if(l >= L && r <= R){
        lazy[v] += x;  
        push(v, l, r);
        return;
    }
    int mid = (l+r)/2;
    update_sum(2*v, l, mid, L, R, x);
    update_sum(2*v+1, mid+1, r, L, R, x);
    seg[v] = seg[2 * v] + seg[2 * v + 1]; 
}

void update_set(int v, int l, int r, int L, int R, int x){
    push(v, l, r);

    if(l > R || r < L) return;
    if(l >= L && r <= R){
        lazy[v] = x;
        has_set[v] = true;
        push(v, l, r);
        return;
    }
    int mid = (l+r)/2;
    update_set(2*v, l, mid, L, R, x);
    update_set(2*v+1, mid+1, r, L, R, x);
    seg[v] = seg[2 * v] + seg[2 * v + 1]; 
}

int query(int v, int l, int r, int L, int R){
    push(v, l, r);
    if(l > R || r < L) return 0;
    if(l >= L && r <= R) return seg[v];
    else {
        int mid = (l+r)/2;
        return query (2*v, l, mid, L, R) + query (2*v+1, mid+1, r, L, R);
    }
}

int query(int l, int r){
    return query(1, 1, n, l, r);
}

void update_set(int l, int r, int x){
    return update_set(1, 1, n, l, r, x);
}

void update_sum(int l, int r, int x){
    return update_sum(1, 1, n, l, r, x);
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int q; cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);
    for(int i = 0; i < q; i++){
        int tp; cin >> tp;
        if(tp == 1){
            int l, r , x; cin >> l >> r >> x;
            update_sum(l, r, x);
        }
        if(tp == 2){
            int l, r , x; cin >> l >> r >> x;
            update_set(l, r, x);
        }
        if(tp == 3){
            int l, r; cin >> l >> r;
            cout << query(l, r) << endl;
        }
    }
    return 0;
}
 
