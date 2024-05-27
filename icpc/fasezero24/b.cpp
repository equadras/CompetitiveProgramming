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
vector<pair<int,int>> adj [maxn];
vector<pair<int, int>> adj[N];

vector<int> bfs01(int s) {
    vector<int> dist(n, INF);
    deque<int> q;
    dist[s] = 0;
    q.emplace_back(s);
    while (!q.empty()) {
        int u = q.front();
        q.pop_front();
        for (auto [w, v] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                if (w == 0) {
                    q.push_front(v);
                } else {
                    q.push_back(v);
                }
            }
        }
    }
    return dist;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, m, k; cin >> n >> m >> k;
    for (int i = 0; i < n; i++){
        int u, v, w; cin >> u >> v>> w;
        adj[u].push_back(w,v);
        adj[v].push_back(w,u);
    }
    return 0;
}



