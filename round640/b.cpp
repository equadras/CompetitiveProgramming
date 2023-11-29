#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

void solve(){
    int n, k; cin >> n >> k;
    int x = n - (k - 1);
    if (x > 0 && x % 2 == 1){
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++) cout << "1 ";
        cout << x << endl;
        return;
    }
    x = n - 2 * (k - 1);
    if (x > 0 && x % 2 == 0) {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++) cout << "2 ";
        cout << x << endl;
        return;
    }
    cout << "NO" << endl;
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
