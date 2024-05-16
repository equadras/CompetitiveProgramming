#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 2e5+54;
const int logg = (int) log2(maxn) + 5;

int p[maxn];
int sz[maxn];
vector<pair<int,int>> adj[maxn];


int find (int u){
    return u == p[u] ? u : p[u] = find(p[u]);
}

int unite (int u, int v){
    u = find(v); 
    v = find(v);

    if (!(u - v)) return false;
    if (sz[u] > sz[v]){
        p[v] = u;
        sz[u] += sz[v];
    }
    else {
        p[u] = v;
        sz[v] += sz[u];
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    debug(logg);
    return 0;
}



