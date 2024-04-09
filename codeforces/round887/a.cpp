#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if(is_sorted(a.begin(), a.end()) == false){
        cout << 0 << endl;
        return;
    }
    int minimu = 1e9+8;
    for (int i = 1; i < n; i++){
        if ((a[i] - a[i-1])/2 + 1 < minimu) minimu = (a[i] - a[i-1])/2 + 1;
    }
    cout << minimu << endl;
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
