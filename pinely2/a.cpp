#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, a, p; cin >> n >> a >> p;
    string s; cin >> s;
    int bom = 0, ruim = 0;
    for(int i = 0; i < q; i++){
        if(a[i] == '+'){
            bom++; 
        }
        else ruim++;
    }
    if(a + bom < n){
        cout << "NO" << endl;
        return;
    }
    if(a + (bom-ruim) >= n){
        cout << "YES" << endl;
        return;
    }
    else cout << "MAYBE" << endl;
        
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
