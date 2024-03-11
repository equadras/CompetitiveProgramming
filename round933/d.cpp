#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


void solve(){
    int n, m, x; cin >> n >> m >> x;
    int tam = m+2;

    vector<set<int>> st(tam);

    st[0].insert(x);
    int xx = 0;

    for(int i = 0; i < m ; i++){
        int a; cin >> a; char d; cin >> d;
        if (d == '0'){
            for (auto &ele : st[xx]){
                int aux = ele;
                aux += a;
                if (aux > n) aux -= n;
                st[xx+1].insert(aux);
            }
            xx++;
        }
        if (d == '1'){
            for (auto &ele : st[xx]){
                int aux = ele;
                aux -= a;
                if (aux < 1) aux += n;
                st[xx+1].insert(aux);
            }
            xx++;
        }
        if (d == '?'){
            for (auto &ele : st[xx]){
                //frente
                int aux = ele;
                aux += a;
                if (aux > n) aux -= n;
                st[xx+1].insert(aux);

                //tras
                aux = ele;
                aux -= a;
                if (aux < 1) aux += n;
                st[xx+1].insert(aux);
            }
            xx++;
        }
    }

    /* debug(st); */
    cout << st[xx].size() << endl;
    for (auto ele : st[xx]) cout << ele << " ";
    cout << endl;

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


