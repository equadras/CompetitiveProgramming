#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 2e5 + 5;

vector<int> adj[maxn];
set<int> filhopreto[maxn];
int pa[maxn];
int l[maxn], cor[maxn];
int dep[maxn];

int tot = 0;
set<int> um, dois;
multiset<int> mst;
int tb[3][3];
int root = 0, xroot = 0;

void dfs (int u, int p = -1){
    if (p == -1){
        dep[u] = 0;
        pa[u] = -1;
    }

    for (auto v : adj[u]){
        if (v == p) continue;
        dep[v] = dep[u]+1;
        pa[v] = u;
        dfs(v, u);
    }
}


void update (int u){
    if (u != 0 && cor[pa[u]] == 1 && (int) filhopreto[pa[u]].size() > 1){
        xroot--;
        /* debug(xroot); */
        /* xroot -= (int)filhopreto[u].size(); */
    }

    if (cor[u] == 1 && filhopreto[u].size() > 1){
        xroot--;
    }

    if (cor[u] == 0){

        if (u == 0 || cor[pa[u]] == 0) root += 1;

        root -= (int) filhopreto[u].size();

        if (u != 0){
            filhopreto[pa[u]].insert(u);
        }
    } 
    else {
        if (u == 0 || cor[pa[u]] == 0) root -= 1;

        root += (int) filhopreto[u].size();

        if (u != 0)
            filhopreto[pa[u]].erase(u);
    }


    int i = dep[u];
    mst.erase(mst.find(-l[i]));

    if (i == 0 && l[i] < 3) tb[0][l[i]]--;
    else if (l[i] < 3 && l[i - 1] < 3) tb[l[i - 1]][l[i]]--;
    if (l[i] < 3 && l[i + 1] < 3) tb[l[i]][l[i + 1]]--;

    if (l[i] == 1){
        um.erase(i);
    }

    if (l[i] == 2){
        dois.erase(i);
    }


    l[dep[u]] -= cor[u];

    if (cor[u]) tot--;


    cor[u] ^= 1;

    if (cor[u]) tot++;
    l[dep[u]] += cor[u];

    i = dep[u];
    mst.insert(-l[i]);

    if (i == 0 && l[i] < 3) tb[0][l[i]]++;
    else if (l[i] < 3 && l[i - 1] < 3) tb[l[i - 1]][l[i]]++;
    if (l[i] < 3 && l[i + 1] < 3) tb[l[i]][l[i + 1]]++;

    if (l[i] == 1){
        um.insert(i);
    }
    if (l[i] == 2){
        dois.insert(i);
    }


    if (u != 0 && cor[pa[u]] == 1 && (int) filhopreto[pa[u]].size() > 1) xroot++;

    if (cor[u] == 1 && (int) filhopreto[u].size() > 1) xroot++;
}

bool check(){
    if (tot == 0) return false;
    if (tot == 1) return true;

    int x = -(*mst.begin());
    if (x > 2) return false;

    if (root != 1) return false;
    if (xroot > 1) return false;

    if (um.empty()) return false;
    if (!dois.empty() && ((*dois.begin())) < (*um.begin())) return false;
    if (!dois.empty()) {
        int j = (*um.begin());
        if (l[j + 1] != 2) return false;
    }

    if (tb[0][1] != 1 || tb[0][2] != 0) return false;
    if (tb[1][2] > 1 || tb[2][1] > 1) return false;
    if (tb[1][0] + tb[2][0] != 1) return false;

    return true;

}

void clear(int n){
    mst.clear();
    um.clear();
    dois.clear();
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) tb[i][j] = 0;
    }

    root = 0;
    xroot = 0;
    tot = 0;
    for (int i = 0; i < n; i++) {
        adj[i].clear();
        filhopreto[i].clear();
        dep[i] = -1;
        l[i] = 0;
        cor[i] = 0;
    }
}


void solve() {
    int n, q; cin >> n >> q;
    vector<int> c(n);
    for (int i = 0; i < n; i++){
        cin >> c[i];
        mst.insert(0);
    }
    for (int i = 1; i < n; i++){
        int u, v; cin >> u >> v; 
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0);

    for (int i = 0; i < n; i++)
        if (c[i]) update(i);


    while (q--){
        int x; cin >> x; x--;
        update(x);

        cout << (check() ? "YES" : "NO") << endl;
    }

    clear(n);
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



