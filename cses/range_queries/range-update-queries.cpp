#include <bits/stdc++.h>

using namespace std;
#define int long long

int maxn = 2*1e5+5;

//aaaaaaaaaaaaaaaaaaaaa testando chave sshhhhhhhhhhhhhhhh
vector<int> seg(4*maxn);
vector<int> arr(maxn);
int n, neutral = 0;

void build(int v, int l, int r){
    if(l == r){
        seg[v] == arr[l];
        return;
    }
    int mid = (l+r)/2;
    build(2*v, l ,mid); 
    build(2*v+1, mid +1,r); 
}
void update(int v, int l, int r, int id, int x){
    if(l == r){
        seg[v] = x;
        arr[id] = x;
    } 
    int mid = (l+r)/2;
    if(id <= mid) update(2*v, l, mid, id, x);
    else update(2*v+1, mid+1, r, id, x);
    seg[v] = seg[2*v] + seg[2*v+1];
}
void update(int id, int x){
    update(1, 1, n-1, id, x);
}


int query(int v,int ln, int rn, int l, int r){
    if(r > ln || rn < l){
        return neutral;
    }
    int mid = (l+r)/2;
    if(ln >= l && rn <= r){
        return seg[v];
    }
    else {
        return query(2*v, ln, mid, l, r) + query(2*v+1, mid+1, rn, l, r);
    }
}


int query(int l, int r){
    return query(1, 1, n-1, l, r);
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
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
