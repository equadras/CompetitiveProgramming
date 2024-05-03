#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

int n, x;
string s;
vector<string> primes;

int cnt = 0;

struct AC {
    const int K = 9;
    const char norm = '1';
    inline int get(int c) { return c - norm; }

    vector<int> link, out_link, par;
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
        return (int)link.size() - 1;
    }

    int T = 0;

    int insert(const string &s) {
        int u = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            auto v = next[u][get(s[i])];
            if (v == -1) {
                next[u][get(s[i])] = v = node(u, s[i]);
                debug(v);
            }
            u = v;
        }
        out[u] = true;
        output[u].emplace_back(T);
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

bool check(string ss){
    int tam = int(ss.size());

    for (int i = 0; i < tam; i++){
        int sum = 0;
        for (int j = i; j < tam; j++){
            sum += ss[j] - '0';

            if (sum < x && x % sum == 0)
                return false;
        }
    }
    return true;
}

void gen(string ss, int sum){
    if (sum > x) return;
    if (sum == x){
        if (check(ss)) primes.push_back(ss);
        return;
    }

    for (int d = 1; d < 10 && sum + d <= x; d++){
        gen(ss + char(d + '0'), sum + d);
    }
}

void solve(){
    cin >> s >> x;
    gen("", 0);

    debug(primes);
    int sz = ((int) s.size());
    int k = 0;
    AC aho;

    for (int i = 0; i < (int)primes.size(); i++){
        aho.insert(primes[i]);
    }

    k = aho.link.size();
    /* for (int i = 0; i < k; i++){ */
    /*     debug(i, aho.exit(i)); */
    /* } */
    vector dp (sz+1, vector<int> (k));
    /* int dp[sz][1005]; */

    for (int i = 0; i <= sz; i++){
        for (int j = 0; j < k; j++){
            dp[i][j] = INT_MAX;
        }
    }

    dp[0][0] = 0;

    for (int i = 0; i < sz; i++){
        for (int j = 0; j < k; j++){
            if (dp[i][j] == INT_MAX) continue; // da dando mreda aqui pq ele n passa....
                                            
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]+1);
            int go = aho.go(j,s[i]);

            if (aho.exit(go) == 0 && aho.out[go] == 0){
                /* debug(go); */
                dp[i+1][go] = min(dp[i+1][go], dp[i][j]);
            }


        }
    }

    /* debug(k); */

    cout << *min_element(dp[sz].begin(),dp[sz].end()) << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}



