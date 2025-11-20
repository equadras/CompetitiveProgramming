#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const ll N = 1e18+7;

//loucura q essa bomba n^3 vai ser melhor
void floyd(vector<vector<ll>>& dist, int n) {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dist[i][k] != N && dist[k][j] != N) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, m, q; cin >> n >> m >> q;

    vector<tuple<int, int, ll>> edg(m+1);
    vector<vector<ll>> adj(n + 1, vector<ll>(n + 1, N));

    for (int i = 0; i < m; i++){
        int a, b; ll c; cin >> a >> b >> c;
        edg[i+1] = {a, b, c};
    }

    for (int i = 1; i <= n; i++) adj[i][i] = 0;

    vector<pair<int,int>> querie_valor(q);
    vector<int> tp(q);
    vector<int> funfa(m+1, true);

    for (int i = 0; i < q; i++){
        cin >> tp[i];
        if (tp[i] == 1){
            cin >> querie_valor[i].first;
            funfa[querie_valor[i].first] = false;
        }
        if (tp[i] == 2){
            cin >> querie_valor[i].first >> querie_valor[i].second;
        }
    }

    for (int i = 1; i <= m; i++){
        if (funfa[i] == true){
            auto [a,b,c] = edg[i];
            adj[a][b] = min(adj[a][b], c);
            adj[b][a] = min(adj[b][a], c);
        }
    }


    floyd(adj, n);
    set<int> st;
    vector<ll> res;

    for (int i = q-1; i >= 0; i--){
        if (tp[i] == 1){
            int id = querie_valor[i].first;
            auto [a,b,c] = edg[id];

            for (int x = 1; x <= n; x++){
                for (int y = 1; y <= n; y++){
                    if (adj[x][a] != N && adj[b][y] != N){
                        adj[x][y] = min(adj[x][y], adj[x][a] + c + adj[b][y]);
                        /* cout << "aaa" << endl; */
                    }
                    if (adj[x][b] != N && adj[a][y] != N){
                        adj[x][y] = min(adj[x][y], adj[x][b] + c + adj[a][y]);
                        /* cout << "bbb" << endl; */
                    }
                }
            }
        }
        if (tp[i] == 2){
            int x = querie_valor[i].first;
            int y = querie_valor[i].second;
            if (adj[x][y] == N) res.push_back(-1);
            else res.push_back(adj[x][y]);
        }

    }

    reverse(res.begin(), res.end());
    for (int i = 0; i < (int) res.size(); i++){
        cout << res[i] << endl;
    }

    return 0;
}



