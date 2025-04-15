#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    
    vector<int> atm(n+1);

    for (int i = 1; i <= n; i++) cin >> atm[i];
    
    vector<vector<int>> adj(n+1);

    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int max = 2e7+5;
    vector<vector<int>> dist(n+1, vector<int>(k+1, max)); //menor dist ate u usando j trocas
    
    deque<pair<int,int>> dq;
    dist[1][0] = 0;
    dq.push_back({1, 0});
    
    while (!dq.empty()){
        auto [u, cnt] = dq.front();
        dq.pop_front();
        int d = dist[u][cnt];
        for (int v : adj[u]){
            int nc = cnt + (atm[u] != atm[v] ? 1 : 0);
            if (nc > k) continue;
            if (dist[v][nc] > d + 1){
                dist[v][nc] = d + 1;
                dq.push_back({v, nc});
            }
        }
    }
    
    int res = max;


    for (int i = 0; i <= k; i++) res = min(res, dist[n][i]);
    
    cout << (res == max ? -1 : res) << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}

