#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

struct AC {
    const int K = 26;
    const char norm = 'a';
    inline int get(int c) { return c - norm; }
    
    vector<int> link, out_link, par, tam, val;
    vector<char> pch;
    vector<vector<int>> next;
    vector<bool> out;
    vector<vector<int>> output;

    AC() { node(); }

    int node(int p = -1, char c = -1) {
        link.emplace_back(-1);
        out_link.emplace_back(-1);
        par.emplace_back(p);
        pch.emplace_back(c);
        next.emplace_back(K, -1);
        out.emplace_back(0);
        output.emplace_back();
        tam.emplace_back(0);
        val.emplace_back(-1);
        return (int)link.size() - 1;
    }

    int T = 0;

    int insert(const string &s, int v) {
        int u = 0;
        for (int i = 0; i < (int) s.size(); i++) {
            int idx = get(s[i]); 
            int v = next[u][idx];

            if (v == -1) {
                next[u][idx] = v = node(u, s[i]);
                tam[v] = tam[u]+1;
            }
            u = v;
        }
        if (v > val[u]){
            val[u] = v;
            output[u].emplace_back(T);
        }
        out[u] = true;
        return T++;
    }

    int get_link(int u) {
        if (link[u] == -1) {
            link[u] = par[u] > 0 ? go(get_link(par[u]), pch[u]) : 0;
        }
        return link[u];
    }

    int go(int u, char c) {
        if (next[u][get(c)] == -1) {
            next[u][get(c)] = u ? go(get_link(u), c) : 0;
        }
        return next[u][get(c)];
    }

    int exit(int u) {
        if (out_link[u] == -1) {
            int v = get_link(u);
            out_link[u] = (out[v] || !v) ? v : exit(v);
        }
        return out_link[u];
    }

    bool matched(int u) { return out[u] || exit(u) != 0; }

} aho;

signed main(){
    int n, m; cin >> n;
    vector<pair<string,int>> hands(n);
    vector<int> tams (2*n);
    
    for (int i = 0; i < n; i++){
        string h; cin >> h;
        int g; cin >> g;
        hands[i] = {h,g};
    }

    tams[0] = (int) hands[0].first.size();
    for (int i = 1; i < n; i++) tams[i] = tams[i-1] + (int) hands[i].first.size();
    for (int i = n; i < 2*n; i++) tams[i] = tams[i-1] + ((int) hands[i-n].first.size());

    vector<int> tt;
    for (int i = n; i < 2*n; i++){ 
        int x = hands[i-n].second;
        int tam = (tams[i-1] - tams[i-(x+1)]);
        debug(tam);
        tt.push_back(tam);
    }
    
    debug(tt);

    cin >> m;
    vector<pair<string,int>> patt(m);
    for (int i = 0; i < m; i++){
        string p; cin >> p;
        int va; cin >> va;
        aho.insert(p, va);
        patt[i] = {p,va};
    }

    vector<int> res(n);
    int v = 0;
    for (int i = 0; i < n; i++){
        auto [s,x] = hands[i]; 
        for (auto c : s){
            v = aho.go(v, c); // processa a 1° vez
        }
    }

    for (int i = 0; i < n; i++){
        auto [s,x] = hands[i]; 
        for (int j = 0; j < (int) s.size(); j++){
            v = aho.go(v, s[j]); // processa a 1° vez
            int u = v;
            /* debug((aho.tam[u]+i+1), tt[i]); */
            while (u != 0){
                // checar se u e valido dentro do range g
                // tamanho dos meus g strings anteriores - tam[u] + i+1 > 0
                if ((tt[i] + j + 1 - aho.tam[u] >= 0)){
                    res[i] = max(aho.val[u], res[i]);
                }
                u = aho.exit(u);
            }
        }

    }
    for (auto e : res) cout << e << " ";
    cout << endl;
}
