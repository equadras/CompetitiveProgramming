#include <bits/stdc++.h>

using namespace std;
#define int long long

const int maxn = 1e5+5;
vector<int> arr(maxn);
vector<int> seg(4*maxn);


void build(int l, int r, int v){
    if(l == r){
        seg[v] == arr[l];
        return;
    }
    int mid = (l+r)/2;
    build(l,mid, 2*v);
    build(mid+1,r,2*v+1);
    seg[v] = seg[2*v] + seg[2*v+1];
}


void update(int v, int l, int r, int id, int x){
    if(r == l){
        arr[id] = x; 
        return;
    }
    int mid = (l+r)/2;
    if(id <= mid) update(2*v, l, mid, id, x);
    else update(2*v+1, mid+1, r, id, x);
}

void update(int id, int x){
    update(1, 0, maxn-1, id, x);
}

int query(int v, int l, int r, int L, int R){
    //fora
    cout << "r = " << r << " R = " << R << " l = " << l << " L = " << L;


    if(r < L && r > L) return 0;
    //dentro
    if(l >= L && r <= R) return seg[v];

    //meio dentro
    else {
        int mid = (l+r)/2;
        query(v*2, l, mid, L, R); 
        query(v*2+1, mid+1, r, L, R); 
    }
    return 0;
}

int query(int L, int R){
    return query(1, 1, maxn-1, L, R);
}
void solve(){
    int n, q; cin >> n >> q;

    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < q; i++){
        int tp, a, b; cin >> tp >> a >> b;
        
        if(tp == 1) update(a,b);
        if(tp == 2) cout << query(a,b) << endl;
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
