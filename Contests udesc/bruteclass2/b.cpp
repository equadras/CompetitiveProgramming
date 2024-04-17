#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 1e5 + 5;
int n;
vector<int> adj[maxn];
int cor[maxn];
int dp[maxn][2]; 
int res = 0;

void dfs(int u){
    if (cor[u] == 1) dp[u][0] = 1;
    else dp[u][1] = 1;

    for (auto v : adj[u]){
        dfs(v);
        dp[u][0] += dp[v][0];
        dp[u][1] += dp[v][1];
    }

    if (dp[u][0] == dp[u][1]) res++;
    debug(res);

}
void solve(){
    int n; cin >> n;
    for (int i = 2; i <= n; i++){
        int p; cin >> p;
        adj[p].push_back(i);
    }
    string s; cin >> s;

    for (int i = 0; i < n; i++){
        if (s[i] == 'B') cor[i + 1] = 1;
        else cor[i + 1] = 2;
    }

    dfs(1);
    cout << res << endl;

    for (int i = 1; i <= n; i++){
        adj[i].clear();
        dp[i][0] = 0, dp[i][1] = 0, cor[i] = 0;
    }
    res = 0;
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


