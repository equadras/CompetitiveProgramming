#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n,k; cin >> n >> k;
    for (int i = 0; i < k; i++){
        if (n%10 != 0) n = n-1;
         else n = n/10;
    }
    cout << n << endl;
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
