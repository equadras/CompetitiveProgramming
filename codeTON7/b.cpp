#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int preb = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'A') break;
        preb++;
    }
    int sufa = 0;
    for (int i = n-1; i >= 0; i--){
        if (s[i] == 'B') break;
        sufa++;
    }
    if (n - sufa - preb - 1 > 0) cout << n - sufa - preb - 1 << endl;
    else cout << 0 << endl;
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
