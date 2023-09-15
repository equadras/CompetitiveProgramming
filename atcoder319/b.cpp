#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    for(int i = 0; i <= n; i++){
    bool f = false;
        for (int j = 1; j <= 9; ++j)
            if (n % j == 0 && i % (n / j) == 0){
                cout << j;
                f = true;
                break;
            }
        if (!f) cout << '-'; 
    }
    cout << endl;
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
