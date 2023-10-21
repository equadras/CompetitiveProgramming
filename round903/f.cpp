#include <bits/stdc++.h>

using namespace std;
//#define int long long

const int maxn = 2e5+5;
vector<int> adj[maxn];
int dis[maxn];
int vis[maxn];

void dfs(int v, int d){
    dis[v] = min(dis[v],d);
    vis[v]++;
    for(auto u:adj[v]){
        if(!vis[u]) {
            dfs(u,d+1);
        }
    }
}

void solve(){
    int n,k; cin >> n >> k;
    vector<int> mk(k);
    for(int i = 0;i < k;i++){
        int x; cin >> x;
        x--;
        mk[i] = x;
    }

    for(int i = 0;i < n-1;i++){
        int u, v; cin >> u >> v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(mk[0],0);

    int mxm = -1;
    int ini = -1;

    for(int u:mk){
        if(dis[u]>mxm) {
            mxm = dis[u];
            ini = u;
        }
    }

    for(int i = 0;i < n;i++) dis[i] = maxn, vis[i] = 0;
    dfs(ini,0);

    int res = -1;
    for(int u:mk){
        if(u != ini) res = max(res,dis[u]);
    }

    cout << ((res + 1) / 2) << endl;

    for(int i = 0;i < n;i++){
        adj[i].clear();
        dis[i] = maxn;
        vis[i] = 0;
    }
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



