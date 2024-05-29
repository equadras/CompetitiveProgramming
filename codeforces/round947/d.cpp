#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 2e5+5;
vector<int> adj[maxn];
int d[maxn];
int pa[maxn];
int mxd;

void dfs(int u,int p){
    d[u] = d[p]+1;
    pa[u] = p;
    mxd = max(d[u],mxd);
    for (auto v: adj[u]) {
        if (v == p) continue;
        dfs(v,u);
    }
}

/* void calc(int u, int p){ */

/* } */

void solve(){
    int n, a, b; cin >> n >> a >> b;
    mxd = 0;
    for (int i = 1; i <= n; i++){
        adj[i].clear();
        d[i]= 0;
        pa[i]=0;
    }
    for (int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(a,0);
    int res1 = 2*(n-1) - mxd+d[b];
    int res2 = d[b]/2;
    int d2 = b;
    for (int i = 1; i <= d[b]/2; i++) d2 = pa[d2];

    for (int i = 1; i <= n; i++) d[i] = 0;
    mxd = 0;
    dfs(d2,0);
    res2 += 2*(n-1)-mxd+1;
    cout << min(res1,res2) << endl;
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



