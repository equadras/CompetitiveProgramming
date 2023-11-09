#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> a (n-1);
    for (int i = 0; i < n-1; i++) cin >> a[i];
    int x = ((n+1)*n) / 2;
    
    // se o ultimo for maior que x, deu ruim
    if (a[i-2] > x){
        cout << "NO" << endl;
        return;
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
