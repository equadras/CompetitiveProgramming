#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; int k; cin >> n >> k;
    int res = 0;
    for (int i = 1; i <= n; i++){
        int elek = n; 
        int elek1 = i; 
        bool f = true;

        for (int j = 0; j < k - 2; j++){
            int fx = elek1;
            elek1 = elek - fx;
            elek = fx;
            f &= elek1 <= elek;
            f &= min(elek, elek1) >= 0;
            if (!f) break;
        }
        if (f) res++;
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
