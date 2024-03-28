#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn =1e5+5;

vector<pair<int,int>> adj[maxn];
vector<bool> vis(maxn, false);
int maxw = 0;

int dfs(int u){
    vis[u] = true;

    /* cout << adj[u][0].first << endl; */
    if (vis[adj[u][0].first]){
        cout << "saindo da dfs" << endl;
        return maxw;
    }
    else {
        maxw += adj[u][0].second;
        debug(maxw);
        cout << "estou em " << u << " indo para " << adj[u][0].first << endl;
        return dfs(adj[u][0].first);
    }

    /* for (auto v : adj[u]){ */
    /*     if (!vis[v.first]){ */
    /*         dfs(v.first); */
    /*     } */
    /* } */
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    int u, v, w; 

    for (int i = 0; i < n-1; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }


    for (int i = 1; i < n; i++){
        sort(adj[i].begin(),adj[i].end(), [](auto &left, auto &right) {return left.second > right.second;});
    }

    /* debug(adj[1]); debug(adj[2]); debug(adj[3]); debug(adj[4]); */

    int res = dfs(1);
    for (int i = 2; i < n; i++){
        int wa = dfs(i);

        res = max(wa,res);
        maxw = 0;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << res << endl;

    return 0;
}


