#include <bits/stdc++.h>

using namespace std;

#ifdef local_debug
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 2e5+54;
const int logg = (int) log2(maxn) + 5;
int p[maxn];
int sz[maxn];
vector<pair<int,int>> adj[maxn];

int up[maxn][logg], mx[maxn][logg];
int tin[maxn], tout[maxn], t = 0;

void dfs(int u, int p = 0){
    up[u][0] = p;
    tin[u] = t++;

    for (int i = 1; i < logg; i++){
        up[u][i] = up[up[u][i - 1]][i - 1];
        mx[u][i] = max(mx[u][i - 1], mx[up[u][i - 1]][i - 1]);
    }

    for (auto [v, w] : adj[u]){
        if (v != p){
            mx[v][0] = w;
            dfs(v, u);
        }
    }
    tout[u] = t++;
}

bool anc(int u, int v){  return tin[u] <= tin[v] && tout[u] >= tout[v]; }

int find (int u){ return u == p[u] ? u : p[u] = find(p[u]); }

int unite (int u, int v){
    u = find(u); 
    v = find(v);

    if (!(u - v)) return false;
    if (sz[u] < sz[v]) swap(u,v);
    p[v] = u;
    sz[u] += sz[v];
    return true;
}

int get (int u, int v){
    int res = 0;

    if (anc(u,v)) return 0;
    for (int i = logg-1; i >= 0; i--){
        if (anc(up[u][i],v) == false){
            res = max(res,mx[u][i]);
            u = up[u][i];
        }
    }
    return max(res, mx[u][0]);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m; cin >> n >> m;
    vector<tuple<int, int, int>> edg;

    for (int i = 0; i < n; i++){
        p[i] = i;
        sz[i] = 1;
    }
    for (int i = 0; i < m; i++){
        int u, v, w; cin >> u >> v >> w; --u; --v;
        edg.emplace_back(w, u, v);
    }

    auto aux = edg;
    sort(edg.begin(), edg.end());

    ll mxp = 0;
    
    for (int i = 0; i < m; i++){
        auto [w, u, v] = edg[i];
        if (unite(u,v)){
            mxp += w;   
            adj[u].emplace_back(v,w);
            adj[v].emplace_back(u,w);
        }
    }

    dfs(0);
    /* debug(mxp); */

    edg = aux;

    for (auto [w, v, u] : edg){
        /* cout << "1e: " << get(u,v) << endl; */
        /* cout << "2e: " << get(v,u) << endl; */
        ll aaa =  max(get(u,v), get(v,u));
        /* cout << aaa << endl; */
        ll res = mxp + w - aaa;
        cout << res << endl;
    }

    return 0;
}
