#include <bits/stdc++.h>

using namespace std;
#define int long long
const int maxn = 2e5+5;
int n;

vector<int> seg(4*maxn);
vector<int> lazy(4*maxn);
vector<int> has_set(4*maxn);
vector<int> arr(n);



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

void update_sum(int v, int l, int r, int L, int R, int x){
    if(l > R || r < L) return;
    if(l > L && r <= R){
        lazy[v] += x;  
        push(v, l, r);
    }
    else {
        int mid = (l+r)/2;
        update_sum(2*v, l, mid, L, R, x);
        update_sum(2*v+1, mid+1, r, L, R, x);
    }
}

void update_set(int v, int l, int r, int L, int R, int x){
    if(r > L || l < R) return;
    if(l >= L && r <= R){
        lazy[v] = x;
        has_set = true;
        push(v, l, r);
    }
    else {
        int mid = (l+r)/2;
        update_set(2*v, l, mid, L, R, x);
        update_set(2*v+1, mid+1, r, L, R, x);
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int q; cin >> n >> q;
    return 0;
}
