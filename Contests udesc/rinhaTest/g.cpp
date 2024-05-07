#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 1e4+5;
vector<vector<int>> adj(maxn);

bool bfs(int u, int fim, int SIDOCA){
    queue<int> q;
    vector<bool> vis(maxn);

    q.push(u);
    vis[u] = true;
    while (!q.empty()){
        int at = q.front();
        q.pop();

        vis[at] = true;
        if (at == fim) return true;

        for (int v : adj[at]){
            if (v != SIDOCA && !vis[v]){
                q.push(v);
            }
        }
    }

    return false;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, q; cin >> n >> q;

    for (int i = 0; i < n - 1; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < q; i++){
        int leo, ema, sid; cin >> leo >> ema >> sid;

        cout << (bfs(leo, ema, sid) ? "SIM" : "NAO") << endl;
    }

    return 0;
}

