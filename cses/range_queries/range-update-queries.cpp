#include <bits/stdc++.h>

using namespace std;
#define int long long

const int maxn = 2e5+5;
vector<int> arr(maxn+1);
vector<int> seg(4*maxn);
int n;

/*
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
*/

void update(int v, int l, int r, int L, int R, int x){

    if(L > r || R < l) return;
    if(l >= L && r <= R){
        seg[v] += x;
    }
    else {
        int mid = (l+r)/2;
        update(v*2, l , mid, L, R, x);
        update(v*2+1, mid+1 , r, L, R, x);
    }
}

void update(int L, int R, int x){
    update(1, 1, n, L, R, x);
}

int query(int v, int l, int r, int id){
    if(r == l) return seg[v];
    
    int mid = (l+r)/2;
    if(id <= mid) return seg[v] + query(2*v, l, mid, id);
    return seg[v] + query(2*v+1, mid+1, r, id);

}

int query(int id){
    return query(1, 1, n, id);
}

void solve(){
    int q; cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= n; i++) update(i, i,arr[i]);

    for(int i = 0; i < q; i++){
        int tp; cin >> tp;
        if(tp == 1){
            int a, b, c; cin >> a >> b >> c;
            update(a,b,c);
        }
        if(tp == 2){
            int a; cin >> a;
            int res = query(a);
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
