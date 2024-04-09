#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int x, k; cin >> x >> k;

    int res = -1;
    while (res == -1){
        int sm = 0;
        int aux = x;
        while (aux > 0){
            sm += aux % 10;
            aux /= 10;
        }
        if (sm % k == 0) res = x;
        x++;
    }
    cout << res << endl;
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
