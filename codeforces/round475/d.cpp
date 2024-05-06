#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

struct Aho {

    vector<int> link;
    vector<int> termlink;
    vector<int> nds;
    vector<char> trans;
    vector<vector<int>> next;
    vector<bool> term;

    int node (int x, char c){
        link.emplace_back(-11);
        termlink.emplace_back(-11);
        nds.emplace_back(x);
        trans.emplace_back(c);
        next.emplace_back(26, -11);
        term.emplace_back(false);
        return (int)term.size();
    }


    void insert (string &s){
        int ant = 0;
        for (int i = 0; i < (int) s.size(); i++){
            auto at = next[ant][s[i] - '0'];
            if (at == -11){ // se n existir
                at = node(ant, s[i]); // cria nodo
                next[ant][s[i] - '0'] = at; // coloca nodo
            }
        }

        term[ant] = true;
    }

    int get_link (int u){
        if (link[u] == -11){
            if (nds[u] > 0)  link[u] = go(get_link(nds[u]),trans[u]);
            else link[u] = 0;
        }
        return link[u];
    }

    int go (int u, char c){
        if (next[u][(c - 'a')] == -11){// n ta calculado
            if (u != 0) next[u][(c - 'a')] = go(get_link(u), c);
            else next[u][(c - 'a')] = 0;
        }
        return next[u][(c - 'a')];//so devolve oq tem
    }

    int exit (int u){
        if (termlink[u] == -11){
            int x = get_link(u);
            if (!x || term[x]) termlink[u] = x;
            else termlink[u] = exit(x);
        }
        return termlink[u];
    }

} aho;



void solve(){

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}



