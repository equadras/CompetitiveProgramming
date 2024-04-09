#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const int maxn = 2e5 + 5;
char a[maxn];

void solve(){
    int n, k, m; cin >> n >> k >> m;
    for (int i = 1; i <= m; i++) cin >> a[i];

    string res; 
    int x = 0;
    for (int i = 1; i <= n; i++){
        int topo = x, c1;
        for (int c = 0; c < k; c++){
            int x1 = x + 1;
            while (x1 <= m && a[x1] != c + 'a') x1++;
            if (x1 > topo){
                topo = x1; c1 = c;
            }
        }
        res.push_back(c1 + 'a'); x = topo;
    }
    if (x <= m) cout << "YES" << endl;
    else cout << "NO" << endl << res << endl;
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
