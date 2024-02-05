#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;


void solve(){
    int n, x; cin >> n >> x;
    if (n <= 2) cout << 1 << endl;
    else cout << (n + 2 * x - 3) / x << endl;
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
