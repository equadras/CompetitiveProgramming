#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 3e5+5;
vector<int> adj[maxn];

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    } 

    return 0;
}



