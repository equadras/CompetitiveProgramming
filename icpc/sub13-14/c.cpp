#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 500+5;
int ori[maxn], idade[maxn], pos[maxn];
vector<int> adj[maxn];
set<int> ordem[maxn];
bool vis[maxn];

void dfs(int u){
    if (vis[u]) return;
    vis[u] = true;

    int v;
    for (int i = 0; i < adj[u].size(); i++){
        v = adj[u][i];
        dfs(v);
        ordem[u].insert(v);
        for (auto ele :ordem[v]){
            ordem[u].insert(ele);
        }
    }
}

int main(){
    int n, m, q, res;
    cin >> n >> m >> q;

    for (int i = 0; i < n; i++){
        cin >> idade[i];
        ori[i] = i, pos[i] = i;
        adj[i].clear();
        ordem[i].clear();
        vis[i] = false;
    }

    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v; u--, v--;
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++) dfs(i);

    for (int i = 0; i < q; i++){
        char op; cin >> op;
        if (op == 'T'){
            int u, v; cin >> u >> v; u--, v--;
            swap(pos[u], pos[v]);
            ori[pos[u]] = u, ori[pos[v]] = v;

        } else {
            int u; cin >> u; u--;
            u = pos[u];
            res = 1e9+5;
            for (auto ele :ordem[u]){
                res = min(idade[ori[ele]], res);
            }
            if (res == 1e9+5) cout << "*" << endl;
            else cout << res << endl;
        }
    }
}
