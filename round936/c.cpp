#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e6+5;

vector<int> adj[maxn];
pair<int,int> tams[maxn];

int dfs(int u, int v, int &c, int midx){
    int xx=0;
    for(auto uu : adj[u]) {
        if(uu==v) continue;

        int agr = dfs(uu, u, c, midx);
        if (agr >= midx){ if(c) c -=1;}
        else xx += agr;

    }

    return xx+1;
}

void solve(){
    int n, k; cin >> n >> k;

    for(int i = 0; i <= n; i++) adj[i].clear();

    for (int i = 0; i < n-1; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int l = 1;
    int r = n;
    int ans = 0;

    while (l <= r){
        int mid = l+(r-l+1)/2;
        int c = k;

        int x = dfs(1, -1, c, mid);
        if(c == 0 && x >= mid){
            l = mid+1;
            ans = mid;
        }
        else r = mid-1;
    }

    cout << ans << endl;

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


