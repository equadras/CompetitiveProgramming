#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


int n, m, k;
string cam;

bool solve2(int n, int m, int k){
    vector<bool> vis(n + 2, false);
    vis[0] = true;

    queue<pair<int, int>> q;
    q.push({0, k});

    while (!q.empty()){
        pair<int, int> at = q.front(); q.pop();
        int pos = at.first;

        if (pos == n + 1) return true;
        int falta = at.second;

        bool f = false;

        if (pos == 0){
            f = true;
            for (int k = 1; k <= m; k++){ //pulos
                if (pos+k <= n + 1 && !vis[pos+k] && cam[pos+k - 1] != 'C'){
                    vis[pos+k] = true;
                    q.push({pos+k, falta});
                }
            }
        }

        else if ((cam[pos - 1] == 'L' && pos > 0) && !f){
            for (int k = 1; k <= m; k++){ //pulos
                if (pos+k <= n + 1 && !vis[pos+k] && cam[pos+k - 1] != 'C'){
                    vis[pos+k] = true;
                    q.push({pos+k, falta});
                }
            }
        }

        if (pos > 0 && pos <= n && cam[pos - 1] == 'W' && falta > 0 && !f && ((pos+1 <= n + 1 && !vis[pos+1] && (pos+1 == n + 1 || cam[pos+1 - 1] != 'C')))){
            vis[pos+1] = true;
            q.push({pos+1, falta - 1});
        }
    }
    return false;
}

void solve(){
    cin >> n >> m >> k >> cam;

    cout << (solve2(n,m,k) ? "Yes" : "No") << endl;

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



