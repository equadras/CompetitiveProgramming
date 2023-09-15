#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve() {
    int n; cin >> n;
    int ans = 0;
    int xr = 0;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        xr ^= a[i];
    }
    string s; cin >> s;
    vector<int> pref(n + 1);

    for(int i = 1; i <= n; i++){
        pref[i] = a[i] ^ pref[i - 1];
        if (s[i - 1] == '1'){
            ans ^= a[i];
        }
    }
    int q;
    cin >> q;
    for(int k = 0; k < q; k++){
        int tp; cin >> tp;
        if(tp == 1){
            int l, r;
            cin >> l >> r;
            ans ^= pref[r] ^ pref[l - 1];
        } 
        if(tp == 2){
            int g; cin >> g;
            if (g == 1) cout << ans << ' ';
            else cout << (ans ^ xr) << ' ';
        }
    }
    cout << endl;
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
