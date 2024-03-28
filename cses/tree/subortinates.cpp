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
bool vis[maxn];
vector<int> dp(maxn, 1);

void dfs(int u){
    vis[u] = true; 
    
    for (int v : adj[u]){
        if (!vis[v]){
            dfs(v);
            dp[u] += dp[v];
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n; cin >> n;

    for (int i = 1; i < n; i++){
        int u; cin >> u;
        adj[u].push_back(i+1); 
        adj[i+1].push_back(u); 
    }

    dfs(1);
    for (int i = 1; i < n+1; i++){
        cout << --dp[i] << " ";

    }
    cout << endl;
    return 0;
}


