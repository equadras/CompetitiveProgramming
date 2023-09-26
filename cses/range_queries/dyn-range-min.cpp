#include <bits/stdc++.h>
 
using namespace std;
#define int long long
 
const int maxn = 2e5+5;
vector<int> arr(maxn+1);
vector<int> seg(4*maxn);
int n, neutral = 8e18+5;
 
void build(int l, int r, int v){
    if(l == r){
        seg[v] = arr[l];
        return;
    }
    int mid = (l+r)/2;
    build(l,mid, 2*v);
    build(mid+1,r,2*v+1);
    seg[v] = min(seg[2*v],seg[2*v+1]);
}
 
void update(int v, int l, int r, int id, int x){
    if(r == l){
        arr[id] = x; 
        seg[v] = x; 
        return;
    }
    int mid = (l+r)/2;
    if(id <= mid) update(2*v, l, mid, id, x);
    else update(2*v+1, mid+1, r, id, x);
    seg[v] = min(seg[2*v],seg[2*v+1]);
}
 
void update(int id, int x){
    update(1, 1, n, id, x);
}
 
int query(int v, int l, int r, int L, int R){
    if(L > r || R < l) return neutral;
    if(l >= L && r <= R) return seg[v];
    else {
        int mid = (l+r)/2;
        return min(query(v*2,l,mid,L,R),query((2*v)+1,mid+1,r,L,R));
    }
    return 0;
}
 
int query(int L, int R){
    return query(1, 1, n, L, R);
}
 
void solve(){
    int q; cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> arr[i];
 
    build(1,n,1); 
 
    for(int i = 0; i < q; i++){
        int tp, a, b; cin >> tp >> a >> b;
        
        if(tp == 1) update(a,b);
        if(tp == 2){
        int res = query(a,b);
        cout << res << endl; 
        }
    }
 
}
 
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
