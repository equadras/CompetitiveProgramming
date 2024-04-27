#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


const int maxn = 1e3+5;
int lamp [maxn];
int mt [maxn][maxn];

void solve(){
    int n, m, a; cin >> n >> m >> a;
    int res = 0;

    for (int i = 1; i <= a; i++){
        int x; cin >> x;
        lamp[x] = 1;
    }

    for (int i = 1; i <= n; i++){
        cin >> a;
        for (int j = 1; j <= a; j++){
            int x; cin >> x;
            mt[i][x] = 1;
        }
    }

    bool f = false;

    for (int i = 1; i <= m; i++) if (lamp[i]) f = true;

    if (f){
        for (int i = 1; i <= 2; i++){
            for (int j = 1; j < n; j++){ // <= !!!!!!!!!
                res++;
                for (int k = 1; k <= m; k++) lamp[k] = (lamp[k] + mt[j][k]) % 2;

                //ve se ta acesso
                bool ff = false;
                for (int k = 1; k <= m; k++) if (lamp[k]) ff = true; // i nao pode

                if (!ff){ // se tiver todas apagas deu bom
                    cout << res << endl;
                    return; 
                }
            }
        }
        cout << -1 << endl;
    }
    
    else cout << res << endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}

