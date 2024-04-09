#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
typedef long long ll;

void solve(){
    int n, k; cin >> n >> k;
    vector <int> b(n);
    ll tot = 1;
    for (int i = 0; i < n; i++){
        cin >> b[i];
        tot *= b[i];
    }
 
    ll mx = 2023;
    if (tot > mx || mx % tot != 0){
       cout << "NO" << endl;
       return;
    } else {
        cout << "YES" << endl;
        cout << mx/tot << " ";
        k--;
        while (k--) cout << "1 ";
        cout << endl;
    }
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
