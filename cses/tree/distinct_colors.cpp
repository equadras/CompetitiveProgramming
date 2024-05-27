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
vector <int> adj[maxn];
vector<int> tam(maxn, 1);
int col[maxn];
set<int> st;
 
void precalc(int u, int p){
    for (int v : adj[u]){
        if (v != p){
            precalc(v, u);
            tam[u] += tam[v];
        }
    }
}
 
void add(int u, int p){
    st.emplace(col[u]);
    for (int v : adj[u]){
        if (v != p){
            add(v, u);
        }
    }
}

void dfs(int u, int p){
    int mx = 0;
    for (auto e : adj[u]) if (tam[e] >= mx) mx = e;

    for (int v : adj[u]){
        if (v != mx){
            dfs(v,u);
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
 
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> col[i];
 
    for (int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v); 
        adj[v].push_back(u); 
    }
    precalc(1);

    add(1);
    /* for (int i = 1; i <= n; i++) cout << tam[i] << " "; */
    

    return 0;
}

